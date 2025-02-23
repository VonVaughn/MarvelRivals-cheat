#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyKrakoaPortal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyKrakoaPortal.PyKrakoaPortal.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyKrakoaPortal_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyKrakoaPortal_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyKrakoaPortal_ReceiveEndPlay");
static_assert(sizeof(PyKrakoaPortal_ReceiveEndPlay) == 0x000001, "Wrong size on PyKrakoaPortal_ReceiveEndPlay");
static_assert(offsetof(PyKrakoaPortal_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PyKrakoaPortal_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// PythonFunction PyKrakoaPortal.PyKrakoaPortal.CheckTeleportFinish
// 0x0020 (0x0020 - 0x0000)
struct PyKrakoaPortal_CheckTeleportFinish final
{
public:
	class AMarvelBaseCharacter*                   Character;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target_pos;                                        // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyKrakoaPortal_CheckTeleportFinish) == 0x000008, "Wrong alignment on PyKrakoaPortal_CheckTeleportFinish");
static_assert(sizeof(PyKrakoaPortal_CheckTeleportFinish) == 0x000020, "Wrong size on PyKrakoaPortal_CheckTeleportFinish");
static_assert(offsetof(PyKrakoaPortal_CheckTeleportFinish, Character) == 0x000000, "Member 'PyKrakoaPortal_CheckTeleportFinish::Character' has a wrong offset!");
static_assert(offsetof(PyKrakoaPortal_CheckTeleportFinish, Target_pos) == 0x000008, "Member 'PyKrakoaPortal_CheckTeleportFinish::Target_pos' has a wrong offset!");

// PythonFunction PyKrakoaPortal.PyKrakoaPortal.OpenAndClose
// 0x0001 (0x0001 - 0x0000)
struct PyKrakoaPortal_OpenAndClose final
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyKrakoaPortal_OpenAndClose) == 0x000001, "Wrong alignment on PyKrakoaPortal_OpenAndClose");
static_assert(sizeof(PyKrakoaPortal_OpenAndClose) == 0x000001, "Wrong size on PyKrakoaPortal_OpenAndClose");
static_assert(offsetof(PyKrakoaPortal_OpenAndClose, Open) == 0x000000, "Member 'PyKrakoaPortal_OpenAndClose::Open' has a wrong offset!");

}

