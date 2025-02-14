#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Rank_DanIcon

#include "Basic.hpp"

#include "PyWidget_RankInfo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Rank_DanIcon.WBP_Rank_DanIcon_C
// 0x0078 (0x0718 - 0x06A0)
class UWBP_Rank_DanIcon_C final : public UPyWidget_RankIcon
{
public:
	class UWidgetAnimation*                       Anim_Rankdrop;                                     // 0x06A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankUpBeginDisappear;                         // 0x06A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankFlow;                                     // 0x06B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankDownEnd;                                  // 0x06B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankDownBegin;                                // 0x06C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankUpEnd;                                    // 0x06C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankUpBegin;                                  // 0x06D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_LowerRankBg;                                   // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       Img_Rank_DanIcon;                                  // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       Img_Rank_DanIcon_Glow1;                            // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       Img_Rank_DanIcon_Glow2;                            // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       Img_Rank_Flow;                                     // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_LowerRank;                                 // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Rank_DanIcon;                              // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_LowerRank;                                    // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Rank_DanIcon_C">();
	}
	static class UWBP_Rank_DanIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Rank_DanIcon_C>();
	}
};
static_assert(alignof(UWBP_Rank_DanIcon_C) == 0x000008, "Wrong alignment on UWBP_Rank_DanIcon_C");
static_assert(sizeof(UWBP_Rank_DanIcon_C) == 0x000718, "Wrong size on UWBP_Rank_DanIcon_C");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_Rankdrop) == 0x0006A0, "Member 'UWBP_Rank_DanIcon_C::Anim_Rankdrop' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_RankUpBeginDisappear) == 0x0006A8, "Member 'UWBP_Rank_DanIcon_C::Anim_RankUpBeginDisappear' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_RankFlow) == 0x0006B0, "Member 'UWBP_Rank_DanIcon_C::Anim_RankFlow' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_RankDownEnd) == 0x0006B8, "Member 'UWBP_Rank_DanIcon_C::Anim_RankDownEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_RankDownBegin) == 0x0006C0, "Member 'UWBP_Rank_DanIcon_C::Anim_RankDownBegin' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_RankUpEnd) == 0x0006C8, "Member 'UWBP_Rank_DanIcon_C::Anim_RankUpEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Anim_RankUpBegin) == 0x0006D0, "Member 'UWBP_Rank_DanIcon_C::Anim_RankUpBegin' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Img_LowerRankBg) == 0x0006D8, "Member 'UWBP_Rank_DanIcon_C::Img_LowerRankBg' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Img_Rank_DanIcon) == 0x0006E0, "Member 'UWBP_Rank_DanIcon_C::Img_Rank_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Img_Rank_DanIcon_Glow1) == 0x0006E8, "Member 'UWBP_Rank_DanIcon_C::Img_Rank_DanIcon_Glow1' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Img_Rank_DanIcon_Glow2) == 0x0006F0, "Member 'UWBP_Rank_DanIcon_C::Img_Rank_DanIcon_Glow2' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Img_Rank_Flow) == 0x0006F8, "Member 'UWBP_Rank_DanIcon_C::Img_Rank_Flow' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Overlay_LowerRank) == 0x000700, "Member 'UWBP_Rank_DanIcon_C::Overlay_LowerRank' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, SizeBox_Rank_DanIcon) == 0x000708, "Member 'UWBP_Rank_DanIcon_C::SizeBox_Rank_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Rank_DanIcon_C, Text_LowerRank) == 0x000710, "Member 'UWBP_Rank_DanIcon_C::Text_LowerRank' has a wrong offset!");

}

