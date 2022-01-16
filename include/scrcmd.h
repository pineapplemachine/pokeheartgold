#ifndef POKEHEARTGOLD_SCRCMD_H
#define POKEHEARTGOLD_SCRCMD_H

#include "fieldmap.h"
#include "script.h"

// unk_0203DE74.s
extern SAVEDATA* ScriptEnvironment_GetSav2Ptr(UnkSavStruct80*);

// Basic commands
BOOL ScrCmd_Nop(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_Dummy(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_End(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_Wait(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LoadByte(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LoadWord(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LoadByteFromAddr(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WriteByteToAddr(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetPtrByte(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CopyLocal(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CopyByte(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareLocalToLocal(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareLocalToValue(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareLocalToAddr(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareAddrToLocal(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareAddrToValue(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareAddrToAddr(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareVarToValue(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CompareVarToVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RunScript(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RunScriptWait(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RestartCurrentScript(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GoTo(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ObjectGoTo(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BgGoTo(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_DirectionGoTo(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_Call(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_Return(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GoToIf(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CallIf(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetFlag(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ClearFlag(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckFlag(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetFlagVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ClearFlagVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckFlagVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetTrainerFlag(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ClearTrainerFlag(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckTrainerFlag(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_AddVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SubVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CopyVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetOrCopyVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NonNPCMsg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NPCMsg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NonNpcMsgVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NpcMsgVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_048(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_049(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WaitButton(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_051(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_OpenMsg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CloseMsg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_054(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_DirectionSignpost(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_055(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_057(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_058(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TrainerTips(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_060(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_061(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_062(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_063(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_064(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_065(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_066(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_067(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_068(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_069(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_070(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_071(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_072(SCRIPTCONTEXT* ctx);

// Sound-related commands
BOOL ScrCmd_PlaySE(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_StopSE(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WaitSE(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PlayCry(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WaitCry(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PlayFanfare(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WaitFanfare(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PlayBGM(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_081(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ResetBGM(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_083(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_FadeOutBGM(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_085(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_086(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TempBGM(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_088(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ChatotHasCry(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ChatotStartRecording(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ChatotStopRecording(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ChatotSaveRecording(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_093(SCRIPTCONTEXT* ctx);

// Event objects
BOOL ScrCmd_ApplyMovement(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WaitMovement(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LockAll(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ReleaseAll(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_098(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_099(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ShowPerson(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HidePerson(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_102(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_103(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_FacePlayer(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPlayerCoords(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPersonCoords(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_107(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_108(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_109(SCRIPTCONTEXT* ctx);

// scrcmd_money.c
BOOL ScrCmd_AddMoney(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SubMoneyImmediate(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HasEnoughMoneyImmediate(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_113(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_114(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_115(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_116(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_117(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_118(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_119(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_120(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_121(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_122(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_123(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_124(SCRIPTCONTEXT* ctx);

// scrcmd_items.c
BOOL ScrCmd_GiveItem(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TakeItem(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HasSpaceForItem(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HasItem(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ItemIsTMOrHM(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetItemPocket(SCRIPTCONTEXT* ctx);

BOOL ScrCmd_SetStarterChoice(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GenderMsgbox(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetSealQuantity(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveOrTakeSeal(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveRandomSeal(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_136(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveMon(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveEgg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetMonMove(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MonHasMove(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPartySlotWithMove(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPhoneBookRematch(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NameRival(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetFriendSprite(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RegisterPokegearCard(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RegisterGearNumber(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_147(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_148(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_149(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_150(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_151(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_152(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_153(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_154(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_155(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_156(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_157(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_158(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_159(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_160(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_161(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_162(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HOF_Credits(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_164(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_165(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_166(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_167(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetTrainerPathToPlayer(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TrainerStepTowardsPlayer(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_170(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetEyeTrainerNum(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_172(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NicknameInput(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_FadeScreen(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WaitFade(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_Warp(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_177(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_178(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_179(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_180(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_181(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_182(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_183(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_184(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_185(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_186(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPlayerState(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetAvatarBits(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_UpdateAvatarState(SCRIPTCONTEXT* ctx);

// Message buffers
BOOL ScrCmd_BufferPlayersName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferRivalsName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferFriendsName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferMonSpeciesName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferItemName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferPocketName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferTMHMMoveName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferMoveName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferInt(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferPartyMonNick(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferTrainerClassName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferPlayerUnionAvatarClassName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferSpeciesName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferStarterSpeciesName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferDPPtRivalStarterSpeciesName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferDPPtFriendStarterSpeciesName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetStarterChoice(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferDecorationName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_208(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_209(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferMapSecName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_211(SCRIPTCONTEXT* ctx);

// Trainer-related
BOOL ScrCmd_GetTrainerNum(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TrainerBattle(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TrainerMessage(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetTrainerMsgParams(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetRematchMsgParams(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TrainerIsDoubleBattle(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_EncounterMusic(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WhiteOut(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckBattleWon(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_221(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartyCheckForDouble(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_223(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_224(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_225(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_226(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_227(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_228(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_229(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_230(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_231(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_232(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_233(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_234(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_235(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_236(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_237(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_238(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_239(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetDynamicWarp(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetDynamicWarpFloorNo(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ElevatorCurFloorBox(SCRIPTCONTEXT* ctx);

// Dex-related
BOOL ScrCmd_CountJohtoDexSeen(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountJohtoDexOwned(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountNationalDexSeen(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountNationalDexOwned(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_247(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetDexEvalResult(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_249(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_250(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CatchingTutorial(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_252(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_253(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_254(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_255(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_256(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_257(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_258(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_259(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_260(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_261(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_262(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_263(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_264(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_265(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_266(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_267(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_268(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_269(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_270(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_271(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_272(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_273(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_274(SCRIPTCONTEXT* ctx);

// scrcmd_mart.c
BOOL ScrCmd_MartBuy(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SpecialMartBuy(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_DecorationMart(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SealMart(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_OverworldWhiteOut(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetSpawn(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPlayerGender(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HealParty(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_283(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_284(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_285(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_286(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_287(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_288(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_289(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_290(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GivePokedex(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_292(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveRunningShoes(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckBadge(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveBadge(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountBadges(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_297(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_298(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckEscortMode(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetEscortMode(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ClearEscortMode(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_302(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_303(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_304(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_305(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_306(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_307(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_308(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_309(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_310(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_311(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_312(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_313(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_314(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_315(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_316(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_317(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_318(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_319(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_320(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_321(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_322(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_323(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_324(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_325(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_326(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_327(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_328(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_329(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_330(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_331(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPartyCount(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_333(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_334(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_335(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferBerryName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferNatureName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_338(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MovePerson(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_340(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_341(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_342(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_343(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_344(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_345(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_346(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_347(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_348(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartySelectUI(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_350(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartySelect(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ChooseMoveUI(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetMoveSelection(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPartyMonSpecies(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartymonIsMine(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartyCountNotEgg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountAliveMons(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_358(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_359(SCRIPTCONTEXT* ctx);

// scrcmd_money.c
BOOL ScrCmd_SubMoneyVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_361(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_362(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_363(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_364(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_365(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_366(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_367(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HasEnoughMoneyVar(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_EggHatchAnim(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_370(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_371(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_372(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_373(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_374(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_375(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_376(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_377(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_378(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_379(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_380(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_381(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_382(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_383(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_384(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_385(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPlayerFacing(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_387(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_388(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PlayerHasSpecies(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SizeRecordCompare(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SizeRecordUpdate(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferMonSize(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferRecordSize(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_394(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_395(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountMonMoves(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_397(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_398(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferPartyMonMoveName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_StrengthFlagAction(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_401(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_402(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_403(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_404(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_405(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_406(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_407(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_408(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_409(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_410(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_411(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_412(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_413(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_414(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_415(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_416(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_417(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_418(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_419(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_420(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_421(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_422(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckJohtoDexComplete(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckNationalDexComplete(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_425(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_426(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_427(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_428(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountFossils(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetPhoneCall(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RunPhoneCall(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetFossilPokemon(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetFossilMinimumAmount(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_434(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SurvivePoisoning(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_436(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_DebugWatch(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetStdMsgNaix(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NonNpcMsgExtern(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MsgboxExtern(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_441(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_442(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_443(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_444(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_445(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_446(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SafariZoneAction(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_448(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_449(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_450(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_451(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_452(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_453(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_454(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_455(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_456(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_457(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_458(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_459(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LoadPhoneDat(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPhoneContactMsgIds(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_462(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_463(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CreateRoamer(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_465(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_466(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_467(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_468(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_469(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_470(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_471(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_472(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_473(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_474(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_475(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_476(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NatDexFlagAction(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_478(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_479(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MonHasRibbon(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveRibbon(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferRibbonName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetEVTotal(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetWeekday(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_485(SCRIPTCONTEXT* ctx);
//BOOL ScrCmd_Dummy(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PokeCenAnim(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ElevatorAnim(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_489(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_NopVar490(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_491(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_492(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PromptEasyChat(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_494(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetGameVersion(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_496(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_497(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PrimoPasswordCheck1(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PrimoPasswordCheck2(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_500(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_501(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_502(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LotoIdGet(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LotoIdSearch(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_LotoIdSet(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferBoxMonNick(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CountPCEmptySpace(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_508(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_509(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_510(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_511(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_512(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_513(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_HallOfFameAnim(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_AddSpecialGameStat(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferFashionName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_517(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_518(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_519(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_520(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_521(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_522(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_523(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_524(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_525(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_526(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_527(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_528(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartySelectMon(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_530(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferBackgroundName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_532(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckGiveCoins(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_534(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_535(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_536(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_537(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_538(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_539(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_540(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferIntEx(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_542(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_543(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_544(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_545(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_546(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_547(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_548(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_549(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_550(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_551(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_552(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_553(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_554(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_555(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_556(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckBattlePoints(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_558(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_559(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_560(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_561(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MultiBattle(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_563(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_564(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_565(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_566(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_567(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_568(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_569(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_570(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_571(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_572(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_573(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_574(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_575(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_576(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_577(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_578(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_579(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferSealName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_581(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_582(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_583(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PartyLegalCheck(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_585(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_586(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_587(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_588(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_WildBattle(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetTrcardStars(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_591(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_592(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_593(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_594(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_595(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_596(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_597(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_598(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_599(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_600(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_601(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_602(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_603(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_604(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_605(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_606(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_607(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_608(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_609(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_610(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_611(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_612(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPhoneContactRandomGiftBerry(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPhoneContactGiftItem(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CameronPhoto(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_616(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_617(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_PhotoAlbumIsFull(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_619(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_620(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_621(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_622(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_AnimApricornTree(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ApricornTreeGetApricorn(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveApricornFromTree(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferApricornName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_627(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_628(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_629(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_630(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_631(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_632(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_633(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_634(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_635(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_636(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_637(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_638(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_639(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_640(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_641(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_642(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_643(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_644(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_645(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_646(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_647(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_648(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ScratchOffCard(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ScratchOffCardEnd(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetScratchOffPrize(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_652(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MoveTutorChooseMove(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TutorMoveTeachInSlot(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TutorMoveGetPrice(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_656(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_StatJudge(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferStatName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_SetMonForme(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferTrainerName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_661(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_662(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_663(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_664(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_665(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_666(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_667(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferTypeName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetItemQuantity(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_670(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_671(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_672(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_673(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_674(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_675(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_676(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_677(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_678(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_679(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_680(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_681(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_682(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_683(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_684(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_685(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_686(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_687(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_688(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CommSanitizeParty(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_690(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_691(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_692(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_693(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_694(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_695(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_696(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_697(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_698(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_699(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_700(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_701(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_702(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_703(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_704(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_705(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_706(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_707(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_708(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_709(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_710(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_711(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_712(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_713(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_714(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_715(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_716(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_717(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_718(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_719(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_720(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_721(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_722(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_723(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_724(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_725(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_726(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_727(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_728(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_729(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_730(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_731(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_732(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_733(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_734(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_735(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_736(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_737(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_738(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_739(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_740(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_741(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_742(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_743(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_744(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_745(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TouchscreenMenuHide(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_TouchscreenMenuShow(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetMenuChoice(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MenuInitStdGmm(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MenuInit(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MenuItemAdd(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MenuExec(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_753(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_754(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_755(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_756(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_757(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_758(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_759(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_760(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_761(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_762(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_763(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_764(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_765(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_766(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_767(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_768(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_769(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_770(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_771(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_772(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_773(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_774(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_775(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveTogepiEgg(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_777(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GiveSpikyEarPichu(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_RadioMusicIsPlaying(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_780(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_781(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_MartSell(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_783(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_ScriptOverlayCmd(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BugContestAction(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferBugContestWinner(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_JudgeBugContest(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferBugContestMonNick(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BugContestGetTimeLeft(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_IsBugContestantRegistered(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_791(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_792(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BankTransaction(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_CheckBankBalance(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_795(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_796(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_797(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferRulesetName(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_799(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_800(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_801(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_802(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_803(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_804(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_805(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_806(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_807(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_808(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_809(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_810(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_811(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_812(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_813(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_814(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_815(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_816(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_817(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_818(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_819(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_820(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_821(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_822(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_823(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_824(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_825(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_826(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_GetPartymonForme(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_828(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_829(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_830(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_831(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_832(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_833(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_834(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_835(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_836(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_837(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BankOrWalletIsFull(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_839(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_840(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_841(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_842(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferItemNameIndef(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferItemNamePlural(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferPartyMonSpeciesNameIndef(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferSpeciesNameIndef(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferDPPtFriendStarterSpeciesNameIndef(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferFashionNameIndef(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferTrainerClassNameIndef(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferSealNamePlural(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_Capitalize(SCRIPTCONTEXT* ctx);
BOOL ScrCmd_BufferDeptStoreFloorNo(SCRIPTCONTEXT* ctx);

#endif
