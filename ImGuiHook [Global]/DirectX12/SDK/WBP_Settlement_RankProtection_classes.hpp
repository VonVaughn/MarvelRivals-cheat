#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settlement_RankProtection

#include "Basic.hpp"

#include "PyWidget_RankInfo_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settlement_RankProtection.WBP_Settlement_RankProtection_C
// 0x0090 (0x0678 - 0x05E8)
class UWBP_Settlement_RankProtection_C final : public UPyWidget_Settlement_Rank_Protection
{
public:
	class UWidgetAnimation*                       Anim_Broken;                                       // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BarFull;                                      // 0x05F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_AlreadyBar_Show;                              // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BarGlow_Show;                                 // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Progress;                                     // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_bg;                                            // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_ProgressBar;                                   // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ProgressBar_Glow;                              // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Rank_Star_Glow1;                               // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RankProtection_Active;                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_RankProtection_Inactive;                       // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Abs1;                                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Abs2;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Abs2_1;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Lg1;                                      // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Lg2;                                      // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Lg3;                                      // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Spar_Lg4;                                      // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settlement_RankProtection_C">();
	}
	static class UWBP_Settlement_RankProtection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settlement_RankProtection_C>();
	}
};
static_assert(alignof(UWBP_Settlement_RankProtection_C) == 0x000008, "Wrong alignment on UWBP_Settlement_RankProtection_C");
static_assert(sizeof(UWBP_Settlement_RankProtection_C) == 0x000678, "Wrong size on UWBP_Settlement_RankProtection_C");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Anim_Broken) == 0x0005E8, "Member 'UWBP_Settlement_RankProtection_C::Anim_Broken' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Anim_BarFull) == 0x0005F0, "Member 'UWBP_Settlement_RankProtection_C::Anim_BarFull' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Anim_AlreadyBar_Show) == 0x0005F8, "Member 'UWBP_Settlement_RankProtection_C::Anim_AlreadyBar_Show' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Anim_BarGlow_Show) == 0x000600, "Member 'UWBP_Settlement_RankProtection_C::Anim_BarGlow_Show' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Anim_Progress) == 0x000608, "Member 'UWBP_Settlement_RankProtection_C::Anim_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_bg) == 0x000610, "Member 'UWBP_Settlement_RankProtection_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_ProgressBar) == 0x000618, "Member 'UWBP_Settlement_RankProtection_C::Img_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_ProgressBar_Glow) == 0x000620, "Member 'UWBP_Settlement_RankProtection_C::Img_ProgressBar_Glow' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Rank_Star_Glow1) == 0x000628, "Member 'UWBP_Settlement_RankProtection_C::Img_Rank_Star_Glow1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_RankProtection_Active) == 0x000630, "Member 'UWBP_Settlement_RankProtection_C::Img_RankProtection_Active' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_RankProtection_Inactive) == 0x000638, "Member 'UWBP_Settlement_RankProtection_C::Img_RankProtection_Inactive' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Abs1) == 0x000640, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Abs1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Abs2) == 0x000648, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Abs2' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Abs2_1) == 0x000650, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Abs2_1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Lg1) == 0x000658, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Lg1' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Lg2) == 0x000660, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Lg2' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Lg3) == 0x000668, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Lg3' has a wrong offset!");
static_assert(offsetof(UWBP_Settlement_RankProtection_C, Img_Spar_Lg4) == 0x000670, "Member 'UWBP_Settlement_RankProtection_C::Img_Spar_Lg4' has a wrong offset!");

}

