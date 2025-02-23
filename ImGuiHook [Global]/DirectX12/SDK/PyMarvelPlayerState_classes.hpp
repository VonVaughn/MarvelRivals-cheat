#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelPlayerState

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyMarvelPlayerState.PyMarvelPlayerState
// 0x0280 (0x0D90 - 0x0B10)
class APyMarvelPlayerState : public AMarvelPlayerState
{
public:
	int32                                         PreviewHeroID;                                     // 0x0B10(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EquipSkinID;                                       // 0x0B14(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 BondSuggestionHeroIDList;                          // 0x0B18(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          IsInBirthBase;                                     // 0x0B28(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B29[0x3];                                      // 0x0B29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BadgeValue;                                        // 0x0B2C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsScoreBoard;                                      // 0x0B30(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B31[0x7];                                      // 0x0B31(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPyPlayerStateConnectComponent*         ConnectComp;                                       // 0x0B38(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPyPlayerStateGameBehaviorComponent*    GameBehaviorComp;                                  // 0x0B40(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HeroRoleLimit;                                     // 0x0B48(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TrainAIReliveTime;                                 // 0x0B4C(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicateTimer                        RespawnReplicateTimer;                             // 0x0B50(0x0078)(BlueprintVisible, Net, NativeAccessSpecifierPublic)
	bool                                          IsWoodPile;                                        // 0x0BC8(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_BC9[0x3];                                      // 0x0BC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MultiKillCount;                                    // 0x0BCC(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         KillingSpreeCount;                                 // 0x0BD0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SurvivalKillCount;                                 // 0x0BD4(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RecordUID;                                         // 0x0BD8(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         State;                                             // 0x0BDC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BanPickHeroID;                                     // 0x0BE0(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SuggestBanPickHeroID;                              // 0x0BE4(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsCaptain;                                         // 0x0BE8(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsCoach;                                           // 0x0BE9(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFirstPosOnCustomGame;                            // 0x0BEA(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHeroRole                                     SuggestHeroRole;                                   // 0x0BEB(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AgreeSurrender;                                    // 0x0BEC(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasInactive;                                       // 0x0BED(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_BEE[0x2];                                      // 0x0BEE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReticleSetting;                                    // 0x0BF0(0x0010)(BlueprintVisible, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPreviewHeroIDChangeDispatcher;                   // 0x0C00(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnEquipSkinIDChangeDispatcher;                     // 0x0C10(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBondSuggestionHeroIDListChangeDispatcher;        // 0x0C20(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSuggestBanPickHeroIDChangeDispatcher;            // 0x0C30(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSuggestRoleChangeDispatcher;                     // 0x0C40(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnIsInBirthbaseChangeDispatcher;                   // 0x0C50(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnScoreBoardChangeDispatcher;                      // 0x0C60(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnResetDelayRespawnDispatcher;                     // 0x0C70(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnRespawnTimerUpdateDispatcher;                    // 0x0C80(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnRecordUIDChangeDispatcher;                       // 0x0C90(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSpawnCharacter;                                  // 0x0CA0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnKillingSpreeCountChangedDispatcher;              // 0x0CB0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSurvivalKillCountChangedDispatcher;              // 0x0CC0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnUpdateConsecutiveKillDispatcher;                 // 0x0CD0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSettleConsecutiveKillDispatcher;                 // 0x0CE0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnReportClientInactiveDispatcher;                  // 0x0CF0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnReportClientAlreadyInactivedDispatcher;          // 0x0D00(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnGameBehaviorReportDispatcher;                    // 0x0D10(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPlayerHasInactiveChangeDispatcher;               // 0x0D20(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBanPickHeroIDChangeDispatcher;                   // 0x0D30(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnIsCaptainChangeDispatcher;                       // 0x0D40(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnIsCoachChangeDispatcher;                         // 0x0D50(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnUpdateTaskDataDispatcher;                        // 0x0D60(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSpecialAchieveCompleteDispatcher;                // 0x0D70(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnReticleSettingChangedDispatcher;                 // 0x0D80(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnPreviewHeroIDChangeDispatcher__DelegateSignature(int32 Hero_id);
	void OnEquipSkinIDChangeDispatcher__DelegateSignature(int32 Skin_id);
	void OnBondSuggestionHeroIDListChangeDispatcher__DelegateSignature(const TArray<int32>& Hero_id_list);
	void OnSuggestBanPickHeroIDChangeDispatcher__DelegateSignature(int32 SuggestBanPickHeroID_0);
	void OnSuggestRoleChangeDispatcher__DelegateSignature(EHeroRole SuggestHeroRole_0);
	void OnIsInBirthbaseChangeDispatcher__DelegateSignature(class AMarvelPlayerState* PS, bool IsInBirthBase_0);
	void OnScoreBoardChangeDispatcher__DelegateSignature(bool Is_score);
	void OnResetDelayRespawnDispatcher__DelegateSignature(float Delay);
	void OnRespawnTimerUpdateDispatcher__DelegateSignature();
	void OnRecordUIDChangeDispatcher__DelegateSignature(class AMarvelPlayerState* PS, int32 RecordUID_0);
	void OnSpawnCharacter__DelegateSignature(class AMarvelPlayerState* PS);
	void OnKillingSpreeCountChangedDispatcher__DelegateSignature(int32 KillingSpreeCount_0, class AMarvelPlayerState* PS);
	void OnSurvivalKillCountChangedDispatcher__DelegateSignature(int32 SurvivalKillCount_0);
	void OnUpdateConsecutiveKillDispatcher__DelegateSignature(int32 SourceHeroID);
	void OnSettleConsecutiveKillDispatcher__DelegateSignature(int32 SourceHeroID);
	void OnReportClientInactiveDispatcher__DelegateSignature(class AMarvelPlayerState* PS, bool Is_inactive, int32 Inactive_type);
	void OnReportClientAlreadyInactivedDispatcher__DelegateSignature(class AMarvelPlayerState* PS);
	void OnGameBehaviorReportDispatcher__DelegateSignature(class AMarvelPlayerState* PS, int32 Behavior);
	void OnPlayerHasInactiveChangeDispatcher__DelegateSignature(class AMarvelPlayerState* PS, bool Has_inactive);
	void OnBanPickHeroIDChangeDispatcher__DelegateSignature(int32 BanPickHeroID_0);
	void OnIsCaptainChangeDispatcher__DelegateSignature(bool IsCaptain_0);
	void OnIsCoachChangeDispatcher__DelegateSignature(bool IsCoach_0);
	void OnUpdateTaskDataDispatcher__DelegateSignature(const class FString& Data);
	void OnSpecialAchieveCompleteDispatcher__DelegateSignature(int32 Achieve_type, int32 Val);
	void OnReticleSettingChangedDispatcher__DelegateSignature();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void K2_UpdateHeroChoosable();
	void OnRep_IsInBirthbase();
	void OnRep_RecordUID();
	void OnRep_PreviewHeroID();
	void OnRep_EquipSkinID();
	void OnRep_ReticleSetting();
	void ServerChangeReticleSetting(const class FString& Config_str);
	void ServerChangePreviewID(int32 Hero_id);
	void ServerChangeEquipSkinID(int32 Skin_id);
	void ServerChangeBondSuggestionHeroIDList(const TArray<int32>& Hero_id_list);
	void NetMulitcast_BondSuggestionHeroIDList(const TArray<int32>& Hero_id_list);
	void ReqUpvoteOther(int32 Player_uid);
	void SetOnlineStatus(EOnlineStatus InStatus);
	void SetRespawnTime(float Respawn_time);
	void InterruptLevelRespawn();
	void MulticastResetDelayRespawnEvent(float Delay);
	void OnRespawnTimerUpdate();
	void DoRespawnSelf();
	void OnRep_IsScoreBoard();
	void SetControlState(int32 State_0);
	void OnRep_MultiKillCount();
	void InActiveInRank();
	void ServerSetHasInactive(bool HasInactive_0);
	void RuncClientFunc(const class FString& Func_name, const TArray<uint8>& ArgsStr);
	void ServerReportClientInactive(bool Is_inactive, int32 Inactive_type);
	void NetMulitcast_ChangeKillingSpreeCount(int32 Kill_count);
	void OnRep_SurvivalKillCount();
	void ServerChangeBanPickHeroID(int32 Hero_id);
	void OnRep_BanPickHeroID();
	void ServerChangeBanPickSuggestionHeroID(int32 Hero_id);
	void OnRep_SuggestBanPickHeroID();
	void ServerChangeSuggestionRole(EHeroRole HeroRole);
	void OnRep_SuggestHeroRole();
	void OnRep_IsCaptain();
	void OnRep_IsCoach();
	void NotifyClientCloseSelectHero(int32 SelectedHeroID_0, int32 RoundIndex);
	void RequestTaskDatabaseData(const TArray<class FString>& Task_ids);
	void ResponseTaskDatabaseData(const class FString& Data_str);
	void RequestDatabaseData();
	void ResponseDatabaseData(const class FString& Data_str);
	void Req_client_profile_data(int32 Record_index);
	void Resp_client_profile_data(int32 Fps, int32 Ping, int32 Record_index, int32 Out_lost, int32 In_lost);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyMarvelPlayerState">();
	}
	static class APyMarvelPlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyMarvelPlayerState>();
	}
};
static_assert(alignof(APyMarvelPlayerState) == 0x000008, "Wrong alignment on APyMarvelPlayerState");
static_assert(sizeof(APyMarvelPlayerState) == 0x000D90, "Wrong size on APyMarvelPlayerState");
static_assert(offsetof(APyMarvelPlayerState, PreviewHeroID) == 0x000B10, "Member 'APyMarvelPlayerState::PreviewHeroID' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, EquipSkinID) == 0x000B14, "Member 'APyMarvelPlayerState::EquipSkinID' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, BondSuggestionHeroIDList) == 0x000B18, "Member 'APyMarvelPlayerState::BondSuggestionHeroIDList' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, IsInBirthBase) == 0x000B28, "Member 'APyMarvelPlayerState::IsInBirthBase' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, BadgeValue) == 0x000B2C, "Member 'APyMarvelPlayerState::BadgeValue' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, IsScoreBoard) == 0x000B30, "Member 'APyMarvelPlayerState::IsScoreBoard' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, ConnectComp) == 0x000B38, "Member 'APyMarvelPlayerState::ConnectComp' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, GameBehaviorComp) == 0x000B40, "Member 'APyMarvelPlayerState::GameBehaviorComp' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, HeroRoleLimit) == 0x000B48, "Member 'APyMarvelPlayerState::HeroRoleLimit' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, TrainAIReliveTime) == 0x000B4C, "Member 'APyMarvelPlayerState::TrainAIReliveTime' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, RespawnReplicateTimer) == 0x000B50, "Member 'APyMarvelPlayerState::RespawnReplicateTimer' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, IsWoodPile) == 0x000BC8, "Member 'APyMarvelPlayerState::IsWoodPile' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, MultiKillCount) == 0x000BCC, "Member 'APyMarvelPlayerState::MultiKillCount' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, KillingSpreeCount) == 0x000BD0, "Member 'APyMarvelPlayerState::KillingSpreeCount' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, SurvivalKillCount) == 0x000BD4, "Member 'APyMarvelPlayerState::SurvivalKillCount' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, RecordUID) == 0x000BD8, "Member 'APyMarvelPlayerState::RecordUID' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, State) == 0x000BDC, "Member 'APyMarvelPlayerState::State' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, BanPickHeroID) == 0x000BE0, "Member 'APyMarvelPlayerState::BanPickHeroID' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, SuggestBanPickHeroID) == 0x000BE4, "Member 'APyMarvelPlayerState::SuggestBanPickHeroID' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, IsCaptain) == 0x000BE8, "Member 'APyMarvelPlayerState::IsCaptain' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, IsCoach) == 0x000BE9, "Member 'APyMarvelPlayerState::IsCoach' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, IsFirstPosOnCustomGame) == 0x000BEA, "Member 'APyMarvelPlayerState::IsFirstPosOnCustomGame' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, SuggestHeroRole) == 0x000BEB, "Member 'APyMarvelPlayerState::SuggestHeroRole' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, AgreeSurrender) == 0x000BEC, "Member 'APyMarvelPlayerState::AgreeSurrender' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, HasInactive) == 0x000BED, "Member 'APyMarvelPlayerState::HasInactive' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, ReticleSetting) == 0x000BF0, "Member 'APyMarvelPlayerState::ReticleSetting' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnPreviewHeroIDChangeDispatcher) == 0x000C00, "Member 'APyMarvelPlayerState::OnPreviewHeroIDChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnEquipSkinIDChangeDispatcher) == 0x000C10, "Member 'APyMarvelPlayerState::OnEquipSkinIDChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnBondSuggestionHeroIDListChangeDispatcher) == 0x000C20, "Member 'APyMarvelPlayerState::OnBondSuggestionHeroIDListChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnSuggestBanPickHeroIDChangeDispatcher) == 0x000C30, "Member 'APyMarvelPlayerState::OnSuggestBanPickHeroIDChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnSuggestRoleChangeDispatcher) == 0x000C40, "Member 'APyMarvelPlayerState::OnSuggestRoleChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnIsInBirthbaseChangeDispatcher) == 0x000C50, "Member 'APyMarvelPlayerState::OnIsInBirthbaseChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnScoreBoardChangeDispatcher) == 0x000C60, "Member 'APyMarvelPlayerState::OnScoreBoardChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnResetDelayRespawnDispatcher) == 0x000C70, "Member 'APyMarvelPlayerState::OnResetDelayRespawnDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnRespawnTimerUpdateDispatcher) == 0x000C80, "Member 'APyMarvelPlayerState::OnRespawnTimerUpdateDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnRecordUIDChangeDispatcher) == 0x000C90, "Member 'APyMarvelPlayerState::OnRecordUIDChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnSpawnCharacter) == 0x000CA0, "Member 'APyMarvelPlayerState::OnSpawnCharacter' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnKillingSpreeCountChangedDispatcher) == 0x000CB0, "Member 'APyMarvelPlayerState::OnKillingSpreeCountChangedDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnSurvivalKillCountChangedDispatcher) == 0x000CC0, "Member 'APyMarvelPlayerState::OnSurvivalKillCountChangedDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnUpdateConsecutiveKillDispatcher) == 0x000CD0, "Member 'APyMarvelPlayerState::OnUpdateConsecutiveKillDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnSettleConsecutiveKillDispatcher) == 0x000CE0, "Member 'APyMarvelPlayerState::OnSettleConsecutiveKillDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnReportClientInactiveDispatcher) == 0x000CF0, "Member 'APyMarvelPlayerState::OnReportClientInactiveDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnReportClientAlreadyInactivedDispatcher) == 0x000D00, "Member 'APyMarvelPlayerState::OnReportClientAlreadyInactivedDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnGameBehaviorReportDispatcher) == 0x000D10, "Member 'APyMarvelPlayerState::OnGameBehaviorReportDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnPlayerHasInactiveChangeDispatcher) == 0x000D20, "Member 'APyMarvelPlayerState::OnPlayerHasInactiveChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnBanPickHeroIDChangeDispatcher) == 0x000D30, "Member 'APyMarvelPlayerState::OnBanPickHeroIDChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnIsCaptainChangeDispatcher) == 0x000D40, "Member 'APyMarvelPlayerState::OnIsCaptainChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnIsCoachChangeDispatcher) == 0x000D50, "Member 'APyMarvelPlayerState::OnIsCoachChangeDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnUpdateTaskDataDispatcher) == 0x000D60, "Member 'APyMarvelPlayerState::OnUpdateTaskDataDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnSpecialAchieveCompleteDispatcher) == 0x000D70, "Member 'APyMarvelPlayerState::OnSpecialAchieveCompleteDispatcher' has a wrong offset!");
static_assert(offsetof(APyMarvelPlayerState, OnReticleSettingChangedDispatcher) == 0x000D80, "Member 'APyMarvelPlayerState::OnReticleSettingChangedDispatcher' has a wrong offset!");

}

