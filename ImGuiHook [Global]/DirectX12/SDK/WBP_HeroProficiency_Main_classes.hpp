#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeroProficiency_Main

#include "Basic.hpp"

#include "PyWidget_HeroSystem_Proficiency_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeroProficiency_Main.WBP_HeroProficiency_Main_C
// 0x0288 (0x0900 - 0x0678)
class UWBP_HeroProficiency_Main_C final : public UPyWidget_HeroSystem_Proficiency
{
public:
	class UWidgetAnimation*                       Anim_Spray_Refresh;                                // 0x0678(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Refresh;                                      // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_CurrentProficiencyBar;                        // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BarUpTo5;                                     // 0x0690(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BarUpTo4;                                     // 0x0698(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BarUpTo3;                                     // 0x06A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BarUpTo2;                                     // 0x06A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           Bar_ProficiencyNum;                                // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Bar_UpTo2;                                         // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Bar_UpTo3;                                         // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Bar_UpTo4;                                         // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Bar_UpTo5;                                         // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Bg_1;                                              // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Bg_2;                                              // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           BG1_Flow;                                          // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           BG2_Flow;                                          // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           BG_In;                                             // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           BG_Thin_In;                                        // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                Btn_Equip;                                         // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Icon_Dark_C*            Btn_Explanation;                                   // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_Tag_C*             Btn_Level;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_Tag_C*             Btn_Reward;                                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_LevelRewardExplain;                           // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  HeroHeadItem_0;                                    // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  HeroHeadItem_1;                                    // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  HeroHeadItem_2;                                    // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_ProficiencyBadge;                             // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_ProficiencyBadge_Full;                        // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_SmallBadge_Full;                              // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Badge;                                         // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_KillNotification;                           // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroHead;                                      // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HeroHeadBg;                                    // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ImageMaskCut_C*                    Img_HeroLogo;                                      // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Line_L;                                        // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Line_R;                                        // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Proficiency_L;                                 // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Proficiency_R;                                 // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_ProficiencyBg;                                 // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RepeatableTaskTipsBg;                          // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_spray;                                         // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Triangle_Vx;                                   // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_Left;                                  // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                KeyWidgetBP_Right;                                 // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  KillTipItem_0;                                     // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  KillTipItem_1;                                     // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  KillTipItem_2;                                     // 0x07E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Content;                                   // 0x07F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Content_Level;                             // 0x07F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Content_Reward;                            // 0x0800(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Empty;                                     // 0x0808(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Level_Full;                                // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Level_Normal;                              // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Title;                                     // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HeroHead;                                  // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         SizeBox_KillNotification;                          // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  SprayItem_0;                                       // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  SprayItem_1;                                       // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  SprayItem_2;                                       // 0x0848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_BadgeName;                                    // 0x0850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ProficiencyName;                              // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ProficiencyName_Full;                         // 0x0860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_ProficiencyNum;                               // 0x0868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ProficiencyNum_Full;                          // 0x0870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_RepeatableTaskTips;                           // 0x0878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_ProficiencyList;                              // 0x0880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Battle_HeroHead_C*                 WBP_HeroHead;                                      // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_HeroBigPortrait_C*          WBP_HeroPortrait;                                  // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_List_Item_C*       WBP_HeroProficiency_List_Item_0;                   // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_List_Item_C*       WBP_HeroProficiency_List_Item_1;                   // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_List_Item_C*       WBP_HeroProficiency_List_Item_2;                   // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_List_Item_C*       WBP_HeroProficiency_List_Item_3;                   // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ImageMaskCut_C*                    WBP_MaskCut_HeroProficiency;                       // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_RewardBadgeUnit_C* WBP_RewardBadge1;                                  // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_RewardBadgeUnit_C* WBP_RewardBadge2;                                  // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_RewardBadgeUnit_C* WBP_RewardBadge3;                                  // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_RewardBadgeUnit_C* WBP_RewardBadge4;                                  // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HeroProficiency_RewardBadgeUnit_C* WBP_RewardBadge5;                                  // 0x08E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_HeroAvatar;                                // 0x08E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_KillNotification;                          // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Spray;                                     // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeroProficiency_Main_C">();
	}
	static class UWBP_HeroProficiency_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeroProficiency_Main_C>();
	}
};
static_assert(alignof(UWBP_HeroProficiency_Main_C) == 0x000008, "Wrong alignment on UWBP_HeroProficiency_Main_C");
static_assert(sizeof(UWBP_HeroProficiency_Main_C) == 0x000900, "Wrong size on UWBP_HeroProficiency_Main_C");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_Spray_Refresh) == 0x000678, "Member 'UWBP_HeroProficiency_Main_C::Anim_Spray_Refresh' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_Refresh) == 0x000680, "Member 'UWBP_HeroProficiency_Main_C::Anim_Refresh' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_CurrentProficiencyBar) == 0x000688, "Member 'UWBP_HeroProficiency_Main_C::Anim_CurrentProficiencyBar' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_BarUpTo5) == 0x000690, "Member 'UWBP_HeroProficiency_Main_C::Anim_BarUpTo5' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_BarUpTo4) == 0x000698, "Member 'UWBP_HeroProficiency_Main_C::Anim_BarUpTo4' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_BarUpTo3) == 0x0006A0, "Member 'UWBP_HeroProficiency_Main_C::Anim_BarUpTo3' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Anim_BarUpTo2) == 0x0006A8, "Member 'UWBP_HeroProficiency_Main_C::Anim_BarUpTo2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bar_ProficiencyNum) == 0x0006B0, "Member 'UWBP_HeroProficiency_Main_C::Bar_ProficiencyNum' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bar_UpTo2) == 0x0006B8, "Member 'UWBP_HeroProficiency_Main_C::Bar_UpTo2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bar_UpTo3) == 0x0006C0, "Member 'UWBP_HeroProficiency_Main_C::Bar_UpTo3' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bar_UpTo4) == 0x0006C8, "Member 'UWBP_HeroProficiency_Main_C::Bar_UpTo4' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bar_UpTo5) == 0x0006D0, "Member 'UWBP_HeroProficiency_Main_C::Bar_UpTo5' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bg_1) == 0x0006D8, "Member 'UWBP_HeroProficiency_Main_C::Bg_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Bg_2) == 0x0006E0, "Member 'UWBP_HeroProficiency_Main_C::Bg_2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, BG1_Flow) == 0x0006E8, "Member 'UWBP_HeroProficiency_Main_C::BG1_Flow' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, BG2_Flow) == 0x0006F0, "Member 'UWBP_HeroProficiency_Main_C::BG2_Flow' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, BG_In) == 0x0006F8, "Member 'UWBP_HeroProficiency_Main_C::BG_In' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, BG_Thin_In) == 0x000700, "Member 'UWBP_HeroProficiency_Main_C::BG_Thin_In' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Btn_Equip) == 0x000708, "Member 'UWBP_HeroProficiency_Main_C::Btn_Equip' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Btn_Explanation) == 0x000710, "Member 'UWBP_HeroProficiency_Main_C::Btn_Explanation' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Btn_Level) == 0x000718, "Member 'UWBP_HeroProficiency_Main_C::Btn_Level' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Btn_Reward) == 0x000720, "Member 'UWBP_HeroProficiency_Main_C::Btn_Reward' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, HBox_LevelRewardExplain) == 0x000728, "Member 'UWBP_HeroProficiency_Main_C::HBox_LevelRewardExplain' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, HeroHeadItem_0) == 0x000730, "Member 'UWBP_HeroProficiency_Main_C::HeroHeadItem_0' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, HeroHeadItem_1) == 0x000738, "Member 'UWBP_HeroProficiency_Main_C::HeroHeadItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, HeroHeadItem_2) == 0x000740, "Member 'UWBP_HeroProficiency_Main_C::HeroHeadItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Icon_ProficiencyBadge) == 0x000748, "Member 'UWBP_HeroProficiency_Main_C::Icon_ProficiencyBadge' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Icon_ProficiencyBadge_Full) == 0x000750, "Member 'UWBP_HeroProficiency_Main_C::Icon_ProficiencyBadge_Full' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Icon_SmallBadge_Full) == 0x000758, "Member 'UWBP_HeroProficiency_Main_C::Icon_SmallBadge_Full' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Badge) == 0x000760, "Member 'UWBP_HeroProficiency_Main_C::Img_Badge' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Bg_KillNotification) == 0x000768, "Member 'UWBP_HeroProficiency_Main_C::Img_Bg_KillNotification' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_HeroHead) == 0x000770, "Member 'UWBP_HeroProficiency_Main_C::Img_HeroHead' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_HeroHeadBg) == 0x000778, "Member 'UWBP_HeroProficiency_Main_C::Img_HeroHeadBg' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_HeroLogo) == 0x000780, "Member 'UWBP_HeroProficiency_Main_C::Img_HeroLogo' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Line_L) == 0x000788, "Member 'UWBP_HeroProficiency_Main_C::Img_Line_L' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Line_R) == 0x000790, "Member 'UWBP_HeroProficiency_Main_C::Img_Line_R' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Proficiency_L) == 0x000798, "Member 'UWBP_HeroProficiency_Main_C::Img_Proficiency_L' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Proficiency_R) == 0x0007A0, "Member 'UWBP_HeroProficiency_Main_C::Img_Proficiency_R' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_ProficiencyBg) == 0x0007A8, "Member 'UWBP_HeroProficiency_Main_C::Img_ProficiencyBg' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_RepeatableTaskTipsBg) == 0x0007B0, "Member 'UWBP_HeroProficiency_Main_C::Img_RepeatableTaskTipsBg' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_spray) == 0x0007B8, "Member 'UWBP_HeroProficiency_Main_C::Img_spray' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Img_Triangle_Vx) == 0x0007C0, "Member 'UWBP_HeroProficiency_Main_C::Img_Triangle_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, KeyWidgetBP_Left) == 0x0007C8, "Member 'UWBP_HeroProficiency_Main_C::KeyWidgetBP_Left' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, KeyWidgetBP_Right) == 0x0007D0, "Member 'UWBP_HeroProficiency_Main_C::KeyWidgetBP_Right' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, KillTipItem_0) == 0x0007D8, "Member 'UWBP_HeroProficiency_Main_C::KillTipItem_0' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, KillTipItem_1) == 0x0007E0, "Member 'UWBP_HeroProficiency_Main_C::KillTipItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, KillTipItem_2) == 0x0007E8, "Member 'UWBP_HeroProficiency_Main_C::KillTipItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Content) == 0x0007F0, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Content' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Content_Level) == 0x0007F8, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Content_Level' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Content_Reward) == 0x000800, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Content_Reward' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Empty) == 0x000808, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Level_Full) == 0x000810, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Level_Full' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Level_Normal) == 0x000818, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Level_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Overlay_Title) == 0x000820, "Member 'UWBP_HeroProficiency_Main_C::Overlay_Title' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, SizeBox_HeroHead) == 0x000828, "Member 'UWBP_HeroProficiency_Main_C::SizeBox_HeroHead' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, SizeBox_KillNotification) == 0x000830, "Member 'UWBP_HeroProficiency_Main_C::SizeBox_KillNotification' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, SprayItem_0) == 0x000838, "Member 'UWBP_HeroProficiency_Main_C::SprayItem_0' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, SprayItem_1) == 0x000840, "Member 'UWBP_HeroProficiency_Main_C::SprayItem_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, SprayItem_2) == 0x000848, "Member 'UWBP_HeroProficiency_Main_C::SprayItem_2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Text_BadgeName) == 0x000850, "Member 'UWBP_HeroProficiency_Main_C::Text_BadgeName' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Text_ProficiencyName) == 0x000858, "Member 'UWBP_HeroProficiency_Main_C::Text_ProficiencyName' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Text_ProficiencyName_Full) == 0x000860, "Member 'UWBP_HeroProficiency_Main_C::Text_ProficiencyName_Full' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Text_ProficiencyNum) == 0x000868, "Member 'UWBP_HeroProficiency_Main_C::Text_ProficiencyNum' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Text_ProficiencyNum_Full) == 0x000870, "Member 'UWBP_HeroProficiency_Main_C::Text_ProficiencyNum_Full' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, Text_RepeatableTaskTips) == 0x000878, "Member 'UWBP_HeroProficiency_Main_C::Text_RepeatableTaskTips' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, VBox_ProficiencyList) == 0x000880, "Member 'UWBP_HeroProficiency_Main_C::VBox_ProficiencyList' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_HeroHead) == 0x000888, "Member 'UWBP_HeroProficiency_Main_C::WBP_HeroHead' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_HeroPortrait) == 0x000890, "Member 'UWBP_HeroProficiency_Main_C::WBP_HeroPortrait' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_HeroProficiency_List_Item_0) == 0x000898, "Member 'UWBP_HeroProficiency_Main_C::WBP_HeroProficiency_List_Item_0' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_HeroProficiency_List_Item_1) == 0x0008A0, "Member 'UWBP_HeroProficiency_Main_C::WBP_HeroProficiency_List_Item_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_HeroProficiency_List_Item_2) == 0x0008A8, "Member 'UWBP_HeroProficiency_Main_C::WBP_HeroProficiency_List_Item_2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_HeroProficiency_List_Item_3) == 0x0008B0, "Member 'UWBP_HeroProficiency_Main_C::WBP_HeroProficiency_List_Item_3' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_MaskCut_HeroProficiency) == 0x0008B8, "Member 'UWBP_HeroProficiency_Main_C::WBP_MaskCut_HeroProficiency' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_RewardBadge1) == 0x0008C0, "Member 'UWBP_HeroProficiency_Main_C::WBP_RewardBadge1' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_RewardBadge2) == 0x0008C8, "Member 'UWBP_HeroProficiency_Main_C::WBP_RewardBadge2' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_RewardBadge3) == 0x0008D0, "Member 'UWBP_HeroProficiency_Main_C::WBP_RewardBadge3' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_RewardBadge4) == 0x0008D8, "Member 'UWBP_HeroProficiency_Main_C::WBP_RewardBadge4' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WBP_RewardBadge5) == 0x0008E0, "Member 'UWBP_HeroProficiency_Main_C::WBP_RewardBadge5' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WrapBox_HeroAvatar) == 0x0008E8, "Member 'UWBP_HeroProficiency_Main_C::WrapBox_HeroAvatar' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WrapBox_KillNotification) == 0x0008F0, "Member 'UWBP_HeroProficiency_Main_C::WrapBox_KillNotification' has a wrong offset!");
static_assert(offsetof(UWBP_HeroProficiency_Main_C, WrapBox_Spray) == 0x0008F8, "Member 'UWBP_HeroProficiency_Main_C::WrapBox_Spray' has a wrong offset!");

}

