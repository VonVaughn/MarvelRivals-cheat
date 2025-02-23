#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Friends_ItemList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "PyWidget_FriendsFriends_V3_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Friends_ItemList.WBP_Friends_ItemList_C
// 0x0078 (0x0680 - 0x0608)
class UWBP_Friends_ItemList_C final : public UPyWidget_FriendsFriends_V3
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelListView*                        ListView_Friends;                                  // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelScrollBox*                       ScrollBox_Friends;                                 // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Main;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Friends_Item_C*                    WBP_Friends_Item;                                  // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Friends_Item_C*                    WBP_Friends_Item_1;                                // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Friends_Item_C*                    WBP_Friends_Item_2;                                // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Friends_Item_C*                    WBP_Friends_Item_3;                                // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Friends_Item_C*                    WBP_Friends_Item_4;                                // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Friends_Item_C*                    WBP_Friends_Item_5;                                // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text_TitleName;                                    // 0x0660(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	ESlateVisibility                              IsTitle;                                           // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Friends_ItemList(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Friends_ItemList_C">();
	}
	static class UWBP_Friends_ItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Friends_ItemList_C>();
	}
};
static_assert(alignof(UWBP_Friends_ItemList_C) == 0x000008, "Wrong alignment on UWBP_Friends_ItemList_C");
static_assert(sizeof(UWBP_Friends_ItemList_C) == 0x000680, "Wrong size on UWBP_Friends_ItemList_C");
static_assert(offsetof(UWBP_Friends_ItemList_C, UberGraphFrame) == 0x000608, "Member 'UWBP_Friends_ItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, ListView_Friends) == 0x000610, "Member 'UWBP_Friends_ItemList_C::ListView_Friends' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, ScrollBox_Friends) == 0x000618, "Member 'UWBP_Friends_ItemList_C::ScrollBox_Friends' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, Text_Title) == 0x000620, "Member 'UWBP_Friends_ItemList_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, VBox_Main) == 0x000628, "Member 'UWBP_Friends_ItemList_C::VBox_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, WBP_Friends_Item) == 0x000630, "Member 'UWBP_Friends_ItemList_C::WBP_Friends_Item' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, WBP_Friends_Item_1) == 0x000638, "Member 'UWBP_Friends_ItemList_C::WBP_Friends_Item_1' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, WBP_Friends_Item_2) == 0x000640, "Member 'UWBP_Friends_ItemList_C::WBP_Friends_Item_2' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, WBP_Friends_Item_3) == 0x000648, "Member 'UWBP_Friends_ItemList_C::WBP_Friends_Item_3' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, WBP_Friends_Item_4) == 0x000650, "Member 'UWBP_Friends_ItemList_C::WBP_Friends_Item_4' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, WBP_Friends_Item_5) == 0x000658, "Member 'UWBP_Friends_ItemList_C::WBP_Friends_Item_5' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, Text_TitleName) == 0x000660, "Member 'UWBP_Friends_ItemList_C::Text_TitleName' has a wrong offset!");
static_assert(offsetof(UWBP_Friends_ItemList_C, IsTitle) == 0x000678, "Member 'UWBP_Friends_ItemList_C::IsTitle' has a wrong offset!");

}

