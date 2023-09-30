/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "DialogueWidget.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Misc/OutputDeviceNull.h"


void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	DialogueData = GetAllDataTableRows();

	if (FunctionsClass)
		FunctionsObject = NewObject<UDialogueFunctions>(this, FunctionsClass);


	OnReplyClick.AddDynamic(this, &UDialogueWidget::OnReplyFun);
	OnStartTextPrinting.AddDynamic(this, &UDialogueWidget::OnTextStartPrintingFun);


	if (DialogueData.IsValidIndex(0) && DialogueData[0].Type == ENodeType::NPC)
	{
		const TArray<FString> Temp;
		InitializeNewState(DialogueData[0], Temp);
	}
	else
		OnEndDialogue.Broadcast();
}

void UDialogueWidget::FinishDestroy()
{
	Super::FinishDestroy();
	OnReplyClick.RemoveAll(this);
	OnStartTextPrinting.RemoveAll(this);
	OnEndTextPrinting.RemoveAll(this);
	OnEndDialogue.RemoveAll(this);
}

FString UDialogueWidget::GetPropertyValueAsString(const FName& Name)
{
	for (const auto& Prop : Properties)
	{
		if (Prop.Name == Name)
			return Prop.Value;
	}

	return "";
}


bool UDialogueWidget::ShowReply(const FDataStruct& Data)
{
	return CompareValues(Data.Type, Data.Value, Data.Sign, GetPropertyValueAsString(Data.Name));
}


bool UDialogueWidget::GetIntegerField(const FName Name, const TArray<FDataStruct>& Data, int32& Value)
{
	FString OutValue;
	if (!UDialogueLibrary::GetValue(EType::Integer, Name, Data, OutValue))
	{
		Value = -1;
		return false;
	}
	if (OutValue.IsNumeric())
	{
		Value = FCString::Atoi(*OutValue);
		return true;
	}
	Value = -1;
	return false;
}

bool UDialogueWidget::GetStringField(const FName Name, const TArray<FDataStruct>& Data, FString& Value)
{
	FString OutValue;
	if (!UDialogueLibrary::GetValue(EType::String, Name, Data, OutValue)) return false;
	Value = OutValue;
	return true;
}

bool UDialogueWidget::GetFloatField(const FName Name, const TArray<FDataStruct>& Data, float& Value)
{
	FString OutValue;
	if (!UDialogueLibrary::GetValue(EType::Float, Name, Data, OutValue))
	{
		Value = -1;
		return false;
	}
	const FString Val1 = UKismetStringLibrary::Replace(*OutValue, ",", ".");
	if (OutValue.IsNumeric())
	{
		Value = FCString::Atof(*OutValue);
		return true;
	}
	Value = -1;
	return false;
}

bool UDialogueWidget::GetBoolField(const FName Name, const TArray<FDataStruct>& Data, bool& Value)
{
	FString OutValue;
	if (!UDialogueLibrary::GetValue(EType::Bool, Name, Data, OutValue)) return false;
	Value = OutValue.ToBool();
	return true;
}

TArray<FDialogueDataStruct> UDialogueWidget::GetAllDataTableRows() const
{
	TArray<FDialogueDataStruct> DialogueDataArr;
	if (IsValid(Dialogue))
	{
		TArray<FDialogueDataStruct*> Data;
		Dialogue->GetAllRows<FDialogueDataStruct>("GetAllDialogueDataFromTable", Data);
		for (const auto& DialogueDataStruct : Data)
		{
			DialogueDataArr.Add(*DialogueDataStruct);
		}
	}
	return DialogueDataArr;
}

void UDialogueWidget::AddReplies(const TArray<FDialogueDataStruct>& Replies, const TArray<FString>& Commands,
                                 const TArray<FDataStruct>& ShowIf)
{
	for (const auto& Reply : Replies)
	{
		FReplyStruct ReplyStruct;
		ReplyStruct.Text = Reply.Text;
		ReplyStruct.Data = Reply.Data;
		ReplyStruct.Connections = Reply.Connections;
		ReplyStruct.Commands = Commands;
		ReplyStruct.ShowIf = ShowIf;
		ReplyStruct.Priority = Reply.Priority;
		CurrentReplies.Add(ReplyStruct);
	}
}

void UDialogueWidget::ClearReplies()
{
	CurrentReplies.Empty();
}

void UDialogueWidget::InitializeReplies(const TArray<FDialogueDataStruct>& Nodes, const TArray<FDataStruct> ShowIf,
                                        const TArray<FString> Commands)
{
	for (const auto& Node : Nodes)
	{
		TArray<FDialogueDataStruct> Player;
		TArray<FDialogueDataStruct> NPC;
		TArray<FDialogueDataStruct> Other;

		if (Node.Type == ENodeType::If)
		{
			GetConnectedNodes(Node.Connections, Player, NPC, Other);
			TArray<FDataStruct> ShowIfTemp = ShowIf;
			ShowIfTemp.Append(Node.Data);
			AddReplies(Player, Commands, ShowIfTemp);
			InitializeReplies(Other, ShowIfTemp, Commands);
		}
		if (Node.Type == ENodeType::Branch)
		{
			if (Node.Data.IsValidIndex(0))
			{
				FString Value;
				if (UDialogueLibrary::GetProperty(Node.Data[0].Name, Properties, Value))
				{
					TArray<int32> TempArr;
					if (CompareValues(Node.Data[0].Type, Node.Data[0].Value, Node.Data[0].Sign, Value))
					{
						if (Node.Connections.IsValidIndex(0))
						{
							TempArr.Add(Node.Connections[0]);
							GetConnectedNodes(TempArr, Player, NPC, Other);
							AddReplies(Player, Commands, ShowIf);
							InitializeReplies(Other, ShowIf, Commands);
						}
					}
					else
					{
						if (Node.Connections.IsValidIndex(1))
						{
							TempArr.Add(Node.Connections[1]);
							GetConnectedNodes(TempArr, Player, NPC, Other);
							AddReplies(Player, Commands, ShowIf);
							InitializeReplies(Other, ShowIf, Commands);
						}
					}
				}
			}
		}
		if (Node.Type == ENodeType::Commands)
		{
			GetConnectedNodes(Node.Connections, Player, NPC, Other);
			TArray<FString> AllCommands;
			for (const auto& Elem : Node.Data)
			{
				AllCommands.Add(Elem.Value);
			}
			TArray<FString> CommandsTemp = Commands;
			CommandsTemp.Append(AllCommands);
			AddReplies(Player, CommandsTemp, ShowIf);
			InitializeReplies(Other, ShowIf, CommandsTemp);
		}
		if (Node.Type == ENodeType::Random)
		{
			int32 Value = 1;
			if (Node.Data.IsValidIndex(0) && Node.Data[0].Value.IsNumeric())
			{
				Value = FCString::Atoi(*Node.Data[0].Value);
				if (Value < 1)
					Value = 1;
			}

			TArray<int32> RandomConnections;

			while (Value > RandomConnections.Num() && Node.Connections.Num() > RandomConnections.Num())
			{
				const int32 RandomNum = UKismetMathLibrary::RandomIntegerInRange(0, Node.Connections.Num() - 1);
				if (!RandomConnections.Contains(RandomNum))
				{
					RandomConnections.Add(RandomNum);
				}
			}

			TArray<int32> TempArr;
			for (const auto Con : RandomConnections)
			{
				if (Node.Connections.IsValidIndex(Con))
				{
					TempArr.Add(Node.Connections[Con]);
				}
			}

			GetConnectedNodes(TempArr, Player, NPC, Other);
			AddReplies(Player, Commands, ShowIf);
			InitializeReplies(Other, ShowIf, Commands);
		}
	}
}

void UDialogueWidget::InitializeNPC(const TArray<FDialogueDataStruct>& Nodes,
                                    const TArray<FString> Commands)
{
	for (const auto& Node : Nodes)
	{
		TArray<FDialogueDataStruct> Player;
		TArray<FDialogueDataStruct> NPC;
		TArray<FDialogueDataStruct> Other;

		if (Node.Type == ENodeType::Branch)
		{
			TArray<int32> TempArr;
			if (Node.Data.IsValidIndex(0))
			{
				FString Value;
				if (UDialogueLibrary::GetProperty(Node.Data[0].Name, Properties, Value))
				{
					if (CompareValues(Node.Data[0].Type, Node.Data[0].Value, Node.Data[0].Sign, Value))
					{
						if (Node.Connections.IsValidIndex(0))
						{
							TempArr.Add(Node.Connections[0]);
							GetConnectedNodes(TempArr, Player, NPC, Other);
							if (NPC.IsValidIndex(0))
							{
								InitializeNewState(NPC[0], Commands);
								return;
							}
							if (Other.Num() == 0)
							{
								OnEndDialogue.Broadcast();
								return;
							}
							InitializeNPC(Other, Commands);
							return;
						}
					}
					else
					{
						if (Node.Connections.IsValidIndex(1))
						{
							TempArr.Add(Node.Connections[1]);
							GetConnectedNodes(TempArr, Player, NPC, Other);
							if (NPC.IsValidIndex(0))
							{
								InitializeNewState(NPC[0], Commands);
								return;
							}
							if (Other.Num() == 0)
							{
								OnEndDialogue.Broadcast();
								return;
							}
							InitializeNPC(Other, Commands);
							return;
						}
					}
				}
			}
			if (Node.Connections.IsValidIndex(1))
			{
				TempArr.Add(Node.Connections[1]);
				GetConnectedNodes(TempArr, Player, NPC, Other);
				if (NPC.IsValidIndex(0))
				{
					InitializeNewState(NPC[0], Commands);
					return;
				}
				if (Other.Num() == 0)
				{
					OnEndDialogue.Broadcast();
					return;
				}
				InitializeNPC(Other, Commands);
				return;
			}
		}
		else if (Node.Type == ENodeType::If)
		{
			if (Node.Data.IsValidIndex(0))
			{
				FString Value;
				if (UDialogueLibrary::GetProperty(Node.Data[0].Name, Properties, Value))
				{
					if (CompareValues(Node.Data[0].Type, Node.Data[0].Value, Node.Data[0].Sign, Value))
					{
						GetConnectedNodes(Node.Connections, Player, NPC, Other);
						if (NPC.IsValidIndex(0))
						{
							InitializeNewState(NPC[0], Commands);
							return;
						}
						if (Other.Num() == 0)
						{
							OnEndDialogue.Broadcast();
							return;
						}
						InitializeNPC(Other, Commands);
						return;
					}
				}
			}
			OnEndDialogue.Broadcast();
			return;
		}
		else if (Node.Type == ENodeType::Commands)
		{
			GetConnectedNodes(Node.Connections, Player, NPC, Other);
			TArray<FString> AllCommands;
			for (const auto& Elem : Node.Data)
			{
				AllCommands.Add(Elem.Value);
			}
			TArray<FString> CommandsTemp = Commands;
			CommandsTemp.Append(AllCommands);

			if (NPC.IsValidIndex(0))
			{
				InitializeNewState(NPC[0], CommandsTemp);
				return;
			}
			if (Other.Num() == 0)
			{
				OnEndDialogue.Broadcast();
				return;
			}
			InitializeNPC(Other, CommandsTemp);
			return;
		}
		else if (Node.Type == ENodeType::Random)
		{
			const int32 RandomNum = UKismetMathLibrary::RandomIntegerInRange(0, Node.Connections.Num() - 1);
			if (Node.Connections.IsValidIndex(RandomNum))
			{
				TArray<int32> TempArr;
				TempArr.Add(Node.Connections[RandomNum]);
				GetConnectedNodes(TempArr, Player, NPC, Other);

				if (NPC.IsValidIndex(0))
				{
					InitializeNewState(NPC[0], Commands);
					return;
				}
				if (Other.Num() == 0)
				{
					OnEndDialogue.Broadcast();
					return;
				}
				InitializeNPC(Other, Commands);
				return;
			}
		}
	}
}

void UDialogueWidget::GetConnectedNodes(const TArray<int32>& Connections, TArray<FDialogueDataStruct>& Player,
                                        TArray<FDialogueDataStruct>& NPC, TArray<FDialogueDataStruct>& Other) const
{
	UDialogueLibrary::GetConnectedNodes(DialogueData, Connections, Player, NPC, Other);
}

void UDialogueWidget::InitializeNewState(const FDialogueDataStruct NPCNode, const TArray<FString>& Commands)
{
	TArray<FDialogueDataStruct> Player;
	TArray<FDialogueDataStruct> NPC;
	TArray<FDialogueDataStruct> Other;

	GetConnectedNodes(NPCNode.Connections, Player, NPC, Other);

	const TArray<FDataStruct> NullShowIf;
	const TArray<FString> NullCommands;


	ClearReplies();
	if (Player.IsEmpty() && !NPC.IsEmpty())
	{
		//const FDialogueDataStruct NextNPC = NPC[0];
		FDialogueDataStruct NextReply;

		NextReply.Text = ContinueText;
		//NextReply.Data = NextNPC.Data;
		NextReply.Connections = NPCNode.Connections;
		NextReply.Priority = 0;
		Player.Add(NextReply);

		AddReplies(Player, NullCommands, NullShowIf);
	}
	else
		AddReplies(Player, NullCommands, NullShowIf);

	InitializeReplies(Other, NullShowIf, NullCommands);

	SortByPriority();

	OnStartTextPrinting.Broadcast(NPCNode.Text, NPCNode.Data, Commands);
}

void UDialogueWidget::NextState(const TArray<int32>& Connections)
{
	TArray<FDialogueDataStruct> Player;
	TArray<FDialogueDataStruct> NPC;
	TArray<FDialogueDataStruct> Other;

	if (Connections.IsEmpty())
	{
		OnEndDialogue.Broadcast();
	}

	GetConnectedNodes(Connections, Player, NPC, Other);

	const TArray<FString> NullArr;
	if (NPC.IsValidIndex(0))
	{
		InitializeNewState(NPC[0], NullArr);
		return;
	}

	const TArray<int32> NullInt;
	const FText NullText = FText::FromString("");
	CurrentNPC.Text = NullText;
	CurrentNPC.Connections = NullInt;

	InitializeNPC(Other, NullArr);
}

void UDialogueWidget::SortByPriority()
{
	TArray<FReplyStruct> SortedStruct;

	for (int32 x = 0; x < CurrentReplies.Num(); ++x)
	{
		if (x == 0 && CurrentReplies.IsValidIndex(x))
		{
			SortedStruct.Add(CurrentReplies[x]);
			continue;
		}

		if (!CurrentReplies.IsValidIndex(x)) break;

		for (int32 y = 0; y < SortedStruct.Num(); ++y)
		{
			if (!SortedStruct.IsValidIndex(y)) break;

			if (CurrentReplies[x].Priority >= SortedStruct[y].Priority)
			{
				if (y == SortedStruct.Num() - 1)
				{
					SortedStruct.Add(CurrentReplies[x]);
					break;
				}
				continue;
			}
			SortedStruct.Insert(CurrentReplies[x], y);
			break;
		}
	}

	CurrentReplies = SortedStruct;
}


void UDialogueWidget::OnReplyFun(const TArray<FDataStruct>& Data, const TArray<FString>& Commands,
                                 const TArray<int32>& Connections)
{
	CallFunctions(Commands);
}

void UDialogueWidget::OnTextStartPrintingFun(FText Text, const TArray<FDataStruct>& Data,
                                             const TArray<FString>& Commands)
{
	CallFunctions(Commands);
}

void UDialogueWidget::CallFunctions(const TArray<FString>& Commands)
{
	if (!FunctionsObject) return;
	FunctionsObject->ContextObject = ContextObject ? ContextObject : this;
	FunctionsObject->CallAllFunctions(Commands);
}
