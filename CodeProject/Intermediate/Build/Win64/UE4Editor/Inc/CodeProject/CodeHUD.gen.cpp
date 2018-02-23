// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CodeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeHUD() {}
// Cross Module References
	CODEPROJECT_API UClass* Z_Construct_UClass_ACodeHUD_NoRegister();
	CODEPROJECT_API UClass* Z_Construct_UClass_ACodeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CodeProject();
	CODEPROJECT_API UFunction* Z_Construct_UFunction_ACodeHUD_drawRandomWalker();
// End Cross Module References
	void ACodeHUD::StaticRegisterNativesACodeHUD()
	{
		UClass* Class = ACodeHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "drawRandomWalker", (Native)&ACodeHUD::execdrawRandomWalker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACodeHUD_drawRandomWalker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DrawAlgorithms" },
				{ "ModuleRelativePath", "CodeHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACodeHUD, "drawRandomWalker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACodeHUD_NoRegister()
	{
		return ACodeHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ACodeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_CodeProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACodeHUD_drawRandomWalker, "drawRandomWalker" }, // 3408726426
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "CodeHUD.h" },
				{ "ModuleRelativePath", "CodeHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenY_MetaData[] = {
				{ "Category", "CodeHUD" },
				{ "ModuleRelativePath", "CodeHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_screenY = { UE4CodeGen_Private::EPropertyClass::Int, "screenY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACodeHUD, screenY), METADATA_PARAMS(NewProp_screenY_MetaData, ARRAY_COUNT(NewProp_screenY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenX_MetaData[] = {
				{ "Category", "CodeHUD" },
				{ "ModuleRelativePath", "CodeHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_screenX = { UE4CodeGen_Private::EPropertyClass::Int, "screenX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACodeHUD, screenX), METADATA_PARAMS(NewProp_screenX_MetaData, ARRAY_COUNT(NewProp_screenX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_screenY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_screenX,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACodeHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACodeHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACodeHUD, 3396124652);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACodeHUD(Z_Construct_UClass_ACodeHUD, &ACodeHUD::StaticClass, TEXT("/Script/CodeProject"), TEXT("ACodeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
