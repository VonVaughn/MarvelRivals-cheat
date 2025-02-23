#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_105233

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "PyAbility_105232_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_105233.PyConfig_105233
// 0x3AE8 (0x3B80 - 0x0098)
class UPyConfig_105233 final : public UMarvelAbilityConfig
{
public:
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSelectAndDashInfo                     InInfo;                                            // 0x00A0(0x2B50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         MaskDistance;                                      // 0x2BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2BF4[0x4];                                     // 0x2BF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       BaseDash;                                          // 0x2BF8(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMarvelTraceRule                       ScopeTraceRule;                                    // 0x3768(0x0390)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         FirstScopeID;                                      // 0x3AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScopeId;                                           // 0x3AFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScopeID2;                                          // 0x3B00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EndBuffID;                                         // 0x3B04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  BlockDashTag;                                      // 0x3B08(0x0068)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         DelayTimes;                                        // 0x3B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_105233">();
	}
	static class UPyConfig_105233* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_105233>();
	}
};
static_assert(alignof(UPyConfig_105233) == 0x000010, "Wrong alignment on UPyConfig_105233");
static_assert(sizeof(UPyConfig_105233) == 0x003B80, "Wrong size on UPyConfig_105233");
static_assert(offsetof(UPyConfig_105233, InInfo) == 0x0000A0, "Member 'UPyConfig_105233::InInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, MaskDistance) == 0x002BF0, "Member 'UPyConfig_105233::MaskDistance' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, BaseDash) == 0x002BF8, "Member 'UPyConfig_105233::BaseDash' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, ScopeTraceRule) == 0x003768, "Member 'UPyConfig_105233::ScopeTraceRule' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, FirstScopeID) == 0x003AF8, "Member 'UPyConfig_105233::FirstScopeID' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, ScopeId) == 0x003AFC, "Member 'UPyConfig_105233::ScopeId' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, ScopeID2) == 0x003B00, "Member 'UPyConfig_105233::ScopeID2' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, EndBuffID) == 0x003B04, "Member 'UPyConfig_105233::EndBuffID' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, BlockDashTag) == 0x003B08, "Member 'UPyConfig_105233::BlockDashTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_105233, DelayTimes) == 0x003B70, "Member 'UPyConfig_105233::DelayTimes' has a wrong offset!");

// PythonClass PyAbility_105233.PyAbility_105233
// 0x0000 (0x25F8 - 0x25F8)
class UPyAbility_105233 : public UPyAbility_105232
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_105233">();
	}
	static class UPyAbility_105233* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_105233>();
	}
};
static_assert(alignof(UPyAbility_105233) == 0x000008, "Wrong alignment on UPyAbility_105233");
static_assert(sizeof(UPyAbility_105233) == 0x0025F8, "Wrong size on UPyAbility_105233");

}

