#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyDeathMatchRuleComponent

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyDeathMatchRuleComponent.PyDeathMatchRuleComponent.OnActorDeath
// 0x0030 (0x0030 - 0x0000)
struct PyDeathMatchRuleComponent_OnActorDeath final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParameterHandle;                                   // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FGlobalEventExtraData                  ExtraData;                                         // 0x0028(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyDeathMatchRuleComponent_OnActorDeath) == 0x000008, "Wrong alignment on PyDeathMatchRuleComponent_OnActorDeath");
static_assert(sizeof(PyDeathMatchRuleComponent_OnActorDeath) == 0x000030, "Wrong size on PyDeathMatchRuleComponent_OnActorDeath");
static_assert(offsetof(PyDeathMatchRuleComponent_OnActorDeath, Killer) == 0x000000, "Member 'PyDeathMatchRuleComponent_OnActorDeath::Killer' has a wrong offset!");
static_assert(offsetof(PyDeathMatchRuleComponent_OnActorDeath, Target) == 0x000008, "Member 'PyDeathMatchRuleComponent_OnActorDeath::Target' has a wrong offset!");
static_assert(offsetof(PyDeathMatchRuleComponent_OnActorDeath, ParameterHandle) == 0x000010, "Member 'PyDeathMatchRuleComponent_OnActorDeath::ParameterHandle' has a wrong offset!");
static_assert(offsetof(PyDeathMatchRuleComponent_OnActorDeath, ExtraData) == 0x000028, "Member 'PyDeathMatchRuleComponent_OnActorDeath::ExtraData' has a wrong offset!");

// PythonFunction PyDeathMatchRuleComponent.PyCue_Buff_20060001.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_20060001_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Buff_20060001_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Buff_20060001_WhileActiveFX");
static_assert(sizeof(PyCue_Buff_20060001_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Buff_20060001_WhileActiveFX");
static_assert(offsetof(PyCue_Buff_20060001_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Buff_20060001_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_20060001_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Buff_20060001_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyDeathMatchRuleComponent.PyCue_Buff_20060001.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_20060001_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Buff_20060001_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Buff_20060001_OnRemoveFX");
static_assert(sizeof(PyCue_Buff_20060001_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Buff_20060001_OnRemoveFX");
static_assert(offsetof(PyCue_Buff_20060001_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Buff_20060001_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_20060001_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Buff_20060001_OnRemoveFX::Parameters' has a wrong offset!");

}

