#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BattlePass_Home

#include "Basic.hpp"

#include "PyWidget_BattlePass_Home_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BattlePass_Home.WBP_BattlePass_Home_C
// 0x0030 (0x06B0 - 0x0680)
class UWBP_BattlePass_Home_C final : public UPyWidget_BattlePass_Home
{
public:
	class UWBP_BattlePass_BuyBtn_Senior_C*        BuyBtn_Senior;                                     // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Diamond_BuyHover;                              // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Diamond_BuyNormal;                             // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Heros;                                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Diamond;                                   // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Diamond_Buy;                               // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattlePass_Home_C">();
	}
	static class UWBP_BattlePass_Home_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattlePass_Home_C>();
	}
};
static_assert(alignof(UWBP_BattlePass_Home_C) == 0x000008, "Wrong alignment on UWBP_BattlePass_Home_C");
static_assert(sizeof(UWBP_BattlePass_Home_C) == 0x0006B0, "Wrong size on UWBP_BattlePass_Home_C");
static_assert(offsetof(UWBP_BattlePass_Home_C, BuyBtn_Senior) == 0x000680, "Member 'UWBP_BattlePass_Home_C::BuyBtn_Senior' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Home_C, Img_Diamond_BuyHover) == 0x000688, "Member 'UWBP_BattlePass_Home_C::Img_Diamond_BuyHover' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Home_C, Img_Diamond_BuyNormal) == 0x000690, "Member 'UWBP_BattlePass_Home_C::Img_Diamond_BuyNormal' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Home_C, Img_Heros) == 0x000698, "Member 'UWBP_BattlePass_Home_C::Img_Heros' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Home_C, Overlay_Diamond) == 0x0006A0, "Member 'UWBP_BattlePass_Home_C::Overlay_Diamond' has a wrong offset!");
static_assert(offsetof(UWBP_BattlePass_Home_C, Overlay_Diamond_Buy) == 0x0006A8, "Member 'UWBP_BattlePass_Home_C::Overlay_Diamond_Buy' has a wrong offset!");

}

