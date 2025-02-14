#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_RewardPreviewUnit

#include "Basic.hpp"

#include "PyWidget_LeagueMRC_RewardPreviewPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_RewardPreviewUnit.WBP_League_RewardPreviewUnit_C
// 0x0048 (0x05F0 - 0x05A8)
class UWBP_League_RewardPreviewUnit_C final : public UPyWidget_LeagueMRC_RewardPreviewUnit
{
public:
	class UWBP_League_RewardBouns_C*              Btn_RewardBouns;                                   // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_ChampionCup;                                  // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_OtherCup;                                     // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_CupBg;                                         // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Cup_Champion;                             // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Cup_Other;                                // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_EventRewards;                                 // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTileView*                        TileView_Reward;                                   // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_RankingResultTitle_C*       WBP_League_RankingResultTitle;                     // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_RewardPreviewUnit_C">();
	}
	static class UWBP_League_RewardPreviewUnit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_RewardPreviewUnit_C>();
	}
};
static_assert(alignof(UWBP_League_RewardPreviewUnit_C) == 0x000008, "Wrong alignment on UWBP_League_RewardPreviewUnit_C");
static_assert(sizeof(UWBP_League_RewardPreviewUnit_C) == 0x0005F0, "Wrong size on UWBP_League_RewardPreviewUnit_C");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, Btn_RewardBouns) == 0x0005A8, "Member 'UWBP_League_RewardPreviewUnit_C::Btn_RewardBouns' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, Icon_ChampionCup) == 0x0005B0, "Member 'UWBP_League_RewardPreviewUnit_C::Icon_ChampionCup' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, Icon_OtherCup) == 0x0005B8, "Member 'UWBP_League_RewardPreviewUnit_C::Icon_OtherCup' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, Img_CupBg) == 0x0005C0, "Member 'UWBP_League_RewardPreviewUnit_C::Img_CupBg' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, ScaleBox_Cup_Champion) == 0x0005C8, "Member 'UWBP_League_RewardPreviewUnit_C::ScaleBox_Cup_Champion' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, ScaleBox_Cup_Other) == 0x0005D0, "Member 'UWBP_League_RewardPreviewUnit_C::ScaleBox_Cup_Other' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, Text_EventRewards) == 0x0005D8, "Member 'UWBP_League_RewardPreviewUnit_C::Text_EventRewards' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, TileView_Reward) == 0x0005E0, "Member 'UWBP_League_RewardPreviewUnit_C::TileView_Reward' has a wrong offset!");
static_assert(offsetof(UWBP_League_RewardPreviewUnit_C, WBP_League_RankingResultTitle) == 0x0005E8, "Member 'UWBP_League_RewardPreviewUnit_C::WBP_League_RankingResultTitle' has a wrong offset!");

}

