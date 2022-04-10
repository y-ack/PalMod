#include "StdAfx.h"
#include "Game_LandMaker_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

uint32_t CGame_LandMaker_A_DIR::uRuleCtr = 0;

stExtraDef* CGame_LandMaker_A_DIR::LandMaker_A_EXTRA_CUSTOM = nullptr;
uint32_t CGame_LandMaker_A_DIR::rgExtraCountAll[LandMaker_A_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_LandMaker_A_DIR::rgExtraLoc[LandMaker_A_NUMUNIT + 1] = { (uint32_t)-1 };

CDescTree CGame_LandMaker_A_DIR::MainDescTree = nullptr;
UINT32 CGame_LandMaker_A_DIR::m_nExpectedGameROMSize = 0x80000; // each
UINT32 CGame_LandMaker_A_DIR::m_nConfirmedROMSize = -1;
UINT32 CGame_LandMaker_A_DIR::m_nTotalPaletteCountForLandMaker = 0;

// landmakrj
const LPCWSTR c_ppszLandMaker_Files[]{
    L"e61-13.20",
    L"e61-12.19",
    L"e61-11.18",
    L"e61-10.17",
};

CGame_LandMaker_A_DIR::CGame_LandMaker_A_DIR(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_LandMaker_A_DIR::CGame_LandMaker_A_DIR: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    // Set color mode LE RGBA8888: land maker stores BE ARGB8888; but using custom load/save so whatever.
    SetColorMode(ColMode::COLMODE_RGBA8888);

    m_nConfirmedROMSize = m_nExpectedGameROMSize * ARRAYSIZE(c_ppszLandMaker_Files);
    InitializeStatics();

    m_pszExtraFilename = EXTRA_FILENAME_LandMaker_A;

    m_nTotalInternalUnits = LandMaker_A_NUMUNIT;
    m_nExtraUnit = LandMaker_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 103;
    m_nTotalPaletteCount = m_nTotalPaletteCountForLandMaker;
    // ** This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x15bfc;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = LandMaker_A;

    // These next three values define which section in imgdat palmod looks up sprites from, as well as defining
    // what sprites palmod will load from that section.
    // For the most part, you can just keep these values since you won't have images in imgdat.
    // If for some reason there *are* already usable images in imgdat, update these values to point to the right section
    // and create an array (LandMaker_A_IMG_UNITS) that lists the sprites you want to use from that section.
    nImgGameFlag = IMGDAT_SECTION_TAITO; // This value is used to determine which section of the image file is used
    m_prgGameImageSet.clear();  // LandMaker_A_IMG_UNITS -- this is the vector of images present in imgdat once that happens

    nFileAmt = ARRAYSIZE(c_ppszLandMaker_Files);

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in buttondef.h

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating LandMaker to your game's short name.
//  ***************************************************************************************************************************************
//

void CGame_LandMaker_A_DIR::InitializeStatics()
{
    safe_delete_array(CGame_LandMaker_A_DIR::LandMaker_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_LandMaker_A_DIR::InitDescTree());
}

CGame_LandMaker_A_DIR::~CGame_LandMaker_A_DIR(void)
{
    safe_delete_array(CGame_LandMaker_A_DIR::LandMaker_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_LandMaker_A_DIR::GetMainTree()
{
    return &CGame_LandMaker_A_DIR::MainDescTree;
}

uint32_t CGame_LandMaker_A_DIR::GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, LandMaker_A_NUMUNIT, nUnitId, LandMaker_A_EXTRA_CUSTOM);
}

uint32_t CGame_LandMaker_A_DIR::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, LandMaker_A_NUMUNIT, nUnitId, LandMaker_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_LandMaker_A_DIR::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_LandMaker_A, &LandMaker_A_EXTRA_CUSTOM, LandMaker_A_EXTRALOC, m_nConfirmedROMSize);
    //LoadExtraFileForGame(EXTRA_FILENAME_LandMaker_A, nullptr, &LandMaker_A_EXTRA_CUSTOM, LandMaker_A_EXTRALOC, m_nConfirmedROMSize);

    uint32_t nUnitCt = LandMaker_A_NUMUNIT + (GetExtraCt(LandMaker_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[LandMaker_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForLandMaker = _InitDescTree(NewDescTree,
        LandMaker_A_UNITS,
        LandMaker_A_EXTRALOC,
        LandMaker_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        LandMaker_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_LandMaker_A_DIR::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", c_ppszLandMaker_Files[nUnitId & 0xFF]);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_LandMaker_A_DIR::GetNextRule() {
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(c_ppszLandMaker_Files)) {
    uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_LandMaker_A_DIR::GetSIMMLocationFromROMLocation(UINT32 nROMLocation) {
    const UINT32 nSIMMLocation = nROMLocation / ARRAYSIZE(c_ppszLandMaker_Files);
    return nSIMMLocation;
}

uint32_t CGame_LandMaker_A_DIR::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(LandMaker_A_UNITS, rgExtraCountAll, LandMaker_A_NUMUNIT, LandMaker_A_EXTRALOC, nUnitId, LandMaker_A_EXTRA_CUSTOM);
}

uint32_t CGame_LandMaker_A_DIR::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(LandMaker_A_UNITS, rgExtraCountAll, LandMaker_A_NUMUNIT, LandMaker_A_EXTRALOC, nUnitId, nCollectionId, LandMaker_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_LandMaker_A_DIR::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(LandMaker_A_UNITS, LandMaker_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_LandMaker_A_DIR::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(LandMaker_A_UNITS, rgExtraCountAll, LandMaker_A_NUMUNIT, LandMaker_A_EXTRALOC, nUnitId, LandMaker_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_LandMaker_A_DIR::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(LandMaker_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_LandMaker_A_DIR::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(LandMaker_A_UNITS, rgExtraCountAll, LandMaker_A_NUMUNIT, LandMaker_A_EXTRALOC, nUnitId, nPaletteId, LandMaker_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_LandMaker_A_DIR::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(LandMaker_A_UNITS, rgExtraCountAll, LandMaker_A_NUMUNIT, LandMaker_A_EXTRALOC, nUnitId, nPaletteId, LandMaker_A_EXTRA_CUSTOM);
}

void CGame_LandMaker_A_DIR::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != LandMaker_A_EXTRALOC)
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
        stExtraDef* pCurrDef = (stExtraDef*)&LandMaker_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_LandMaker_A_DIR::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(LandMaker_A_UNITS, rgExtraCountAll, LandMaker_A_NUMUNIT, LandMaker_A_EXTRALOC, LandMaker_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
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

    strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[1]);
    strSIMMName3.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[2]);
    strSIMMName4.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[3]);

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

    strSIMMName1.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[0]);
    strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[1]);
    strSIMMName3.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[2]);
    strSIMMName4.Format(L"%s\\%s", GetLoadDir(), c_ppszLandMaker_Files[3]);

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
