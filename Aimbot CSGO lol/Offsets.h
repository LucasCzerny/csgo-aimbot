#pragma once
#include <cstdint>
//GuidedHacking.com r0x0rs ur b0x0rs
namespace offsets
{

	//signatures

	constexpr ptrdiff_t dwClientState = 0x589FE4;
	constexpr ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
	constexpr ptrdiff_t dwClientState_IsHLTV = 0x4D48;
	constexpr ptrdiff_t dwClientState_Map = 0x28C;
	constexpr ptrdiff_t dwClientState_MapDirectory = 0x188;
	constexpr ptrdiff_t dwClientState_MaxPlayer = 0x388;
	constexpr ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
	constexpr ptrdiff_t dwClientState_State = 0x108;
	constexpr ptrdiff_t dwClientState_ViewAngles = 0x4D90;
	constexpr ptrdiff_t clientstate_delta_ticks = 0x174;
	constexpr ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
	constexpr ptrdiff_t clientstate_choked_commands = 0x4D30;
	constexpr ptrdiff_t clientstate_net_channel = 0x9C;
	constexpr ptrdiff_t dwEntityList = 0x4DA720C;
	constexpr ptrdiff_t dwForceAttack = 0x31D7734;
	constexpr ptrdiff_t dwForceAttack2 = 0x31D7740;
	constexpr ptrdiff_t dwForceBackward = 0x31D777C;
	constexpr ptrdiff_t dwForceForward = 0x31D7788;
	constexpr ptrdiff_t dwForceJump = 0x5250FFC;
	constexpr ptrdiff_t dwForceLeft = 0x31D77A0;
	constexpr ptrdiff_t dwForceRight = 0x31D7794;
	constexpr ptrdiff_t dwGameDir = 0x628800;
	constexpr ptrdiff_t dwGameRulesProxy = 0x52C42EC;
	constexpr ptrdiff_t dwGetAllClasses = 0xDB601C;
	constexpr ptrdiff_t dwGlobalVars = 0x589CE8;
	constexpr ptrdiff_t dwGlowObjectManager = 0x52EF6B0;
	constexpr ptrdiff_t dwInput = 0x51F87D0;
	constexpr ptrdiff_t dwInterfaceLinkList = 0x947BF4;
	constexpr ptrdiff_t dwLocalPlayer = 0xD8E2CC;
	constexpr ptrdiff_t dwMouseEnable = 0xD93E70;
	constexpr ptrdiff_t dwMouseEnablePtr = 0xD93E40;
	constexpr ptrdiff_t dwPlayerResource = 0x31D5AC0;
	constexpr ptrdiff_t dwRadarBase = 0x51DBF84;
	constexpr ptrdiff_t dwSensitivity = 0xDA5304;
	constexpr ptrdiff_t dwSensitivityPtr = 0xDA52D8;
	constexpr ptrdiff_t dwSetClanTag = 0x8A1B0;
	constexpr ptrdiff_t dwViewMatrix = 0x4D98B24;
	constexpr ptrdiff_t dwWeaponTable = 0x51F9290;
	constexpr ptrdiff_t dwWeaponTableIndex = 0x325C;
	constexpr ptrdiff_t dwYawPtr = 0xD2430002;
	constexpr ptrdiff_t dwZoomSensitivityRatioPtr = 0xD98D70;
	constexpr ptrdiff_t dwbSendPackets = 0xD779A;
	constexpr ptrdiff_t dwppDirect3DDevice9 = 0xA7050;
	constexpr ptrdiff_t m_pStudioHdr = 0x294C;
	constexpr ptrdiff_t m_yawClassPtr = 0xD93AD0;
	constexpr ptrdiff_t m_pitchClassPtr = 0x51DC220;
	constexpr ptrdiff_t interface_engine_cvar = 0x3E9EC;
	constexpr ptrdiff_t convar_name_hash_table = 0x2F0F8;
	constexpr ptrdiff_t m_bDormant = 0xED;
	constexpr ptrdiff_t model_ambient_min = 0x58D05C;
	constexpr ptrdiff_t set_abs_angles = 0x1E0B80;
	constexpr ptrdiff_t set_abs_origin = 0x1E09C0;
	constexpr ptrdiff_t is_c4_owner = 0x3BCA40;
	constexpr ptrdiff_t force_update_spectator_glow = 0x3AFDFA;
	constexpr ptrdiff_t anim_overlays = 0x2980;
	constexpr ptrdiff_t m_flSpawnTime = 0xA370;
	constexpr ptrdiff_t find_hud_element = 0x2DE8FA00;

	//netvars

	constexpr ptrdiff_t m_ArmorValue = 0xB37C;
	constexpr ptrdiff_t m_Collision = 0x320;
	constexpr ptrdiff_t m_CollisionGroup = 0x474;
	constexpr ptrdiff_t m_Local = 0x2FBC;
	constexpr ptrdiff_t m_MoveType = 0x25C;
	constexpr ptrdiff_t m_OriginalOwnerXuidHigh = 0x31C4;
	constexpr ptrdiff_t m_OriginalOwnerXuidLow = 0x31C0;
	constexpr ptrdiff_t m_aimPunchAngle = 0x302C;
	constexpr ptrdiff_t m_aimPunchAngleVel = 0x3038;
	constexpr ptrdiff_t m_bGunGameImmunity = 0x3944;
	constexpr ptrdiff_t m_bHasDefuser = 0xB38C;
	constexpr ptrdiff_t m_bHasHelmet = 0xB370;
	constexpr ptrdiff_t m_bInReload = 0x32A5;
	constexpr ptrdiff_t m_bIsDefusing = 0x3930;
	constexpr ptrdiff_t m_bIsScoped = 0x3928;
	constexpr ptrdiff_t m_bSpotted = 0x93D;
	constexpr ptrdiff_t m_bSpottedByMask = 0x980;
	constexpr ptrdiff_t m_dwBoneMatrix = 0x26A8;
	constexpr ptrdiff_t m_fAccuracyPenalty = 0x3330;
	constexpr ptrdiff_t m_fFlags = 0x104;
	constexpr ptrdiff_t m_flFallbackWear = 0x31D0;
	constexpr ptrdiff_t m_flFlashDuration = 0xA420;
	constexpr ptrdiff_t m_flFlashMaxAlpha = 0xA41C;
	constexpr ptrdiff_t m_flNextPrimaryAttack = 0x3238;
	constexpr ptrdiff_t m_hActiveWeapon = 0x2EF8;
	constexpr ptrdiff_t m_hMyWeapons = 0x2DF8;
	constexpr ptrdiff_t m_hObserverTarget = 0x338C;
	constexpr ptrdiff_t m_hOwner = 0x29CC;
	constexpr ptrdiff_t m_hOwnerEntity = 0x14C;
	constexpr ptrdiff_t m_iAccountID = 0x2FC8;
	constexpr ptrdiff_t m_iClip1 = 0x3264;
	constexpr ptrdiff_t m_iCompetitiveRanking = 0x1A84;
	constexpr ptrdiff_t m_iCompetitiveWins = 0x1B88;
	constexpr ptrdiff_t m_iCrosshairId = 0xB3E8;
	constexpr ptrdiff_t m_iEntityQuality = 0x2FAC;
	constexpr ptrdiff_t m_iFOVStart = 0x31E8;
	constexpr ptrdiff_t m_iFOV = 0x31E4;
	constexpr ptrdiff_t m_iGlowIndex = 0xA438;
	constexpr ptrdiff_t m_iHealth = 0x100;
	constexpr ptrdiff_t m_iItemDefinitionIndex = 0x2FAA;
	constexpr ptrdiff_t m_iItemIDHigh = 0x2FC0;
	constexpr ptrdiff_t m_iObserverMode = 0x3378;
	constexpr ptrdiff_t m_iShotsFired = 0xA390;
	constexpr ptrdiff_t m_iState = 0x3258;
	constexpr ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ptrdiff_t m_lifeState = 0x25F;
	constexpr ptrdiff_t m_nFallbackPaintKit = 0x31C8;
	constexpr ptrdiff_t m_nFallbackSeed = 0x31CC;
	constexpr ptrdiff_t m_nFallbackStatTrak = 0x31D4;
	constexpr ptrdiff_t m_nForceBone = 0x268C;
	constexpr ptrdiff_t m_nTickBase = 0x3430;
	constexpr ptrdiff_t m_rgflCoordinateFrame = 0x444;
	constexpr ptrdiff_t m_szCustomName = 0x303C;
	constexpr ptrdiff_t m_szLastPlaceName = 0x35B4;
	constexpr ptrdiff_t m_vecOrigin = 0x138;
	constexpr ptrdiff_t m_vecVelocity = 0x114;
	constexpr ptrdiff_t m_vecViewOffset = 0x108;
	constexpr ptrdiff_t m_viewPunchAngle = 0x3020;
	constexpr ptrdiff_t m_thirdPersonViewAngles = 0x31D8;
	constexpr ptrdiff_t m_clrRender = 0x70;
	constexpr ptrdiff_t m_flC4Blow = 0x2990;
	constexpr ptrdiff_t m_flTimerLength = 0x2994;
	constexpr ptrdiff_t m_flDefuseLength = 0x29A8;
	constexpr ptrdiff_t m_flDefuseCountDown = 0x29AC;
	constexpr ptrdiff_t cs_gamerules_data = 0x0;
	constexpr ptrdiff_t m_SurvivalRules = 0xD00;
	constexpr ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
	constexpr ptrdiff_t m_bIsValveDS = 0x7C;
	constexpr ptrdiff_t m_bFreezePeriod = 0x20;
	constexpr ptrdiff_t m_bBombPlanted = 0x9A5;
	constexpr ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
	constexpr ptrdiff_t m_flSimulationTime = 0x268;
	constexpr ptrdiff_t m_flLowerBodyYawTarget = 0x3A90;
	constexpr ptrdiff_t m_angEyeAnglesX = 0xB380;
	constexpr ptrdiff_t m_angEyeAnglesY = 0xB384;
	constexpr ptrdiff_t m_flNextAttack = 0x2D70;
	constexpr ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
	constexpr ptrdiff_t m_flLastBoneSetupTime = 0x2924;
	constexpr ptrdiff_t m_bStartedArming = 0x33F0;
	constexpr ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
	constexpr ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
	constexpr ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
	constexpr ptrdiff_t m_flCustomBloomScale = 0x9E4;
	constexpr ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
	constexpr ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;

}