#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Squad_SwitchHeroBtn

#include "Basic.hpp"

#include "PyWidget_Squad_MainPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Squad_SwitchHeroBtn.WBP_Squad_SwitchHeroBtn_C
// 0x0030 (0x0660 - 0x0630)
class UWBP_Squad_SwitchHeroBtn_C final : public UPyWidget_Squad_SwitchHeroBtn
{
public:
	class UMarvelButton*                          Btn_Switch_Hero;                                   // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Btn_Switch_Hero_Hover;                             // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Btn_Switch_Hero_Noamrl;                            // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Btn_Switch_Hero_Press;                             // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Switch_Hero_Icon;                              // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Btn;                                          // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Squad_SwitchHeroBtn_C">();
	}
	static class UWBP_Squad_SwitchHeroBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Squad_SwitchHeroBtn_C>();
	}
};
static_assert(alignof(UWBP_Squad_SwitchHeroBtn_C) == 0x000008, "Wrong alignment on UWBP_Squad_SwitchHeroBtn_C");
static_assert(sizeof(UWBP_Squad_SwitchHeroBtn_C) == 0x000660, "Wrong size on UWBP_Squad_SwitchHeroBtn_C");
static_assert(offsetof(UWBP_Squad_SwitchHeroBtn_C, Btn_Switch_Hero) == 0x000630, "Member 'UWBP_Squad_SwitchHeroBtn_C::Btn_Switch_Hero' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_SwitchHeroBtn_C, Btn_Switch_Hero_Hover) == 0x000638, "Member 'UWBP_Squad_SwitchHeroBtn_C::Btn_Switch_Hero_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_SwitchHeroBtn_C, Btn_Switch_Hero_Noamrl) == 0x000640, "Member 'UWBP_Squad_SwitchHeroBtn_C::Btn_Switch_Hero_Noamrl' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_SwitchHeroBtn_C, Btn_Switch_Hero_Press) == 0x000648, "Member 'UWBP_Squad_SwitchHeroBtn_C::Btn_Switch_Hero_Press' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_SwitchHeroBtn_C, Img_Switch_Hero_Icon) == 0x000650, "Member 'UWBP_Squad_SwitchHeroBtn_C::Img_Switch_Hero_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Squad_SwitchHeroBtn_C, Text_Btn) == 0x000658, "Member 'UWBP_Squad_SwitchHeroBtn_C::Text_Btn' has a wrong offset!");

}

