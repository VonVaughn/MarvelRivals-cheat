#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103332

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103332.PyCue_Projectile_Loop_10333201.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10333201_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10333201_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10333201_WhileActiveFX");
static_assert(sizeof(PyCue_Projectile_Loop_10333201_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10333201_WhileActiveFX");
static_assert(offsetof(PyCue_Projectile_Loop_10333201_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10333201_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10333201_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10333201_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103332.PyCue_Projectile_Loop_10333201.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10333201_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10333201_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10333201_OnRemoveFX");
static_assert(sizeof(PyCue_Projectile_Loop_10333201_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10333201_OnRemoveFX");
static_assert(offsetof(PyCue_Projectile_Loop_10333201_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10333201_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10333201_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10333201_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_103332.PyAbility_103332.GetFirstKickAbility
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103332_GetFirstKickAbility final
{
public:
	class UMarvelGameplayAbility*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103332_GetFirstKickAbility) == 0x000008, "Wrong alignment on PyAbility_103332_GetFirstKickAbility");
static_assert(sizeof(PyAbility_103332_GetFirstKickAbility) == 0x000008, "Wrong size on PyAbility_103332_GetFirstKickAbility");
static_assert(offsetof(PyAbility_103332_GetFirstKickAbility, ReturnValue) == 0x000000, "Member 'PyAbility_103332_GetFirstKickAbility::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103332.PyUIController_103332.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103332_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103332_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103332_SetAbility");
static_assert(sizeof(PyUIController_103332_SetAbility) == 0x000010, "Wrong size on PyUIController_103332_SetAbility");
static_assert(offsetof(PyUIController_103332_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103332_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103332_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103332_SetAbility::InAbility' has a wrong offset!");

}

