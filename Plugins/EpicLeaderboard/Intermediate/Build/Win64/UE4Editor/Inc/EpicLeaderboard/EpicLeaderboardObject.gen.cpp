// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicLeaderboard/Classes/EpicLeaderboardObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicLeaderboardObject() {}
// Cross Module References
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EpicLeaderboard();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister();
	EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics
	{
		struct _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms
		{
			UEpicLeaderboardObject* Leaderboard;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms, Leaderboard), Z_Construct_UClass_UEpicLeaderboardObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::NewProp_Leaderboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, nullptr, "EpicLeaderboardResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FEpicLeaderboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICLEADERBOARD_API uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardEntry, Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Hash());
	}
	return Singleton;
}
template<> EPICLEADERBOARD_API UScriptStruct* StaticStruct<FEpicLeaderboardEntry>()
{
	return FEpicLeaderboardEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicLeaderboardEntry(FEpicLeaderboardEntry::StaticStruct, TEXT("/Script/EpicLeaderboard"), TEXT("EpicLeaderboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry
{
	FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicLeaderboardEntry")),new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>);
	}
} ScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry;
	struct Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_country;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_meta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username = { "username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, username), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, score), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country = { "country", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, country), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEpicLeaderboardEntry, meta), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
		nullptr,
		&NewStructOps,
		"EpicLeaderboardEntry",
		sizeof(FEpicLeaderboardEntry),
		alignof(FEpicLeaderboardEntry),
		Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicLeaderboard();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Hash() { return 2978878613U; }
	DEFINE_FUNCTION(UEpicLeaderboardObject::execGetEpicLeaderboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardID);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEpicLeaderboardObject**)Z_Param__Result=UEpicLeaderboardObject::GetEpicLeaderboard(Z_Param_LeaderboardID,Z_Param_LeaderboardKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEpicLeaderboardObject::execSubmitEntryWithMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerScore);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitEntryWithMetadata(Z_Param_PlayerName,Z_Param_PlayerScore,Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEpicLeaderboardObject::execSubmitEntry)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitEntry(Z_Param_PlayerName,Z_Param_PlayerScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEpicLeaderboardObject::execGetLeaderboardEntries)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_UBOOL(Z_Param_AroundPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardEntries(Z_Param_PlayerName,Z_Param_AroundPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEpicLeaderboardObject::execCleanupName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEpicLeaderboardObject::CleanupName(Z_Param_name);
		P_NATIVE_END;
	}
	void UEpicLeaderboardObject::StaticRegisterNativesUEpicLeaderboardObject()
	{
		UClass* Class = UEpicLeaderboardObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanupName", &UEpicLeaderboardObject::execCleanupName },
			{ "GetEpicLeaderboard", &UEpicLeaderboardObject::execGetEpicLeaderboard },
			{ "GetLeaderboardEntries", &UEpicLeaderboardObject::execGetLeaderboardEntries },
			{ "SubmitEntry", &UEpicLeaderboardObject::execSubmitEntry },
			{ "SubmitEntryWithMetadata", &UEpicLeaderboardObject::execSubmitEntryWithMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics
	{
		struct EpicLeaderboardObject_eventCleanupName_Parms
		{
			FString name;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventCleanupName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventCleanupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Utilities" },
		{ "Comment", "//Utilities\n" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Utilities" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, nullptr, "CleanupName", nullptr, nullptr, sizeof(EpicLeaderboardObject_eventCleanupName_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics
	{
		struct EpicLeaderboardObject_eventGetEpicLeaderboard_Parms
		{
			FString LeaderboardID;
			FString LeaderboardKey;
			UEpicLeaderboardObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardID = { "LeaderboardID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, LeaderboardID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardKey = { "LeaderboardKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, LeaderboardKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UEpicLeaderboardObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "Comment", "/** Return the leaderboard for this ID\n\x09* @param LeaderboardID - The LeaderboardID from http://EpicLeaderboard.com.\n\x09* @param LeaderboardKey - The LeaderboardKey from http://EpicLeaderboard.com.\n\x09* @return The EpicLeaderboardObject for this LeaderboardID.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Return the leaderboard for this ID\n@param LeaderboardID - The LeaderboardID from http://EpicLeaderboard.com.\n@param LeaderboardKey - The LeaderboardKey from http://EpicLeaderboard.com.\n@return The EpicLeaderboardObject for this LeaderboardID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, nullptr, "GetEpicLeaderboard", nullptr, nullptr, sizeof(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics
	{
		struct EpicLeaderboardObject_eventGetLeaderboardEntries_Parms
		{
			FString PlayerName;
			bool AroundPlayer;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static void NewProp_AroundPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AroundPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer_SetBit(void* Obj)
	{
		((EpicLeaderboardObject_eventGetLeaderboardEntries_Parms*)Obj)->AroundPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer = { "AroundPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms), &Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "Comment", "/** Fetches entries for this leaderboard\n\x09* @param PlayerName - The player for which to return scores for.\n\x09* @param AroundPlayer - Return scores centered around player instead of the top scores.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Fetches entries for this leaderboard\n@param PlayerName - The player for which to return scores for.\n@param AroundPlayer - Return scores centered around player instead of the top scores." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, nullptr, "GetLeaderboardEntries", nullptr, nullptr, sizeof(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics
	{
		struct EpicLeaderboardObject_eventSubmitEntry_Parms
		{
			FString PlayerName;
			float PlayerScore;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntry_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntry_Parms, PlayerScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "Comment", "/** Submit a leaderboard entry\n\x09* @param PlayerName - The player for which this score should be submitted.\n\x09* @param PlayerScore - The score to be submitted.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Submit a leaderboard entry\n@param PlayerName - The player for which this score should be submitted.\n@param PlayerScore - The score to be submitted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, nullptr, "SubmitEntry", nullptr, nullptr, sizeof(EpicLeaderboardObject_eventSubmitEntry_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics
	{
		struct EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms
		{
			FString PlayerName;
			float PlayerScore;
			TMap<FString,FString> Metadata;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, PlayerScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "Comment", "/** Submit a leaderboard entry with meta information attached\n\x09* @param PlayerName - The player for which this score should be submitted.\n\x09* @param PlayerScore - The score to be submitted.\n\x09* @param Metadata - The meta information to be submitted.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Submit a leaderboard entry with meta information attached\n@param PlayerName - The player for which this score should be submitted.\n@param PlayerScore - The score to be submitted.\n@param Metadata - The meta information to be submitted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, nullptr, "SubmitEntryWithMetadata", nullptr, nullptr, sizeof(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister()
	{
		return UEpicLeaderboardObject::StaticClass();
	}
	struct Z_Construct_UClass_UEpicLeaderboardObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicLeaderboardObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEpicLeaderboardObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName, "CleanupName" }, // 3162370042
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard, "GetEpicLeaderboard" }, // 2989814569
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 3754287833
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry, "SubmitEntry" }, // 3239425533
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata, "SubmitEntryWithMetadata" }, // 240450028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicLeaderboardObject.h" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "EpicLeaderboard|Delegates" },
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEpicLeaderboardObject, OnSuccess), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Category", "EpicLeaderboard|Delegates" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEpicLeaderboardObject, OnFailure), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "Comment", "//Properties\n" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEpicLeaderboardObject, ID), METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEpicLeaderboardObject, Key), METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_Inner = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEpicLeaderboardObject, LeaderboardEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry = { "PlayerEntry", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEpicLeaderboardObject, PlayerEntry), Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicLeaderboardObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicLeaderboardObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicLeaderboardObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::ClassParams = {
		&UEpicLeaderboardObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEpicLeaderboardObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicLeaderboardObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicLeaderboardObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicLeaderboardObject, 2014881044);
	template<> EPICLEADERBOARD_API UClass* StaticClass<UEpicLeaderboardObject>()
	{
		return UEpicLeaderboardObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicLeaderboardObject(Z_Construct_UClass_UEpicLeaderboardObject, &UEpicLeaderboardObject::StaticClass, TEXT("/Script/EpicLeaderboard"), TEXT("UEpicLeaderboardObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicLeaderboardObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
