/*
* DialogueSx - Plugin For Creating Dialogs
*
* Copyright (C) 2022 Mykhailo Oliinyk <m19tes@gmail.com> All Rights Reserved.
*/


#include "DialogueLibrary.h"

#include "Kismet/KismetStringLibrary.h"


TArray<FDialogueDataStruct> UDialogueLibrary::GetDataArray(const FString& Text)
{
	TArray<FDialogueDataStruct> DataStructArray;

	TArray<TSharedPtr<FJsonValue>> JsonArray;

	int32 StartIndex = -1;

	// Create a reader pointer to read the json data
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(*Text);

	// Deserialize the json data given Reader and the actual object to deserialize
	if (!FJsonSerializer::Deserialize(Reader, JsonArray)) return DataStructArray;

	if (JsonArray.IsValidIndex(0))
	{
		const auto ArrayOfNodes = JsonArray[0];

		int32 Index = 0;
		FDialogueDataStruct Struct;
		bool Condition = true;


		while (Condition)
		{
			bool IsStart = false;
			const EResult Result = GetDataFromJsonNode(ArrayOfNodes, Index, Struct, IsStart);


			DataStructArray.Add(Struct);
			if (IsStart)
				StartIndex = DataStructArray.Num() - 1;

			if (Result == EResult::None)
				Condition = false;

			++Index;
		}
	}

	TArray<FEdgeStruct> DataStructArrayEdges;

	if (JsonArray.IsValidIndex(1))
	{
		const auto ArrayOfEdges = JsonArray[1];

		int32 Index = 0;
		FEdgeStruct Struct;
		while (GetDataFromJsonEdges(ArrayOfEdges, Index, Struct))
		{
			++Index;
			DataStructArrayEdges.Add(Struct);
		}
	}


	for (int32 x = 0; x < DataStructArray.Num(); ++x)
	{
		for (auto const& Edge : DataStructArrayEdges)
		{
			if (DataStructArray.IsValidIndex(x) && DataStructArray[x].ID == Edge.Source)
			{
				if (DataStructArray[x].Type != ENodeType::Branch)
				{
					DataStructArray[x].Connections.Add(Edge.Target);
				}
				else if (Edge.SourceHandle == "true")
				{
					DataStructArray[x].Connections[0] = Edge.Target;
				}
				else
				{
					DataStructArray[x].Connections[1] = Edge.Target;
				}
			}
		}
	}


	//Set Start Node In Zero Index
	if (DataStructArray.IsValidIndex(StartIndex))
	{
		const FDialogueDataStruct StartNode = DataStructArray[StartIndex];
		DataStructArray.RemoveAt(StartIndex);
		DataStructArray.Insert(StartNode, 0);
	}


	return DataStructArray;
}

EResult UDialogueLibrary::GetDataFromJsonNode(const TSharedPtr<FJsonValue> ArrayOfNodes, int32 Index,
                                              FDialogueDataStruct& Struct, bool& IsStart)
{
	if (ArrayOfNodes->AsArray().IsValidIndex(Index))
	{
		const auto Nodes = ArrayOfNodes->AsArray()[Index];
		const auto Object = Nodes->AsObject();


		FDialogueDataStruct Node;

		const FString Type = *Object->GetStringField("type");

		Node.ID = FCString::Atoi(*Object->GetStringField("id"));


		FString Text;
		if (Object->TryGetStringField("text", Text))
		{
			Node.Text = FText::FromString(Text);
		}


		Node.Type = Type == "Npc"
			            ? ENodeType::NPC
			            : Type == "Player"
			            ? ENodeType::Player
			            : Type == "If"
			            ? ENodeType::If
			            : Type == "Branch"
			            ? ENodeType::Branch
			            : Type == "Commands"
			            ? ENodeType::Commands
			            : Type == "Random"
			            ? ENodeType::Random
			            : ENodeType::NPC;


		if (Type == "Npc" || Type == "Player")
		{
			Object->TryGetBoolField("start", IsStart);

			const auto DataArr = Object->GetArrayField("data");

			for (auto const& Var : DataArr)
			{
				FDataStruct Data;
				Data.Name = FName(*Var->AsObject()->GetStringField("name"));
				const FString PropertyType = *Var->AsObject()->GetStringField("type");
				Data.Type = GetPropertyType(PropertyType);
				Data.Value = *Var->AsObject()->GetStringField("value");

				Node.Data.Add(Data);
			}

			auto PositionObj = Object->GetObjectField("position");
			if (PositionObj)
			{
				int32 y = PositionObj->GetNumberField("y");
				Node.Priority = y;
			}


			Struct = Node;
			return Type == "Npc" ? EResult::NPC : Type == "Player" ? EResult::Player : EResult::NPC;
		}
		if (Type == "If" || Type == "Branch")
		{
			const auto ValueObject = Object->GetObjectField("condition");

			FDataStruct Property;
			Property.Type = GetPropertyType(*ValueObject->GetStringField("type"));
			Property.Name = *ValueObject->GetStringField("name");
			Property.Sign = GetSign(*ValueObject->GetStringField("sign"));
			Property.Value = *ValueObject->GetStringField("value");

			Node.Data.Add(Property);
			if (Type == "Branch")
			{
				Node.Connections.Init(-2, 2);
			}

			Struct = Node;
			return Type == "If" ? EResult::If : Type == "Branch" ? EResult::Branch : EResult::If;
		}
		if (Type == "Commands")
		{
			const auto CommandsArr = Object->GetArrayField("commands");
			for (auto const& Command : CommandsArr)
			{
				FDataStruct Property;
				Property.Name = "Command";
				Property.Type = EType::String;
				Property.Value = *Command->AsString();
				Node.Data.Add(Property);
			}
			Struct = Node;
			return EResult::Commands;
		}
		if (Type == "Random")
		{
			FDataStruct TempData;
			TempData.Name = "RandomNumber";
			TempData.Type = EType::Integer;
			TempData.Value = FString::FromInt(Object->GetNumberField("number"));
			Node.Data.Add(TempData);

			Struct = Node;
			return EResult::Random;
		}

		return EResult::Continue;
	}
	return EResult::None;
}


bool UDialogueLibrary::GetDataFromJsonEdges(const TSharedPtr<FJsonValue> ArrayOfEdges, const int32 Index,
                                            FEdgeStruct& Structure)
{
	if (ArrayOfEdges->AsArray().IsValidIndex(Index))
	{
		const auto Nodes = ArrayOfEdges->AsArray()[Index];
		const auto Object = Nodes->AsObject();

		FEdgeStruct Edge;
		Edge.Source = FCString::Atoi(*Object->GetStringField("source"));
		Edge.SourceHandle = *Object->GetStringField("sourceHandle");
		Edge.Target = FCString::Atoi(*Object->GetStringField("target"));

		FString StringValue;

		if (Object->TryGetStringField("targetHandle", StringValue) && StringValue.IsNumeric())
			Edge.TargetHandle = FCString::Atoi(*Object->GetStringField("targetHandle"));
		else
			Edge.TargetHandle = -1;

		Structure = Edge;
		return true;
	}
	return false;
}


EType UDialogueLibrary::GetPropertyType(const FString Type)
{
	return Type == "bool"
		       ? EType::Bool
		       : Type == "string"
		       ? EType::String
		       : Type == "float"
		       ? EType::Float
		       : Type == "integer"
		       ? EType::Integer
		       : EType::Integer;
}

ESign UDialogueLibrary::GetSign(const FString Sign)
{
	return Sign == "=="
		       ? ESign::Equal
		       : Sign == "!="
		       ? ESign::NotEqual
		       : Sign == ">"
		       ? ESign::More
		       : Sign == "<"
		       ? ESign::Less
		       : Sign == ">="
		       ? ESign::MoreAndEqual
		       : Sign == "<="
		       ? ESign::LessAndEqual
		       : ESign::More;
}

bool UDialogueLibrary::CompareValues(const EType Type, const FString& Value_1, const ESign Sign, const FString& Value_2)
{
	switch (Type)
	{
	case EType::Integer:
		if (Value_1.IsNumeric() && Value_2.IsNumeric())
		{
			return ConditionResult<int32>(FCString::Atoi(*Value_1), FCString::Atoi(*Value_2), Sign);
		}
		break;
	case EType::Float:
		{
			const FString Val1 = UKismetStringLibrary::Replace(*Value_1, ",", ".");
			const FString Val2 = UKismetStringLibrary::Replace(*Value_2, ",", ".");
			if (Val1.IsNumeric() && Val2.IsNumeric())
				return ConditionResult<float>(FCString::Atof(*Val1), FCString::Atof(*Val2), Sign);
			break;
		}
	case EType::String:
		return ConditionResult<FString>(*Value_1, *Value_2, Sign);
	case EType::Bool:
		return ConditionResult<bool>(Value_1.ToBool(), Value_2.ToBool(), Sign);
	default:
		return false;
	}
	return false;
}


template <typename T>
bool UDialogueLibrary::ConditionResult(T Val2, T Val1, const ESign Condition)
{
	switch (Condition)
	{
	case ESign::More:
		if (Val1 > Val2)
			return true;
		return false;
	case ESign::Less:
		if (Val1 < Val2)
			return true;
		return false;
	case ESign::Equal:
		if (Val1 == Val2)
			return true;
		return false;
	case ESign::NotEqual:
		if (Val1 != Val2)
			return true;
		return false;
	case ESign::LessAndEqual:
		if (Val1 <= Val2)
			return true;
		return false;
	case ESign::MoreAndEqual:
		if (Val1 >= Val2)
			return true;
		return false;
	default:
		return false;
	}
}


bool UDialogueLibrary::GetValue(const EType Type, const FName& Name, const TArray<FDataStruct>& Data, FString& Value)
{
	if (Name.IsNone()) return false;

	for (auto const& Elem : Data)
	{
		if (Elem.Name == Name && Elem.Type == Type)
		{
			Value = Elem.Value;
			return true;
		}
	}
	return false;
}

bool UDialogueLibrary::GetProperty(const FName& Name, const TArray<FPropertyStruct>& Properties,
                                   FString& Value)
{
	if (Name.IsNone()) return false;

	for (auto const& Elem : Properties)
	{
		if (Elem.Name == Name)
		{
			Value = Elem.Value;
			return true;
		}
	}
	return false;
}

void UDialogueLibrary::GetConnectedNodes(const TArray<FDialogueDataStruct>& Nodes, const TArray<int32>& Connections,
                                         TArray<FDialogueDataStruct>& Player, TArray<FDialogueDataStruct>& NPC,
                                         TArray<FDialogueDataStruct>& Other)
{
	Player.Empty();
	NPC.Empty();
	Other.Empty();

	for (auto const& Node : Nodes)
	{
		if (Connections.Contains(Node.ID))
		{
			if (Node.Type == ENodeType::Player)
				Player.Add(Node);
			else if (Node.Type == ENodeType::NPC)
				NPC.Add(Node);
			else
				Other.Add(Node);
		}
	}
}
