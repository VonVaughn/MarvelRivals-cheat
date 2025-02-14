#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101571

#include "Basic.hpp"

#include "Hero_1015_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_101571.PyConfig_101571
// 0x00A0 (0x11D0 - 0x1130)
class UPyConfig_101571 final : public UConfig_113
{
public:
	int32                                         ProjectileID;                                      // 0x1130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1134[0x4];                                     // 0x1134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EPhysicsWeaponType, float>               WeaponDamage;                                      // 0x1138(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         MaxDamage;                                         // 0x1188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118C[0x4];                                     // 0x118C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ShootOffset;                                       // 0x1190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AdsorbDuration;                                    // 0x11A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           CueTag;                                            // 0x11AC(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           AdsorbingIdleTag;                                  // 0x11B8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_101571">();
	}
	static class UPyConfig_101571* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_101571>();
	}
};
static_assert(alignof(UPyConfig_101571) == 0x000010, "Wrong alignment on UPyConfig_101571");
static_assert(sizeof(UPyConfig_101571) == 0x0011D0, "Wrong size on UPyConfig_101571");
static_assert(offsetof(UPyConfig_101571, ProjectileID) == 0x001130, "Member 'UPyConfig_101571::ProjectileID' has a wrong offset!");
static_assert(offsetof(UPyConfig_101571, WeaponDamage) == 0x001138, "Member 'UPyConfig_101571::WeaponDamage' has a wrong offset!");
static_assert(offsetof(UPyConfig_101571, MaxDamage) == 0x001188, "Member 'UPyConfig_101571::MaxDamage' has a wrong offset!");
static_assert(offsetof(UPyConfig_101571, ShootOffset) == 0x001190, "Member 'UPyConfig_101571::ShootOffset' has a wrong offset!");
static_assert(offsetof(UPyConfig_101571, AdsorbDuration) == 0x0011A8, "Member 'UPyConfig_101571::AdsorbDuration' has a wrong offset!");
static_assert(offsetof(UPyConfig_101571, CueTag) == 0x0011AC, "Member 'UPyConfig_101571::CueTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_101571, AdsorbingIdleTag) == 0x0011B8, "Member 'UPyConfig_101571::AdsorbingIdleTag' has a wrong offset!");

// PythonClass PyAbility_101571.PyAbility_101571
// 0x00F8 (0x28C0 - 0x27C8)
class UPyAbility_101571 : public UAbility_101571
{
public:
	struct FGameplayTagContainer                  BlockTagBeforeBreak;                               // 0x27C8(0x0068)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  BlockTagThrowing;                                  // 0x2830(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<int32>                                 CancalAbilityIDThrowing;                           // 0x2898(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         AdsorbCount;                                       // 0x28A8(0x0004)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28AC[0x4];                                     // 0x28AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAdsorbCountChangedDelegate;                      // 0x28B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void BeginPlay();
	void OnAdsorbCountChangedDelegate__DelegateSignature(int32 NewCount);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void MissileEventNotify();
	void NativeOnMontageEvent(const class FString& Tag);
	void BreakEventNotify();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnPressFireInput(float TimeWaited);
	void OnAdsorbTrace(class AActor* InActor);
	TMap<EPhysicsWeaponType, int32> GetCacheAdsorbType();
	void SetAdsorbCount(int32 NewCount);
	void OnRep_AdsorbCount();
	void OnAdsorbCountChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101571">();
	}
	static class UPyAbility_101571* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101571>();
	}
};
static_assert(alignof(UPyAbility_101571) == 0x000008, "Wrong alignment on UPyAbility_101571");
static_assert(sizeof(UPyAbility_101571) == 0x0028C0, "Wrong size on UPyAbility_101571");
static_assert(offsetof(UPyAbility_101571, BlockTagBeforeBreak) == 0x0027C8, "Member 'UPyAbility_101571::BlockTagBeforeBreak' has a wrong offset!");
static_assert(offsetof(UPyAbility_101571, BlockTagThrowing) == 0x002830, "Member 'UPyAbility_101571::BlockTagThrowing' has a wrong offset!");
static_assert(offsetof(UPyAbility_101571, CancalAbilityIDThrowing) == 0x002898, "Member 'UPyAbility_101571::CancalAbilityIDThrowing' has a wrong offset!");
static_assert(offsetof(UPyAbility_101571, AdsorbCount) == 0x0028A8, "Member 'UPyAbility_101571::AdsorbCount' has a wrong offset!");
static_assert(offsetof(UPyAbility_101571, OnAdsorbCountChangedDelegate) == 0x0028B0, "Member 'UPyAbility_101571::OnAdsorbCountChangedDelegate' has a wrong offset!");

// PythonClass PyAbility_101571.PyProjectile_10157101
// 0x0020 (0x2F80 - 0x2F60)
class APyProjectile_10157101 final : public AMarvelAbilityTargetActor_Projectile
{
public:
	int32                                         AdsorbCount;                                       // 0x2F60(0x0004)(BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F64[0x4];                                     // 0x2F64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAdsorbCountChangedDelegate;                      // 0x2F68(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnAdsorbCountChangedDelegate__DelegateSignature(int32 NewCount);
	void K2_OnInitializeData();
	TMap<EPhysicsWeaponType, int32> GetCacheAdsorbType();
	void SetAdsorbCount(int32 NewCount);
	void OnRep_AdsorbCount();
	void OnAdsorbCountChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10157101">();
	}
	static class APyProjectile_10157101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10157101>();
	}
};
static_assert(alignof(APyProjectile_10157101) == 0x000010, "Wrong alignment on APyProjectile_10157101");
static_assert(sizeof(APyProjectile_10157101) == 0x002F80, "Wrong size on APyProjectile_10157101");
static_assert(offsetof(APyProjectile_10157101, AdsorbCount) == 0x002F60, "Member 'APyProjectile_10157101::AdsorbCount' has a wrong offset!");
static_assert(offsetof(APyProjectile_10157101, OnAdsorbCountChangedDelegate) == 0x002F68, "Member 'APyProjectile_10157101::OnAdsorbCountChangedDelegate' has a wrong offset!");

// PythonClass PyAbility_101571.PyCue_Ability_Loop_10157101
// 0x0018 (0x0E40 - 0x0E28)
class APyCue_Ability_Loop_10157101 final : public ACue_Ability_Loop_10157101
{
public:
	float                                         AddSizePer;                                        // 0x0E28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E2C[0x4];                                      // 0x0E2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         StoneFXAsset;                                      // 0x0E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AdsorbStartAudioID;                                // 0x0E38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnRemoveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnAdsorbCountChanged(int32 NewCount);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10157101">();
	}
	static class APyCue_Ability_Loop_10157101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10157101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10157101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10157101");
static_assert(sizeof(APyCue_Ability_Loop_10157101) == 0x000E40, "Wrong size on APyCue_Ability_Loop_10157101");
static_assert(offsetof(APyCue_Ability_Loop_10157101, AddSizePer) == 0x000E28, "Member 'APyCue_Ability_Loop_10157101::AddSizePer' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10157101, StoneFXAsset) == 0x000E30, "Member 'APyCue_Ability_Loop_10157101::StoneFXAsset' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10157101, AdsorbStartAudioID) == 0x000E38, "Member 'APyCue_Ability_Loop_10157101::AdsorbStartAudioID' has a wrong offset!");

}

