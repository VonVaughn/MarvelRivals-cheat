#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LevelGrowth_LevelUnit

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LevelGrowth_LevelUnit.WBP_LevelGrowth_LevelUnit_C
// 0x0008 (0x03C0 - 0x03B8)
class UWBP_LevelGrowth_LevelUnit_C final : public UUserWidget
{
public:
	class UMarvelImage*                           Img_bg;                                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LevelGrowth_LevelUnit_C">();
	}
	static class UWBP_LevelGrowth_LevelUnit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LevelGrowth_LevelUnit_C>();
	}
};
static_assert(alignof(UWBP_LevelGrowth_LevelUnit_C) == 0x000008, "Wrong alignment on UWBP_LevelGrowth_LevelUnit_C");
static_assert(sizeof(UWBP_LevelGrowth_LevelUnit_C) == 0x0003C0, "Wrong size on UWBP_LevelGrowth_LevelUnit_C");
static_assert(offsetof(UWBP_LevelGrowth_LevelUnit_C, Img_bg) == 0x0003B8, "Member 'UWBP_LevelGrowth_LevelUnit_C::Img_bg' has a wrong offset!");

}

