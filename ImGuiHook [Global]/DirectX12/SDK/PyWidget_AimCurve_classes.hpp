#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_AimCurve

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_AimCurve.PyWidget_AimCurve
// 0x0128 (0x0710 - 0x05E8)
class UPyWidget_AimCurve : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     ImgCurveList;                                      // 0x05E8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FText>                           TitleCurveList;                                    // 0x05F8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FText>                           DescCurveList;                                     // 0x0608(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         CurveLineThickness;                                // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MinDeadZoneLineColor;                              // 0x061C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MaxDeadZoneLineColor;                              // 0x062C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DefaultLineColor;                                  // 0x063C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MinDeadZoneBackGroundColor;                        // 0x064C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MaxDeadZoneBackGroundColor;                        // 0x065C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EfficientlySensBackGroundColor;                    // 0x066C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EfficientlySensLineColor;                          // 0x067C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           BackGroundDefaultColor;                            // 0x068C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MinDeadZoneMarkingLineColor;                       // 0x069C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MaxDeadZoneMarkingLineColor;                       // 0x06AC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DefaultMarkingLineColor;                           // 0x06BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MinDeadZoneAnchorColor;                            // 0x06CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MaxDeadZoneAnchorColor;                            // 0x06DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DefaultAnchorColor;                                // 0x06EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnchorPointX;                                      // 0x06FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnchorPointMinX;                                   // 0x0700(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnchorPointMaxX;                                   // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnchorPointMinRange;                               // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnchorPointMaxRange;                               // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_AimCurve">();
	}
	static class UPyWidget_AimCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_AimCurve>();
	}
};
static_assert(alignof(UPyWidget_AimCurve) == 0x000008, "Wrong alignment on UPyWidget_AimCurve");
static_assert(sizeof(UPyWidget_AimCurve) == 0x000710, "Wrong size on UPyWidget_AimCurve");
static_assert(offsetof(UPyWidget_AimCurve, ImgCurveList) == 0x0005E8, "Member 'UPyWidget_AimCurve::ImgCurveList' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, TitleCurveList) == 0x0005F8, "Member 'UPyWidget_AimCurve::TitleCurveList' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, DescCurveList) == 0x000608, "Member 'UPyWidget_AimCurve::DescCurveList' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, CurveLineThickness) == 0x000618, "Member 'UPyWidget_AimCurve::CurveLineThickness' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MinDeadZoneLineColor) == 0x00061C, "Member 'UPyWidget_AimCurve::MinDeadZoneLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MaxDeadZoneLineColor) == 0x00062C, "Member 'UPyWidget_AimCurve::MaxDeadZoneLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, DefaultLineColor) == 0x00063C, "Member 'UPyWidget_AimCurve::DefaultLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MinDeadZoneBackGroundColor) == 0x00064C, "Member 'UPyWidget_AimCurve::MinDeadZoneBackGroundColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MaxDeadZoneBackGroundColor) == 0x00065C, "Member 'UPyWidget_AimCurve::MaxDeadZoneBackGroundColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, EfficientlySensBackGroundColor) == 0x00066C, "Member 'UPyWidget_AimCurve::EfficientlySensBackGroundColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, EfficientlySensLineColor) == 0x00067C, "Member 'UPyWidget_AimCurve::EfficientlySensLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, BackGroundDefaultColor) == 0x00068C, "Member 'UPyWidget_AimCurve::BackGroundDefaultColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MinDeadZoneMarkingLineColor) == 0x00069C, "Member 'UPyWidget_AimCurve::MinDeadZoneMarkingLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MaxDeadZoneMarkingLineColor) == 0x0006AC, "Member 'UPyWidget_AimCurve::MaxDeadZoneMarkingLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, DefaultMarkingLineColor) == 0x0006BC, "Member 'UPyWidget_AimCurve::DefaultMarkingLineColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MinDeadZoneAnchorColor) == 0x0006CC, "Member 'UPyWidget_AimCurve::MinDeadZoneAnchorColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, MaxDeadZoneAnchorColor) == 0x0006DC, "Member 'UPyWidget_AimCurve::MaxDeadZoneAnchorColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, DefaultAnchorColor) == 0x0006EC, "Member 'UPyWidget_AimCurve::DefaultAnchorColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, AnchorPointX) == 0x0006FC, "Member 'UPyWidget_AimCurve::AnchorPointX' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, AnchorPointMinX) == 0x000700, "Member 'UPyWidget_AimCurve::AnchorPointMinX' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, AnchorPointMaxX) == 0x000704, "Member 'UPyWidget_AimCurve::AnchorPointMaxX' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, AnchorPointMinRange) == 0x000708, "Member 'UPyWidget_AimCurve::AnchorPointMinRange' has a wrong offset!");
static_assert(offsetof(UPyWidget_AimCurve, AnchorPointMaxRange) == 0x00070C, "Member 'UPyWidget_AimCurve::AnchorPointMaxRange' has a wrong offset!");

}

