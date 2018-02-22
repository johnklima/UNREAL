// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AITREE_AI_Drawable_HUD_generated_h
#error "AI_Drawable_HUD.generated.h already included, missing '#pragma once' in AI_Drawable_HUD.h"
#endif
#define AITREE_AI_Drawable_HUD_generated_h

#define AITree_Source_AITree_AI_Drawable_HUD_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunWalker_Algorithm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RunWalker_Algorithm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunCA_Algorithm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RunCA_Algorithm(); \
		P_NATIVE_END; \
	}


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunWalker_Algorithm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RunWalker_Algorithm(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunCA_Algorithm) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RunCA_Algorithm(); \
		P_NATIVE_END; \
	}


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_Drawable_HUD(); \
	friend AITREE_API class UClass* Z_Construct_UClass_AAI_Drawable_HUD(); \
public: \
	DECLARE_CLASS(AAI_Drawable_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/AITree"), NO_API) \
	DECLARE_SERIALIZER(AAI_Drawable_HUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAAI_Drawable_HUD(); \
	friend AITREE_API class UClass* Z_Construct_UClass_AAI_Drawable_HUD(); \
public: \
	DECLARE_CLASS(AAI_Drawable_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/AITree"), NO_API) \
	DECLARE_SERIALIZER(AAI_Drawable_HUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_Drawable_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_Drawable_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Drawable_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Drawable_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Drawable_HUD(AAI_Drawable_HUD&&); \
	NO_API AAI_Drawable_HUD(const AAI_Drawable_HUD&); \
public:


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_Drawable_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Drawable_HUD(AAI_Drawable_HUD&&); \
	NO_API AAI_Drawable_HUD(const AAI_Drawable_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Drawable_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Drawable_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_Drawable_HUD)


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_PRIVATE_PROPERTY_OFFSET
#define AITree_Source_AITree_AI_Drawable_HUD_h_21_PROLOG
#define AITree_Source_AITree_AI_Drawable_HUD_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_PRIVATE_PROPERTY_OFFSET \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_RPC_WRAPPERS \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_INCLASS \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AITree_Source_AITree_AI_Drawable_HUD_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_PRIVATE_PROPERTY_OFFSET \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_INCLASS_NO_PURE_DECLS \
	AITree_Source_AITree_AI_Drawable_HUD_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AITree_Source_AITree_AI_Drawable_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
