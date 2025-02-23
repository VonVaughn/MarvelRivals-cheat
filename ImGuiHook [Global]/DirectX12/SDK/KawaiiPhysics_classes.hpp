#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KawaiiPhysics

#include "Basic.hpp"

#include "KawaiiPhysics_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class KawaiiPhysics.KawaiiPhysicsBoneConstraintsDataAsset
// 0x0010 (0x0048 - 0x0038)
class UKawaiiPhysicsBoneConstraintsDataAsset final : public UDataAsset
{
public:
	TArray<struct FModifyBoneConstraintData>      BoneConstraintsData;                               // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysicsBoneConstraintsDataAsset">();
	}
	static class UKawaiiPhysicsBoneConstraintsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysicsBoneConstraintsDataAsset>();
	}
};
static_assert(alignof(UKawaiiPhysicsBoneConstraintsDataAsset) == 0x000008, "Wrong alignment on UKawaiiPhysicsBoneConstraintsDataAsset");
static_assert(sizeof(UKawaiiPhysicsBoneConstraintsDataAsset) == 0x000048, "Wrong size on UKawaiiPhysicsBoneConstraintsDataAsset");
static_assert(offsetof(UKawaiiPhysicsBoneConstraintsDataAsset, BoneConstraintsData) == 0x000038, "Member 'UKawaiiPhysicsBoneConstraintsDataAsset::BoneConstraintsData' has a wrong offset!");

// Class KawaiiPhysics.KawaiiPhysicsLibrary
// 0x0000 (0x0030 - 0x0030)
class UKawaiiPhysicsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FKawaiiPhysicsReference ConvertToKawaiiPhysics(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToKawaiiPhysicsPure(const struct FAnimNodeReference& Node, struct FKawaiiPhysicsReference* KawaiiPhysics, bool* Result);
	static bool GetAllowWorldCollision(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetDummyBoneLength(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static bool GetEnableWind(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static struct FVector GetGravity(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static bool GetNeedWarmUp(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static struct FKawaiiPhysicsSettings GetPhysicsSettings(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetTeleportDistanceThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetTeleportRotationThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static float GetWindScale(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static struct FKawaiiPhysicsReference ResetDynamics(const struct FKawaiiPhysicsReference& KawaiiPhysics);
	static struct FKawaiiPhysicsReference SetAllowWorldCollision(const struct FKawaiiPhysicsReference& KawaiiPhysics, bool AllowWorldCollision);
	static struct FKawaiiPhysicsReference SetDummyBoneLength(const struct FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);
	static struct FKawaiiPhysicsReference SetEnableWind(const struct FKawaiiPhysicsReference& KawaiiPhysics, bool EnableWind);
	static struct FKawaiiPhysicsReference SetGravity(const struct FKawaiiPhysicsReference& KawaiiPhysics, const struct FVector& Gravity);
	static struct FKawaiiPhysicsReference SetNeedWarmUp(const struct FKawaiiPhysicsReference& KawaiiPhysics, bool NeedWarmUp);
	static struct FKawaiiPhysicsReference SetPhysicsSettings(const struct FKawaiiPhysicsReference& KawaiiPhysics, struct FKawaiiPhysicsSettings& PhysicsSettings);
	static struct FKawaiiPhysicsReference SetTeleportDistanceThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold);
	static struct FKawaiiPhysicsReference SetTeleportRotationThreshold(const struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold);
	static struct FKawaiiPhysicsReference SetWindScale(const struct FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysicsLibrary">();
	}
	static class UKawaiiPhysicsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysicsLibrary>();
	}
};
static_assert(alignof(UKawaiiPhysicsLibrary) == 0x000008, "Wrong alignment on UKawaiiPhysicsLibrary");
static_assert(sizeof(UKawaiiPhysicsLibrary) == 0x000030, "Wrong size on UKawaiiPhysicsLibrary");

// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// 0x0030 (0x0068 - 0x0038)
class UKawaiiPhysicsLimitsDataAsset final : public UDataAsset
{
public:
	TArray<struct FSphericalLimit>                SphericalLimits;                                   // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCapsuleLimit>                  CapsuleLimits;                                     // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlanarLimit>                   PlanarLimits;                                      // 0x0058(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KawaiiPhysicsLimitsDataAsset">();
	}
	static class UKawaiiPhysicsLimitsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKawaiiPhysicsLimitsDataAsset>();
	}
};
static_assert(alignof(UKawaiiPhysicsLimitsDataAsset) == 0x000008, "Wrong alignment on UKawaiiPhysicsLimitsDataAsset");
static_assert(sizeof(UKawaiiPhysicsLimitsDataAsset) == 0x000068, "Wrong size on UKawaiiPhysicsLimitsDataAsset");
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, SphericalLimits) == 0x000038, "Member 'UKawaiiPhysicsLimitsDataAsset::SphericalLimits' has a wrong offset!");
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits) == 0x000048, "Member 'UKawaiiPhysicsLimitsDataAsset::CapsuleLimits' has a wrong offset!");
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, PlanarLimits) == 0x000058, "Member 'UKawaiiPhysicsLimitsDataAsset::PlanarLimits' has a wrong offset!");

}

