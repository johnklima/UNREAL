// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODEPROJECT_CodeHUD_generated_h
#error "CodeHUD.generated.h already included, missing '#pragma once' in CodeHUD.h"
#endif
#define CODEPROJECT_CodeHUD_generated_h

#define CodeProject_Source_CodeProject_CodeHUD_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdrawRandomWalker) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_sizeX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_sizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->drawRandomWalker(Z_Param_sizeX,Z_Param_sizeY); \
		P_NATIVE_END; \
	}


#define CodeProject_Source_CodeProject_CodeHUD_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdrawRandomWalker) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_sizeX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_sizeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->drawRandomWalker(Z_Param_sizeX,Z_Param_sizeY); \
		P_NATIVE_END; \
	}


#define CodeProject_Source_CodeProject_CodeHUD_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeHUD(); \
	friend CODEPROJECT_API class UClass* Z_Construct_UClass_ACodeHUD(); \
public: \
	DECLARE_CLASS(ACodeHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/CodeProject"), NO_API) \
	DECLARE_SERIALIZER(ACodeHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CodeProject_Source_CodeProject_CodeHUD_h_23_INCLASS \
private: \
	static void StaticRegisterNativesACodeHUD(); \
	friend CODEPROJECT_API class UClass* Z_Construct_UClass_ACodeHUD(); \
public: \
	DECLARE_CLASS(ACodeHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/CodeProject"), NO_API) \
	DECLARE_SERIALIZER(ACodeHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CodeProject_Source_CodeProject_CodeHUD_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodeHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodeHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeHUD(ACodeHUD&&); \
	NO_API ACodeHUD(const ACodeHUD&); \
public:


#define CodeProject_Source_CodeProject_CodeHUD_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodeHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeHUD(ACodeHUD&&); \
	NO_API ACodeHUD(const ACodeHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodeHUD)


#define CodeProject_Source_CodeProject_CodeHUD_h_23_PRIVATE_PROPERTY_OFFSET
#define CodeProject_Source_CodeProject_CodeHUD_h_17_PROLOG
#define CodeProject_Source_CodeProject_CodeHUD_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeProject_Source_CodeProject_CodeHUD_h_23_PRIVATE_PROPERTY_OFFSET \
	CodeProject_Source_CodeProject_CodeHUD_h_23_RPC_WRAPPERS \
	CodeProject_Source_CodeProject_CodeHUD_h_23_INCLASS \
	CodeProject_Source_CodeProject_CodeHUD_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CodeProject_Source_CodeProject_CodeHUD_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CodeProject_Source_CodeProject_CodeHUD_h_23_PRIVATE_PROPERTY_OFFSET \
	CodeProject_Source_CodeProject_CodeHUD_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	CodeProject_Source_CodeProject_CodeHUD_h_23_INCLASS_NO_PURE_DECLS \
	CodeProject_Source_CodeProject_CodeHUD_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CodeProject_Source_CodeProject_CodeHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
