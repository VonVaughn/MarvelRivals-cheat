#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_131

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_131.PyUIController_131
// 0x0008 (0x0C60 - 0x0C58)
class UPyUIController_131 : public UUIC_Ability
{
public:
	float                                         HideTipDelay;                                      // 0x0C58(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);
	void OnDestruct();
	void OnWallRunningEnd(const struct FWallRunningEndInfo& InWallRunningEndInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_131">();
	}
	static class UPyUIController_131* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_131>();
	}
};
static_assert(alignof(UPyUIController_131) == 0x000008, "Wrong alignment on UPyUIController_131");
static_assert(sizeof(UPyUIController_131) == 0x000C60, "Wrong size on UPyUIController_131");
static_assert(offsetof(UPyUIController_131, HideTipDelay) == 0x000C58, "Member 'UPyUIController_131::HideTipDelay' has a wrong offset!");

// PythonClass PyAbility_131.PyConfig_131
// 0x17A8 (0x18C0 - 0x0118)
class UPyConfig_131 : public UWallRunningAbilityConfig
{
public:
	float                                         ForwardVectorInterpSpeed;                          // 0x0118(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxStepHeightOnWall;                               // 0x011C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxStepHeightOnSprint;                             // 0x0120(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           SprintRunningTag;                                  // 0x0124(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayTimeToEndAbility_JumpFromWall;                // 0x0130(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayTimeToEndAbility_OverTopOfWall;               // 0x0134(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpDownLaunchVelocity_XY;                         // 0x0138(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpDownLaunchVelocity_Z;                          // 0x013C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpDownLaunchApplyTimeDelay;                      // 0x0140(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasFlipAnimWhenJumpOffWall;                        // 0x0144(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceNotInterpWhenGetOffWall;                      // 0x0145(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_146[0x2];                                      // 0x0146(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DownWallBlockCharacterRotTime;                     // 0x0148(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownWallInterpSpeed;                               // 0x014C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownWallInterpMaxTime;                             // 0x0150(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownWallForbidMoveDuration;                        // 0x0154(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownWallForbidMoveDuration_Back;                   // 0x0158(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DownWallDashDelayTime;                             // 0x015C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDashAbilityInfo                       DownWallDashInfo;                                  // 0x0160(0x0B70)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                          UseVehicleLikeRotation;                            // 0x0CD0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CD1[0x3];                                      // 0x0CD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxAngleCanVehicleRotate;                          // 0x0CD4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDistanceToCross_Inner;                          // 0x0CD8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StandPointDistance_Inner;                          // 0x0CDC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransformTotalTime_Inner;                          // 0x0CE0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinAngleDiffrence_Inner;                           // 0x0CE4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngleDiffrence_Inner;                           // 0x0CE8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDistanceToCross_Outer;                          // 0x0CEC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StandPointDistance_Outer;                          // 0x0CF0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransformTotalTime_Outer;                          // 0x0CF4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinAngleDiffrence_Outer;                           // 0x0CF8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngleDiffrence_Outer;                           // 0x0CFC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngleCanCross_Outer;                            // 0x0D00(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceToEdge_Outer;                              // 0x0D04(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxTiltAngleAtTopOfWall;                           // 0x0D08(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinDistanceToTopOfWall;                            // 0x0D0C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ForwardSpeedAfterDashTopOfWall;                    // 0x0D10(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D14[0x4];                                      // 0x0D14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDashAbilityInfo                       ReachTopOfWallDashInfo;                            // 0x0D18(0x0B70)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UCameraInterp*                          CameraInterpNormal;                                // 0x1888(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraInterp*                          CameraInterpFromSwinging;                          // 0x1890(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>         CameraShakeClassFromSwinging;                      // 0x1898(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraInterp*                          CameraInterpForSprintRunning;                      // 0x18A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLockCameraWhenOuterCross;                        // 0x18A8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsCameraDecoupledFromCapsule;                      // 0x18A9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18AA[0x2];                                     // 0x18AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraInterpSpeed_Outer;                           // 0x18AC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraInterp*                          CameraInterp_Outer;                                // 0x18B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DebugDrawOuterCrossCamera;                         // 0x18B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_131">();
	}
	static class UPyConfig_131* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_131>();
	}
};
static_assert(alignof(UPyConfig_131) == 0x000008, "Wrong alignment on UPyConfig_131");
static_assert(sizeof(UPyConfig_131) == 0x0018C0, "Wrong size on UPyConfig_131");
static_assert(offsetof(UPyConfig_131, ForwardVectorInterpSpeed) == 0x000118, "Member 'UPyConfig_131::ForwardVectorInterpSpeed' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxStepHeightOnWall) == 0x00011C, "Member 'UPyConfig_131::MaxStepHeightOnWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxStepHeightOnSprint) == 0x000120, "Member 'UPyConfig_131::MaxStepHeightOnSprint' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, SprintRunningTag) == 0x000124, "Member 'UPyConfig_131::SprintRunningTag' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DelayTimeToEndAbility_JumpFromWall) == 0x000130, "Member 'UPyConfig_131::DelayTimeToEndAbility_JumpFromWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DelayTimeToEndAbility_OverTopOfWall) == 0x000134, "Member 'UPyConfig_131::DelayTimeToEndAbility_OverTopOfWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, JumpDownLaunchVelocity_XY) == 0x000138, "Member 'UPyConfig_131::JumpDownLaunchVelocity_XY' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, JumpDownLaunchVelocity_Z) == 0x00013C, "Member 'UPyConfig_131::JumpDownLaunchVelocity_Z' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, JumpDownLaunchApplyTimeDelay) == 0x000140, "Member 'UPyConfig_131::JumpDownLaunchApplyTimeDelay' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, HasFlipAnimWhenJumpOffWall) == 0x000144, "Member 'UPyConfig_131::HasFlipAnimWhenJumpOffWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, ForceNotInterpWhenGetOffWall) == 0x000145, "Member 'UPyConfig_131::ForceNotInterpWhenGetOffWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallBlockCharacterRotTime) == 0x000148, "Member 'UPyConfig_131::DownWallBlockCharacterRotTime' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallInterpSpeed) == 0x00014C, "Member 'UPyConfig_131::DownWallInterpSpeed' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallInterpMaxTime) == 0x000150, "Member 'UPyConfig_131::DownWallInterpMaxTime' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallForbidMoveDuration) == 0x000154, "Member 'UPyConfig_131::DownWallForbidMoveDuration' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallForbidMoveDuration_Back) == 0x000158, "Member 'UPyConfig_131::DownWallForbidMoveDuration_Back' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallDashDelayTime) == 0x00015C, "Member 'UPyConfig_131::DownWallDashDelayTime' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DownWallDashInfo) == 0x000160, "Member 'UPyConfig_131::DownWallDashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, UseVehicleLikeRotation) == 0x000CD0, "Member 'UPyConfig_131::UseVehicleLikeRotation' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxAngleCanVehicleRotate) == 0x000CD4, "Member 'UPyConfig_131::MaxAngleCanVehicleRotate' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxDistanceToCross_Inner) == 0x000CD8, "Member 'UPyConfig_131::MaxDistanceToCross_Inner' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, StandPointDistance_Inner) == 0x000CDC, "Member 'UPyConfig_131::StandPointDistance_Inner' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, TransformTotalTime_Inner) == 0x000CE0, "Member 'UPyConfig_131::TransformTotalTime_Inner' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MinAngleDiffrence_Inner) == 0x000CE4, "Member 'UPyConfig_131::MinAngleDiffrence_Inner' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxAngleDiffrence_Inner) == 0x000CE8, "Member 'UPyConfig_131::MaxAngleDiffrence_Inner' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxDistanceToCross_Outer) == 0x000CEC, "Member 'UPyConfig_131::MaxDistanceToCross_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, StandPointDistance_Outer) == 0x000CF0, "Member 'UPyConfig_131::StandPointDistance_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, TransformTotalTime_Outer) == 0x000CF4, "Member 'UPyConfig_131::TransformTotalTime_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MinAngleDiffrence_Outer) == 0x000CF8, "Member 'UPyConfig_131::MinAngleDiffrence_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxAngleDiffrence_Outer) == 0x000CFC, "Member 'UPyConfig_131::MaxAngleDiffrence_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxAngleCanCross_Outer) == 0x000D00, "Member 'UPyConfig_131::MaxAngleCanCross_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DistanceToEdge_Outer) == 0x000D04, "Member 'UPyConfig_131::DistanceToEdge_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MaxTiltAngleAtTopOfWall) == 0x000D08, "Member 'UPyConfig_131::MaxTiltAngleAtTopOfWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, MinDistanceToTopOfWall) == 0x000D0C, "Member 'UPyConfig_131::MinDistanceToTopOfWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, ForwardSpeedAfterDashTopOfWall) == 0x000D10, "Member 'UPyConfig_131::ForwardSpeedAfterDashTopOfWall' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, ReachTopOfWallDashInfo) == 0x000D18, "Member 'UPyConfig_131::ReachTopOfWallDashInfo' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, CameraInterpNormal) == 0x001888, "Member 'UPyConfig_131::CameraInterpNormal' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, CameraInterpFromSwinging) == 0x001890, "Member 'UPyConfig_131::CameraInterpFromSwinging' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, CameraShakeClassFromSwinging) == 0x001898, "Member 'UPyConfig_131::CameraShakeClassFromSwinging' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, CameraInterpForSprintRunning) == 0x0018A0, "Member 'UPyConfig_131::CameraInterpForSprintRunning' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, IsLockCameraWhenOuterCross) == 0x0018A8, "Member 'UPyConfig_131::IsLockCameraWhenOuterCross' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, IsCameraDecoupledFromCapsule) == 0x0018A9, "Member 'UPyConfig_131::IsCameraDecoupledFromCapsule' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, CameraInterpSpeed_Outer) == 0x0018AC, "Member 'UPyConfig_131::CameraInterpSpeed_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, CameraInterp_Outer) == 0x0018B0, "Member 'UPyConfig_131::CameraInterp_Outer' has a wrong offset!");
static_assert(offsetof(UPyConfig_131, DebugDrawOuterCrossCamera) == 0x0018B8, "Member 'UPyConfig_131::DebugDrawOuterCrossCamera' has a wrong offset!");

// PythonClass PyAbility_131.PyCue_AbilityLoop_13101
// 0x0000 (0x0E00 - 0x0E00)
class APyCue_AbilityLoop_13101 : public AMarvelCueNotify_Ability
{
public:
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnSprintRunningStateChange(bool IsSprintRunning);
	void OnWallRunningEnd(const struct FWallRunningEndInfo& InWallRunningEndInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_AbilityLoop_13101">();
	}
	static class APyCue_AbilityLoop_13101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_AbilityLoop_13101>();
	}
};
static_assert(alignof(APyCue_AbilityLoop_13101) == 0x000008, "Wrong alignment on APyCue_AbilityLoop_13101");
static_assert(sizeof(APyCue_AbilityLoop_13101) == 0x000E00, "Wrong size on APyCue_AbilityLoop_13101");

// PythonClass PyAbility_131.PyAbility_131
// 0x0000 (0x25D8 - 0x25D8)
class UPyAbility_131 : public UWallRunningAbility
{
public:
	void ResetDefault();
	void BeginPlay();
	bool CanActivate();
	float ConstructEventData();
	void ExtractInfoFromEventData(float EventMagnitude);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_OnTick(float DeltaTime);
	bool K2_OnWallRunningEnd(const struct FWallRunningEndInfo& InWallRunningEndInfo);
	void OnDashFinish_DownWall(EDashStopReason Reason);
	void OnDashFinish_ReachTop(EDashStopReason Reason);
	void SetWallRunParams();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_131">();
	}
	static class UPyAbility_131* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_131>();
	}
};
static_assert(alignof(UPyAbility_131) == 0x000008, "Wrong alignment on UPyAbility_131");
static_assert(sizeof(UPyAbility_131) == 0x0025D8, "Wrong size on UPyAbility_131");

}

