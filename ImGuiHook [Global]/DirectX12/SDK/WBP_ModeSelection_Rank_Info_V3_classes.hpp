#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModeSelection_Rank_Info_V3

#include "Basic.hpp"

#include "PyWidget_RankInfo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModeSelection_Rank_Info_V3.WBP_ModeSelection_Rank_Info_V3_C
// 0x0090 (0x06C0 - 0x0630)
class UWBP_ModeSelection_Rank_Info_V3_C final : public UPyWidget_RankInfo
{
public:
	class UWidgetAnimation*                       Anim_BarState;                                     // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Bar;                                          // 0x0638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_HoverToPress;                                 // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Normal;                                       // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_NormalToHover;                                // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_RankUp;                                       // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_DanInfo;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_RankExperienceBar;                         // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PBar_ProtectionNum;                                // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PBar_RankNum;                                      // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_DanIcon_C*                    RankIcon;                                          // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_PBar_Left;                                 // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_DanIcon;                                      // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Placement_Time;                               // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RankExperienceBar;                            // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Score;                                        // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_DanIcon06_Vx_C*               WBP_Rank_DanIcon06_Vx;                             // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModeSelection_Rank_Info_V3_C">();
	}
	static class UWBP_ModeSelection_Rank_Info_V3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModeSelection_Rank_Info_V3_C>();
	}
};
static_assert(alignof(UWBP_ModeSelection_Rank_Info_V3_C) == 0x000008, "Wrong alignment on UWBP_ModeSelection_Rank_Info_V3_C");
static_assert(sizeof(UWBP_ModeSelection_Rank_Info_V3_C) == 0x0006C0, "Wrong size on UWBP_ModeSelection_Rank_Info_V3_C");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Anim_BarState) == 0x000630, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Anim_BarState' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Anim_Bar) == 0x000638, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Anim_Bar' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, NewAnimation) == 0x000640, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Anim_HoverToPress) == 0x000648, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Anim_HoverToPress' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Anim_Normal) == 0x000650, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Anim_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Anim_NormalToHover) == 0x000658, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Anim_NormalToHover' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Anim_RankUp) == 0x000660, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Anim_RankUp' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Overlay_DanInfo) == 0x000668, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Overlay_DanInfo' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Overlay_RankExperienceBar) == 0x000670, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Overlay_RankExperienceBar' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, PBar_ProtectionNum) == 0x000678, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::PBar_ProtectionNum' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, PBar_RankNum) == 0x000680, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::PBar_RankNum' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, RankIcon) == 0x000688, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::RankIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, SizeBox_PBar_Left) == 0x000690, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::SizeBox_PBar_Left' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Slot_DanIcon) == 0x000698, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Slot_DanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Text_Placement_Time) == 0x0006A0, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Text_Placement_Time' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Text_RankExperienceBar) == 0x0006A8, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Text_RankExperienceBar' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, Text_Score) == 0x0006B0, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::Text_Score' has a wrong offset!");
static_assert(offsetof(UWBP_ModeSelection_Rank_Info_V3_C, WBP_Rank_DanIcon06_Vx) == 0x0006B8, "Member 'UWBP_ModeSelection_Rank_Info_V3_C::WBP_Rank_DanIcon06_Vx' has a wrong offset!");

}

