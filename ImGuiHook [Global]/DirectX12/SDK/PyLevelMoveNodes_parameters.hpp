#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelMoveNodes

#include "Basic.hpp"

#include "MarvelLevel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyLevelMoveNodes.PyLevelMoveNodes.SetPlayerStateBeforeActorMove
// 0x0008 (0x0008 - 0x0000)
struct PyLevelMoveNodes_SetPlayerStateBeforeActorMove final
{
public:
	class APyGroupMoveActor*                      GroupActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelMoveNodes_SetPlayerStateBeforeActorMove) == 0x000008, "Wrong alignment on PyLevelMoveNodes_SetPlayerStateBeforeActorMove");
static_assert(sizeof(PyLevelMoveNodes_SetPlayerStateBeforeActorMove) == 0x000008, "Wrong size on PyLevelMoveNodes_SetPlayerStateBeforeActorMove");
static_assert(offsetof(PyLevelMoveNodes_SetPlayerStateBeforeActorMove, GroupActor) == 0x000000, "Member 'PyLevelMoveNodes_SetPlayerStateBeforeActorMove::GroupActor' has a wrong offset!");

// PythonFunction PyLevelMoveNodes.PyLevelMoveNodes.TriggerGroupActorMove
// 0x0020 (0x0020 - 0x0000)
struct PyLevelMoveNodes_TriggerGroupActorMove final
{
public:
	class APyGroupMoveActor*                      GroupActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         MoveSpeed;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackSpeed;                                         // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayTime;                                         // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaDegree;                                       // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitRotation;                                    // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelMoveNodes_TriggerGroupActorMove) == 0x000008, "Wrong alignment on PyLevelMoveNodes_TriggerGroupActorMove");
static_assert(sizeof(PyLevelMoveNodes_TriggerGroupActorMove) == 0x000020, "Wrong size on PyLevelMoveNodes_TriggerGroupActorMove");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMove, GroupActor) == 0x000000, "Member 'PyLevelMoveNodes_TriggerGroupActorMove::GroupActor' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMove, MoveSpeed) == 0x000008, "Member 'PyLevelMoveNodes_TriggerGroupActorMove::MoveSpeed' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMove, BackSpeed) == 0x00000C, "Member 'PyLevelMoveNodes_TriggerGroupActorMove::BackSpeed' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMove, DelayTime) == 0x000010, "Member 'PyLevelMoveNodes_TriggerGroupActorMove::DelayTime' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMove, DeltaDegree) == 0x000014, "Member 'PyLevelMoveNodes_TriggerGroupActorMove::DeltaDegree' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMove, IsInitRotation) == 0x000018, "Member 'PyLevelMoveNodes_TriggerGroupActorMove::IsInitRotation' has a wrong offset!");

// PythonFunction PyLevelMoveNodes.PyLevelMoveNodes.TriggerGroupActorMoveByTime
// 0x0020 (0x0020 - 0x0000)
struct PyLevelMoveNodes_TriggerGroupActorMoveByTime final
{
public:
	class APyGroupMoveActor*                      GroupActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         MoveTime;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackTime;                                          // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayTime;                                         // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaDegree;                                       // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitRotation;                                    // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLevelMoveNodes_TriggerGroupActorMoveByTime) == 0x000008, "Wrong alignment on PyLevelMoveNodes_TriggerGroupActorMoveByTime");
static_assert(sizeof(PyLevelMoveNodes_TriggerGroupActorMoveByTime) == 0x000020, "Wrong size on PyLevelMoveNodes_TriggerGroupActorMoveByTime");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMoveByTime, GroupActor) == 0x000000, "Member 'PyLevelMoveNodes_TriggerGroupActorMoveByTime::GroupActor' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMoveByTime, MoveTime) == 0x000008, "Member 'PyLevelMoveNodes_TriggerGroupActorMoveByTime::MoveTime' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMoveByTime, BackTime) == 0x00000C, "Member 'PyLevelMoveNodes_TriggerGroupActorMoveByTime::BackTime' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMoveByTime, DelayTime) == 0x000010, "Member 'PyLevelMoveNodes_TriggerGroupActorMoveByTime::DelayTime' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMoveByTime, DeltaDegree) == 0x000014, "Member 'PyLevelMoveNodes_TriggerGroupActorMoveByTime::DeltaDegree' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorMoveByTime, IsInitRotation) == 0x000018, "Member 'PyLevelMoveNodes_TriggerGroupActorMoveByTime::IsInitRotation' has a wrong offset!");

// PythonFunction PyLevelMoveNodes.PyLevelMoveNodes.TriggerGroupActorsMoveByTime2
// 0x0018 (0x0018 - 0x0000)
struct PyLevelMoveNodes_TriggerGroupActorsMoveByTime2 final
{
public:
	class AMarvelGameState*                       GameState;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGroupMoveActorsContainner>     GroupActorsContainner;                             // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyLevelMoveNodes_TriggerGroupActorsMoveByTime2) == 0x000008, "Wrong alignment on PyLevelMoveNodes_TriggerGroupActorsMoveByTime2");
static_assert(sizeof(PyLevelMoveNodes_TriggerGroupActorsMoveByTime2) == 0x000018, "Wrong size on PyLevelMoveNodes_TriggerGroupActorsMoveByTime2");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorsMoveByTime2, GameState) == 0x000000, "Member 'PyLevelMoveNodes_TriggerGroupActorsMoveByTime2::GameState' has a wrong offset!");
static_assert(offsetof(PyLevelMoveNodes_TriggerGroupActorsMoveByTime2, GroupActorsContainner) == 0x000008, "Member 'PyLevelMoveNodes_TriggerGroupActorsMoveByTime2::GroupActorsContainner' has a wrong offset!");

}

