// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AI_BEHAVIOUR_DrawHUD_generated_h
#error "DrawHUD.generated.h already included, missing '#pragma once' in DrawHUD.h"
#endif
#define AI_BEHAVIOUR_DrawHUD_generated_h

#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execdrawGOL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->drawGOL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execdrawCA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->drawCA(); \
		P_NATIVE_END; \
	}


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdrawGOL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->drawGOL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execdrawCA) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->drawCA(); \
		P_NATIVE_END; \
	}


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrawHUD(); \
	friend AI_BEHAVIOUR_API class UClass* Z_Construct_UClass_ADrawHUD(); \
public: \
	DECLARE_CLASS(ADrawHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/AI_Behaviour"), NO_API) \
	DECLARE_SERIALIZER(ADrawHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADrawHUD(); \
	friend AI_BEHAVIOUR_API class UClass* Z_Construct_UClass_ADrawHUD(); \
public: \
	DECLARE_CLASS(ADrawHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/AI_Behaviour"), NO_API) \
	DECLARE_SERIALIZER(ADrawHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADrawHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADrawHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrawHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrawHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrawHUD(ADrawHUD&&); \
	NO_API ADrawHUD(const ADrawHUD&); \
public:


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADrawHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADrawHUD(ADrawHUD&&); \
	NO_API ADrawHUD(const ADrawHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrawHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrawHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADrawHUD)


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_PRIVATE_PROPERTY_OFFSET
#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_13_PROLOG
#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_RPC_WRAPPERS \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_INCLASS \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_INCLASS_NO_PURE_DECLS \
	AI_Behaviour_Source_AI_Behaviour_DrawHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AI_Behaviour_Source_AI_Behaviour_DrawHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
