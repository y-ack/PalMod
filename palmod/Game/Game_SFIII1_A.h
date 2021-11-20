#pragma once
#include "gameclass.h"
#include "SFIII1_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_SFIII1_50 = L"SFIII1e.txt";

class CGame_SFIII1_A : public CGameWithExtrasFile
{
public:
    int m_nBufferSelectedRom = 50;
    static size_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForSFIII1_50;

    static size_t rgExtraCountAll_50[SFIII1_A_50_NUMUNIT + 1];
    static size_t rgExtraCountVisibleOnly_50[SFIII1_A_50_NUMUNIT + 1];
    static size_t rgExtraLoc_50[SFIII1_A_50_NUMUNIT + 1];

    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static size_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(size_t nUnitId, size_t nPalId);
    size_t GetPaletteCountForUnit(size_t nUnitId) override;

public:
    CGame_SFIII1_A(UINT32 nConfirmedROMSize = -1, int nSF3ROMToLoad = 50);
    ~CGame_SFIII1_A(void);

    //Static functions / variables
    static CDescTree MainDescTree_50;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);
    static sFileRule GetRule(size_t nUnitId);

    //Extra palette function
    static size_t GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly = FALSE);
    static size_t GetExtraLoc(size_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static size_t GetCollectionCountForUnit(size_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static size_t GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(size_t nUnitId, size_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(size_t nUnitId, size_t nPaletteId);

    size_t GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* SFIII1_A_50_EXTRA_CUSTOM;
};
