// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/ELowEntryRGBFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELowEntryRGBFormat() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
// End Cross Module References
	static UEnum* ELowEntryRGBFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat, Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary(), TEXT("ELowEntryRGBFormat"));
		}
		return Singleton;
	}
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UEnum* StaticEnum<ELowEntryRGBFormat>()
	{
		return ELowEntryRGBFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELowEntryRGBFormat(ELowEntryRGBFormat_StaticEnum, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ELowEntryRGBFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Hash() { return 694747112U; }
	UEnum* Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELowEntryRGBFormat"), 0, Get_Z_Construct_UEnum_LowEntryExtendedStandardLibrary_ELowEntryRGBFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELowEntryRGBFormat::Invalid", (int64)ELowEntryRGBFormat::Invalid },
				{ "ELowEntryRGBFormat::RGBA", (int64)ELowEntryRGBFormat::RGBA },
				{ "ELowEntryRGBFormat::BGRA", (int64)ELowEntryRGBFormat::BGRA },
				{ "ELowEntryRGBFormat::Gray", (int64)ELowEntryRGBFormat::Gray },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BGRA.Name", "ELowEntryRGBFormat::BGRA" },
				{ "BlueprintType", "true" },
				{ "Gray.Name", "ELowEntryRGBFormat::Gray" },
				{ "Invalid.Name", "ELowEntryRGBFormat::Invalid" },
				{ "ModuleRelativePath", "Public/Classes/ELowEntryRGBFormat.h" },
				{ "RGBA.Name", "ELowEntryRGBFormat::RGBA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
				nullptr,
				"ELowEntryRGBFormat",
				"ELowEntryRGBFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
