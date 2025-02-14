#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_105221

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Hero_1052_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_105221.PyConfig_105221
// 0x3038 (0x30D0 - 0x0098)
class UPyConfig_105221 final : public UMarvelAbilityConfig
{
public:
	TArray<TArray<int32>>                         ScopeId;                                           // 0x0098(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TArray<int32>>                         AirScopeID;                                        // 0x00A8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSelectTaskParam                       SelectTaskParams;                                  // 0x00C0(0x1040)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSelectTaskParam                       AirSelectTaskParams;                               // 0x1100(0x1040)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          DashOnMissile;                                     // 0x2140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2141[0x7];                                     // 0x2141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       DashInfo;                                          // 0x2148(0x0B70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMarvelTraceRule                       ReduceCDTraceRule;                                 // 0x2CB8(0x0390)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         ReduceCDAbilityID;                                 // 0x3048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReduceCDLength;                                    // 0x304C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DashDistance;                                      // 0x3050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ComboTimeout;                                      // 0x3054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatingHorizontalAcc;                             // 0x3058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatingHorizontalDec;                             // 0x305C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  BlockDashTag;                                      // 0x3060(0x0068)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_105221">();
	}
	static class UPyConfig_105221* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_105221>();
	}
};
static_assert(alignof(UPyConfig_105221) == 0x000010, "Wrong alignment on UPyConfig_105221");
static_assert(sizeof(UPyConfig_105221) == 0x0030D0, "Wrong size on UPyConfig_105221");
static_assert(offsetof(UPyConfig_105221, ScopeId) == 0x000098, "Member 'UPyConfig_105221::ScopeId' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, AirScopeID) == 0x0000A8, "Member 'UPyConfig_105221::AirScopeID' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, SelectTaskParams) == 0x0000C0, "Member 'UPyConfig_105221::SelectTaskParams' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, AirSelectTaskParams) == 0x001100, "Member 'UPyConfig_105221::AirSelectTaskParams' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, DashOnMissile) == 0x002140, "Member 'UPyConfig_105221::DashOnMissile' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, DashInfo) == 0x002148, "Member 'UPyConfig_105221::DashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, ReduceCDTraceRule) == 0x002CB8, "Member 'UPyConfig_105221::ReduceCDTraceRule' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, ReduceCDAbilityID) == 0x003048, "Member 'UPyConfig_105221::ReduceCDAbilityID' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, ReduceCDLength) == 0x00304C, "Member 'UPyConfig_105221::ReduceCDLength' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, DashDistance) == 0x003050, "Member 'UPyConfig_105221::DashDistance' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, ComboTimeout) == 0x003054, "Member 'UPyConfig_105221::ComboTimeout' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, FloatingHorizontalAcc) == 0x003058, "Member 'UPyConfig_105221::FloatingHorizontalAcc' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, FloatingHorizontalDec) == 0x00305C, "Member 'UPyConfig_105221::FloatingHorizontalDec' has a wrong offset!");
static_assert(offsetof(UPyConfig_105221, BlockDashTag) == 0x003060, "Member 'UPyConfig_105221::BlockDashTag' has a wrong offset!");

// PythonClass PyAbility_105221.PyAbility_105221
// 0x0000 (0x2560 - 0x2560)
class UPyAbility_105221 : public UAbility_105221
{
public:
	void BeginPlay();
	bool CanActivate();
	bool TryMakeTriggerContext(struct FGameplayEventData& EventData);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnMovementModeChanged(class ACharacter* MyCharacter, EMovementMode PrevMode, uint8 CustomMode);
	void EnterFloating(class UCharacterMovementComponent* MoveComp);
	void EnterFloatingAndClearZ(class UCharacterMovementComponent* MoveComp);
	void LeaveFloating(class UCharacterMovementComponent* MoveComp);
	void NativeOnMontageEvent(const class FString& Tag);
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_105221">();
	}
	static class UPyAbility_105221* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_105221>();
	}
};
static_assert(alignof(UPyAbility_105221) == 0x000008, "Wrong alignment on UPyAbility_105221");
static_assert(sizeof(UPyAbility_105221) == 0x002560, "Wrong size on UPyAbility_105221");

// PythonClass PyAbility_105221.PyEffectiveComponent_105221
// 0x0000 (0x1C00 - 0x1C00)
class UPyEffectiveComponent_105221 final : public UMarvelAgentEffectiveComponent
{
public:
	void K2_OnPostApplyContainer(const TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEffectiveComponent_105221">();
	}
	static class UPyEffectiveComponent_105221* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEffectiveComponent_105221>();
	}
};
static_assert(alignof(UPyEffectiveComponent_105221) == 0x000010, "Wrong alignment on UPyEffectiveComponent_105221");
static_assert(sizeof(UPyEffectiveComponent_105221) == 0x001C00, "Wrong size on UPyEffectiveComponent_105221");

}

