// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AI_Drawable_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Drawable_HUD() {}
// Cross Module References
	AITREE_API UClass* Z_Construct_UClass_AAI_Drawable_HUD_NoRegister();
	AITREE_API UClass* Z_Construct_UClass_AAI_Drawable_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_AITree();
	AITREE_API UFunction* Z_Construct_UFunction_AAI_Drawable_HUD_RunAlgorithm();
// End Cross Module References
	void AAI_Drawable_HUD::StaticRegisterNativesAAI_Drawable_HUD()
	{
		UClass* Class = AAI_Drawable_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAlgorithm", (Native)&AAI_Drawable_HUD::execRunAlgorithm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAI_Drawable_HUD_RunAlgorithm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "DrawAlgorithms" },
				{ "ModuleRelativePath", "AI_Drawable_HUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Drawable_HUD, "RunAlgorithm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_Drawable_HUD_NoRegister()
	{
		return AAI_Drawable_HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AAI_Drawable_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_AITree,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAI_Drawable_HUD_RunAlgorithm, "RunAlgorithm" }, // 1268127913
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "AI_Drawable_HUD.h" },
				{ "ModuleRelativePath", "AI_Drawable_HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAI_Drawable_HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAI_Drawable_HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Drawable_HUD, 1265326486);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Drawable_HUD(Z_Construct_UClass_AAI_Drawable_HUD, &AAI_Drawable_HUD::StaticClass, TEXT("/Script/AITree"), TEXT("AAI_Drawable_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Drawable_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
