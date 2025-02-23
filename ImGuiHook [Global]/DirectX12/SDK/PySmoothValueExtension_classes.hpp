#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySmoothValueExtension

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PySmoothValueExtension.PySmoothChargePercentExtension
// 0x0010 (0x0040 - 0x0030)
class UPySmoothChargePercentExtension final : public UMarvelUserWidgetExtension
{
public:
	FMulticastInlineDelegateProperty_             OnSmoothValueUpdated;                              // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnSmoothValueUpdated__DelegateSignature(float SmoothValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySmoothChargePercentExtension">();
	}
	static class UPySmoothChargePercentExtension* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySmoothChargePercentExtension>();
	}
};
static_assert(alignof(UPySmoothChargePercentExtension) == 0x000008, "Wrong alignment on UPySmoothChargePercentExtension");
static_assert(sizeof(UPySmoothChargePercentExtension) == 0x000040, "Wrong size on UPySmoothChargePercentExtension");
static_assert(offsetof(UPySmoothChargePercentExtension, OnSmoothValueUpdated) == 0x000030, "Member 'UPySmoothChargePercentExtension::OnSmoothValueUpdated' has a wrong offset!");

}

