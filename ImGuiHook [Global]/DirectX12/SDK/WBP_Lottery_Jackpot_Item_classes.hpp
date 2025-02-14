#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Lottery_Jackpot_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_LotteryJackpotPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Lottery_Jackpot_Item.WBP_Lottery_Jackpot_Item_C
// 0x0038 (0x0630 - 0x05F8)
class UWBP_Lottery_Jackpot_Item_C final : public UPyWidget_LotteryJackpotItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelImage*                           Img_SkinQualityIcon;                               // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Winning_Probability;                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  WBP_Common_Item;                                   // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  WBP_Common_Item_1;                                 // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Item_V2_C*                  WBP_Common_Item_2;                                 // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Items;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_Lottery_Jackpot_Item(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Lottery_Jackpot_Item_C">();
	}
	static class UWBP_Lottery_Jackpot_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Lottery_Jackpot_Item_C>();
	}
};
static_assert(alignof(UWBP_Lottery_Jackpot_Item_C) == 0x000008, "Wrong alignment on UWBP_Lottery_Jackpot_Item_C");
static_assert(sizeof(UWBP_Lottery_Jackpot_Item_C) == 0x000630, "Wrong size on UWBP_Lottery_Jackpot_Item_C");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_Lottery_Jackpot_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, Img_SkinQualityIcon) == 0x000600, "Member 'UWBP_Lottery_Jackpot_Item_C::Img_SkinQualityIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, Text_Winning_Probability) == 0x000608, "Member 'UWBP_Lottery_Jackpot_Item_C::Text_Winning_Probability' has a wrong offset!");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, WBP_Common_Item) == 0x000610, "Member 'UWBP_Lottery_Jackpot_Item_C::WBP_Common_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, WBP_Common_Item_1) == 0x000618, "Member 'UWBP_Lottery_Jackpot_Item_C::WBP_Common_Item_1' has a wrong offset!");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, WBP_Common_Item_2) == 0x000620, "Member 'UWBP_Lottery_Jackpot_Item_C::WBP_Common_Item_2' has a wrong offset!");
static_assert(offsetof(UWBP_Lottery_Jackpot_Item_C, WrapBox_Items) == 0x000628, "Member 'UWBP_Lottery_Jackpot_Item_C::WrapBox_Items' has a wrong offset!");

}

