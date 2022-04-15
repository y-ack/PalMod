#include "StdAfx.h"
#include "Game_LandMaker_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

uint32_t CGame_LandMaker_A_DIR::uRuleCtr = 0;

stExtraDef* CGame_LandMaker_A_DIR::LandMaker_A_202O_EXTRA_CUSTOM = nullptr;
stExtraDef* CGame_LandMaker_A_DIR::LandMaker_A_201J_EXTRA_CUSTOM = nullptr;
uint32_t CGame_LandMaker_A_DIR::rgExtraCountAll_202O[LandMaker_A_202O_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_LandMaker_A_DIR::rgExtraCountAll_201J[LandMaker_A_201J_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_LandMaker_A_DIR::rgExtraLoc_202O[LandMaker_A_202O_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_LandMaker_A_DIR::rgExtraLoc_201J[LandMaker_A_201J_NUMUNIT + 1] = { (uint32_t)-1 };

CDescTree CGame_LandMaker_A_DIR::MainDescTree_202O = nullptr;
CDescTree CGame_LandMaker_A_DIR::MainDescTree_201J = nullptr;
UINT32 CGame_LandMaker_A_DIR::m_nExpectedGameROMSize = 0x80000; // each
UINT32 CGame_LandMaker_A_DIR::m_nConfirmedROMSize = -1;

uint32_t CGame_LandMaker_A_DIR::m_nSelectedRom = 202;
UINT32 CGame_LandMaker_A_DIR::m_nTotalPaletteCountForLandMaker_202O = 0;
UINT32 CGame_LandMaker_A_DIR::m_nTotalPaletteCountForLandMaker_201J = 0;

// landmakr
const LPCWSTR c_ppszLandMaker202O_Files[]{
    L"e61-19.20",
    L"e61-18.19",
    L"e61-17.18",
    L"e61-16.17",
};
// landmakrj
const LPCWSTR c_ppszLandMaker201J_Files[]{
    L"e61-13.20",
    L"e61-12.19",
    L"e61-11.18",
    L"e61-10.17",
};

void CGame_LandMaker_A_DIR::InitializeStatics()
{
    safe_delete_array(CGame_LandMaker_A_DIR::LandMaker_A_202O_EXTRA_CUSTOM);
    safe_delete_array(CGame_LandMaker_A_DIR::LandMaker_A_201J_EXTRA_CUSTOM);

    memset(rgExtraCountAll_202O, -1, sizeof(rgExtraCountAll_202O));
    memset(rgExtraCountAll_201J, -1, sizeof(rgExtraCountAll_201J));
    memset(rgExtraLoc_202O, -1, sizeof(rgExtraLoc_202O));
    memset(rgExtraLoc_201J, -1, sizeof(rgExtraLoc_201J));

    MainDescTree_202O.SetRootTree(CGame_LandMaker_A_DIR::InitDescTree(202));
    MainDescTree_201J.SetRootTree(CGame_LandMaker_A_DIR::InitDescTree(201));
}

CGame_LandMaker_A_DIR::CGame_LandMaker_A_DIR(UINT32 nConfirmedROMSize, int nLandMakerROMToLoad)
{
    OutputDebugString(L"CGame_LandMaker_A_DIR::CGame_LandMaker_A_DIR: Loading ROM...\n");

    m_nConfirmedROMSize = m_nExpectedGameROMSize * ARRAYSIZE(c_ppszLandMaker202O_Files);

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    // Set color mode LE RGBA8888: land maker stores BE ARGB8888 maybe, but using custom load/save so whatever.
    SetColorMode(ColMode::COLMODE_RGBA8888);

    InitializeStatics();

    m_nSelectedRom = nLandMakerROMToLoad;

    switch (m_nSelectedRom)
    {
    case 202:
    default:
        m_pszExtraFilename = EXTRA_FILENAME_LANDMAKER_A_202O;
        m_nTotalInternalUnits = LandMaker_A_202O_NUMUNIT;
        m_nExtraUnit = LandMaker_A_202O_EXTRALOC;

        nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 129;
        m_nTotalPaletteCount = m_nTotalPaletteCountForLandMaker_202O;
        m_nLowestKnownPaletteRomLocation = 0x15db2; // 0x15bfc for landmakrj
        break;
    case 201:
        m_pszExtraFilename = EXTRA_FILENAME_LANDMAKER_A_201J;
        m_nTotalInternalUnits = LandMaker_A_201J_NUMUNIT;
        m_nExtraUnit = LandMaker_A_201J_EXTRALOC;

        nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

        m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 129;
        m_nTotalPaletteCount = m_nTotalPaletteCountForLandMaker_201J;
        m_nLowestKnownPaletteRomLocation = 0x15bfc;
        break;
    };

    InitDataBuffer();

    nGameFlag = LandMaker_A;

    // If for some reason there *are* already usable images in imgdat, update these values to point to the right section
    // and create an array (LandMaker_A_IMG_UNITS) that lists the sprites you want to use from that section.
    nImgGameFlag = IMGDAT_SECTION_TAITO; // This value is used to determine which section of the image file is used
    m_prgGameImageSet.clear();  // LandMaker_A_IMG_UNITS -- this is the vector of images present in imgdat once that happens

    nFileAmt = ARRAYSIZE(c_ppszLandMaker202O_Files);

    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_NOBUTTONS; // no palette select

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_LandMaker_A_DIR::~CGame_LandMaker_A_DIR(void)
{
    safe_delete_array(CGame_LandMaker_A_DIR::LandMaker_A_202O_EXTRA_CUSTOM);
    safe_delete_array(CGame_LandMaker_A_DIR::LandMaker_A_201J_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}


UINT32 CGame_LandMaker_A_DIR::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-19.20", 0xf92eccd0, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-18.19", 0x5a26c9e0, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-17.18", 0x710776a8, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-17.17", 0xb073cda9, 0 },

        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-13.20", 0x0af756a2, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-12.19", 0x636b3df9, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-11.18", 0x279a0ee4, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-10.17", 0xdaabf2b2, 0 },
    };

#ifdef MAME_NOTES
GAME( 1998, landmakr,   0,        f3,      f3, taito_f3_state, init_landmakr, ROT0,   "Taito Corporation",         "Land Maker (Ver 2.02O 1998/06/02)", 0 )
	ROM_LOAD32_BYTE("e61-19.20", 0x000000, 0x80000, CRC(f92eccd0) SHA1(88e836390be1ca08c578080662d17007a9e0bcc3) )
	ROM_LOAD32_BYTE("e61-18.19", 0x000001, 0x80000, CRC(5a26c9e0) SHA1(e7f09722f6b7a459248c2c8ad0a2695365cc78dc) )
	ROM_LOAD32_BYTE("e61-17.18", 0x000002, 0x80000, CRC(710776a8) SHA1(669aa086e7a5faedd90407e558c01bf5f0869790) )
	ROM_LOAD32_BYTE("e61-16.17", 0x000003, 0x80000, CRC(b073cda9) SHA1(a8b713c3e17e431b5789a70d6f9b0e0a6b02624a) )
GAME( 1998, landmakrj,  landmakr, f3,      f3, taito_f3_state, init_landmakr, ROT0,   "Taito Corporation",         "Land Maker (Ver 2.01J 1998/06/01)", 0 )
	ROM_LOAD32_BYTE("e61-13.20", 0x000000, 0x80000, CRC(0af756a2) SHA1(2dadac6873f2491ee77703f07f00dde2aa909355) )
	ROM_LOAD32_BYTE("e61-12.19", 0x000001, 0x80000, CRC(636b3df9) SHA1(78a5bf4977bb90d710942188ce5016f3df499feb) )
	ROM_LOAD32_BYTE("e61-11.18", 0x000002, 0x80000, CRC(279a0ee4) SHA1(08380286737b33db76a79b27d0df5faba17dfb96) )
	ROM_LOAD32_BYTE("e61-10.17", 0x000003, 0x80000, CRC(daabf2b2) SHA1(dbfbe38841fc2f937052353eff1202790d364b9f) )
#endif

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

uint32_t CGame_LandMaker_A_DIR::GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetExtraCount(rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, nUnitId, LandMaker_A_202O_EXTRA_CUSTOM);
    case 201:
        return _GetExtraCount(rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, nUnitId, LandMaker_A_201J_EXTRA_CUSTOM);
    };
}

uint32_t CGame_LandMaker_A_DIR::GetExtraLoc(uint32_t nUnitId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetExtraLocation(rgExtraLoc_202O, LandMaker_A_202O_NUMUNIT, nUnitId, LandMaker_A_202O_EXTRA_CUSTOM);
    case 201:
        return _GetExtraLocation(rgExtraLoc_201J, LandMaker_A_201J_NUMUNIT, nUnitId, LandMaker_A_201J_EXTRA_CUSTOM);
    };
}


const sDescTreeNode* CGame_LandMaker_A_DIR::GetCurrentUnitSet()
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return LandMaker_A_202O_UNITS;
    case 201:
        return LandMaker_A_201J_UNITS;
    };
}

uint32_t CGame_LandMaker_A_DIR::GetCurrentExtraLoc()
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return LandMaker_A_202O_EXTRALOC;
    case 201:
        return LandMaker_A_201J_EXTRALOC;
    };
}

stExtraDef* CGame_LandMaker_A_DIR::GetCurrentExtraDef(int nDefCtr)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return (stExtraDef*)&LandMaker_A_202O_EXTRA_CUSTOM[nDefCtr];
    case 201:
        return (stExtraDef*)&LandMaker_A_201J_EXTRA_CUSTOM[nDefCtr];
    };
}

CDescTree* CGame_LandMaker_A_DIR::GetMainTree()
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return &CGame_LandMaker_A_DIR::MainDescTree_202O;
    case 201:
        return &CGame_LandMaker_A_DIR::MainDescTree_201J;
    };
}


sDescTreeNode* CGame_LandMaker_A_DIR::InitDescTree(int nROMPaletteSetToUse)
{
    m_nSelectedRom = nROMPaletteSetToUse;

    bool fHaveExtras;
    uint32_t nUnitCt;
    uint32_t nExtraUnitLocation;

    switch (m_nSelectedRom)
    {
    case 202:
    default:
        nExtraUnitLocation = LandMaker_A_202O_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_LANDMAKER_A_202O, &LandMaker_A_202O_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = LandMaker_A_202O_NUMUNIT + (fHaveExtras ? 1 : 0);
        break;
    case 201:
        nExtraUnitLocation = LandMaker_A_201J_EXTRALOC;
        LoadExtraFileForGame(EXTRA_FILENAME_LANDMAKER_A_201J, &LandMaker_A_201J_EXTRA_CUSTOM, nExtraUnitLocation, m_nConfirmedROMSize);
        fHaveExtras = (GetExtraCt(nExtraUnitLocation) > 0);
        nUnitCt = LandMaker_A_201J_NUMUNIT + (fHaveExtras ? 1 : 0);
        break;
    };

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[LandMaker_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    switch (m_nSelectedRom)
    {
    case 202:
    default:
        m_nTotalPaletteCountForLandMaker_202O = _InitDescTree(NewDescTree,
            LandMaker_A_202O_UNITS,
            LandMaker_A_202O_EXTRALOC,
            LandMaker_A_202O_NUMUNIT,
            rgExtraCountAll_202O,
            rgExtraLoc_202O,
            LandMaker_A_202O_EXTRA_CUSTOM
        );
        break;
    case 201:
        m_nTotalPaletteCountForLandMaker_201J = _InitDescTree(NewDescTree,
            LandMaker_A_201J_UNITS,
            LandMaker_A_201J_EXTRALOC,
            LandMaker_A_201J_NUMUNIT,
            rgExtraCountAll_201J,
            rgExtraLoc_201J,
            LandMaker_A_201J_EXTRA_CUSTOM
        );
        break;
    };

    return NewDescTree;
}

sFileRule CGame_LandMaker_A_DIR::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // NOTE: cannot switch on m_nSelectedRom at this point in load process, no effect
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        // This value is only used for directory-based games
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", c_ppszLandMaker202O_Files[nUnitId & 0xFF]);
        break;
    case 201:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", c_ppszLandMaker201J_Files[nUnitId & 0xFF]);
        break;
    }
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_LandMaker_A_DIR::GetNextRule() {
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(c_ppszLandMaker202O_Files)) {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_LandMaker_A_DIR::GetSIMMLocationFromROMLocation(UINT32 nROMLocation) {
    const UINT32 nSIMMLocation = nROMLocation / ARRAYSIZE(c_ppszLandMaker202O_Files);
    return nSIMMLocation;
}

uint32_t CGame_LandMaker_A_DIR::GetCollectionCountForUnit(uint32_t nUnitId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetCollectionCountForUnit(LandMaker_A_202O_UNITS, rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, LandMaker_A_202O_EXTRALOC, nUnitId, LandMaker_A_202O_EXTRA_CUSTOM);
    case 201:
        return _GetCollectionCountForUnit(LandMaker_A_201J_UNITS, rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, LandMaker_A_201J_EXTRALOC, nUnitId, LandMaker_A_201J_EXTRA_CUSTOM);
    };
}

uint32_t CGame_LandMaker_A_DIR::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetNodeCountForCollection(LandMaker_A_202O_UNITS, rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, LandMaker_A_202O_EXTRALOC, nUnitId, nCollectionId, LandMaker_A_202O_EXTRA_CUSTOM);
    case 201:
        return _GetNodeCountForCollection(LandMaker_A_201J_UNITS, rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, LandMaker_A_201J_EXTRALOC, nUnitId, nCollectionId, LandMaker_A_201J_EXTRA_CUSTOM);
    };
}

LPCWSTR CGame_LandMaker_A_DIR::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetDescriptionForCollection(LandMaker_A_202O_UNITS, LandMaker_A_202O_EXTRALOC, nUnitId, nCollectionId);
    case 201:
        return _GetDescriptionForCollection(LandMaker_A_201J_UNITS, LandMaker_A_201J_EXTRALOC, nUnitId, nCollectionId);
    };
}

uint32_t CGame_LandMaker_A_DIR::GetPaletteCountForUnit(uint32_t nUnitId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetPaletteCountForUnit(LandMaker_A_202O_UNITS, rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, LandMaker_A_202O_EXTRALOC, nUnitId, LandMaker_A_202O_EXTRA_CUSTOM);
    case 201:
        return _GetPaletteCountForUnit(LandMaker_A_201J_UNITS, rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, LandMaker_A_201J_EXTRALOC, nUnitId, LandMaker_A_201J_EXTRA_CUSTOM);
    };
}

const sGame_PaletteDataset* CGame_LandMaker_A_DIR::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetPaletteSet(LandMaker_A_202O_UNITS, nUnitId, nCollectionId);
    case 201:
        return _GetPaletteSet(LandMaker_A_201J_UNITS, nUnitId, nCollectionId);
    };
}

uint32_t CGame_LandMaker_A_DIR::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_LandMaker_A_DIR::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _GetNodeFromPaletteId(LandMaker_A_202O_UNITS, rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, LandMaker_A_202O_EXTRALOC, nUnitId, nPaletteId, LandMaker_A_202O_EXTRA_CUSTOM, fReturnBasicNodesOnly);
    case 201:
        return _GetNodeFromPaletteId(LandMaker_A_201J_UNITS, rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, LandMaker_A_201J_EXTRALOC, nUnitId, nPaletteId, LandMaker_A_201J_EXTRA_CUSTOM, fReturnBasicNodesOnly);
    };
}

const sGame_PaletteDataset* CGame_LandMaker_A_DIR::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
       return _GetSpecificPalette(LandMaker_A_202O_UNITS, rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, LandMaker_A_202O_EXTRALOC, nUnitId, nPaletteId, LandMaker_A_202O_EXTRA_CUSTOM);
    case 201:
       return _GetSpecificPalette(LandMaker_A_201J_UNITS, rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, LandMaker_A_201J_EXTRALOC, nUnitId, nPaletteId, LandMaker_A_201J_EXTRA_CUSTOM);
    };
}

void CGame_LandMaker_A_DIR::InitDataBuffer()
{
    m_nBufferSelectedRom = m_nSelectedRom;
    m_pppDataBuffer32 = new UINT32 * *[nUnitAmt];
    memset(m_pppDataBuffer32, NULL, sizeof(UINT32**) * nUnitAmt);
}

void CGame_LandMaker_A_DIR::ClearDataBuffer()
{
    int nCurrentROMMode = m_nSelectedRom;

    m_nSelectedRom = m_nBufferSelectedRom;

    if (m_pppDataBuffer32)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer32[nUnitCtr])
            {
                uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer32[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer32[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer32);
    }

    m_nSelectedRom = nCurrentROMMode;
}

void CGame_LandMaker_A_DIR::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != GetCurrentExtraLoc())
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // LandMaker_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetCurrentExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_LandMaker_A_DIR::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    switch (m_nSelectedRom)
    {
    case 202:
    default:
        return _UpdatePalImg(LandMaker_A_202O_UNITS, rgExtraCountAll_202O, LandMaker_A_202O_NUMUNIT, LandMaker_A_202O_EXTRALOC, LandMaker_A_202O_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
    case 201:
        return _UpdatePalImg(LandMaker_A_201J_UNITS, rgExtraCountAll_201J, LandMaker_A_201J_NUMUNIT, LandMaker_A_201J_EXTRALOC, LandMaker_A_201J_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
    };
}


// copied from Game_DANKUGA_A.cpp
BOOL CGame_LandMaker_A_DIR::LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) {
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(
        L"CGame_LandMaker_A_DIR::LoadFile: Preparing to load data from SIMM number "
        L"%u\n",
        nSIMMNumber);
    OutputDebugString(strInfo);

    if (nSIMMNumber != 0) {
        // We're done with our "files" but gameload has a loose mapping between
        // files and unit count. We can handle that mapping by simply setting the
        // "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;

        OutputDebugString(L"\tAlready handled.\n");
        return TRUE;
    }

    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    switch (m_nSelectedRom)
    {
    case 202:
    default:
        strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[1]);
        strSIMMName3.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[2]);
        strSIMMName4.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[3]);
        break;
    case 201:
        strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[1]);
        strSIMMName3.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[2]);
        strSIMMName4.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[3]);
        break;
    };

    if ((fileSIMM2.Open(strSIMMName2, CFile::modeRead | CFile::typeBinary)) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeRead | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeRead | CFile::typeBinary))) {

        OutputDebugString(L"\tLoading Land Maker from SIMMs....\n");

        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++) {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer32[nUnitCtr] == nullptr) {
                m_pppDataBuffer32[nUnitCtr] = new UINT32*[nPalAmt];
                memset(m_pppDataBuffer32[nUnitCtr], NULL, sizeof(UINT32*) * nPalAmt);
            }

            // These are already sorted, no need to redirect
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++) {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                m_pppDataBuffer32[nUnitCtr][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];
                memset(m_pppDataBuffer32[nUnitCtr][nPalCtr], NULL, sizeof(UINT32) * m_nCurrentPaletteSizeInColors);

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                fileSIMM2.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                fileSIMM3.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                fileSIMM4.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                for (UINT32 nColorsRead = 0; nColorsRead < m_nCurrentPaletteSizeInColors; nColorsRead++) {
                    BYTE a, r, g, b;

										LoadedFile->Read(&a, 1);
                    fileSIMM2.Read(&r, 1);
                    fileSIMM3.Read(&g, 1);
                    fileSIMM4.Read(&b, 1);
                    // be[argb] -> le[rgba]
                    UINT32 nColorValue = (UINT32)(a << 24 | b << 16 | g << 8 | r);

                    m_pppDataBuffer32[nUnitCtr][nPalCtr][nColorsRead] = nColorValue;
                }
            }
        }
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull) {
        fileSIMM2.Close();
    }

    if (fileSIMM3.m_hFile != CFile::hFileNull) {
        fileSIMM3.Close();
    }

    if (fileSIMM4.m_hFile != CFile::hFileNull) {
        fileSIMM4.Close();
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return fSuccess;
}

BOOL CGame_LandMaker_A_DIR::SaveFile(CFile* SaveFile, uint32_t nSaveUnit) {
    CString strInfo;
    strInfo.Format(
        L"CGame_LandMaker_A_DIR::SaveFile: Preparing to save data for Land Maker ROM "
        L"set\n");
    OutputDebugString(strInfo);

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    switch (m_nSelectedRom)
    {
    case 202:
    default:
        strSIMMName1.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[0]);
        strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[1]);
        strSIMMName3.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[2]);
        strSIMMName4.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker202O_Files[3]);
        break;
    case 201:
        strSIMMName1.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[0]);
        strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[1]);
        strSIMMName3.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[2]);
        strSIMMName4.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker201J_Files[3]);
        break;
    };

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary))) {

        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++) {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++) {
                if (IsPaletteDirty(nUnitCtr, nPalCtr)) {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                    fileSIMM1.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    fileSIMM2.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    fileSIMM3.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    fileSIMM4.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                    for (UINT32 nColorsWritten = 0; nColorsWritten < m_nCurrentPaletteSizeInColors; nColorsWritten++) {
                        UINT32 nColorValue = m_pppDataBuffer32[nUnitCtr][nPalCtr][nColorsWritten];

                        // le[rgba] -> be[argb]
                        BYTE a = (nColorValue & 0xFF000000) >> 24;
                        BYTE b = (nColorValue & 0xFF0000) >> 16;
                        BYTE g = (nColorValue & 0xFF00) >> 8;
                        BYTE r = nColorValue & 0xFF;

                        fileSIMM1.Write(&a, 1);
                        fileSIMM2.Write(&r, 1);
                        fileSIMM3.Write(&g, 1);
                        fileSIMM4.Write(&b, 1);
                    }
                }
            }
        }
    }

    if (fileSIMM1.m_hFile != CFile::hFileNull) {
        fileSIMM1.Close();
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull) {
        fileSIMM2.Close();
    }

    if (fileSIMM3.m_hFile != CFile::hFileNull) {
        fileSIMM3.Close();
    }

    if (fileSIMM4.m_hFile != CFile::hFileNull) {
        fileSIMM4.Close();
    }

    return TRUE;
}
