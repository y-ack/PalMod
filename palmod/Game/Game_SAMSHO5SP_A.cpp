#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO5SP_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO5SP_A::MainDescTree = nullptr;

uint32_t CGame_SAMSHO5SP_A::rgExtraCountAll[SAMSHO5SP_A_NUMUNIT + 1];
uint32_t CGame_SAMSHO5SP_A::rgExtraLoc[SAMSHO5SP_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO5SP_A::m_nTotalPaletteCountForSAMSHO5SP = 0;
UINT32 CGame_SAMSHO5SP_A::m_nExpectedGameROMSize = -1;  // Figure this out dynamically
UINT32 CGame_SAMSHO5SP_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO5SP_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO5SP_A::InitDescTree());
}

CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A(UINT32 nConfirmedROMSize, SupportedGamesList nROMToLoad /*= SAMSHO5SP_A */)
{
    OutputDebugString(L"CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO5SP_A_NUMUNIT;
    m_nExtraUnit = SAMSHO5SP_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1664;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO5SP_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO5SP;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd4000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = (SupportedGamesList)nROMToLoad;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    m_prgGameImageSet = SAMSHO5SP_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAMSHO5SP_A::~CGame_SAMSHO5SP_A(void)
{
    safe_delete_array(CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO5SP_A::GetMainTree()
{
    return &CGame_SAMSHO5SP_A::MainDescTree;
}

uint32_t CGame_SAMSHO5SP_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

uint32_t CGame_SAMSHO5SP_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO5SP_A_NUMUNIT, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO5SP_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO5SP_A, &SAMSHO5SP_A_EXTRA_CUSTOM, SAMSHO5SP_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO5SP_A_NUMUNIT + (GetExtraCt(SAMSHO5SP_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO5SP_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO5SP = _InitDescTree(NewDescTree,
        SAMSHO5SP_A_UNITS,
        SAMSHO5SP_A_EXTRALOC,
        SAMSHO5SP_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO5SP_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

UINT32 CGame_SAMSHO5SP_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1.p1", 0xfb7a6bba, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1ca.p1", 0xc30a08dd, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1c.p1", 0x9291794d, 0 },

        { L"Samurai Shodown V Special (Steam)", L"p1h.bin", 0x2d1e9ae5, 0x2dbd32dc },
    };

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

sFileRule CGame_SAMSHO5SP_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    // The arcade and Steam versions of 5SP are identical other than ROM size.  Thankfully the offsets are unchanged.
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"272-p1.p1");
    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSizeArcade;

    // Samurai Shodown Steam has a second differently sized ROM variant, but we only use the first half here, and things align.
    NewFileRule.fHasAltName = true;
    _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"p1h.bin");
    NewFileRule.uAltVerifyVar = m_nExpectedGameROMSizeSteam;

    return NewFileRule;
}

uint32_t CGame_SAMSHO5SP_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

uint32_t CGame_SAMSHO5SP_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO5SP_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO5SP_A_UNITS, SAMSHO5SP_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_SAMSHO5SP_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO5SP_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(SAMSHO5SP_A_UNITS, nUnitId, nCollectionId);
}

uint32_t CGame_SAMSHO5SP_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO5SP_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5SP_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO5SP_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

void CGame_SAMSHO5SP_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != SAMSHO5SP_A_EXTRALOC)
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
    else // SAMSHO5SP_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5SP(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO5SP_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, SAMSHO5SP_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
