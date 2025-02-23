#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Card_SignUp

#include "Basic.hpp"

#include "PyWidget_LeagueMainItems_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Card_SignUp.WBP_League_Card_SignUp_C
// 0x0010 (0x0688 - 0x0678)
class UWBP_League_Card_SignUp_C final : public UPyWidget_LeagueMain_SignUpCard
{
public:
	class UMarvelTextBlock*                       Text_NoParticipate;                                // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Registering;                                  // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Card_SignUp_C">();
	}
	static class UWBP_League_Card_SignUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Card_SignUp_C>();
	}
};
static_assert(alignof(UWBP_League_Card_SignUp_C) == 0x000008, "Wrong alignment on UWBP_League_Card_SignUp_C");
static_assert(sizeof(UWBP_League_Card_SignUp_C) == 0x000688, "Wrong size on UWBP_League_Card_SignUp_C");
static_assert(offsetof(UWBP_League_Card_SignUp_C, Text_NoParticipate) == 0x000678, "Member 'UWBP_League_Card_SignUp_C::Text_NoParticipate' has a wrong offset!");
static_assert(offsetof(UWBP_League_Card_SignUp_C, Text_Registering) == 0x000680, "Member 'UWBP_League_Card_SignUp_C::Text_Registering' has a wrong offset!");

}

