#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Ranking_Unit_RankRanking

#include "Basic.hpp"

#include "PyWidget_Ranking_Unit_RankRanking_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Ranking_Unit_RankRanking.WBP_Ranking_Unit_RankRanking_C
// 0x0038 (0x0620 - 0x05E8)
class UWBP_Ranking_Unit_RankRanking_C final : public UPyWidget_Ranking_Unit_RankRanking
{
public:
	class UMarvelImage*                           Img_DanMark;                                       // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_line;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Achievement;                               // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DanMark;                                      // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_VicoryMark;                                   // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_DanIcon_Small2_C*             WBP_Rank_DanIcon2;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ranking_Unit_Rank_C*               WBP_Ranking_Unit;                                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ranking_Unit_RankRanking_C">();
	}
	static class UWBP_Ranking_Unit_RankRanking_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ranking_Unit_RankRanking_C>();
	}
};
static_assert(alignof(UWBP_Ranking_Unit_RankRanking_C) == 0x000008, "Wrong alignment on UWBP_Ranking_Unit_RankRanking_C");
static_assert(sizeof(UWBP_Ranking_Unit_RankRanking_C) == 0x000620, "Wrong size on UWBP_Ranking_Unit_RankRanking_C");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, Img_DanMark) == 0x0005E8, "Member 'UWBP_Ranking_Unit_RankRanking_C::Img_DanMark' has a wrong offset!");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, Img_line) == 0x0005F0, "Member 'UWBP_Ranking_Unit_RankRanking_C::Img_line' has a wrong offset!");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, Overlay_Achievement) == 0x0005F8, "Member 'UWBP_Ranking_Unit_RankRanking_C::Overlay_Achievement' has a wrong offset!");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, Text_DanMark) == 0x000600, "Member 'UWBP_Ranking_Unit_RankRanking_C::Text_DanMark' has a wrong offset!");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, Text_VicoryMark) == 0x000608, "Member 'UWBP_Ranking_Unit_RankRanking_C::Text_VicoryMark' has a wrong offset!");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, WBP_Rank_DanIcon2) == 0x000610, "Member 'UWBP_Ranking_Unit_RankRanking_C::WBP_Rank_DanIcon2' has a wrong offset!");
static_assert(offsetof(UWBP_Ranking_Unit_RankRanking_C, WBP_Ranking_Unit) == 0x000618, "Member 'UWBP_Ranking_Unit_RankRanking_C::WBP_Ranking_Unit' has a wrong offset!");

}

