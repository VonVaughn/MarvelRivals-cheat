#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Mall_Recommend_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_Mall_Bundle_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Mall_Recommend_Item.WBP_Mall_Recommend_Item_C
// 0x0118 (0x0728 - 0x0610)
class UWBP_Mall_Recommend_Item_C final : public UPyWidget_Mall_Bundle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_HoverToNormal;                                // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_NormalToHover;                                // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Main;                                          // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Discount_C*              DisCount;                                          // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_Received;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card;                                          // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Add;                                      // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg;                                       // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg_1;                                     // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg_Add;                                   // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg_Add_T;                                 // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg_Glow1;                                 // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg_Mask;                                  // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Bg_Preview;                               // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Glow;                                     // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Mask;                                     // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Card_Preview;                                  // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_MCNTheme_Logo;                                 // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Next_Page_Mask;                                // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price_Bg_Hover;                                // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price_Bg_Hover_2;                              // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price_Bg_Hover_3;                              // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Quality;                                       // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Quality_Add;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Quality_Icon;                                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_received;                                      // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips_Bg;                                       // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Tips_Bg_Add;                                   // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Item;                                      // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Mask;                                      // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Price_C*                 Price;                                             // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mall_Skin_Tag_C*                   Tag;                                               // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_Quality;                                      // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Received;                                     // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_Mall_Recommend_Item(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mall_Recommend_Item_C">();
	}
	static class UWBP_Mall_Recommend_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mall_Recommend_Item_C>();
	}
};
static_assert(alignof(UWBP_Mall_Recommend_Item_C) == 0x000008, "Wrong alignment on UWBP_Mall_Recommend_Item_C");
static_assert(sizeof(UWBP_Mall_Recommend_Item_C) == 0x000728, "Wrong size on UWBP_Mall_Recommend_Item_C");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, UberGraphFrame) == 0x000610, "Member 'UWBP_Mall_Recommend_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Anim_HoverToNormal) == 0x000618, "Member 'UWBP_Mall_Recommend_Item_C::Anim_HoverToNormal' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Anim_NormalToHover) == 0x000620, "Member 'UWBP_Mall_Recommend_Item_C::Anim_NormalToHover' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Btn_Main) == 0x000628, "Member 'UWBP_Mall_Recommend_Item_C::Btn_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, DisCount) == 0x000630, "Member 'UWBP_Mall_Recommend_Item_C::DisCount' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, HBox_Received) == 0x000638, "Member 'UWBP_Mall_Recommend_Item_C::HBox_Received' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card) == 0x000640, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Add) == 0x000648, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Add' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg) == 0x000650, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg_1) == 0x000658, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg_1' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg_Add) == 0x000660, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg_Add' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg_Add_T) == 0x000668, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg_Add_T' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg_Glow1) == 0x000670, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg_Glow1' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg_Mask) == 0x000678, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Bg_Preview) == 0x000680, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Bg_Preview' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Glow) == 0x000688, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Mask) == 0x000690, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Card_Preview) == 0x000698, "Member 'UWBP_Mall_Recommend_Item_C::Img_Card_Preview' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_MCNTheme_Logo) == 0x0006A0, "Member 'UWBP_Mall_Recommend_Item_C::Img_MCNTheme_Logo' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Next_Page_Mask) == 0x0006A8, "Member 'UWBP_Mall_Recommend_Item_C::Img_Next_Page_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Price_Bg_Hover) == 0x0006B0, "Member 'UWBP_Mall_Recommend_Item_C::Img_Price_Bg_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Price_Bg_Hover_2) == 0x0006B8, "Member 'UWBP_Mall_Recommend_Item_C::Img_Price_Bg_Hover_2' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Price_Bg_Hover_3) == 0x0006C0, "Member 'UWBP_Mall_Recommend_Item_C::Img_Price_Bg_Hover_3' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Quality) == 0x0006C8, "Member 'UWBP_Mall_Recommend_Item_C::Img_Quality' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Quality_Add) == 0x0006D0, "Member 'UWBP_Mall_Recommend_Item_C::Img_Quality_Add' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Quality_Icon) == 0x0006D8, "Member 'UWBP_Mall_Recommend_Item_C::Img_Quality_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_received) == 0x0006E0, "Member 'UWBP_Mall_Recommend_Item_C::Img_received' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Tips_Bg) == 0x0006E8, "Member 'UWBP_Mall_Recommend_Item_C::Img_Tips_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Img_Tips_Bg_Add) == 0x0006F0, "Member 'UWBP_Mall_Recommend_Item_C::Img_Tips_Bg_Add' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Overlay_Item) == 0x0006F8, "Member 'UWBP_Mall_Recommend_Item_C::Overlay_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Overlay_Mask) == 0x000700, "Member 'UWBP_Mall_Recommend_Item_C::Overlay_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Price) == 0x000708, "Member 'UWBP_Mall_Recommend_Item_C::Price' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Tag) == 0x000710, "Member 'UWBP_Mall_Recommend_Item_C::Tag' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Text_Quality) == 0x000718, "Member 'UWBP_Mall_Recommend_Item_C::Text_Quality' has a wrong offset!");
static_assert(offsetof(UWBP_Mall_Recommend_Item_C, Text_Received) == 0x000720, "Member 'UWBP_Mall_Recommend_Item_C::Text_Received' has a wrong offset!");

}

