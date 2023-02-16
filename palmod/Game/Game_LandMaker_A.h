#pragma once
#include "GameClassByDir.h"
#include "LandMaker_A_DEF.h"

class CGame_LandMaker_A : public CGameClassByDir
{
private:
    enum class LandMakerLoadingKey
    {
            LandMaker201,
            LandMaker202,
            LandMaker202p,
    };
    static LandMakerLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData LandMaker_A_FileLoadingData_202 =
    {
        {
            { L"e61-19.20", 0x80000 },
            { L"e61-18.19", 0x80000 },
            { L"e61-17.18", 0x80000 },
            { L"e61-16.17", 0x80000 },
        },
        FileReadType::Interleaved_4FileSets,
    };
    static inline const sDirectoryLoadingData LandMaker_A_FileLoadingData_201 =
    {
        {
            { L"e61-13.20", 0x80000 },
            { L"e61-12.19", 0x80000 },
            { L"e61-11.18", 0x80000 },
            { L"e61-10.17", 0x80000 },
        },
        FileReadType::Interleaved_4FileSets,
    };
    static inline const sDirectoryLoadingData LandMaker_A_FileLoadingData_202p =
    {
        {
            { L"mpro-3.60", 0x80000 },
            { L"mpro-2.61", 0x80000 },
            { L"mpro-1.62", 0x80000 },
            { L"mpro-0.63", 0x80000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // multiple shifts, see https://qcs.shsbs.xyz/share/ywy/land-maker#shifts
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-19.20", 0xf92eccd0, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-13.20", 0x0af756a2, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02, prototype)", L"mpro-3.60", 0xf92eccd0, 0 },

        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-18.19", 0x5a26c9e0, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-12.19", 0x636b3df9, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02, prototype)", L"mpro-2.61", 0x5a26c9e0, 0 },

        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-17.18", 0x710776a8, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-11.18", 0x279a0ee4, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02, prototype)", L"mpro-1.62", 0x710776a8, 0 },

        // proto differs only in a config byte position
        { L"Land Maker (Ver 2.02O 1998/06/02)", L"e61-16.17", 0xb073cda9, 0 },
        { L"Land Maker (Ver 2.01J 1998/06/01)", L"e61-10.17", 0xdaabf2b2, 0 },
        { L"Land Maker (Ver 2.02O 1998/06/02, prototype)", L"mpro-0.63", 0xbc71dd2f, 0 },
    };

    const sCoreGameData m_sCoreGameData_202
    {
        L"Land Maker 2.02O (Taito F3 System Arcade)",
        LandMaker_A,
        IMGDAT_SECTION_TAITO,
        LandMaker_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_BE,
        LandMaker_A_FileLoadingData_202,
        m_rgCRC32Data,
        LandMaker_A_202O_UNITS,
        ARRAYSIZE(LandMaker_A_202O_UNITS),
        L"LandMakere.txt",        // Extra filename
        246,                      // Count of palettes listed in the header
        0x15BFC,                  // Lowest known location used for palettes
    };
    const sCoreGameData m_sCoreGameData_201
    {
        L"Land Maker 2.01J (Taito F3 System Arcade)",
        LandMaker_A,
        IMGDAT_SECTION_TAITO,
        LandMaker_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_BE,
        LandMaker_A_FileLoadingData_201,
        m_rgCRC32Data,
        LandMaker_A_202O_UNITS,   // n.b. LoadSpecificPaletteData for shifts
        ARRAYSIZE(LandMaker_A_202O_UNITS),
        L"LandMakerJe.txt",       // Extra filename
        246,                      // Count of palettes listed in the header
        0x15BFC,                  // Lowest known location used for palettes
    };
    const sCoreGameData m_sCoreGameData_202p
    {
        L"Land Maker 2.02O (Taito F3 System Arcade)",
        LandMaker_A,
        IMGDAT_SECTION_TAITO,
        LandMaker_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_BE,
        LandMaker_A_FileLoadingData_202p,
        m_rgCRC32Data,
        LandMaker_A_202O_UNITS,
        ARRAYSIZE(LandMaker_A_202O_UNITS),
        L"LandMakere.txt",       // Extra filename
        246,                     // Count of palettes listed in the header
        0x15BFC,                 // Lowest known location used for palettes
    };



public:
    CGame_LandMaker_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId);
};
