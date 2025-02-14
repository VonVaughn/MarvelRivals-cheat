#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_CreateClan_V2

#include "Basic.hpp"

#include "PyWidget_Clan_ClanCreate_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Team_CreateClan_V2.WBP_Team_CreateClan_V2_C
// 0x0178 (0x07B8 - 0x0640)
class UWBP_Team_CreateClan_V2_C final : public UPyWidget_Clan_ClanCreate
{
public:
	class UMarvelImage*                           Img_bg;                                            // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg_left;                                       // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_TeamIntroduction;                           // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_ContentBg;                                     // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_FrameBg;                                       // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_line;                                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TipsBg;                                        // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelMultiLineEditableText*           MultiLineText_Content;                             // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Tips;                                      // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   RText_TipsContent;                                 // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Create_Tips;                                  // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_EditIcon_Tips;                                // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_TeamGenre;                                    // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_TeamInfomation;                               // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_TeamName;                                     // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Tendency;                                     // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_Abbreviation;                                  // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_CreateClan_CoolingTips_C*     WBP_Abbreviation_CoolingTips;                      // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_AdmissionRules;                                // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_W_C*                WBP_Btn_Abolish;                                   // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                WBP_Btn_Affirm;                                    // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                WBP_Btn_Create;                                    // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv3_Dark_C*             WBP_Btn_EditIcon;                                  // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv3_C*                  WBP_Btn_RandomIcon;                                // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanIcon_C*                   WBP_ClanIcon;                                      // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_BgAngle_V2_C*               WBP_Common_BgAngle_V2;                             // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              WBP_DropDownList_Genre;                            // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              WBP_DropDownList_Language;                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              WBP_DropDownList_Rank;                             // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              WBP_DropDownList_Region;                           // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DropDownList_Light_C*              WBP_DropDownList_Rule;                             // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_GamePort;                                      // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_Genre;                                         // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_Name;                                          // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_CreateClan_CoolingTips_C*     WBP_Name_CoolingTips;                              // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Input_C*                    WBP_Name_Input;                                    // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_LV2_C*        WBP_NavigationBar_Lv2;                             // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_PrimaryLanguage;                               // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_RankRequirement;                               // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_OptionEntryBackup_C*       WBP_Region;                                        // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Input_C*                    WBP_Shortname_Input;                               // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanTrophy_GamePort_C*        WBP_Team_ClanTrophy_GamePort;                      // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Title_C*                   WBP_Title_TeamGenre;                               // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Title_C*                   WBP_Title_TeamInfomation;                          // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Title_C*                   WBP_Title_TeamIntroduction;                        // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Title_C*                   WBP_Title_TeamName;                                // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Title_C*                   WBP_Title_Tendency;                                // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Team_CreateClan_V2_C">();
	}
	static class UWBP_Team_CreateClan_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Team_CreateClan_V2_C>();
	}
};
static_assert(alignof(UWBP_Team_CreateClan_V2_C) == 0x000008, "Wrong alignment on UWBP_Team_CreateClan_V2_C");
static_assert(sizeof(UWBP_Team_CreateClan_V2_C) == 0x0007B8, "Wrong size on UWBP_Team_CreateClan_V2_C");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_bg) == 0x000640, "Member 'UWBP_Team_CreateClan_V2_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_bg_left) == 0x000648, "Member 'UWBP_Team_CreateClan_V2_C::Img_bg_left' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_Bg_TeamIntroduction) == 0x000650, "Member 'UWBP_Team_CreateClan_V2_C::Img_Bg_TeamIntroduction' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_ContentBg) == 0x000658, "Member 'UWBP_Team_CreateClan_V2_C::Img_ContentBg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_FrameBg) == 0x000660, "Member 'UWBP_Team_CreateClan_V2_C::Img_FrameBg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_line) == 0x000668, "Member 'UWBP_Team_CreateClan_V2_C::Img_line' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Img_TipsBg) == 0x000670, "Member 'UWBP_Team_CreateClan_V2_C::Img_TipsBg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, MultiLineText_Content) == 0x000678, "Member 'UWBP_Team_CreateClan_V2_C::MultiLineText_Content' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Overlay_Tips) == 0x000680, "Member 'UWBP_Team_CreateClan_V2_C::Overlay_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, RText_TipsContent) == 0x000688, "Member 'UWBP_Team_CreateClan_V2_C::RText_TipsContent' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Text_Create_Tips) == 0x000690, "Member 'UWBP_Team_CreateClan_V2_C::Text_Create_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, Text_EditIcon_Tips) == 0x000698, "Member 'UWBP_Team_CreateClan_V2_C::Text_EditIcon_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, VBox_TeamGenre) == 0x0006A0, "Member 'UWBP_Team_CreateClan_V2_C::VBox_TeamGenre' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, VBox_TeamInfomation) == 0x0006A8, "Member 'UWBP_Team_CreateClan_V2_C::VBox_TeamInfomation' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, VBox_TeamName) == 0x0006B0, "Member 'UWBP_Team_CreateClan_V2_C::VBox_TeamName' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, VBox_Tendency) == 0x0006B8, "Member 'UWBP_Team_CreateClan_V2_C::VBox_Tendency' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Abbreviation) == 0x0006C0, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Abbreviation' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Abbreviation_CoolingTips) == 0x0006C8, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Abbreviation_CoolingTips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_AdmissionRules) == 0x0006D0, "Member 'UWBP_Team_CreateClan_V2_C::WBP_AdmissionRules' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Btn_Abolish) == 0x0006D8, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Btn_Abolish' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Btn_Affirm) == 0x0006E0, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Btn_Affirm' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Btn_Create) == 0x0006E8, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Btn_Create' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Btn_EditIcon) == 0x0006F0, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Btn_EditIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Btn_RandomIcon) == 0x0006F8, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Btn_RandomIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_ClanIcon) == 0x000700, "Member 'UWBP_Team_CreateClan_V2_C::WBP_ClanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Common_BgAngle_V2) == 0x000708, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Common_BgAngle_V2' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_DropDownList_Genre) == 0x000710, "Member 'UWBP_Team_CreateClan_V2_C::WBP_DropDownList_Genre' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_DropDownList_Language) == 0x000718, "Member 'UWBP_Team_CreateClan_V2_C::WBP_DropDownList_Language' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_DropDownList_Rank) == 0x000720, "Member 'UWBP_Team_CreateClan_V2_C::WBP_DropDownList_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_DropDownList_Region) == 0x000728, "Member 'UWBP_Team_CreateClan_V2_C::WBP_DropDownList_Region' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_DropDownList_Rule) == 0x000730, "Member 'UWBP_Team_CreateClan_V2_C::WBP_DropDownList_Rule' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_GamePort) == 0x000738, "Member 'UWBP_Team_CreateClan_V2_C::WBP_GamePort' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Genre) == 0x000740, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Genre' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Name) == 0x000748, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Name' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Name_CoolingTips) == 0x000750, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Name_CoolingTips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Name_Input) == 0x000758, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Name_Input' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_NavigationBar_Lv2) == 0x000760, "Member 'UWBP_Team_CreateClan_V2_C::WBP_NavigationBar_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_PrimaryLanguage) == 0x000768, "Member 'UWBP_Team_CreateClan_V2_C::WBP_PrimaryLanguage' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_RankRequirement) == 0x000770, "Member 'UWBP_Team_CreateClan_V2_C::WBP_RankRequirement' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Region) == 0x000778, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Region' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Shortname_Input) == 0x000780, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Shortname_Input' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Team_ClanTrophy_GamePort) == 0x000788, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Team_ClanTrophy_GamePort' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Title_TeamGenre) == 0x000790, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Title_TeamGenre' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Title_TeamInfomation) == 0x000798, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Title_TeamInfomation' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Title_TeamIntroduction) == 0x0007A0, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Title_TeamIntroduction' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Title_TeamName) == 0x0007A8, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Title_TeamName' has a wrong offset!");
static_assert(offsetof(UWBP_Team_CreateClan_V2_C, WBP_Title_Tendency) == 0x0007B0, "Member 'UWBP_Team_CreateClan_V2_C::WBP_Title_Tendency' has a wrong offset!");

}

