#include "StdAfx.h"
#include "Game_GGXXACR_P.h"
#include "GGXXACR_P_DEF.h"
#include "..\PalMod.h"

size_t CGame_GGXXACR_P::uRuleCtr = 0;

CDescTree CGame_GGXXACR_P::MainDescTree = nullptr;

#define GGXXACR_P_DEBUG DEFAULT_GAME_DEBUG_STATE

CGame_GGXXACR_P::CGame_GGXXACR_P(UINT32 nConfirmedROMSize /* = -1 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    m_fGameUsesAlphaValue = true;
    SetColorMode(ColMode::COLMODE_RGBA8887);

    InitializeStatics();

    // Don't load extras
    m_pszExtraFilename = nullptr;

    nFileAmt = nUnitAmt = m_nTotalInternalUnits = ARRAYSIZE(GGXXACR_P_CharacterData);

    InitDataBuffer();

    nGameFlag = GGXXACR_P;
    nImgGameFlag = IMGDAT_SECTION_GUILTYGEAR;
    // no images yet
    m_prgGameImageSet = GGXX_ACR_IMGIDS_USED;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    // The label set is variable, so set correctly each time we load that specific unit
    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(size_t) * nUnitAmt);

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_GGXXACR_P::~CGame_GGXXACR_P()
{
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

void CGame_GGXXACR_P::InitializeStatics()
{
    MainDescTree.SetRootTree(CGame_GGXXACR_P::InitDescTree());
}

sFileRule CGame_GGXXACR_P::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    const size_t nAdjustedUnitId = (nUnitId & RULE_COUNTER_DEMASK);
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", GGXXACR_P_CharacterData[nAdjustedUnitId].pszFileName);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = GGXXACR_P_CharacterData[nAdjustedUnitId].nExpectedFileSize;

    return NewFileRule;
}

sFileRule CGame_GGXXACR_P::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(GGXXACR_P_CharacterData))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sDescTreeNode* CGame_GGXXACR_P::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;
    UINT16 nUnitCt = ARRAYSIZE(GGXXACR_P_CharacterData);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GGXXACR_P]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CGame_GGXXACR_P_DIR::InitDescTree: Building desc tree for GGXXACR_P...\n");
    OutputDebugString(strMsg);

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        size_t nUnitChildCount = GetCollectionCountForUnit(iUnitCtr);

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];

        //Set each description
        _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", GGXXACR_P_CharacterData[iUnitCtr].pszCharacter);

        UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
        //All children have collection trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = nUnitChildCount;

#if GGXXACR_P_DEBUG
        strMsg.Format(L"Unit: \"%s\", %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nUnitCt, UnitNode->uChildAmt);
        OutputDebugString(strMsg);
#endif

        size_t nTotalPalettesUsedInUnit = 0;

        //Set data for each child group ("collection")
        for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
        {
            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

            //Set each collection data
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, GetDescriptionForCollection(iUnitCtr, iCollectionCtr));
            //Collection children have nodes
            size_t nListedChildrenCount = GetNodeCountForCollection(iUnitCtr, iCollectionCtr);
            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nListedChildrenCount;
            CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GGXXACR_P_DEBUG
            strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                if (iCollectionCtr == 0)
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXACR_P_CharacterData[iUnitCtr].ppszPaletteList[nNodeIndex]);
                }
                else
                {
                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", GGXXACR_P_CharacterData[iUnitCtr].prgExtraPalettes[nNodeIndex].szPaletteName);
                }

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                nTotalPaletteCount++;

#if GGXXACR_P_DEBUG
                strMsg.Format(L"\t\tPalette: \"%s\", %u of %u\n", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif
            }
        }
    }

    m_nTotalPaletteCount = nTotalPaletteCount;

    strMsg.Format(L"CGame_GGXXACR_P_DIR::InitDescTree: Loaded %u palettes for GGXXACR ROM\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    return NewDescTree;
}

size_t CGame_GGXXACR_P::GetCollectionCountForUnit(size_t nUnitId)
{
    // One core set per character, plus optional extras
    return (GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes.empty()) ? 1 : 2;
}

size_t CGame_GGXXACR_P::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    if (nCollectionId == 0)
    {
        return GGXXACR_P_CharacterData[nUnitId].ppszPaletteList.size();
    }
    else
    {
        return GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes.size();
    }
}

size_t CGame_GGXXACR_P::GetPaletteCountForUnit(size_t nUnitId)
{
    return GGXXACR_P_CharacterData[nUnitId].ppszPaletteList.size() + GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes.size();
}

LPCWSTR CGame_GGXXACR_P::GetDescriptionForCollection(size_t /*nUnitId */, size_t nCollectionId )
{
    if (nCollectionId == 0)
    {
        return L"Core Palettes";
    }
    else
    {
        return L"Effects";
    }
}

void CGame_GGXXACR_P::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    if (nPalId < GGXXACR_P_CharacterData[nUnitId].ppszPaletteList.size())
    {
        // GGXXACR palettes are all 0x100 long
        const int cbPaletteSizeOnDisc = 0x400;

        m_pszCurrentPaletteName = GGXXACR_P_CharacterData[nUnitId].ppszPaletteList[nPalId];
        
        m_nCurrentPaletteROMLocation = GGXXACR_P_CharacterData[nUnitId].nInitialLocation + (cbPaletteSizeOnDisc * nPalId) + (0x20 * nPalId);
        
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
    else // effects palettes
    {
        size_t nAdjustedPaletteId = nPalId - GGXXACR_P_CharacterData[nUnitId].ppszPaletteList.size();

        int cbPaletteSizeOnDisc = GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffsetEnd - GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;

        m_pszCurrentPaletteName = GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].szPaletteName;
        m_nCurrentPaletteROMLocation = GGXXACR_P_CharacterData[nUnitId].prgExtraPalettes[nAdjustedPaletteId].nPaletteOffset;
        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
    }
}

BOOL CGame_GGXXACR_P::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    int nTargetImgId = 0;
    size_t nImgUnitId = INVALID_UNIT_VALUE;
    int nSrcStart = (int)0;
    size_t nSrcAmt = 1;
    
    if (NodeGet->uPalId < GGXXACR_P_CharacterData[NodeGet->uUnitId].ppszPaletteList.size())
    {
        // core palettes
        nSrcStart = 0;
        nSrcAmt = GGXXACR_P_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();
        pButtonLabelSet = GGXXACR_P_CharacterData[NodeGet->uUnitId].ppszPaletteList;
        nImgUnitId = GGXXACR_P_CharacterData[NodeGet->uUnitId].nSpriteIndex;
    }
    else
    {
        // effects palettes
        size_t nPalIdInNode = NodeGet->uPalId - GGXXACR_P_CharacterData[NodeGet->uUnitId].ppszPaletteList.size();
        nSrcStart = NodeGet->uPalId;
        nSrcAmt = 1;
        pButtonLabelSet = DEF_NOBUTTONS;
        nImgUnitId = GGXXACR_P_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode].indexImgToUse;
        nTargetImgId = GGXXACR_P_CharacterData[NodeGet->uUnitId].prgExtraPalettes[nPalIdInNode].indexOffsetToUse;
    }

    int nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

BOOL CGame_GGXXACR_P::LoadFile(CFile* LoadedFile, size_t nUnitNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_GGXXACR_P_DIR::LoadFile: Preparing to load data for unit number %u (character %s)\n", nUnitNumber, GGXXACR_P_CharacterData[nUnitNumber].pszCharacter);
    OutputDebugString(strInfo);

#ifdef USE_DYNAMIC_LOCATION_LOOKUP
    LONGLONG nPalettePointer = 0;

    LoadedFile->Seek(0, CFile::begin);
    LoadedFile->Read(&nPalettePointer, 0x02);
        
    UINT32 nPaletteStart = 0;

    LoadedFile->Seek(nPalettePointer + 0x0c, CFile::begin);
    LoadedFile->Read(&nPaletteStart, 0x04);

    GGXXACR_P_CharacterData[nUnitNumber].nInitialLocation = nPaletteStart + 0x90;
#endif

    strInfo.Format(L"\tCGame_GGXXACR_P_DIR::LoadFile: Loaded palettes starting at location 0x%x\n", GGXXACR_P_CharacterData[nUnitNumber].nInitialLocation);
    OutputDebugString(strInfo);

    size_t nPalAmt = GetPaletteCountForUnit(nUnitNumber);

    if (m_pppDataBuffer32[nUnitNumber] == nullptr)
    {
        m_pppDataBuffer32[nUnitNumber] = new UINT32 * [nPalAmt];
        memset(m_pppDataBuffer32[nUnitNumber], 0, sizeof(UINT32*) * nPalAmt);
    }

    // These are already sorted, no need to redirect
    rgUnitRedir[nUnitNumber] = nUnitNumber;

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        LoadSpecificPaletteData(nUnitNumber, nPalCtr);

        m_pppDataBuffer32[nUnitNumber][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
        LoadedFile->Read(m_pppDataBuffer32[nUnitNumber][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);

#if GGXXACR_P_DEBUG
        strInfo.Format(L"\tCGame_GGXXACR_P_DIR::LoadFile: Loaded palette '%s' from location 0x%x\n", m_pszCurrentPaletteName, m_nCurrentPaletteROMLocation);
        OutputDebugString(strInfo);
#endif
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    return fSuccess;
}

BOOL CGame_GGXXACR_P::SaveFile(CFile* SaveFile, size_t nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    size_t nPalAmt = GetPaletteCountForUnit(nUnitId);

    for (size_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
    {
        if (IsPaletteDirty(nUnitId, nPalCtr))
        {
            LoadSpecificPaletteData(nUnitId, nPalCtr);

            SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
            if (GameIsUsing16BitColor())
            {
                SaveFile->Write(m_pppDataBuffer[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
            else if (GameIsUsing32BitColor())
            {
                SaveFile->Write(m_pppDataBuffer32[nUnitId][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }

            nTotalPalettesSaved++;
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for unit %u\n", nTotalPalettesSaved, nUnitId);
    OutputDebugString(strMsg);

    return TRUE;
}
