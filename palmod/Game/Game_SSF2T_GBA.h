#pragma once
#include "gameclass.h"
#include "SSF2T_GBA_DEF.h"
#include "..\ExtraFile.h"

class CGame_SSF2T_GBA : public CGameWithExtrasFile
{
public:
    static uint32_t rgExtraCountAll[SSF2T_GBA_NUMUNIT + 1];
    static uint32_t rgExtraLoc[SSF2T_GBA_NUMUNIT + 1];
    
    static void InitializeStatics();
    static uint32_t m_nConfirmedROMSize;

    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId) override;

    static constexpr auto EXTRA_FILENAME_SSF2T_GBA = L"SSF2T-GBAe.txt";
    static constexpr uint32_t m_nExpectedGameROMSize = 0x800000;

public:
    CGame_SSF2T_GBA(uint32_t nConfirmedROMSize = -1);
    ~CGame_SSF2T_GBA();

    //Static functions / variables
    static CDescTree MainDescTree;
    
    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(uint32_t nUnitId);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly = FALSE);
    static uint32_t GetExtraLoc(uint32_t nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static uint32_t GetCollectionCountForUnit(uint32_t nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static uint32_t GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static LPCWSTR GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId);

    uint32_t GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId);
    const sDescTreeNode* GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* SSF2T_GBA_EXTRA_CUSTOM;
};
