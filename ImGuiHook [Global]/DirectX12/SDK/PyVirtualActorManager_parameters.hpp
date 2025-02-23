#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyVirtualActorManager

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyVirtualActorManager.PyVirtualActorManager.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PyVirtualActorManager_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyVirtualActorManager_ReceiveEndPlay) == 0x000001, "Wrong alignment on PyVirtualActorManager_ReceiveEndPlay");
static_assert(sizeof(PyVirtualActorManager_ReceiveEndPlay) == 0x000001, "Wrong size on PyVirtualActorManager_ReceiveEndPlay");
static_assert(offsetof(PyVirtualActorManager_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PyVirtualActorManager_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

