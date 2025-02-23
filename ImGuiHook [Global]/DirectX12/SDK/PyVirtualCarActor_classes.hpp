#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyVirtualCarActor

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyVirtualCarActor.PyMarvelVirtualCarActor
// 0x0000 (0x1420 - 0x1420)
class APyMarvelVirtualCarActor : public AMarvelVirtualCarActor
{
public:
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelVirtualCarActor">();
	}
	static class APyMarvelVirtualCarActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelVirtualCarActor>();
	}
};
static_assert(alignof(APyMarvelVirtualCarActor) == 0x000010, "Wrong alignment on APyMarvelVirtualCarActor");
static_assert(sizeof(APyMarvelVirtualCarActor) == 0x001420, "Wrong size on APyMarvelVirtualCarActor");

}

