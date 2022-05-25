#pragma once
#include "gameclass.h"
#include "LandMaker_A_DEF.h"
#include "..\ExtraFile.h"

constexpr auto EXTRA_FILENAME_LANDMAKER_A_202O = L"LandMakrE.txt";
constexpr auto EXTRA_FILENAME_LANDMAKER_A_201J = L"LandMakrjE.txt";

class CGame_LandMaker_A_DIR : public CGameWithExtrasFile
{
private:
    int m_nBufferSelectedRom = 202;
    static uint32_t m_nSelectedRom;
    static UINT32 m_nTotalPaletteCountForLandMaker_202O;
    static UINT32 m_nTotalPaletteCountForLandMaker_201J;

    static uint32_t rgExtraCountAll_202O[LandMaker_A_202O_NUMUNIT + 1];
    static uint32_t rgExtraLoc_202O[LandMaker_A_202O_NUMUNIT + 1];
    static uint32_t rgExtraCountAll_201J[LandMaker_A_202O_NUMUNIT + 1];
    static uint32_t rgExtraLoc_201J[LandMaker_A_202O_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize; // from each rom chip
    static UINT32 m_nConfirmedROMSize;

    // multiple ROM support
    void InitDataBuffer() override;
    void ClearDataBuffer() override;
    static const sDescTreeNode* GetCurrentUnitSet();
    static uint32_t GetCurrentExtraLoc();
    static stExtraDef* GetCurrentExtraDef(int nDefCtr);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    uint32_t GetPaletteCountForUnit(uint32_t nUnitId);

public:
    CGame_LandMaker_A_DIR(UINT32 nConfirmedROMSize = -1, int nLandMakerROMToLoad = 202);
    ~CGame_LandMaker_A_DIR(void);

    static void SetROMRevision(uint32_t nROMRevisionToLoad);
    
    inline UINT32 GetSIMMLocationFromROMLocation(UINT32 nROMLocation);

    //Static functions
    static uint32_t uRuleCtr;

    static uint32_t GetRuleCtr() { return uRuleCtr; };
    static void ResetRuleCtr() { uRuleCtr = 0; };

    static sFileRule GetNextRule();
    static sFileRule GetNextRule_201J();
    static sFileRule GetRule(uint32_t nRuleId);
    static sFileRule GetRule_201J(uint32_t nUnitId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSaveUnit) override;

    //Static functions / variables
    static CDescTree MainDescTree_202O;
    static CDescTree MainDescTree_201J;

    static sDescTreeNode* InitDescTree(int nROMPaletteSetToUse);

    //Extra palette function
    static uint32_t GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly = FALSE);
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

    UINT32 GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static stExtraDef* LandMaker_A_202O_EXTRA_CUSTOM;
    static stExtraDef* LandMaker_A_201J_EXTRA_CUSTOM;
};
