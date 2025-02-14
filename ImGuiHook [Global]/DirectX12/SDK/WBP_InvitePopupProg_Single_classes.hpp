#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InvitePopupProg_Single

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InvitePopupProg_Single.WBP_InvitePopupProg_Single_C
// 0x0028 (0x0610 - 0x05E8)
class UWBP_InvitePopupProg_Single_C final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Anim_CountDown;                                    // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_AloneBg;                                       // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Progress;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Alone;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Progress_Alone;                                    // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InvitePopupProg_Single_C">();
	}
	static class UWBP_InvitePopupProg_Single_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InvitePopupProg_Single_C>();
	}
};
static_assert(alignof(UWBP_InvitePopupProg_Single_C) == 0x000008, "Wrong alignment on UWBP_InvitePopupProg_Single_C");
static_assert(sizeof(UWBP_InvitePopupProg_Single_C) == 0x000610, "Wrong size on UWBP_InvitePopupProg_Single_C");
static_assert(offsetof(UWBP_InvitePopupProg_Single_C, Anim_CountDown) == 0x0005E8, "Member 'UWBP_InvitePopupProg_Single_C::Anim_CountDown' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopupProg_Single_C, Img_AloneBg) == 0x0005F0, "Member 'UWBP_InvitePopupProg_Single_C::Img_AloneBg' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopupProg_Single_C, Img_Progress) == 0x0005F8, "Member 'UWBP_InvitePopupProg_Single_C::Img_Progress' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopupProg_Single_C, Overlay_Alone) == 0x000600, "Member 'UWBP_InvitePopupProg_Single_C::Overlay_Alone' has a wrong offset!");
static_assert(offsetof(UWBP_InvitePopupProg_Single_C, Progress_Alone) == 0x000608, "Member 'UWBP_InvitePopupProg_Single_C::Progress_Alone' has a wrong offset!");

}

