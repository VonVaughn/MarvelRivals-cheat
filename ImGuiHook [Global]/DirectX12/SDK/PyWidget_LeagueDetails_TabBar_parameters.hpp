#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LeagueDetails_TabBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_LeagueDetails_TabBar.PyWidget_LeagueDetails_TabBar.OnMouseWheel
// 0x0178 (0x0178 - 0x0000)
struct PyWidget_LeagueDetails_TabBar_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0080)(ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B8(0x00C0)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PyWidget_LeagueDetails_TabBar_OnMouseWheel) == 0x000008, "Wrong alignment on PyWidget_LeagueDetails_TabBar_OnMouseWheel");
static_assert(sizeof(PyWidget_LeagueDetails_TabBar_OnMouseWheel) == 0x000178, "Wrong size on PyWidget_LeagueDetails_TabBar_OnMouseWheel");
static_assert(offsetof(PyWidget_LeagueDetails_TabBar_OnMouseWheel, MyGeometry) == 0x000000, "Member 'PyWidget_LeagueDetails_TabBar_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_LeagueDetails_TabBar_OnMouseWheel, MouseEvent) == 0x000038, "Member 'PyWidget_LeagueDetails_TabBar_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(PyWidget_LeagueDetails_TabBar_OnMouseWheel, ReturnValue) == 0x0000B8, "Member 'PyWidget_LeagueDetails_TabBar_OnMouseWheel::ReturnValue' has a wrong offset!");

// DelegateFunction PyWidget_LeagueDetails_TabBar.PyWidget_LeagueDetails_TabBar._focus_to_tab_widget__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature final
{
public:
	int32                                         Tab_index;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature");
static_assert(sizeof(PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature) == 0x000004, "Wrong size on PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature");
static_assert(offsetof(PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature, Tab_index) == 0x000000, "Member 'PyWidget_LeagueDetails_TabBar__focus_to_tab_widget__DelegateSignature::Tab_index' has a wrong offset!");

}

