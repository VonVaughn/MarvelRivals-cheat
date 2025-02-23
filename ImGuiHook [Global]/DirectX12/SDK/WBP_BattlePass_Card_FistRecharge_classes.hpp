#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattlePass_Card_FistRecharge

#include "Basic.hpp"

#include "PyWidget_BattlePass_Recharge_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattlePass_Card_FistRecharge.WBP_BattlePass_Card_FistRecharge_C
// 0x0028 (0x0620 - 0x05F8)
class UWBP_BattlePass_Card_FistRecharge_C final : public UPyWidget_BattlePass_Recharge_InfoCard_BaseItem
{
public:
	class UMarvelButton*                          Btn_Card_Item;                                     // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Quality;                                       // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Item_Info;                                    // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Item_Title;                                   // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_ImageMaskCut_C*             WBP_Common_ImageMaskCut;                           // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattlePass_Card_FistRecharge_C">();
	}
	static class UWBP_BattlePass_Card_FistRecharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattlePass_Card_FistRecharge_C>();
	}
};
static_assert(alignof(UWBP_BattlePass_Card_FistRecharge_C) == 0x000008, "Wrong alignment on UWBP_BattlePass_Card_FistRecharge_C");
static_assert(sizeof(UWBP_BattlePass_Card_FistRecharge_C) == 0x000620, "Wrong size on UWBP_BattlePass_Card_FistRecharge_C");
static_assert(offsetof(UWBP_BattlePass_Card_FistRecharge_C, Btn_Card_Item) == 0x0005F8, "Member 'UWBP_BattlePass_Card_FistRecharge_C::Btn_Card_Item' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Card_FistRecharge_C, Img_Quality) == 0x000600, "Member 'UWBP_BattlePass_Card_FistRecharge_C::Img_Quality' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Card_FistRecharge_C, Text_Item_Info) == 0x000608, "Member 'UWBP_BattlePass_Card_FistRecharge_C::Text_Item_Info' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Card_FistRecharge_C, Text_Item_Title) == 0x000610, "Member 'UWBP_BattlePass_Card_FistRecharge_C::Text_Item_Title' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Card_FistRecharge_C, WBP_Common_ImageMaskCut) == 0x000618, "Member 'UWBP_BattlePass_Card_FistRecharge_C::WBP_Common_ImageMaskCut' has a wrong offset!");

}

