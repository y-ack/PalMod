#pragma once
#include "gameclass.h"
#include "SFIII3_A_DEF.h"

#define SFIII3_A_USEEXTRAFILE

#define EXTRA_FILENAME_SF3 "sfiii3e.txt"

#ifdef SFIII3_A_USEEXTRAFILE
#define GetSF3ExtraDef(x) ((stExtraDef *)&SFIII3_A_EXTRA_CUSTOM[x])
#else
#define GetSF3ExtraDef(x) (const_cast<stExtraDef *>(&SFIII3_A_EXTRA[x]))
#endif

class CGame_SFIII3_A : public CGameClass
{
private:
    //Used for image selection
    int nTargetImgId = 0;
    int nNormalPalAmt = 0;

    //Used for GetPalOffset

    int nCurrPalOffs = 0;
    int nCurrPalSz = 0;

    UINT16*** pppDataBuffer = nullptr;

    static int rgExtraCountAll[SFIII3_A_NUMUNIT + 1];
    static int rgExtraCountVisibleOnly[SFIII3_A_NUMUNIT + 1];

    void GetPalOffsSz(int nUnitId, int nPalId);

    void InitDataBuffer();
    void ClearDataBuffer();

public:
    CGame_SFIII3_A(void);
    ~CGame_SFIII3_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    //    static CDescTree * GetMainTree();
    static CDescTree InitDescTree();
    //static void SetExtraDesc(sDescTreeNode * srcNode, int nButtonIndex);
    static sFileRule GetRule(int nUnitId);

    //Extra palette function
    static int GetExtraCt(int nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(int nUnitId);
    static int GetBasicAmt(int nUnitId);

    static void LoadExtraFile();

    //Normal functions
    CDescTree* GetMainTree();

    int GetBasicImgId(int nUnitId, int nPalId);
    int GetPalCt(int nUnitId);

    void CreateDefPal(sDescNode* srcNode, int nSepId);
    BOOL LoadFile(CFile* LoadedFile, int nUnitId = 0);
    BOOL SaveFile(CFile* SaveFile, int nUnitId = 0);
    BOOL CGame_SFIII3_A::UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    COLORREF* CreatePal(int nUnitId, int nPalId);
    BOOL CreateExtraPal(int nUnitId, int nPalId);

    void UpdatePalData();

    void FlushUnitFile() { safe_delete(rgFileChanged); };
    void PrepUnitFile() { if (!rgFileChanged) { rgFileChanged = new UINT16; } };

    void CheckForJojoUsage(CFile* LoadedFile);

    static stExtraDef* SFIII3_A_EXTRA_CUSTOM;
};
