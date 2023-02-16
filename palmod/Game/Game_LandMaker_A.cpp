#include "StdAfx.h"
#include "PalMod.h"
#include "Game_LandMaker_A.h"

CGame_LandMaker_A::LandMakerLoadingKey CGame_LandMaker_A::m_eVersionToLoad = LandMakerLoadingKey::LandMaker202;

void CGame_LandMaker_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, LandMakerLoadingKey> m_rgFileNameToVersion =
    {
        { L"e61-19.20", LandMakerLoadingKey::LandMaker202 },
        { L"e61-13.20", LandMakerLoadingKey::LandMaker201 },
        { L"mpro-3.60", LandMakerLoadingKey::LandMaker202p },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = LandMakerLoadingKey::LandMaker202;
    }

    return;
}

CGame_LandMaker_A::CGame_LandMaker_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case LandMakerLoadingKey::LandMaker202:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_202);
        break;
    case LandMakerLoadingKey::LandMaker201:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_201);
        break;
    case LandMakerLoadingKey::LandMaker202p:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_202p);
        break;
    }
}

sFileRule CGame_LandMaker_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case LandMakerLoadingKey::LandMaker202:
    default:
        return CGameClassByDir::GetRule(nRuleId, LandMaker_A_FileLoadingData_202);
    case LandMakerLoadingKey::LandMaker201:
        return CGameClassByDir::GetRule(nRuleId, LandMaker_A_FileLoadingData_201);
    case LandMakerLoadingKey::LandMaker202p:
        return CGameClassByDir::GetRule(nRuleId, LandMaker_A_FileLoadingData_202p);
    }
}

void CGame_LandMaker_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // see https://qcs.shsbs.xyz/share/ywy/land-maker#shifts
        if (m_eVersionToLoad == LandMakerLoadingKey::LandMaker201)
        {
            if (m_nCurrentPaletteROMLocation <= 0x11598)
            {
                m_nCurrentPaletteROMLocation -= 0;
            } else if (m_nCurrentPaletteROMLocation <= 0x13d02)
            {
                m_nCurrentPaletteROMLocation -= 0x4C;
            } else if (m_nCurrentPaletteROMLocation <= 0x15fb0)
            {
                m_nCurrentPaletteROMLocation -= 0x3AE;
            } else if (m_nCurrentPaletteROMLocation <= 0x163b0)
            {
                m_nCurrentPaletteROMLocation -= 0x3B4;
            } else if (m_nCurrentPaletteROMLocation <= 0x91870)
            {
                m_nCurrentPaletteROMLocation -= 0x3F4;
            } else if (m_nCurrentPaletteROMLocation <= 0xa1564)
            {
                m_nCurrentPaletteROMLocation -= 0x41C;
            } else if (m_nCurrentPaletteROMLocation <= 0xa1876)
            {
                m_nCurrentPaletteROMLocation -= 0x45E;
            } else if (m_nCurrentPaletteROMLocation > 0xa1876)
            {
                m_nCurrentPaletteROMLocation -= 0x460;
            }
        }
    }
    else // LandMaker_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}
