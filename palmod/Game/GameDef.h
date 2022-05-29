#pragma once

//A = Arcade
//X = XBox
//D = Dreamcast
//P = Playstation 2
//S = Steam
//GBA = GameBoy
//SNES = ...

// Needed for game tables
void StrRemoveNonASCII(WCHAR* pszOutput, uint32_t ccSize, LPCWSTR pszInput, bool fForceUpperCase = false);
void StruprRemoveNonASCII(WCHAR* pszOutput, uint32_t ccSize, LPCWSTR pszInput);

#include "ButtonDef.h"
#include "ImgIdDef.h"
#include "SuppProc.h"

//Game Definitions
// DO NOT CHANGE THE ORDER OF THIS LIST: the values are used as indexes for quick reloads
enum SupportedGamesList
{
    MVC2_D = 0,
    SFIII3_A,
    MVC2_P,
    SSF2T_A,
    SFA3_A,
    XMVSF_A,
    MVC_A,
    SFIII3_D,
    JOJOS_A,
    MSH_A,
    MSHVSF_A,
    COTA_A,
    MVC2_A,
    Garou_A,
    NEOGEO_A,
    KOF98_A,
    KOF02UM_S,
    CVS2_A,
    Garou_S,
    KOF02_A,
    SFA2_A,
    SFIII3_A_DIR_51,
    JOJOS_A_DIR_50,
    JOJOS_A_DIR_51,
    SVCPLUSA_A,
    SAMSHO5SP_A,
    MVC2_A_DIR,
    GEMFIGHTER_A,
    REDEARTH_A,
    REDEARTH_A_DIR_31,
    KarnovsR_A,
    WakuWaku7_A,
    SFA1_A,
    VSAV_A,
    VSAV2_A,
    RBFFS_A,
    SAMSHO3_A,
    VHUNT2_A,
    SFIII2_A,
    SF2HF_A,
    SF2CE_A,
    SSF2T_GBA,
    MATRIMELEE_A,
    SFIII1_A,
    WINDJAMMERS_A,
    SFIII3_A_DIR_10,
    KOFXI_A,
    NGBC_A,
    BREAKERS_A,
    SFIII3_A_DIR_4rd,
    BLEACH_DS,
    KOF03_A,
    MMPR_SNES,
    KOF01_A,
    NeoBomberman_A,
    GUNDAM_SNES,
    KOF94_A,
    KOF99AE_A,
    CFTE_SNES,
    FatalFuryS_SNES,
    TOPF2005_SEGA,
    SFIII3_A_DIR_EX,
    GGXXACR_S,
    AOF3_A,
    DANKUGA_A,
    SAMSHO4_A,
    RODSM2_A,
    LASTBLADE2_A,
    SAMSHO5_A,
    RBFF1_A,
    RBFF2_A,
    KIZUNA_A,
    SFZ3U_A,
    AOF1_A,
    DOUBLEDRAGON_A,
    DUMMY_RGB444_LE,
    SDODGEBALL_A,
    NINJAMASTERS_A,
    SFIII3_A_DIR_4rd_10,
    KOF97_A,
    SFIII1_A_DIR,
    SFIII2_A_DIR,
    SAVAGEREIGN_A,
    ROTD_A,
    GarouP_A,
    DBFCI_A,
    UNICLR_A,
    SPF2T_A,
    MSHWOTG_SNES,
    REDEARTH_A_DIR_30,
    KOTM_A,
    XMMA_SNES,
    TMNTTF_SNES,
    DBZHD_SNES,
    MMX2_SNES,
    KOF00N_A,
    LASTBLADE_A,
    DUMMY_RGB888,
    DUMMY_BGR888,
    KOF95_A,
    KOF96_A,
    SAMSHO1_A,
    SAMSHO2_A,
    FatalFuryS_A,
    FatalFury1_A,
    GGXXACR_P,
    MBAACC_S,
    KOF98AE2016_A,
    MMX_SNES,
    MMX3_SNES,
    KI_SNES,
    RANMAHB_SNES,
    RANMACRH_SNES,
    SVG_SNES,
    REDEARTH_A_DIR_50,
    BMKNS_SNES,
    BSSMSJR_SNES,
    MAGICALDROPIII_A,
    KOF02PS2_A,
    MartialMasters_A,
    Gowcaizer_A,
    MAAB_A,
    JOJOSRPG_SNES,
    GGXXR_S,
    P4AU_NESICA,
    VENTURE_A,
    VENTURE_A_DIR_50,
    VENTURE_A_DIR_31,
    CYBERBOTS_A,
    DBZEB_DS,
    MBTL_A,
    KOF02UM_S_DIR_8888,
    KOF02UM_S_DIR_BGR555,
    KOF02UM_S_DIR_RGB555,
    MK1_SNES,
    MK2_SNES,
    SHAQFU_SNES,
    MVC2_D_16,
    UMK3_SNES,
    KOF97AE_A,
    KOF97GM_S,
    LASTBLADE_S,
    LASTBLADE2_S,
    SAMSHO5X_A,
    VampireNightWarriors_A,
    VampireHunter_A,
    SAMSHO5SP_S,
    JusticeLeagueTF_SNES,
    SFA2_Hack_A,
    UMK3_DS,
    P4AU_STEAM,
    BlazBlueCF_S,
    HSF2_A,
    FatalFury2_A,
    LandMaker_A,
    NUM_GAMES // This needs to be last
};

// If you're adding a new game you also must update 
//    CGameLoad::SetGame            Needed to load the game class
//    CGameLoad::CreateGame         Needed to load the game class
//    CPalModDlg::OnFileOpen        Ensures the user can open the game
//    CPalModDlg::OnEditPaste       Ensures that pastes work correctly
// 

// We want to keep these short for the titlebar: they're hard-limited by
// MAX_DESCRIPTION_LENGTH (96), so 64 is probably the max we want.
// Note that the games can override these values: these are just the defaults.
const WCHAR g_GameFriendlyName[][64] =
{
    L"MvC2 (Dreamcast)",
    L"SFIII3 (CPS3 Arcade)",
    L"MVC2 (Playstation 2)",
    L"SSF2T (CPS2 Arcade)",
    L"SFA3 (CPS2 Arcade)",
    L"XVSF (CPS2 Arcade)",
    L"MVC (CPS2 Arcade)",
    L"SFIII:3S (Dreamcast)",
    L"Jojo's (Japan)",
    L"MSH (CPS2 Arcade)",
    L"MSHVSF (CPS2 Arcade)",
    L"X-Men: COTA (CPS2 Arcade)",
    L"MVC2 (NAOMI Arcade)",
    L"Garou: MotW (Neo-Geo)",
    L"Unknown Game",
    L"King of Fighters '98 (Neo-Geo)",
    L"King of Fighters 2002UM (Steam)",
    L"CVS2 (NAOMI Arcade)",
    L"Garou: MotW (Steam)",
    L"King of Fighters 2002 (Neo-Geo)",
    L"SFA2 (CPS2 Arcade)",
    L"SFIII:3S (CPS3 Arcade Rerip)",
    L"Jojo's 50 (Japanese Arcade Rerip)",
    L"Jojo's 51 (Japanese Arcade Rerip)",
    L"SVC Plus A",
    L"Samurai Shodown V Special (Neo-Geo)",
    L"MVC2 (NAOMI Arcade rerip)",
    L"Super Gem Fighter Mini Mix (USA 970904)",
    L"Red Earth (CPS3 Arcade, 31)",
    L"Red Earth (CPS3 Arcade Rerip, 3.x set 2)",
    L"Karnov's Revenge / Fighter's History Dynamite",
    L"Waku Waku 7",
    L"SFA1 (CPS2 Arcade)",
    L"Vampire Savior (CPS2 Arcade)",
    L"Vampire Savior 2 (CPS2 Arcade)",
    L"Real Bout Fatal Fury Special (Neo-Geo)",
    L"Samurai Shodown III (Neo-Geo)",
    L"Vampire Hunter 2 (CPS2 Arcade)",
    L"SFIII:2I (CPS3 Arcade)",
    L"SF2:HF (CPS1 Arcade)",
    L"SF2:CE (CPS1 Arcade)",
    L"SSF2T:Revival (GBA)",
    L"Matrimelee (Neo-Geo)",
    L"SFIII:NG (CPS3 Arcade)",
    L"Windjammers (Neo-Geo)",
    L"SFIII:3S Gill Glow (CPS3 Arcade Rerip)",
    L"King of Fighters XI (Atomiswave)",
    L"NGBC (Atomiswave)",
    L"Breakers Revenge (Neo-Geo)",
    L"SFIII:4rd Strike (CPS3 Arcade)",
    L"Bleach DS (Nintendo DS)",
    L"King of Fighters 2003: 2004 EX Ultra Plus",
    L"MMPR:TFE (SNES)",
    L"King of Fighters 2001 (Neo-Geo)",
    L"Neo Bomberman (Neo-Geo)",
    L"Gundam Wing: Endless Duel (SNES)",
    L"King of Fighters '94 (Neo-Geo)",
    L"King of Fighters '99AE (Neo-Geo)",
    L"Clay Fighter: TE (SNES)",
    L"Fatal Fury Special (SNES)",
    L"Top Fighter 2005 (Sega)",
    L"SFIII:3S EX",
    L"GGXX:AC+R (Steam)",
    L"Art of Fighting 3 (Neo-Geo)",
    L"Dan-Ku-Ga (Taito F3 System Arcade)",
    L"Samurai Shodown IV (Neo-Geo)",
    L"Ring of Destruction: Slam Master's II",
    L"The Last Blade 2 (Neo-Geo)",
    L"Samurai Shodown V (Neo-Geo)",
    L"Real Bout Fatal Fury (Neo-Geo)",
    L"Real Bout Fatal Fury 2 (Neo-Geo)",
    L"Kizuna Encounter (Neo-Geo)",
    L"Street Fighter Zero 3 Upper (NAOMI)",
    L"Art of Fighting 1 (Neo-Geo)",
    L"Double Dragon (Neo-Geo)",
    L"Fake game ID for RGB444 little endian",
    L"Super Dodge Ball (Neo-Geo)",
    L"Ninja Masters (Neo-Geo)",
    L"SFIII:4rd Strike Gill Glow (CPS3 Arcade)",
    L"King of Fighters '97 (Neo-Geo)",
    L"SFIII:New Generation (CPS3 Arcade Rerip)",
    L"SFIII:2nd Impact (CPS3 Arcade Rerip)",
    L"Savage Reign (Neo-Geo)",
    L"Rage of the Dragons (Neo-Geo)",
    L"Garou: MotW (Neo-Geo Prototype)",
    L"Dengeki Bunko: Fighting Climax IGNITION",
    L"Under Night In-Birth Exe:Late[cl-r]",
    L"Super Puzzle Fighter II Turbo (CPS2 Arcade)",
    L"Marvel Super Heroes: War of the Gems (SNES)",
    L"Red Earth (CPS3 Arcade Rerip, 3.x set 1)",
    L"King of the Monsters (Neo-Geo)",
    L"X-Men: Mutant Apocalypse (SNES)",
    L"TMNT: Tournament Fighters (SNES)",
    L"DBZ: Hyper Dimension (SNES)",
    L"Mega Man X2 (SNES)",
    L"King of Fighters 2000n (Neo-Geo)",
    L"The Last Blade (Neo-Geo)",
    L"DUMMY_RGB888",
    L"DUMMY_BGR888",
    L"King of Fighters '95 (Neo-Geo)",
    L"King of Fighters '96 (Neo-Geo)",
    L"Samurai Shodown (Neo-Geo)",
    L"Samurai Shodown II (Neo-Geo)",
    L"Fatal Fury Special (Neo-Geo)",
    L"Fatal Fury: King of Fighters (Neo-Geo)",
    L"GGXX:AC+R (PlayStation 3)",
    L"Melty Blood Actress Again Current Code",
    L"King of Fighters '98AE (2016 Romhack)",
    L"Mega Man X (SNES)",
    L"Mega Man X3 (SNES)",
    L"Killer Instinct (Rev 1 SNES)",
    L"Ranma Nibunnoichi: Hard Battle (SNES)",
    L"Ranma Nibunnoichi: Chougi Ranbu Hen (SNES)",
    L"Super Variable Geo (SNES)",
    L"Red Earth (CPS3 Arcade Rerip, 5.x)",
    L"Battle Master: KnS (SNES)",
    L"Bishojo Senshi Sailor Moon S - JR (SNES)",
    L"Magical Drop III (Neo-Geo)",
    L"King of Fighters 2002PS2 (Neo-Geo hack)",
    L"Martial Masters (PGM)",
    L"Voltage Fighter Gowcaizer (Neo-Geo)",
    L"Million Arthur Arcana Blood (Steam)",
    L"Jojo's Bizarre Adventure (SNES)",
    L"Guilty Gear #Reload (Steam/Community Port)",
    L"Persona 4 Arena Ultimax 2.0 (NESICA)",
    L"Jojo's Venture (Japan)",
    L"Jojo's Venture (Japan Arcade, 50: Characters)",
    L"Jojo's Venture (Japan Arcade, 31: HUD Portraits)",
    L"Cyberbots: Fullmetal Madness (CPS2 Arcade)",
    L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS)",
    L"Melty Blood: Type Lumina (Steam)",
    L"King of Fighters 2002UM (Steam, ARGB8888 parts)",
    L"King of Fighters 2002UM (Steam, BGR555 parts)",
    L"King of Fighters 2002UM (Steam, RGB555 parts)",
    L"Mortal Kombat (SNES)",
    L"Mortal Kombat II (SNES)",
    L"Shaq Fu (SNES)",
    L"MvC2 (Dreamcast Palette Expansion)",
    L"Ultimate Mortal Kombat 3 (USA SNES)",
    L"King of Fighters '97 Anniversary Edition (Neo-Geo)",
    L"King of Fighters '97 Global Match (Steam)",
    L"The Last Blade 1 (Steam)",
    L"The Last Blade 2 (Steam)",
    L"Samurai Shodown V (Xbox)",
    L"Vampire: The Night Warriors (CPS2)",
    L"Vampire Hunter (CPS2)",
    L"Samurai Shodown V Special (Steam)",
    L"Justice League Task Force (USA SNES)",
    L"SFA2 (CPS2 Palette Expansion)",
    L"Ultimate Mortal Kombat 3 (USA DS)",
    L"Persona 4 Arena Ultimax (Steam)",
    L"BlazBlue: Central Fiction (Steam)",
    L"Hyper Street Fighter 2",
    L"Fatal Fury 2 (Neo-Geo)",
    L"Land Maker (Taito F3 System Arcade)",
};

static_assert(ARRAYSIZE(g_GameFriendlyName) == NUM_GAMES, "The gameId enum and the descriptors in g_GameFriendlyName must match length.");

enum class GamePlatform
{
    CapcomCPS12 = 0,
    CapcomCPS3,
    NEOGEO,
    Nintendo,
    PGM,
    SammyAtomiswave,
    SegaNAOMI,
    Sega,
    Steam,
    Unknown,
    Last,
};

enum class GameSeries
{
    ArtOfFighting = 0,
    FatalFury,
    KOF,
    MvC,
    SamuraiShodown,
    SFA,
    SF2,
    SF3,
    VampireSavior,
    Unknown,
    Last,
};

// We use the first non-white space printable character '!' as the base for edit/paste calculations.
constexpr auto k_nASCIICharacterOffset = 33;
constexpr auto k_nASCIIMaxValue = 127;
constexpr auto k_nRawColorStringOverflowIndicator = '~' - k_nASCIICharacterOffset;
constexpr auto k_nEncodedColorStringOverflowIndicator = '~';

struct sSupportedGameList
{
    int nInternalGameIndex = 0;
    LPCWSTR szGameFriendlyName = L"uninit";
    LPCWSTR szGameFilterString = L"uninit";
    GamePlatform publisherKey = GamePlatform::Unknown;
    GameSeries seriesKey = GameSeries::Unknown;
    int nListedGameIndex = INVALID_UNIT_VALUE;
};

const int k_nTextureLoadCommandMask = 0xff00;
const int k_nGameLoadROMListMask = 0xf0000;
extern sSupportedGameList* pSupportedGameList;
extern const int nNumberOfLoadROMOptions;

//Image output display options
enum class eImageOutputSpriteDisplay
{
    DISPLAY_SPRITES_LEFTTORIGHT,
    DISPLAY_SPRITES_TOPTOBOTTOM
};

struct stExtraDef
{
    uint32_t uUnitN = INVALID_UNIT_VALUE;
    WCHAR szDesc[MAX_DESCRIPTION_LENGTH] = L"uninit";
    UINT32 uOffset = 0;
    UINT16 cbPaletteSize = 0;
    bool isInvisible = false;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
};

struct stPairedPaletteInfo
{
    INT8 nNodeIncrementToPartner = 1;
    bool fPairingIsFlipped = false;
    uint32_t nPalettesToJoin = 2;
    INT8 nOverallNodeIncrementTo2ndPartner = 2;
    INT8 nOverallNodeIncrementTo3rdPartner = 3;
    INT8 nOverallNodeIncrementTo4thPartner = 4;
    INT8 nOverallNodeIncrementTo5thPartner = 5;
    INT8 nOverallNodeIncrementTo6thPartner = 6;
    INT8 nOverallNodeIncrementTo7thPartner = 7;
};

struct stPaletteProcessingInformation
{
    const std::vector<std::vector<UINT16>> pProcessingSteps;
    bool fIsTarget = false;
};

struct sGame_PaletteDataset
{
    const LPCWSTR szPaletteName = L"uninit";
    const UINT32 nPaletteOffset = 0;
    const UINT32 nPaletteOffsetEnd = 0;
    const UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    const UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
    const stPairedPaletteInfo* pPalettePairingInfo = nullptr;
    const stPaletteProcessingInformation* pExtraProcessing = nullptr;
};

const stPairedPaletteInfo pairUnhandled =     { 0 };
const stPairedPaletteInfo pairHandledInCode = { 0 };
const stPairedPaletteInfo pairFullyLinkedNode = { 0, false, -1 };

const stPairedPaletteInfo pairNext = { 1 };
const stPairedPaletteInfo pairNext2 = { 2 };
const stPairedPaletteInfo pairNext3 = { 3 };
const stPairedPaletteInfo pairNext4 = { 4 };
const stPairedPaletteInfo pairNext5 = { 5 };
const stPairedPaletteInfo pairNext6 = { 6 };
const stPairedPaletteInfo pairNext7 = { 7 };
const stPairedPaletteInfo pairNext8 = { 8 };
const stPairedPaletteInfo pairNext9 = { 9 };
const stPairedPaletteInfo pairNext10 = { 10 };
const stPairedPaletteInfo pairNext11 = { 11 };
const stPairedPaletteInfo pairNext12 = { 12 };
const stPairedPaletteInfo pairNext15 = { 15 };
const stPairedPaletteInfo pairNext30 = { 30 };
const stPairedPaletteInfo pairPrevious = { -1 };
const stPairedPaletteInfo pairPrevious2 = { -2 };
const stPairedPaletteInfo pairPrevious3 = { -3 };
const stPairedPaletteInfo pairPrevious4 = { -4 };
const stPairedPaletteInfo pairPrevious5 = { -5 };
const stPairedPaletteInfo pairPrevious9 = { -9 };

// Same thing as Previous, except flip the order of the joins to avoid sprite occlusion 
const stPairedPaletteInfo pairPreviousFlipped = { -1, true };
const stPairedPaletteInfo pairPreviousFlipped2 = { -2, true };

const stPairedPaletteInfo pairNextAndNext =                         { 1, false, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext2AndNext3 =                       { 2, false, 3, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextSkipped =                  { 1, false, 3, 3 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext6 =                        { 1, false, 3, 6 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext7 =                        { 1, false, 3, 7 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext9 =                        { 1, false, 3, 9 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext12 =                       { 1, false, 3, 12 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNextAndNext39 =                       { 1, false, 3, 39 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41 =                       { 1, false, 3, 41 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext54 =                       { 1, false, 3, 54 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkipped =           { 2, false, 3, 4 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext =                        { 4, false, 3, 3 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNext2AndNext6 =                        { 2, false, 3, 6 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext3AndNext7 =                        { 3, false, 3, 7 }; // triple display... requires special handling in code
const stPairedPaletteInfo pairNext3AndNext8 =                        { 3, false, 3, 8 }; // triple display... requires special handling in code

const stPairedPaletteInfo pairNext3Palettes =                       { 1, false, 4 };          // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext32AndNextSkipped =         { 1, false, 4, 32, 34 };  // quad display... requires special handling in code
const stPairedPaletteInfo pairNextAndNext41AndNext =                { 1, false, 4, 41, 42 };  // quad display... requires special handling in code
const stPairedPaletteInfo pairNextSkippedAndNextSkippedAndNext =    { 2, false, 4, 4, 5 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNextAndNext =                 { 4, false, 4, 5, 6 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4AndNext8AndNext9 =               { 4, false, 4, 8, 9 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext7AndNext8 =               { 4, false, 4, 7, 8 };    // quad display... requires special handling in code
const stPairedPaletteInfo pairNext4AndNext6AndNext7 =               { 4, false, 4, 6, 7 };    // quad display... requires special handling in code

const stPairedPaletteInfo pairNext4Palettes =                       { 1, false, 5 }; // quint-display -- specially handled
const stPairedPaletteInfo pairNextAndNextAndNextAndNext5 =          { 1, false, 5, 2, 3, 8 };     // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext9 =          { 1, false, 5, 2, 3, 12 };    // quint display... requires special handling in code
const stPairedPaletteInfo pairNextAndNextAndNextAndNext13 =         { 1, false, 5, 2, 3, 16 };    // quint display... requires special handling in code

const stPairedPaletteInfo pairNext5Palettes =                       { 1, false, 6 }; // six-display -- specially handled

const stPairedPaletteInfo pairNext6Palettes =                       { 1, false, 7 }; // Seven-display -- specially handled
const stPairedPaletteInfo pairNext7Palettes =                       { 1, false, 8 }; // eight-display -- specially handled
const stPairedPaletteInfo pairNext11Palettes =                      { 1, false, 12 };

constexpr auto MAXIMUM_PALETTE_PAIRS_ALLOWED = 12;

// Vs Series
const stPairedPaletteInfo pairMVCDevilotNormal =                    { 1 };       // Don't use pairNext here: we manually tweak z-order
