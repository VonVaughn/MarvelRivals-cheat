#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAISpawnActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// PythonClass PyAISpawnActor.PyAISpawnActor
// 0x0008 (0x0478 - 0x0470)
class APyAISpawnActor final : public AActor
{
public:
	bool                                          Enabled;                                           // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAISpawnActor">();
	}
	static class APyAISpawnActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyAISpawnActor>();
	}
};
static_assert(alignof(APyAISpawnActor) == 0x000008, "Wrong alignment on APyAISpawnActor");
static_assert(sizeof(APyAISpawnActor) == 0x000478, "Wrong size on APyAISpawnActor");
static_assert(offsetof(APyAISpawnActor, Enabled) == 0x000470, "Member 'APyAISpawnActor::Enabled' has a wrong offset!");

}

