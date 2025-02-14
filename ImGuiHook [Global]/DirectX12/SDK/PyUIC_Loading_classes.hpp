#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyUIC_Loading

#include "Basic.hpp"

#include "Python_enums_structs.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyUIC_Loading.PyUIC_Loading
// 0x0030 (0x00C0 - 0x0090)
class UPyUIC_Loading : public UUIC_Loading
{
public:
	float                                         PredictLoadingDuration;                            // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpdateProgressInterval;                            // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReportProgressInterval;                            // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReportProgressThreshold;                           // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedFactor;                                       // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayHideLoadingTime;                              // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Test_Enabled;                                      // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Test_ModeId;                                       // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELoadingPanelType                             Test_LoadingPanelType;                             // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Test_ClearVideoHistory;                            // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Test_ShowLoadingDebugInfo;                         // 0x00B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Init();
	void Destruct();
	void OnLoadingVisibleChanged(bool bVisible);
	void OnPreLoadMapRecord(const class FString& MapName);
	void OnPostLoadMapRecord(class UWorld* WorldObj);
	void PyOnPreLoadMap(const class FString& MapName);
	void PyOnPostLoadMap(class UWorld* WorldObj);
	void OnSelectHeroWorldLoaded(const class FString& LoadedWorld);
	void OnServerFirstMapLoaded();
	void OnEndReached();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIC_Loading">();
	}
	static class UPyUIC_Loading* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIC_Loading>();
	}
};
static_assert(alignof(UPyUIC_Loading) == 0x000010, "Wrong alignment on UPyUIC_Loading");
static_assert(sizeof(UPyUIC_Loading) == 0x0000C0, "Wrong size on UPyUIC_Loading");
static_assert(offsetof(UPyUIC_Loading, PredictLoadingDuration) == 0x000090, "Member 'UPyUIC_Loading::PredictLoadingDuration' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, UpdateProgressInterval) == 0x000094, "Member 'UPyUIC_Loading::UpdateProgressInterval' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, ReportProgressInterval) == 0x000098, "Member 'UPyUIC_Loading::ReportProgressInterval' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, ReportProgressThreshold) == 0x00009C, "Member 'UPyUIC_Loading::ReportProgressThreshold' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, SpeedFactor) == 0x0000A0, "Member 'UPyUIC_Loading::SpeedFactor' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, DelayHideLoadingTime) == 0x0000A4, "Member 'UPyUIC_Loading::DelayHideLoadingTime' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, Test_Enabled) == 0x0000A8, "Member 'UPyUIC_Loading::Test_Enabled' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, Test_ModeId) == 0x0000AC, "Member 'UPyUIC_Loading::Test_ModeId' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, Test_LoadingPanelType) == 0x0000B0, "Member 'UPyUIC_Loading::Test_LoadingPanelType' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, Test_ClearVideoHistory) == 0x0000B1, "Member 'UPyUIC_Loading::Test_ClearVideoHistory' has a wrong offset!");
static_assert(offsetof(UPyUIC_Loading, Test_ShowLoadingDebugInfo) == 0x0000B2, "Member 'UPyUIC_Loading::Test_ShowLoadingDebugInfo' has a wrong offset!");

}

