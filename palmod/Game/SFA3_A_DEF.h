#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA3_A_RYU_PALETTES. 
// * Update every array using SFA3_A_NUM_IND below
// * Update the index lookups in Game_SFA3_A.cpp that are marked 
//       - look for usage of index_SFA3_Ryu to find them
// That should be it.  Good luck.

enum Supported_SFA3_PaletteListIndex
{
    index_SFA3_Ryu,
    index_SFA3_Ken,
    index_SFA3_Gouki,
    index_SFA3_Charlie,
    index_SFA3_ChunLi,
    index_SFA3_Adon,
    index_SFA3_Sodom,
    index_SFA3_Guy,
    index_SFA3_Birdie,
    index_SFA3_Rose,
    index_SFA3_MBison,
    index_SFA3_Sagat,
    index_SFA3_Dan,
    index_SFA3_Sakura,
    index_SFA3_Rolento,
    index_SFA3_Dhalsim,
    index_SFA3_Zangief,
    index_SFA3_Gen,
    index_SFA3_Balrog,
    index_SFA3_Cammy,
    index_SFA3_EdHonda,
    index_SFA3_Blanka,
    index_SFA3_RMika,
    index_SFA3_Cody,
    index_SFA3_Vega,
    index_SFA3_Karin,
    index_SFA3_Juni,
    index_SFA3_Juli,
    index_SFA3_Bonus,
    index_SFA3_Last
};

constexpr auto SFA3_A_NUM_IND = index_SFA3_Last;

#define SFA3_A_EXTRALOC SFA3_A_NUM_IND

const UINT8 SFA3_A_UNITSORT[SFA3_A_NUM_IND + 1] = // Plus 1 for the extra palettes
{
    index_SFA3_Adon,
    index_SFA3_Balrog,
    index_SFA3_Birdie,
    index_SFA3_Blanka,
    index_SFA3_Cammy,
    index_SFA3_Charlie,
    index_SFA3_ChunLi,
    index_SFA3_Cody,
    index_SFA3_Dan,
    index_SFA3_Dhalsim,
    index_SFA3_EdHonda,
    index_SFA3_Gen,
    index_SFA3_Gouki,
    index_SFA3_Guy,
    index_SFA3_Juli,
    index_SFA3_Juni,
    index_SFA3_Karin,
    index_SFA3_Ken,
    index_SFA3_MBison,
    index_SFA3_RMika,
    index_SFA3_Rolento,
    index_SFA3_Rose,
    index_SFA3_Ryu,
    index_SFA3_Sagat,
    index_SFA3_Sakura,
    index_SFA3_Sodom,
    index_SFA3_Vega,
    index_SFA3_Zangief,
    index_SFA3_Bonus,
   
    SFA3_A_EXTRALOC // Extra palettes
};

const sGame_PaletteDataset SFA3_A_RYU_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2c0d4, 0x2c0f4, 0x00, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2c0f4, 0x2c114, 0x00, 0x01 },
    { _T("X-Ism Punch Extra 2"), 0x2c114, 0x2c134 },
    { _T("X-Ism Punch Super Trail Light"), 0x2c134, 0x2c154, 0x00, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2c154, 0x2c174, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2c174, 0x2c194, 0x00, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2c194, 0x2c1b4, 0x00, 0x01 },
    { _T("X-Ism Kick Extra 2"), 0x2c1b4, 0x2c1d4 },
    { _T("X-Ism Kick Super Trail Light"), 0x2c1d4, 0x2c1f4, 0x00, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2c1f4, 0x2c214, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2c214, 0x2c234, 0x00, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2c234, 0x2c254, 0x00, 0x01 },
    { _T("A-Ism Punch Extra 2"), 0x2c254, 0x2c274 },
    { _T("A-Ism Punch Super Trail Light"), 0x2c274, 0x2c294, 0x00, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2c294, 0x2c2b4, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2c2b4, 0x2c2d4, 0x00, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2c2d4, 0x2c2f4, 0x00, 0x01 },
    { _T("A-Ism Kick Extra 2"), 0x2c2f4, 0x2c314 },
    { _T("A-Ism Kick Super Trail Light"), 0x2c314, 0x2c334, 0x00, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2c334, 0x2c354, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2c354, 0x2c374, 0x00, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2c374, 0x2c394, 0x00, 0x01 },
    { _T("V-Ism Punch Extra 2"), 0x2c394, 0x2c3b4 },
    { _T("V-Ism Punch Super Trail Light"), 0x2c3b4, 0x2c3d4, 0x00, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2c3d4, 0x2c3f4, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2c3f4, 0x2c414, 0x00, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2c414, 0x2c434, 0x00, 0x01 },
    { _T("V-Ism Kick Extra 2"), 0x2c434, 0x2c454 },
    { _T("V-Ism Kick Super Trail Light"), 0x2c454, 0x2c474, 0x00, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2c474, 0x2c494, 0x00, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RYU_STATUS[] =
{
    { _T("Burned 1"), 0x32a14 + 0x00, 0x32a14 + 0x20, 0x00 },
    { _T("Burned 2"), 0x32a14 + 0x20, 0x32a14 + 0x40, 0x00 },
    { _T("Psycho Crusher Burned 1"), 0x32a14 + 0x40, 0x32a14 + 0x60, 0x00 },
    { _T("Psycho Crusher Burned 2"), 0x32a14 + 0x60, 0x32a14 + 0x80, 0x00 },
    { _T("V-Ism P1 After Effect 1"), 0x32a14 + 0x80, 0x32a14 + 0xA0, 0x00 },
    { _T("V-Ism P1 After Effect 2"), 0x32a14 + 0xA0, 0x32a14 + 0xC0, 0x00 },
    { _T("V-Ism P2 After Effect 1"), 0x32a14 + 0xC0, 0x32a14 + 0xE0, 0x00 },
    { _T("V-Ism P2 After Effect 2"), 0x32a14 + 0xe0, 0x32a14 + 0x100, 0x00 },
    { _T("X-Ism Punch Zapped"), 0x32a14 + 0x100, 0x32a14 + 0x120, 0x00 },
    { _T("X-Ism Kick Zapped"), 0x32a14 + 0x120, 0x32a14 + 0x140, 0x00 },
    { _T("A-Ism Punch Zapped"), 0x32a14 + 0x140, 0x32a14 + 0x160, 0x00 },
    { _T("A-Ism Kick Zapped"), 0x32a14 + 0x160, 0x32a14 + 0x180, 0x00 },
    { _T("V-Ism Punch Zapped"), 0x32a14 + 0x180, 0x32a14 + 0x1A0, 0x00 },
    { _T("V-Ism Kick Zapped"), 0x32a14 + 0x1A0, 0x32a14 + 0x1C0, 0x00 },
    { _T("Zapped Skeleton"), 0x32a14 + 0x1C0, 0x32a14 + 0x1E0, 0x00 },
    { _T("X-Ism Punch Mash"), 0x32a14 + 0x1e0, 0x32a14 + 0x200, 0x00 },
    { _T("X-Ism Kick Mash"), 0x32a14 + 0x200, 0x32a14 + 0x220, 0x00 },
    { _T("A-Ism Punch Mash"), 0x32a14 + 0x220, 0x32a14 + 0x240, 0x00 },
    { _T("A-Ism Kick Mash"), 0x32a14 + 0x240, 0x32a14 + 0x260, 0x00 },
    { _T("V-Ism Punch Mash"), 0x32a14 + 0x260, 0x32a14 + 0x280, 0x00 },
    { _T("V-Ism Kick Mash"), 0x32a14 + 0x280, 0x32a14 + 0x2A0, 0x00 },
    { _T("Priority Win"), 0x32a14 + 0x2A0, 0x32a14 + 0x2C0, 0x00 },
    { _T("Damage Reduction"), 0x32a14 + 0x2C0, 0x32a14 + 0x2E0, 0x00 },
    { _T("Just Defend"), 0x32a14 + 0x2e0, 0x32a14 + 0x300, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2c494, 0x2c4b4, 0x27, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2c4b4, 0x2c4d4, 0x27, 0x01 },
    { _T("X-Ism Punch Extra 2"), 0x2c4d4, 0x2c4f4, 0x27, 0x02 },
    { _T("X-Ism Punch Super Trail Light"), 0x2c4f4, 0x2c514, 0x27, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2c514, 0x2c534, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2c534, 0x2c554, 0x27, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2c554, 0x2c574, 0x27, 0x01 },
    { _T("X-Ism Kick Extra 2"), 0x2c574, 0x2c594, 0x27, 0x02 },
    { _T("X-Ism Kick Super Trail Light"), 0x2c594, 0x2c5b4, 0x27, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2c5b4, 0x2c5d4, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2c5d4, 0x2c5f4, 0x27, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2c5f4, 0x2c614, 0x27, 0x01 },
    { _T("A-Ism Punch Extra 2"), 0x2c614, 0x2c634, 0x27, 0x02 },
    { _T("A-Ism Punch Super Trail Light"), 0x2c634, 0x2c654, 0x27, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2c654, 0x2c674, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2c674, 0x2c694, 0x27, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2c694, 0x2c6b4, 0x27, 0x01 },
    { _T("A-Ism Kick Extra 2"), 0x2c6b4, 0x2c6d4, 0x27, 0x02 },
    { _T("A-Ism Kick Super Trail Light"), 0x2c6d4, 0x2c6f4, 0x27, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2c6f4, 0x2c714, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2c714, 0x2c734, 0x27, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2c734, 0x2c754, 0x27, 0x01 },
    { _T("V-Ism Punch Extra 2"), 0x2c754, 0x2c774, 0x27, 0x02 },
    { _T("V-Ism Punch Super Trail Light"), 0x2c774, 0x2c794, 0x27, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2c794, 0x2c7b4, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2c7b4, 0x2c7d4, 0x27, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2c7d4, 0x2c7f4, 0x27, 0x01 },
    { _T("V-Ism Kick Extra 2"), 0x2c7f4, 0x2c814, 0x27, 0x02 },
    { _T("V-Ism Kick Super Trail Light"), 0x2c814, 0x2c834, 0x27, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2c834, 0x2c854, 0x27, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_STATUS[] =
{
    { _T("Burned 1"), 0x32d14 + 0x00, 0x32d14 + 0x20, 0x27 },
    { _T("Burned 2"), 0x32d14 + 0x20, 0x32d14 + 0x40, 0x27 },
    { _T("Psycho Crusher Burned 1"), 0x32d14 + 0x40, 0x32d14 + 0x60, 0x27 },
    { _T("Psycho Crusher Burned 2"), 0x32d14 + 0x60, 0x32d14 + 0x80, 0x27 },
    { _T("V-Ism P1 After Effect 1"), 0x32d14 + 0x80, 0x32d14 + 0xA0, 0x27 },
    { _T("V-Ism P1 After Effect 2"), 0x32d14 + 0xA0, 0x32d14 + 0xC0, 0x27 },
    { _T("V-Ism P2 After Effect 1"), 0x32d14 + 0xC0, 0x32d14 + 0xE0, 0x27 },
    { _T("V-Ism P2 After Effect 2"), 0x32d14 + 0xe0, 0x32d14 + 0x100, 0x27 },
    { _T("X-Ism Punch Zapped"), 0x32d14 + 0x100, 0x32d14 + 0x120, 0x27 },
    { _T("X-Ism Kick Zapped"), 0x32d14 + 0x120, 0x32d14 + 0x140, 0x27 },
    { _T("A-Ism Punch Zapped"), 0x32d14 + 0x140, 0x32d14 + 0x160, 0x27 },
    { _T("A-Ism Kick Zapped"), 0x32d14 + 0x160, 0x32d14 + 0x180, 0x27 },
    { _T("V-Ism Punch Zapped"), 0x32d14 + 0x180, 0x32d14 + 0x1A0, 0x27 },
    { _T("V-Ism Kick Zapped"), 0x32d14 + 0x1A0, 0x32d14 + 0x1C0, 0x27 },
    { _T("Zapped Skeleton"), 0x32d14 + 0x1C0, 0x32d14 + 0x1E0, 0x27 },
    { _T("X-Ism Punch Mash"), 0x32d14 + 0x1e0, 0x32d14 + 0x200, 0x27 },
    { _T("X-Ism Kick Mash"), 0x32d14 + 0x200, 0x32d14 + 0x220, 0x27 },
    { _T("A-Ism Punch Mash"), 0x32d14 + 0x220, 0x32d14 + 0x240, 0x27 },
    { _T("A-Ism Kick Mash"), 0x32d14 + 0x240, 0x32d14 + 0x260, 0x27 },
    { _T("V-Ism Punch Mash"), 0x32d14 + 0x260, 0x32d14 + 0x280, 0x27 },
    { _T("V-Ism Kick Mash"), 0x32d14 + 0x280, 0x32d14 + 0x2A0, 0x27 },
    { _T("Priority Win"), 0x32d14 + 0x2A0, 0x32d14 + 0x2C0, 0x27 },
    { _T("Damage Reduction"), 0x32d14 + 0x2C0, 0x32d14 + 0x2E0, 0x27 },
    { _T("Just Defend"), 0x32d14 + 0x2e0, 0x32d14 + 0x300, 0x27 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2c854, 0x2c874, 0x1e, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2c874, 0x2c894, 0x1e, 0x01 },
    { _T("X-Ism Punch Extra 2"), 0x2c894, 0x2c8b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2c8b4, 0x2c8d4, 0x1e, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2c8d4, 0x2c8f4, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2c8f4, 0x2c914, 0x1e, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2c914, 0x2c934, 0x1e, 0x01 },
    { _T("X-Ism Kick Extra 2"), 0x2c934, 0x2c954 },
    { _T("X-Ism Kick Super Trail Light"), 0x2c954, 0x2c974, 0x1e, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2c974, 0x2c994, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2c994, 0x2c9b4, 0x1e, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2c9b4, 0x2c9d4, 0x1e, 0x01 },
    { _T("A-Ism Punch Extra 2"), 0x2c9d4, 0x2c9f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x2c9f4, 0x2ca14, 0x1e, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2ca14, 0x2ca34, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2ca34, 0x2ca54, 0x1e, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2ca54, 0x2ca74, 0x1e, 0x01 },
    { _T("A-Ism Kick Extra 2"), 0x2ca74, 0x2ca94 },
    { _T("A-Ism Kick Super Trail Light"), 0x2ca94, 0x2cab4, 0x1e, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2cab4, 0x2cad4, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2cad4, 0x2caf4, 0x1e, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2caf4, 0x2cb14, 0x1e, 0x01 },
    { _T("V-Ism Punch Extra 2"), 0x2cb14, 0x2cb34 },
    { _T("V-Ism Punch Super Trail Light"), 0x2cb34, 0x2cb54, 0x1e, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2cb54, 0x2cb74, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2cb74, 0x2cb94, 0x1e, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2cb94, 0x2cbb4, 0x1e, 0x01 },
    { _T("V-Ism Kick Extra 2"), 0x2cbb4, 0x2cbd4 },
    { _T("V-Ism Kick Super Trail Light"), 0x2cbd4, 0x2cbf4, 0x1e, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2cbf4, 0x2cc14, 0x1e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_STATUS[] =
{
    { _T("Burned 1"), 0x33014 + 0x00, 0x33014 + 0x20, 0x1E },
    { _T("Burned 2"), 0x33014 + 0x20, 0x33014 + 0x40, 0x1E },
    { _T("Psycho Crusher Burned 1"), 0x33014 + 0x40, 0x33014 + 0x60, 0x1E },
    { _T("Psycho Crusher Burned 2"), 0x33014 + 0x60, 0x33014 + 0x80, 0x1E },
    { _T("V-Ism P1 After Effect 1"), 0x33014 + 0x80, 0x33014 + 0xA0, 0x1E },
    { _T("V-Ism P1 After Effect 2"), 0x33014 + 0xA0, 0x33014 + 0xC0, 0x1E },
    { _T("V-Ism P2 After Effect 1"), 0x33014 + 0xC0, 0x33014 + 0xE0, 0x1E },
    { _T("V-Ism P2 After Effect 2"), 0x33014 + 0xe0, 0x33014 + 0x100, 0x1E },
    { _T("X-Ism Punch Zapped"), 0x33014 + 0x100, 0x33014 + 0x120, 0x1E },
    { _T("X-Ism Kick Zapped"), 0x33014 + 0x120, 0x33014 + 0x140, 0x1E },
    { _T("A-Ism Punch Zapped"), 0x33014 + 0x140, 0x33014 + 0x160, 0x1E },
    { _T("A-Ism Kick Zapped"), 0x33014 + 0x160, 0x33014 + 0x180, 0x1E },
    { _T("V-Ism Punch Zapped"), 0x33014 + 0x180, 0x33014 + 0x1A0, 0x1E },
    { _T("V-Ism Kick Zapped"), 0x33014 + 0x1A0, 0x33014 + 0x1C0, 0x1E },
    { _T("Zapped Skeleton"), 0x33014 + 0x1C0, 0x33014 + 0x1E0, 0x1E },
    { _T("X-Ism Punch Mash"), 0x33014 + 0x1e0, 0x33014 + 0x200, 0x1E },
    { _T("X-Ism Kick Mash"), 0x33014 + 0x200, 0x33014 + 0x220, 0x1E },
    { _T("A-Ism Punch Mash"), 0x33014 + 0x220, 0x33014 + 0x240, 0x1E },
    { _T("A-Ism Kick Mash"), 0x33014 + 0x240, 0x33014 + 0x260, 0x1E },
    { _T("V-Ism Punch Mash"), 0x33014 + 0x260, 0x33014 + 0x280, 0x1E },
    { _T("V-Ism Kick Mash"), 0x33014 + 0x280, 0x33014 + 0x2A0, 0x1E },
    { _T("Priority Win"), 0x33014 + 0x2A0, 0x33014 + 0x2C0, 0x1E },
    { _T("Damage Reduction"), 0x33014 + 0x2C0, 0x33014 + 0x2E0, 0x1E },
    { _T("Just Defend"), 0x33014 + 0x2e0, 0x33014 + 0x300, 0x1E },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2cc14, 0x2cc34, 0x21, 0x00 },
    { _T("X-Ism Punch Sonic Boom"), 0x2cc34, 0x2cc54, 0x21, 0x01 },
    { _T("X-Ism Punch Flash Kick"), 0x2cc54, 0x2cc74, 0x21, 0x02 },
    { _T("X-Ism Punch Super Trail Light"), 0x2cc74, 0x2cc94, 0x21, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2cc94, 0x2ccb4, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2ccb4, 0x2ccd4, 0x21, 0x00 },
    { _T("X-Ism Kick Sonic Boom"), 0x2ccd4, 0x2ccf4, 0x21, 0x01 },
    { _T("X-Ism Kick Flash Kick"), 0x2ccf4, 0x2cd14, 0x21, 0x02 },
    { _T("X-Ism Kick Super Trail Light"), 0x2cd14, 0x2cd34, 0x21, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2cd34, 0x2cd54, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2cd54, 0x2cd74, 0x21, 0x00 },
    { _T("A-Ism Punch Sonic Boom"), 0x2cd74, 0x2cd94, 0x21, 0x01 },
    { _T("A-Ism Punch Flash Kick"), 0x2cd94, 0x2cdb4, 0x21, 0x02 },
    { _T("A-Ism Punch Super Trail Light"), 0x2cdb4, 0x2cdd4, 0x21, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2cdd4, 0x2cdf4, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2cdf4, 0x2ce14, 0x21, 0x00 },
    { _T("A-Ism Kick Sonic Boom"), 0x2ce14, 0x2ce34, 0x21, 0x01 },
    { _T("A-Ism Kick Flash Kick"), 0x2ce34, 0x2ce54, 0x21, 0x02 },
    { _T("A-Ism Kick Super Trail Light"), 0x2ce54, 0x2ce74, 0x21, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2ce74, 0x2ce94, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2ce94, 0x2ceb4, 0x21, 0x00 },
    { _T("V-Ism Punch Sonic Boom"), 0x2ceb4, 0x2ced4, 0x21, 0x01 },
    { _T("V-Ism Punch Flash Kick"), 0x2ced4, 0x2cef4, 0x21, 0x02 },
    { _T("V-Ism Punch Super Trail Light"), 0x2cef4, 0x2cf14, 0x21, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2cf14, 0x2cf34, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2cf34, 0x2cf54, 0x21, 0x00 },
    { _T("V-Ism Kick Sonic Boom"), 0x2cf54, 0x2cf74, 0x21, 0x01 },
    { _T("V-Ism Kick Flash Kick"), 0x2cf74, 0x2cf94, 0x21, 0x02 },
    { _T("V-Ism Kick Super Trail Light"), 0x2cf94, 0x2cfb4, 0x21, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2cfb4, 0x2cfd4, 0x21, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_STATUS[] =
{
    { _T("Burned 1"), 0x33314 + 0x00, 0x33314 + 0x20, 0x21 },
    { _T("Burned 2"), 0x33314 + 0x20, 0x33314 + 0x40, 0x21 },
    { _T("Psycho Crusher Burned 1"), 0x33314 + 0x40, 0x33314 + 0x60, 0x21 },
    { _T("Psycho Crusher Burned 2"), 0x33314 + 0x60, 0x33314 + 0x80, 0x21 },
    { _T("V-Ism P1 After Effect 1"), 0x33314 + 0x80, 0x33314 + 0xA0, 0x21 },
    { _T("V-Ism P1 After Effect 2"), 0x33314 + 0xA0, 0x33314 + 0xC0, 0x21 },
    { _T("V-Ism P2 After Effect 1"), 0x33314 + 0xC0, 0x33314 + 0xE0, 0x21 },
    { _T("V-Ism P2 After Effect 2"), 0x33314 + 0xe0, 0x33314 + 0x100, 0x21 },
    { _T("X-Ism Punch Zapped"), 0x33314 + 0x100, 0x33314 + 0x120, 0x21 },
    { _T("X-Ism Kick Zapped"), 0x33314 + 0x120, 0x33314 + 0x140, 0x21 },
    { _T("A-Ism Punch Zapped"), 0x33314 + 0x140, 0x33314 + 0x160, 0x21 },
    { _T("A-Ism Kick Zapped"), 0x33314 + 0x160, 0x33314 + 0x180, 0x21 },
    { _T("V-Ism Punch Zapped"), 0x33314 + 0x180, 0x33314 + 0x1A0, 0x21 },
    { _T("V-Ism Kick Zapped"), 0x33314 + 0x1A0, 0x33314 + 0x1C0, 0x21 },
    { _T("Zapped Skeleton"), 0x33314 + 0x1C0, 0x33314 + 0x1E0, 0x21 },
    { _T("X-Ism Punch Mash"), 0x33314 + 0x1e0, 0x33314 + 0x200, 0x21 },
    { _T("X-Ism Kick Mash"), 0x33314 + 0x200, 0x33314 + 0x220, 0x21 },
    { _T("A-Ism Punch Mash"), 0x33314 + 0x220, 0x33314 + 0x240, 0x21 },
    { _T("A-Ism Kick Mash"), 0x33314 + 0x240, 0x33314 + 0x260, 0x21 },
    { _T("V-Ism Punch Mash"), 0x33314 + 0x260, 0x33314 + 0x280, 0x21 },
    { _T("V-Ism Kick Mash"), 0x33314 + 0x280, 0x33314 + 0x2A0, 0x21 },
    { _T("Priority Win"), 0x33314 + 0x2A0, 0x33314 + 0x2C0, 0x21 },
    { _T("Damage Reduction"), 0x33314 + 0x2C0, 0x33314 + 0x2E0, 0x21 },
    { _T("Just Defend"), 0x33314 + 0x2e0, 0x33314 + 0x300, 0x21 },
};


const sGame_PaletteDataset SFA3_A_CHUNLI_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2cfd4, 0x2cff4, 0x1b, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2cff4, 0x2d014, 0x1b, 0x01 },
    { _T("X-Ism Punch Extra 2"), 0x2d014, 0x2d034, 0x1b, 0x02 },
    { _T("X-Ism Punch Super Trail Light"), 0x2d034, 0x2d054, 0x1b, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2d054, 0x2d074, 0x1b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2d074, 0x2d094, 0x1b, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2d094, 0x2d0b4, 0x1b, 0x01 },
    { _T("X-Ism Kick Extra 2"), 0x2d0b4, 0x2d0d4, 0x1b, 0x02 },
    { _T("X-Ism Kick Super Trail Light"), 0x2d0d4, 0x2d0f4, 0x1b, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2d0f4, 0x2d114, 0x1b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2d114, 0x2d134, 0x1b, 0x0c },
    { _T("A-Ism Punch Extra 1"), 0x2d134, 0x2d154, 0x1b, 0x01 },
    { _T("A-Ism Punch Extra 2"), 0x2d154, 0x2d174, 0x1b, 0x02 },
    { _T("A-Ism Punch Super Trail Light"), 0x2d174, 0x2d194, 0x1b, 0x0c },
    { _T("A-Ism Punch Super Trail Dark"), 0x2d194, 0x2d1b4, 0x1b, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2d1b4, 0x2d1d4, 0x1b, 0x0c },
    { _T("A-Ism Kick Extra 1"), 0x2d1d4, 0x2d1f4, 0x1b, 0x01 },
    { _T("A-Ism Kick Extra 2"), 0x2d1f4, 0x2d214, 0x1b, 0x02 },
    { _T("A-Ism Kick Super Trail Light"), 0x2d214, 0x2d234, 0x1b, 0x0c },
    { _T("A-Ism Kick Super Trail Dark"), 0x2d234, 0x2d254, 0x1b, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2d254, 0x2d274, 0x1b, 0x0c },
    { _T("V-Ism Punch Extra 1"), 0x2d274, 0x2d294, 0x1b, 0x01 },
    { _T("V-Ism Punch Extra 2"), 0x2d294, 0x2d2b4, 0x1b, 0x02 },
    { _T("V-Ism Punch Super Trail Light"), 0x2d2b4, 0x2d2d4, 0x1b, 0x0c },
    { _T("V-Ism Punch Super Trail Dark"), 0x2d2d4, 0x2d2f4, 0x1b, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2d2f4, 0x2d314, 0x1b, 0x0c },
    { _T("V-Ism Kick Extra 1"), 0x2d314, 0x2d334, 0x1b, 0x01 },
    { _T("V-Ism Kick Extra 2"), 0x2d334, 0x2d354, 0x1b, 0x02 },
    { _T("V-Ism Kick Super Trail Light"), 0x2d354, 0x2d374, 0x1b, 0x0c },
    { _T("V-Ism Kick Super Trail Dark"), 0x2d374, 0x2d394, 0x1b, 0x0c },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_STATUS[] =
{
    { _T("Burned 1"), 0x33614 + 0x00, 0x33614 + 0x20, 0x1B },
    { _T("Burned 2"), 0x33614 + 0x20, 0x33614 + 0x40, 0x1B },
    { _T("Psycho Crusher Burned 1"), 0x33614 + 0x40, 0x33614 + 0x60, 0x1B },
    { _T("Psycho Crusher Burned 2"), 0x33614 + 0x60, 0x33614 + 0x80, 0x1B },
    { _T("V-Ism P1 After Effect 1"), 0x33614 + 0x80, 0x33614 + 0xA0, 0x1B },
    { _T("V-Ism P1 After Effect 2"), 0x33614 + 0xA0, 0x33614 + 0xC0, 0x1B },
    { _T("V-Ism P2 After Effect 1"), 0x33614 + 0xC0, 0x33614 + 0xE0, 0x1B },
    { _T("V-Ism P2 After Effect 2"), 0x33614 + 0xe0, 0x33614 + 0x100, 0x1B },
    { _T("X-Ism Punch Zapped"), 0x33614 + 0x100, 0x33614 + 0x120, 0x1B },
    { _T("X-Ism Kick Zapped"), 0x33614 + 0x120, 0x33614 + 0x140, 0x1B },
    { _T("A-Ism Punch Zapped"), 0x33614 + 0x140, 0x33614 + 0x160, 0x1B, 0x0C },
    { _T("A-Ism Kick Zapped"), 0x33614 + 0x160, 0x33614 + 0x180, 0x1B, 0x0C },
    { _T("V-Ism Punch Zapped"), 0x33614 + 0x180, 0x33614 + 0x1A0, 0x1B, 0x0C },
    { _T("V-Ism Kick Zapped"), 0x33614 + 0x1A0, 0x33614 + 0x1C0, 0x1B, 0x0C },
    { _T("Zapped Skeleton"), 0x33614 + 0x1C0, 0x33614 + 0x1E0, 0x1B },
    { _T("X-Ism Punch Mash"), 0x33614 + 0x1e0, 0x33614 + 0x200, 0x1B },
    { _T("X-Ism Kick Mash"), 0x33614 + 0x200, 0x33614 + 0x220, 0x1B },
    { _T("A-Ism Punch Mash"), 0x33614 + 0x220, 0x33614 + 0x240, 0x1B, 0x0C },
    { _T("A-Ism Kick Mash"), 0x33614 + 0x240, 0x33614 + 0x260, 0x1B, 0x0C },
    { _T("V-Ism Punch Mash"), 0x33614 + 0x260, 0x33614 + 0x280, 0x1B, 0x0C },
    { _T("V-Ism Kick Mash"), 0x33614 + 0x280, 0x33614 + 0x2A0, 0x1B, 0x0C },
    { _T("Priority Win"), 0x33614 + 0x2A0, 0x33614 + 0x2C0, 0x1B },
    { _T("Damage Reduction"), 0x33614 + 0x2C0, 0x33614 + 0x2E0, 0x1B },
    { _T("Just Defend"), 0x33614 + 0x2e0, 0x33614 + 0x300, 0x1B },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2d394, 0x2d3b4, 0x3d, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2d3b4, 0x2d3d4 },
    { _T("X-Ism Punch Extra 2"), 0x2d3d4, 0x2d3f4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2d3f4, 0x2d414, 0x3d, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2d414, 0x2d434, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2d434, 0x2d454, 0x3d, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2d454, 0x2d474 },
    { _T("X-Ism Kick Extra 2"), 0x2d474, 0x2d494 },
    { _T("X-Ism Kick Super Trail Light"), 0x2d494, 0x2d4b4, 0x3d, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2d4b4, 0x2d4d4, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2d4d4, 0x2d4f4, 0x3d, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2d4f4, 0x2d514 },
    { _T("A-Ism Punch Extra 2"), 0x2d514, 0x2d534 },
    { _T("A-Ism Punch Super Trail Light"), 0x2d534, 0x2d554, 0x3d, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2d554, 0x2d574, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2d574, 0x2d594, 0x3d, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2d594, 0x2d5b4 },
    { _T("A-Ism Kick Extra 2"), 0x2d5b4, 0x2d5d4 },
    { _T("A-Ism Kick Super Trail Light"), 0x2d5d4, 0x2d5f4, 0x3d, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2d5f4, 0x2d614, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2d614, 0x2d634, 0x3d, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2d634, 0x2d654 },
    { _T("V-Ism Punch Extra 2"), 0x2d654, 0x2d674 },
    { _T("V-Ism Punch Super Trail Light"), 0x2d674, 0x2d694, 0x3d, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2d694, 0x2d6b4, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2d6b4, 0x2d6d4, 0x3d, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2d6d4, 0x2d6f4 },
    { _T("V-Ism Kick Extra 2"), 0x2d6f4, 0x2d714 },
    { _T("V-Ism Kick Super Trail Light"), 0x2d714, 0x2d734, 0x3d, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2d734, 0x2d754, 0x3d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ADON_STATUS[] =
{
    { _T("Burned 1"), 0x339f4 + 0x00, 0x339f4 + 0x20, 0x3D },
    { _T("Burned 2"), 0x339f4 + 0x20, 0x339f4 + 0x40, 0x3D },
    { _T("Psycho Crusher Burned 1"), 0x339f4 + 0x40, 0x339f4 + 0x60, 0x3D },
    { _T("Psycho Crusher Burned 2"), 0x339f4 + 0x60, 0x339f4 + 0x80, 0x3D },
    { _T("V-Ism P1 After Effect 1"), 0x339f4 + 0x80, 0x339f4 + 0xA0, 0x3D },
    { _T("V-Ism P1 After Effect 2"), 0x339f4 + 0xA0, 0x339f4 + 0xC0, 0x3D },
    { _T("V-Ism P2 After Effect 1"), 0x339f4 + 0xC0, 0x339f4 + 0xE0, 0x3D },
    { _T("V-Ism P2 After Effect 2"), 0x339f4 + 0xe0, 0x339f4 + 0x100, 0x3D },
    { _T("X-Ism Punch Zapped"), 0x339f4 + 0x100, 0x339f4 + 0x120, 0x3D },
    { _T("X-Ism Kick Zapped"), 0x339f4 + 0x120, 0x339f4 + 0x140, 0x3D },
    { _T("A-Ism Punch Zapped"), 0x339f4 + 0x140, 0x339f4 + 0x160, 0x3D },
    { _T("A-Ism Kick Zapped"), 0x339f4 + 0x160, 0x339f4 + 0x180, 0x3D },
    { _T("V-Ism Punch Zapped"), 0x339f4 + 0x180, 0x339f4 + 0x1A0, 0x3D },
    { _T("V-Ism Kick Zapped"), 0x339f4 + 0x1A0, 0x339f4 + 0x1C0, 0x3D },
    { _T("Zapped Skeleton"), 0x339f4 + 0x1C0, 0x339f4 + 0x1E0, 0x3D },
    { _T("X-Ism Punch Mash"), 0x339f4 + 0x1e0, 0x339f4 + 0x200, 0x3D },
    { _T("X-Ism Kick Mash"), 0x339f4 + 0x200, 0x339f4 + 0x220, 0x3D },
    { _T("A-Ism Punch Mash"), 0x339f4 + 0x220, 0x339f4 + 0x240, 0x3D },
    { _T("A-Ism Kick Mash"), 0x339f4 + 0x240, 0x339f4 + 0x260, 0x3D },
    { _T("V-Ism Punch Mash"), 0x339f4 + 0x260, 0x339f4 + 0x280, 0x3D },
    { _T("V-Ism Kick Mash"), 0x339f4 + 0x280, 0x339f4 + 0x2A0, 0x3D },
    { _T("Priority Win"), 0x339f4 + 0x2A0, 0x339f4 + 0x2C0, 0x3D },
    { _T("Damage Reduction"), 0x339f4 + 0x2C0, 0x339f4 + 0x2E0, 0x3D },
    { _T("Just Defend"), 0x339f4 + 0x2e0, 0x339f4 + 0x300, 0x3D },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2d754, 0x2d774, 0x3e, 0x00 },
    { _T("X-Ism Punch Swords"), 0x02D774, 0x02D794 },
    { _T("X-Ism Punch Extra 2"), 0x2d794, 0x2d7b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2d7b4, 0x2d7d4, 0x3e, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2d7d4, 0x2d7f4, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2d7f4, 0x2d814, 0x3e, 0x00 },
    { _T("X-Ism Kick Swords"), 0x02D814, 0x02D834 },
    { _T("X-Ism Kick Extra 2"), 0x2d834, 0x2d854 },
    { _T("X-Ism Kick Super Trail Light"), 0x2d854, 0x2d874, 0x3e, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2d874, 0x2d894, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2d894, 0x2d8b4, 0x3e, 0x00 },
    { _T("A-Ism Punch Slashes"), 0x02D8B4, 0x02D8D4 },
    { _T("A-Ism Punch Extra 2"), 0x2d8d4, 0x2d8f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x2d8f4, 0x2d914, 0x3e, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2d914, 0x2d934, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2d934, 0x2d954, 0x3e, 0x00 },
    { _T("A-Ism Kick Slashes"), 0x02D954, 0x02D974 },
    { _T("A-Ism Kick Extra 2"), 0x2d974, 0x2d994 },
    { _T("A-Ism Kick Super Trail Light"), 0x2d994, 0x2d9b4, 0x3e, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2d9b4, 0x2d9d4, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2d9d4, 0x2d9f4, 0x3e, 0x00 },
    { _T("V-Ism Punch Slashes"), 0x02D9F4, 0x02DA14 },
    { _T("V-Ism Punch Extra 2"), 0x2da14, 0x2da34 },
    { _T("V-Ism Punch Super Trail Light"), 0x2da34, 0x2da54, 0x3e, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2da54, 0x2da74, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2da74, 0x2da94, 0x3e, 0x00 },
    { _T("V-Ism Kick Slashes"), 0x02DA94, 0x02DAB4 },
    { _T("V-Ism Kick Extra 2"), 0x2dab4, 0x2dad4 },
    { _T("V-Ism Kick Super Trail Light"), 0x2dad4, 0x2daf4, 0x3e, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2daf4, 0x2db14, 0x3e, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SODOM_STATUS[] =
{
    { _T("Burned 1"), 0x33cf4 + 0x00, 0x33cf4 + 0x20, 0x3E },
    { _T("Burned 2"), 0x33cf4 + 0x20, 0x33cf4 + 0x40, 0x3E },
    { _T("Psycho Crusher Burned 1"), 0x33cf4 + 0x40, 0x33cf4 + 0x60, 0x3E },
    { _T("Psycho Crusher Burned 2"), 0x33cf4 + 0x60, 0x33cf4 + 0x80, 0x3E },
    { _T("V-Ism P1 After Effect 1"), 0x33cf4 + 0x80, 0x33cf4 + 0xA0, 0x3E },
    { _T("V-Ism P1 After Effect 2"), 0x33cf4 + 0xA0, 0x33cf4 + 0xC0, 0x3E },
    { _T("V-Ism P2 After Effect 1"), 0x33cf4 + 0xC0, 0x33cf4 + 0xE0, 0x3E },
    { _T("V-Ism P2 After Effect 2"), 0x33cf4 + 0xe0, 0x33cf4 + 0x100, 0x3E },
    { _T("X-Ism Punch Zapped"), 0x33cf4 + 0x100, 0x33cf4 + 0x120, 0x3E },
    { _T("X-Ism Kick Zapped"), 0x33cf4 + 0x120, 0x33cf4 + 0x140, 0x3E },
    { _T("A-Ism Punch Zapped"), 0x33cf4 + 0x140, 0x33cf4 + 0x160, 0x3E },
    { _T("A-Ism Kick Zapped"), 0x33cf4 + 0x160, 0x33cf4 + 0x180, 0x3E },
    { _T("V-Ism Punch Zapped"), 0x33cf4 + 0x180, 0x33cf4 + 0x1A0, 0x3E },
    { _T("V-Ism Kick Zapped"), 0x33cf4 + 0x1A0, 0x33cf4 + 0x1C0, 0x3E },
    { _T("Zapped Skeleton"), 0x33cf4 + 0x1C0, 0x33cf4 + 0x1E0, 0x3E },
    { _T("X-Ism Punch Mash"), 0x33cf4 + 0x1e0, 0x33cf4 + 0x200, 0x3E },
    { _T("X-Ism Kick Mash"), 0x33cf4 + 0x200, 0x33cf4 + 0x220, 0x3E },
    { _T("A-Ism Punch Mash"), 0x33cf4 + 0x220, 0x33cf4 + 0x240, 0x3E },
    { _T("A-Ism Kick Mash"), 0x33cf4 + 0x240, 0x33cf4 + 0x260, 0x3E },
    { _T("V-Ism Punch Mash"), 0x33cf4 + 0x260, 0x33cf4 + 0x280, 0x3E },
    { _T("V-Ism Kick Mash"), 0x33cf4 + 0x280, 0x33cf4 + 0x2A0, 0x3E },
    { _T("Priority Win"), 0x33cf4 + 0x2A0, 0x33cf4 + 0x2C0, 0x3E },
    { _T("Damage Reduction"), 0x33cf4 + 0x2C0, 0x33cf4 + 0x2E0, 0x3E },
    { _T("Just Defend"), 0x33cf4 + 0x2e0, 0x33cf4 + 0x300, 0x3E },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2db14, 0x2db34, 0x3f, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2db34, 0x2db54 },
    { _T("X-Ism Punch Extra 2"), 0x2db54, 0x2db74 },
    { _T("X-Ism Punch Super Trail Light"), 0x2db74, 0x2db94, 0x3f, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2db94, 0x2dbb4, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2dbb4, 0x2dbd4, 0x3f, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2dbd4, 0x2dbf4 },
    { _T("X-Ism Kick Extra 2"), 0x2dbf4, 0x2dc14 },
    { _T("X-Ism Kick Super Trail Light"), 0x2dc14, 0x2dc34, 0x3f, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2dc34, 0x2dc54, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2dc54, 0x2dc74, 0x3f, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2dc74, 0x2dc94 },
    { _T("A-Ism Punch Extra 2"), 0x2dc94, 0x2dcb4 },
    { _T("A-Ism Punch Super Trail Light"), 0x2dcb4, 0x2dcd4, 0x3f, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2dcd4, 0x2dcf4, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2dcf4, 0x2dd14, 0x3f, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2dd14, 0x2dd34 },
    { _T("A-Ism Kick Extra 2"), 0x2dd34, 0x2dd54 },
    { _T("A-Ism Kick Super Trail Light"), 0x2dd54, 0x2dd74, 0x3f, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2dd74, 0x2dd94, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2dd94, 0x2ddb4, 0x3f, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2ddb4, 0x2ddd4 },
    { _T("V-Ism Punch Extra 2"), 0x2ddd4, 0x2ddf4 },
    { _T("V-Ism Punch Super Trail Light"), 0x2ddf4, 0x2de14, 0x3f, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2de14, 0x2de34, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2de34, 0x2de54, 0x3f, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2de54, 0x2de74 },
    { _T("V-Ism Kick Extra 2"), 0x2de74, 0x2de94 },
    { _T("V-Ism Kick Super Trail Light"), 0x2de94, 0x2deb4, 0x3f, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2deb4, 0x2ded4, 0x3f, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GUY_STATUS[] =
{
    { _T("Burned 1"), 0x34194 + 0x00, 0x34194 + 0x20, 0x3f },
    { _T("Burned 2"), 0x34194 + 0x20, 0x34194 + 0x40, 0x3f },
    { _T("Psycho Crusher Burned 1"), 0x34194 + 0x40, 0x34194 + 0x60, 0x3f },
    { _T("Psycho Crusher Burned 2"), 0x34194 + 0x60, 0x34194 + 0x80, 0x3f },
    { _T("V-Ism P1 After Effect 1"), 0x34194 + 0x80, 0x34194 + 0xA0, 0x3f },
    { _T("V-Ism P1 After Effect 2"), 0x34194 + 0xA0, 0x34194 + 0xC0, 0x3f },
    { _T("V-Ism P2 After Effect 1"), 0x34194 + 0xC0, 0x34194 + 0xE0, 0x3f },
    { _T("V-Ism P2 After Effect 2"), 0x34194 + 0xe0, 0x34194 + 0x100, 0x3f },
    { _T("X-Ism Punch Zapped"), 0x34194 + 0x100, 0x34194 + 0x120, 0x3f },
    { _T("X-Ism Kick Zapped"), 0x34194 + 0x120, 0x34194 + 0x140, 0x3f },
    { _T("A-Ism Punch Zapped"), 0x34194 + 0x140, 0x34194 + 0x160, 0x3f },
    { _T("A-Ism Kick Zapped"), 0x34194 + 0x160, 0x34194 + 0x180, 0x3f },
    { _T("V-Ism Punch Zapped"), 0x34194 + 0x180, 0x34194 + 0x1A0, 0x3f },
    { _T("V-Ism Kick Zapped"), 0x34194 + 0x1A0, 0x34194 + 0x1C0, 0x3f },
    { _T("Zapped Skeleton"), 0x34194 + 0x1C0, 0x34194 + 0x1E0, 0x3f },
    { _T("X-Ism Punch Mash"), 0x34194 + 0x1e0, 0x34194 + 0x200, 0x3f },
    { _T("X-Ism Kick Mash"), 0x34194 + 0x200, 0x34194 + 0x220, 0x3f },
    { _T("A-Ism Punch Mash"), 0x34194 + 0x220, 0x34194 + 0x240, 0x3f },
    { _T("A-Ism Kick Mash"), 0x34194 + 0x240, 0x34194 + 0x260, 0x3f },
    { _T("V-Ism Punch Mash"), 0x34194 + 0x260, 0x34194 + 0x280, 0x3f },
    { _T("V-Ism Kick Mash"), 0x34194 + 0x280, 0x34194 + 0x2A0, 0x3f },
    { _T("Priority Win"), 0x34194 + 0x2A0, 0x34194 + 0x2C0, 0x3f },
    { _T("Damage Reduction"), 0x34194 + 0x2C0, 0x34194 + 0x2E0, 0x3f },
    { _T("Just Defend"), 0x34194 + 0x2e0, 0x34194 + 0x300, 0x3f },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2ded4, 0x2def4, 0x40, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2def4, 0x2df14 },
    { _T("X-Ism Punch Extra 2"), 0x2df14, 0x2df34 },
    { _T("X-Ism Punch Super Trail Light"), 0x2df34, 0x2df54, 0x40, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2df54, 0x2df74, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2df74, 0x2df94, 0x40, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2df94, 0x2dfb4 },
    { _T("X-Ism Kick Extra 2"), 0x2dfb4, 0x2dfd4 },
    { _T("X-Ism Kick Super Trail Light"), 0x2dfd4, 0x2dff4, 0x40, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2dff4, 0x2e014, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2e014, 0x2e034, 0x40, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2e034, 0x2e054 },
    { _T("A-Ism Punch Extra 2"), 0x2e054, 0x2e074 },
    { _T("A-Ism Punch Super Trail Light"), 0x2e074, 0x2e094, 0x40, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2e094, 0x2e0b4, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2e0b4, 0x2e0d4, 0x40, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2e0d4, 0x2e0f4 },
    { _T("A-Ism Kick Extra 2"), 0x2e0f4, 0x2e114 },
    { _T("A-Ism Kick Super Trail Light"), 0x2e114, 0x2e134, 0x40, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2e134, 0x2e154, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2e154, 0x2e174, 0x40, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2e174, 0x2e194 },
    { _T("V-Ism Punch Extra 2"), 0x2e194, 0x2e1b4 },
    { _T("V-Ism Punch Super Trail Light"), 0x2e1b4, 0x2e1d4, 0x40, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2e1d4, 0x2e1f4, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2e1f4, 0x2e214, 0x40, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2e214, 0x2e234 },
    { _T("V-Ism Kick Extra 2"), 0x2e234, 0x2e254 },
    { _T("V-Ism Kick Super Trail Light"), 0x2e254, 0x2e274, 0x40, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2e274, 0x2e294, 0x40, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_STATUS[] =
{
    { _T("Burned 1"), 0x34494 + 0x00, 0x34494 + 0x20, 0x40 },
    { _T("Burned 2"), 0x34494 + 0x20, 0x34494 + 0x40, 0x40 },
    { _T("Psycho Crusher Burned 1"), 0x34494 + 0x40, 0x34494 + 0x60, 0x40 },
    { _T("Psycho Crusher Burned 2"), 0x34494 + 0x60, 0x34494 + 0x80, 0x40 },
    { _T("V-Ism P1 After Effect 1"), 0x34494 + 0x80, 0x34494 + 0xA0, 0x40 },
    { _T("V-Ism P1 After Effect 2"), 0x34494 + 0xA0, 0x34494 + 0xC0, 0x40 },
    { _T("V-Ism P2 After Effect 1"), 0x34494 + 0xC0, 0x34494 + 0xE0, 0x40 },
    { _T("V-Ism P2 After Effect 2"), 0x34494 + 0xe0, 0x34494 + 0x100, 0x40 },
    { _T("X-Ism Punch Zapped"), 0x34494 + 0x100, 0x34494 + 0x120, 0x40 },
    { _T("X-Ism Kick Zapped"), 0x34494 + 0x120, 0x34494 + 0x140, 0x40 },
    { _T("A-Ism Punch Zapped"), 0x34494 + 0x140, 0x34494 + 0x160, 0x40 },
    { _T("A-Ism Kick Zapped"), 0x34494 + 0x160, 0x34494 + 0x180, 0x40 },
    { _T("V-Ism Punch Zapped"), 0x34494 + 0x180, 0x34494 + 0x1A0, 0x40 },
    { _T("V-Ism Kick Zapped"), 0x34494 + 0x1A0, 0x34494 + 0x1C0, 0x40 },
    { _T("Zapped Skeleton"), 0x34494 + 0x1C0, 0x34494 + 0x1E0, 0x40 },
    { _T("X-Ism Punch Mash"), 0x34494 + 0x1e0, 0x34494 + 0x200, 0x40 },
    { _T("X-Ism Kick Mash"), 0x34494 + 0x200, 0x34494 + 0x220, 0x40 },
    { _T("A-Ism Punch Mash"), 0x34494 + 0x220, 0x34494 + 0x240, 0x40 },
    { _T("A-Ism Kick Mash"), 0x34494 + 0x240, 0x34494 + 0x260, 0x40 },
    { _T("V-Ism Punch Mash"), 0x34494 + 0x260, 0x34494 + 0x280, 0x40 },
    { _T("V-Ism Kick Mash"), 0x34494 + 0x280, 0x34494 + 0x2A0, 0x40 },
    { _T("Priority Win"), 0x34494 + 0x2A0, 0x34494 + 0x2C0, 0x40 },
    { _T("Damage Reduction"), 0x34494 + 0x2C0, 0x34494 + 0x2E0, 0x40 },
    { _T("Just Defend"), 0x34494 + 0x2e0, 0x34494 + 0x300, 0x40 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2e294, 0x2e2b4, 0x41, 0x00 },
    { _T("X-Ism Punch Soul Power"), 0x2e2b4, 0x2e2d4, 0x41, 0x02 },
    { _T("X-Ism Punch Extra 2"), 0x2e2d4, 0x2e2f4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2e2f4, 0x2e314, 0x41, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2e314, 0x2e334, 0x41, 0x00 },
    { _T("X-ism Punch Dress Winpose"), 0x4ae14, 0x4ae34, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2e334, 0x2e354, 0x41, 0x00 },
    { _T("X-Ism Kick Soul Power"), 0x2e354, 0x2e374, 0x41, 0x02 },
    { _T("X-Ism Kick Extra 2"), 0x2e374, 0x2e394 },
    { _T("X-Ism Kick Super Trail Light"), 0x2e394, 0x2e3b4, 0x41, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2e3b4, 0x2e3d4, 0x41, 0x00 },
    { _T("X-ism Kick Dress Winpose"), 0x4ae34, 0x4ae54, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2e3d4, 0x2e3f4, 0x41, 0x00 },
    { _T("A-Ism Punch Soul Power"), 0x2e3f4, 0x2e414, 0x41, 0x02 },
    { _T("A-Ism Punch Extra 2"), 0x2e414, 0x2e434 },
    { _T("A-Ism Punch Super Trail Light"), 0x2e434, 0x2e454, 0x41, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2e454, 0x2e474, 0x41, 0x00 },
    { _T("A-ism Punch Dress Winpose"), 0x4ae54, 0x4ae74, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2e474, 0x2e494, 0x41, 0x00 },
    { _T("A-Ism Kick Soul Power"), 0x2e494, 0x2e4b4, 0x41, 0x02 },
    { _T("A-Ism Kick Extra 2"), 0x2e4b4, 0x2e4d4 },
    { _T("A-Ism Kick Super Trail Light"), 0x2e4d4, 0x2e4f4, 0x41, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2e4f4, 0x2e514, 0x41, 0x00 },
    { _T("A-ism Kick Dress Winpose"), 0x4ae74, 0x4ae94, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2e514, 0x2e534, 0x41, 0x00 },
    { _T("V-Ism Punch Soul Power"), 0x2e534, 0x2e554, 0x41, 0x02 },
    { _T("V-Ism Punch Extra 2"), 0x2e554, 0x2e574 },
    { _T("V-Ism Punch Super Trail Light"), 0x2e574, 0x2e594, 0x41, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2e594, 0x2e5b4, 0x41, 0x00 },
    { _T("V-ism Punch Dress Winpose"), 0x4ae94, 0x4aeb4, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2e5b4, 0x2e5d4, 0x41, 0x00 },
    { _T("V-Ism Kick Soul Power"), 0x2e5d4, 0x2e5f4, 0x41, 0x02 },
    { _T("V-Ism Kick Extra 2"), 0x2e5f4, 0x2e614 },
    { _T("V-Ism Kick Super Trail Light"), 0x2e614, 0x2e634, 0x41, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2e634, 0x2e654, 0x41, 0x00 },
    { _T("V-ism Kick Dress Winpose"), 0x4aeb4, 0x4aed4, indexCPS2_Rose, 1 },
};
    
const sGame_PaletteDataset SFA3_A_ROSE_STATUS[] =
{
    { _T("Burned 1"), 0x34794 + 0x00, 0x34794 + 0x20, 0x41 },
    { _T("Burned 2"), 0x34794 + 0x20, 0x34794 + 0x40, 0x41 },
    { _T("Psycho Crusher Burned 1"), 0x34794 + 0x40, 0x34794 + 0x60, 0x41 },
    { _T("Psycho Crusher Burned 2"), 0x34794 + 0x60, 0x34794 + 0x80, 0x41 },
    { _T("V-Ism P1 After Effect 1"), 0x34794 + 0x80, 0x34794 + 0xA0, 0x41 },
    { _T("V-Ism P1 After Effect 2"), 0x34794 + 0xA0, 0x34794 + 0xC0, 0x41 },
    { _T("V-Ism P2 After Effect 1"), 0x34794 + 0xC0, 0x34794 + 0xE0, 0x41 },
    { _T("V-Ism P2 After Effect 2"), 0x34794 + 0xe0, 0x34794 + 0x100, 0x41 },
    { _T("X-Ism Punch Zapped"), 0x34794 + 0x100, 0x34794 + 0x120, 0x41 },
    { _T("X-Ism Kick Zapped"), 0x34794 + 0x120, 0x34794 + 0x140, 0x41 },
    { _T("A-Ism Punch Zapped"), 0x34794 + 0x140, 0x34794 + 0x160, 0x41 },
    { _T("A-Ism Kick Zapped"), 0x34794 + 0x160, 0x34794 + 0x180, 0x41 },
    { _T("V-Ism Punch Zapped"), 0x34794 + 0x180, 0x34794 + 0x1A0, 0x41 },
    { _T("V-Ism Kick Zapped"), 0x34794 + 0x1A0, 0x34794 + 0x1C0, 0x41 },
    { _T("Zapped Skeleton"), 0x34794 + 0x1C0, 0x34794 + 0x1E0, 0x41 },
    { _T("X-Ism Punch Mash"), 0x34794 + 0x1e0, 0x34794 + 0x200, 0x41 },
    { _T("X-Ism Kick Mash"), 0x34794 + 0x200, 0x34794 + 0x220, 0x41 },
    { _T("A-Ism Punch Mash"), 0x34794 + 0x220, 0x34794 + 0x240, 0x41 },
    { _T("A-Ism Kick Mash"), 0x34794 + 0x240, 0x34794 + 0x260, 0x41 },
    { _T("V-Ism Punch Mash"), 0x34794 + 0x260, 0x34794 + 0x280, 0x41 },
    { _T("V-Ism Kick Mash"), 0x34794 + 0x280, 0x34794 + 0x2A0, 0x41 },
    { _T("Priority Win"), 0x34794 + 0x2A0, 0x34794 + 0x2C0, 0x41 },
    { _T("Damage Reduction"), 0x34794 + 0x2C0, 0x34794 + 0x2E0, 0x41 },
    { _T("Just Defend"), 0x34794 + 0x2e0, 0x34794 + 0x300, 0x41 },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2e654, 0x2e674, 0x26, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2e674, 0x2e694 },
    { _T("X-Ism Punch Extra 2"), 0x2e694, 0x2e6b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2e6b4, 0x2e6d4, 0x26, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2e6d4, 0x2e6f4, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2e6f4, 0x2e714, 0x26, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2e714, 0x2e734 },
    { _T("X-Ism Kick Extra 2"), 0x2e734, 0x2e754 },
    { _T("X-Ism Kick Super Trail Light"), 0x2e754, 0x2e774, 0x26, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2e774, 0x2e794, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2e794, 0x2e7b4, 0x26, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2e7b4, 0x2e7d4 },
    { _T("A-Ism Punch Extra 2"), 0x2e7d4, 0x2e7f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x2e7f4, 0x2e814, 0x26, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2e814, 0x2e834, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2e834, 0x2e854, 0x26, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2e854, 0x2e874 },
    { _T("A-Ism Kick Extra 2"), 0x2e874, 0x2e894 },
    { _T("A-Ism Kick Super Trail Light"), 0x2e894, 0x2e8b4, 0x26, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2e8b4, 0x2e8d4, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2e8d4, 0x2e8f4, 0x26, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2e8f4, 0x2e914 },
    { _T("V-Ism Punch Extra 2"), 0x2e914, 0x2e934 },
    { _T("V-Ism Punch Super Trail Light"), 0x2e934, 0x2e954, 0x26, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2e954, 0x2e974, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2e974, 0x2e994, 0x26, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2e994, 0x2e9b4 },
    { _T("V-Ism Kick Extra 2"), 0x2e9b4, 0x2e9d4 },
    { _T("V-Ism Kick Super Trail Light"), 0x2e9d4, 0x2e9f4, 0x26, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2e9f4, 0x2ea14, 0x26, 0x00 },
};

const sGame_PaletteDataset SFA3_A_MBISON_STATUS[] =
{
    { _T("Burned 1"), 0x34a94 + 0x00, 0x34a94 + 0x20, 0x26 },
    { _T("Burned 2"), 0x34a94 + 0x20, 0x34a94 + 0x40, 0x26 },
    { _T("Psycho Crusher Burned 1"), 0x34a94 + 0x40, 0x34a94 + 0x60, 0x26 },
    { _T("Psycho Crusher Burned 2"), 0x34a94 + 0x60, 0x34a94 + 0x80, 0x26 },
    { _T("V-Ism P1 After Effect 1"), 0x34a94 + 0x80, 0x34a94 + 0xA0, 0x26 },
    { _T("V-Ism P1 After Effect 2"), 0x34a94 + 0xA0, 0x34a94 + 0xC0, 0x26 },
    { _T("V-Ism P2 After Effect 1"), 0x34a94 + 0xC0, 0x34a94 + 0xE0, 0x26 },
    { _T("V-Ism P2 After Effect 2"), 0x34a94 + 0xe0, 0x34a94 + 0x100, 0x26 },
    { _T("X-Ism Punch Zapped"), 0x34a94 + 0x100, 0x34a94 + 0x120, 0x26 },
    { _T("X-Ism Kick Zapped"), 0x34a94 + 0x120, 0x34a94 + 0x140, 0x26 },
    { _T("A-Ism Punch Zapped"), 0x34a94 + 0x140, 0x34a94 + 0x160, 0x26 },
    { _T("A-Ism Kick Zapped"), 0x34a94 + 0x160, 0x34a94 + 0x180, 0x26 },
    { _T("V-Ism Punch Zapped"), 0x34a94 + 0x180, 0x34a94 + 0x1A0, 0x26 },
    { _T("V-Ism Kick Zapped"), 0x34a94 + 0x1A0, 0x34a94 + 0x1C0, 0x26 },
    { _T("Zapped Skeleton"), 0x34a94 + 0x1C0, 0x34a94 + 0x1E0, 0x26 },
    { _T("X-Ism Punch Mash"), 0x34a94 + 0x1e0, 0x34a94 + 0x200, 0x26 },
    { _T("X-Ism Kick Mash"), 0x34a94 + 0x200, 0x34a94 + 0x220, 0x26 },
    { _T("A-Ism Punch Mash"), 0x34a94 + 0x220, 0x34a94 + 0x240, 0x26 },
    { _T("A-Ism Kick Mash"), 0x34a94 + 0x240, 0x34a94 + 0x260, 0x26 },
    { _T("V-Ism Punch Mash"), 0x34a94 + 0x260, 0x34a94 + 0x280, 0x26 },
    { _T("V-Ism Kick Mash"), 0x34a94 + 0x280, 0x34a94 + 0x2A0, 0x26 },
    { _T("Priority Win"), 0x34a94 + 0x2A0, 0x34a94 + 0x2C0, 0x26 },
    { _T("Damage Reduction"), 0x34a94 + 0x2C0, 0x34a94 + 0x2E0, 0x26 },
    { _T("Just Defend"), 0x34a94 + 0x2e0, 0x34a94 + 0x300, 0x26 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2ea14, 0x2ea34, 0x42, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2ea34, 0x2ea54 },
    { _T("X-Ism Punch Extra 2"), 0x2ea54, 0x2ea74 },
    { _T("X-Ism Punch Super Trail Light"), 0x2ea74, 0x2ea94, 0x42, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2ea94, 0x2eab4, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2eab4, 0x2ead4, 0x42, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2ead4, 0x2eaf4 },
    { _T("X-Ism Kick Extra 2"), 0x2eaf4, 0x2eb14 },
    { _T("X-Ism Kick Super Trail Light"), 0x2eb14, 0x2eb34, 0x42, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2eb34, 0x2eb54, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2eb54, 0x2eb74, 0x42, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2eb74, 0x2eb94 },
    { _T("A-Ism Punch Extra 2"), 0x2eb94, 0x2ebb4 },
    { _T("A-Ism Punch Super Trail Light"), 0x2ebb4, 0x2ebd4, 0x42, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2ebd4, 0x2ebf4, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2ebf4, 0x2ec14, 0x42, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2ec14, 0x2ec34 },
    { _T("A-Ism Kick Extra 2"), 0x2ec34, 0x2ec54 },
    { _T("A-Ism Kick Super Trail Light"), 0x2ec54, 0x2ec74, 0x42, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2ec74, 0x2ec94, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2ec94, 0x2ecb4, 0x42, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2ecb4, 0x2ecd4 },
    { _T("V-Ism Punch Extra 2"), 0x2ecd4, 0x2ecf4 },
    { _T("V-Ism Punch Super Trail Light"), 0x2ecf4, 0x2ed14, 0x42, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2ed14, 0x2ed34, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2ed34, 0x2ed54, 0x42, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2ed54, 0x2ed74 },
    { _T("V-Ism Kick Extra 2"), 0x2ed74, 0x2ed94 },
    { _T("V-Ism Kick Super Trail Light"), 0x2ed94, 0x2edb4, 0x42, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2edb4, 0x2edd4, 0x42, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_STATUS[] =
{
    { _T("Burned 1"), 0x34d94 + 0x00, 0x34d94 + 0x20, 0x42 },
    { _T("Burned 2"), 0x34d94 + 0x20, 0x34d94 + 0x40, 0x42 },
    { _T("Psycho Crusher Burned 1"), 0x34d94 + 0x40, 0x34d94 + 0x60, 0x42 },
    { _T("Psycho Crusher Burned 2"), 0x34d94 + 0x60, 0x34d94 + 0x80, 0x42 },
    { _T("V-Ism P1 After Effect 1"), 0x34d94 + 0x80, 0x34d94 + 0xA0, 0x42 },
    { _T("V-Ism P1 After Effect 2"), 0x34d94 + 0xA0, 0x34d94 + 0xC0, 0x42 },
    { _T("V-Ism P2 After Effect 1"), 0x34d94 + 0xC0, 0x34d94 + 0xE0, 0x42 },
    { _T("V-Ism P2 After Effect 2"), 0x34d94 + 0xe0, 0x34d94 + 0x100, 0x42 },
    { _T("X-Ism Punch Zapped"), 0x34d94 + 0x100, 0x34d94 + 0x120, 0x42 },
    { _T("X-Ism Kick Zapped"), 0x34d94 + 0x120, 0x34d94 + 0x140, 0x42 },
    { _T("A-Ism Punch Zapped"), 0x34d94 + 0x140, 0x34d94 + 0x160, 0x42 },
    { _T("A-Ism Kick Zapped"), 0x34d94 + 0x160, 0x34d94 + 0x180, 0x42 },
    { _T("V-Ism Punch Zapped"), 0x34d94 + 0x180, 0x34d94 + 0x1A0, 0x42 },
    { _T("V-Ism Kick Zapped"), 0x34d94 + 0x1A0, 0x34d94 + 0x1C0, 0x42 },
    { _T("Zapped Skeleton"), 0x34d94 + 0x1C0, 0x34d94 + 0x1E0, 0x42 },
    { _T("X-Ism Punch Mash"), 0x34d94 + 0x1e0, 0x34d94 + 0x200, 0x42 },
    { _T("X-Ism Kick Mash"), 0x34d94 + 0x200, 0x34d94 + 0x220, 0x42 },
    { _T("A-Ism Punch Mash"), 0x34d94 + 0x220, 0x34d94 + 0x240, 0x42 },
    { _T("A-Ism Kick Mash"), 0x34d94 + 0x240, 0x34d94 + 0x260, 0x42 },
    { _T("V-Ism Punch Mash"), 0x34d94 + 0x260, 0x34d94 + 0x280, 0x42 },
    { _T("V-Ism Kick Mash"), 0x34d94 + 0x280, 0x34d94 + 0x2A0, 0x42 },
    { _T("Priority Win"), 0x34d94 + 0x2A0, 0x34d94 + 0x2C0, 0x42 },
    { _T("Damage Reduction"), 0x34d94 + 0x2C0, 0x34d94 + 0x2E0, 0x42 },
    { _T("Just Defend"), 0x34d94 + 0x2e0, 0x34d94 + 0x300, 0x42 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2edd4, 0x2edf4, 0x23, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2edf4, 0x2ee14 },
    { _T("X-Ism Punch Extra 2"), 0x2ee14, 0x2ee34 },
    { _T("X-Ism Punch Super Trail Light"), 0x2ee34, 0x2ee54, 0x23, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2ee54, 0x2ee74, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2ee74, 0x2ee94, 0x23, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2ee94, 0x2eeb4 },
    { _T("X-Ism Kick Extra 2"), 0x2eeb4, 0x2eed4 },
    { _T("X-Ism Kick Super Trail Light"), 0x2eed4, 0x2eef4, 0x23, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2eef4, 0x2ef14, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2ef14, 0x2ef34, 0x23, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2ef34, 0x2ef54 },
    { _T("A-Ism Punch Extra 2"), 0x2ef54, 0x2ef74 },
    { _T("A-Ism Punch Super Trail Light"), 0x2ef74, 0x2ef94, 0x23, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2ef94, 0x2efb4, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2efb4, 0x2efd4, 0x23, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2efd4, 0x2eff4 },
    { _T("A-Ism Kick Extra 2"), 0x2eff4, 0x2f014 },
    { _T("A-Ism Kick Super Trail Light"), 0x2f014, 0x2f034, 0x23, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2f034, 0x2f054, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2f054, 0x2f074, 0x23, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2f074, 0x2f094 },
    { _T("V-Ism Punch Extra 2"), 0x2f094, 0x2f0b4 },
    { _T("V-Ism Punch Super Trail Light"), 0x2f0b4, 0x2f0d4, 0x23, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2f0d4, 0x2f0f4, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2f0f4, 0x2f114, 0x23, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2f114, 0x2f134 },
    { _T("V-Ism Kick Extra 2"), 0x2f134, 0x2f154 },
    { _T("V-Ism Kick Super Trail Light"), 0x2f154, 0x2f174, 0x23, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2f174, 0x2f194, 0x23, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DAN_STATUS[] =
{
    { _T("Burned 1"), 0x35094 + 0x00, 0x35094 + 0x20, 0x23 },
    { _T("Burned 2"), 0x35094 + 0x20, 0x35094 + 0x40, 0x23 },
    { _T("Psycho Crusher Burned 1"), 0x35094 + 0x40, 0x35094 + 0x60, 0x23 },
    { _T("Psycho Crusher Burned 2"), 0x35094 + 0x60, 0x35094 + 0x80, 0x23 },
    { _T("V-Ism P1 After Effect 1"), 0x35094 + 0x80, 0x35094 + 0xA0, 0x23 },
    { _T("V-Ism P1 After Effect 2"), 0x35094 + 0xA0, 0x35094 + 0xC0, 0x23 },
    { _T("V-Ism P2 After Effect 1"), 0x35094 + 0xC0, 0x35094 + 0xE0, 0x23 },
    { _T("V-Ism P2 After Effect 2"), 0x35094 + 0xe0, 0x35094 + 0x100, 0x23 },
    { _T("X-Ism Punch Zapped"), 0x35094 + 0x100, 0x35094 + 0x120, 0x23 },
    { _T("X-Ism Kick Zapped"), 0x35094 + 0x120, 0x35094 + 0x140, 0x23 },
    { _T("A-Ism Punch Zapped"), 0x35094 + 0x140, 0x35094 + 0x160, 0x23 },
    { _T("A-Ism Kick Zapped"), 0x35094 + 0x160, 0x35094 + 0x180, 0x23 },
    { _T("V-Ism Punch Zapped"), 0x35094 + 0x180, 0x35094 + 0x1A0, 0x23 },
    { _T("V-Ism Kick Zapped"), 0x35094 + 0x1A0, 0x35094 + 0x1C0, 0x23 },
    { _T("Zapped Skeleton"), 0x35094 + 0x1C0, 0x35094 + 0x1E0, 0x23 },
    { _T("X-Ism Punch Mash"), 0x35094 + 0x1e0, 0x35094 + 0x200, 0x23 },
    { _T("X-Ism Kick Mash"), 0x35094 + 0x200, 0x35094 + 0x220, 0x23 },
    { _T("A-Ism Punch Mash"), 0x35094 + 0x220, 0x35094 + 0x240, 0x23 },
    { _T("A-Ism Kick Mash"), 0x35094 + 0x240, 0x35094 + 0x260, 0x23 },
    { _T("V-Ism Punch Mash"), 0x35094 + 0x260, 0x35094 + 0x280, 0x23 },
    { _T("V-Ism Kick Mash"), 0x35094 + 0x280, 0x35094 + 0x2A0, 0x23 },
    { _T("Priority Win"), 0x35094 + 0x2A0, 0x35094 + 0x2C0, 0x23 },
    { _T("Damage Reduction"), 0x35094 + 0x2C0, 0x35094 + 0x2E0, 0x23 },
    { _T("Just Defend"), 0x35094 + 0x2e0, 0x35094 + 0x300, 0x23 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2f194, 0x2f1b4, 0x22, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2f1b4, 0x2f1d4 },
    { _T("X-Ism Punch Extra 2"), 0x2f1d4, 0x2f1f4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2f1f4, 0x2f214, 0x22, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2f214, 0x2f234, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2f234, 0x2f254, 0x22, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2f254, 0x2f274 },
    { _T("X-Ism Kick Extra 2"), 0x2f274, 0x2f294 },
    { _T("X-Ism Kick Super Trail Light"), 0x2f294, 0x2f2b4, 0x22, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2f2b4, 0x2f2d4, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2f2d4, 0x2f2f4, 0x22, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2f2f4, 0x2f314 },
    { _T("A-Ism Punch Extra 2"), 0x2f314, 0x2f334 },
    { _T("A-Ism Punch Super Trail Light"), 0x2f334, 0x2f354, 0x22, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2f354, 0x2f374, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2f374, 0x2f394, 0x22, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2f394, 0x2f3b4 },
    { _T("A-Ism Kick Extra 2"), 0x2f3b4, 0x2f3d4 },
    { _T("A-Ism Kick Super Trail Light"), 0x2f3d4, 0x2f3f4, 0x22, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2f3f4, 0x2f414, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2f414, 0x2f434, 0x22, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2f434, 0x2f454 },
    { _T("V-Ism Punch Extra 2"), 0x2f454, 0x2f474 },
    { _T("V-Ism Punch Super Trail Light"), 0x2f474, 0x2f494, 0x22, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2f494, 0x2f4b4, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2f4b4, 0x2f4d4, 0x22, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2f4d4, 0x2f4f4 },
    { _T("V-Ism Kick Extra 2"), 0x2f4f4, 0x2f514 },
    { _T("V-Ism Kick Super Trail Light"), 0x2f514, 0x2f534, 0x22, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2f534, 0x2f554, 0x22, 0x00 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_STATUS[] =
{
    { _T("Burned 1"), 0x35394 + 0x00, 0x35394 + 0x20, 0x22 },
    { _T("Burned 2"), 0x35394 + 0x20, 0x35394 + 0x40, 0x22 },
    { _T("Psycho Crusher Burned 1"), 0x35394 + 0x40, 0x35394 + 0x60, 0x22 },
    { _T("Psycho Crusher Burned 2"), 0x35394 + 0x60, 0x35394 + 0x80, 0x22 },
    { _T("V-Ism P1 After Effect 1"), 0x35394 + 0x80, 0x35394 + 0xA0, 0x22 },
    { _T("V-Ism P1 After Effect 2"), 0x35394 + 0xA0, 0x35394 + 0xC0, 0x22 },
    { _T("V-Ism P2 After Effect 1"), 0x35394 + 0xC0, 0x35394 + 0xE0, 0x22 },
    { _T("V-Ism P2 After Effect 2"), 0x35394 + 0xe0, 0x35394 + 0x100, 0x22 },
    { _T("X-Ism Punch Zapped"), 0x35394 + 0x100, 0x35394 + 0x120, 0x22 },
    { _T("X-Ism Kick Zapped"), 0x35394 + 0x120, 0x35394 + 0x140, 0x22 },
    { _T("A-Ism Punch Zapped"), 0x35394 + 0x140, 0x35394 + 0x160, 0x22 },
    { _T("A-Ism Kick Zapped"), 0x35394 + 0x160, 0x35394 + 0x180, 0x22 },
    { _T("V-Ism Punch Zapped"), 0x35394 + 0x180, 0x35394 + 0x1A0, 0x22 },
    { _T("V-Ism Kick Zapped"), 0x35394 + 0x1A0, 0x35394 + 0x1C0, 0x22 },
    { _T("Zapped Skeleton"), 0x35394 + 0x1C0, 0x35394 + 0x1E0, 0x22 },
    { _T("X-Ism Punch Mash"), 0x35394 + 0x1e0, 0x35394 + 0x200, 0x22 },
    { _T("X-Ism Kick Mash"), 0x35394 + 0x200, 0x35394 + 0x220, 0x22 },
    { _T("A-Ism Punch Mash"), 0x35394 + 0x220, 0x35394 + 0x240, 0x22 },
    { _T("A-Ism Kick Mash"), 0x35394 + 0x240, 0x35394 + 0x260, 0x22 },
    { _T("V-Ism Punch Mash"), 0x35394 + 0x260, 0x35394 + 0x280, 0x22 },
    { _T("V-Ism Kick Mash"), 0x35394 + 0x280, 0x35394 + 0x2A0, 0x22 },
    { _T("Priority Win"), 0x35394 + 0x2A0, 0x35394 + 0x2C0, 0x22 },
    { _T("Damage Reduction"), 0x35394 + 0x2C0, 0x35394 + 0x2E0, 0x22 },
    { _T("Just Defend"), 0x35394 + 0x2e0, 0x35394 + 0x300, 0x22 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2f554, 0x2f574, 0x43, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2f574, 0x2f594 },
    { _T("X-Ism Punch Extra 2"), 0x2f594, 0x2f5b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x2f5b4, 0x2f5d4, 0x43, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2f5d4, 0x2f5f4, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2f5f4, 0x2f614, 0x43, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2f614, 0x2f634 },
    { _T("X-Ism Kick Extra 2"), 0x2f634, 0x2f654 },
    { _T("X-Ism Kick Super Trail Light"), 0x2f654, 0x2f674, 0x43, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2f674, 0x2f694, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2f694, 0x2f6b4, 0x43, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2f6b4, 0x2f6d4 },
    { _T("A-Ism Punch Extra 2"), 0x2f6d4, 0x2f6f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x2f6f4, 0x2f714, 0x43, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2f714, 0x2f734, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2f734, 0x2f754, 0x43, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2f754, 0x2f774 },
    { _T("A-Ism Kick Extra 2"), 0x2f774, 0x2f794 },
    { _T("A-Ism Kick Super Trail Light"), 0x2f794, 0x2f7b4, 0x43, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2f7b4, 0x2f7d4, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2f7d4, 0x2f7f4, 0x43, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2f7f4, 0x2f814 },
    { _T("V-Ism Punch Extra 2"), 0x2f814, 0x2f834 },
    { _T("V-Ism Punch Super Trail Light"), 0x2f834, 0x2f854, 0x43, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2f854, 0x2f874, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2f874, 0x2f894, 0x43, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2f894, 0x2f8b4 },
    { _T("V-Ism Kick Extra 2"), 0x2f8b4, 0x2f8d4 },
    { _T("V-Ism Kick Super Trail Light"), 0x2f8d4, 0x2f8f4, 0x43, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2f8f4, 0x2f914, 0x43, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_STATUS[] =
{
    { _T("Burned 1"), 0x35694 + 0x00, 0x35694 + 0x20, 0x43 },
    { _T("Burned 2"), 0x35694 + 0x20, 0x35694 + 0x40, 0x43 },
    { _T("Psycho Crusher Burned 1"), 0x35694 + 0x40, 0x35694 + 0x60, 0x43 },
    { _T("Psycho Crusher Burned 2"), 0x35694 + 0x60, 0x35694 + 0x80, 0x43 },
    { _T("V-Ism P1 After Effect 1"), 0x35694 + 0x80, 0x35694 + 0xA0, 0x43 },
    { _T("V-Ism P1 After Effect 2"), 0x35694 + 0xA0, 0x35694 + 0xC0, 0x43 },
    { _T("V-Ism P2 After Effect 1"), 0x35694 + 0xC0, 0x35694 + 0xE0, 0x43 },
    { _T("V-Ism P2 After Effect 2"), 0x35694 + 0xe0, 0x35694 + 0x100, 0x43 },
    { _T("X-Ism Punch Zapped"), 0x35694 + 0x100, 0x35694 + 0x120, 0x43 },
    { _T("X-Ism Kick Zapped"), 0x35694 + 0x120, 0x35694 + 0x140, 0x43 },
    { _T("A-Ism Punch Zapped"), 0x35694 + 0x140, 0x35694 + 0x160, 0x43 },
    { _T("A-Ism Kick Zapped"), 0x35694 + 0x160, 0x35694 + 0x180, 0x43 },
    { _T("V-Ism Punch Zapped"), 0x35694 + 0x180, 0x35694 + 0x1A0, 0x43 },
    { _T("V-Ism Kick Zapped"), 0x35694 + 0x1A0, 0x35694 + 0x1C0, 0x43 },
    { _T("Zapped Skeleton"), 0x35694 + 0x1C0, 0x35694 + 0x1E0, 0x43 },
    { _T("X-Ism Punch Mash"), 0x35694 + 0x1e0, 0x35694 + 0x200, 0x43 },
    { _T("X-Ism Kick Mash"), 0x35694 + 0x200, 0x35694 + 0x220, 0x43 },
    { _T("A-Ism Punch Mash"), 0x35694 + 0x220, 0x35694 + 0x240, 0x43 },
    { _T("A-Ism Kick Mash"), 0x35694 + 0x240, 0x35694 + 0x260, 0x43 },
    { _T("V-Ism Punch Mash"), 0x35694 + 0x260, 0x35694 + 0x280, 0x43 },
    { _T("V-Ism Kick Mash"), 0x35694 + 0x280, 0x35694 + 0x2A0, 0x43 },
    { _T("Priority Win"), 0x35694 + 0x2A0, 0x35694 + 0x2C0, 0x43 },
    { _T("Damage Reduction"), 0x35694 + 0x2C0, 0x35694 + 0x2E0, 0x43 },
    { _T("Just Defend"), 0x35694 + 0x2e0, 0x35694 + 0x300, 0x43 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2f914, 0x2f934, 0x25, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2f934, 0x2f954, 0x25, 0x01 },
    { _T("X-Ism Punch Sally"), 0x2f954, 0x2f974, 0x25, 0x02 },
    { _T("X-Ism Punch Super Trail Light"), 0x2f974, 0x2f994, 0x25, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2f994, 0x2f9b4, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2f9b4, 0x2f9d4, 0x25, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2f9d4, 0x2f9f4, 0x25, 0x01 },
    { _T("X-Ism Kick Sally"), 0x2f9f4, 0x2fa14, 0x25, 0x02 },
    { _T("X-Ism Kick Super Trail Light"), 0x2fa14, 0x2fa34, 0x25, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2fa34, 0x2fa54, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2fa54, 0x2fa74, 0x25, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2fa74, 0x2fa94, 0x25, 0x01 },
    { _T("A-Ism Punch Sally"), 0x2fa94, 0x2fab4, 0x25, 0x02 },
    { _T("A-Ism Punch Super Trail Light"), 0x2fab4, 0x2fad4, 0x25, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2fad4, 0x2faf4, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2faf4, 0x2fb14, 0x25, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2fb14, 0x2fb34, 0x25, 0x01 },
    { _T("A-Ism Kick Sally"), 0x2fb34, 0x2fb54, 0x25, 0x02 },
    { _T("A-Ism Kick Super Trail Light"), 0x2fb54, 0x2fb74, 0x25, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2fb74, 0x2fb94, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2fb94, 0x2fbb4, 0x25, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2fbb4, 0x2fbd4, 0x25, 0x01 },
    { _T("V-Ism Punch Sally"), 0x2fbd4, 0x2fbf4, 0x25, 0x02 },
    { _T("V-Ism Punch Super Trail Light"), 0x2fbf4, 0x2fc14, 0x25, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2fc14, 0x2fc34, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2fc34, 0x2fc54, 0x25, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x2fc54, 0x2fc74, 0x25, 0x01 },
    { _T("V-Ism Kick Sally"), 0x2fc74, 0x2fc94, 0x25, 0x02 },
    { _T("V-Ism Kick Super Trail Light"), 0x2fc94, 0x2fcb4, 0x25, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x2fcb4, 0x2fcd4, 0x25, 0x00 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_STATUS[] =
{
    { _T("Burned 1"), 0x35994 + 0x00, 0x35994 + 0x20, 0x25 },
    { _T("Burned 2"), 0x35994 + 0x20, 0x35994 + 0x40, 0x25 },
    { _T("Psycho Crusher Burned 1"), 0x35994 + 0x40, 0x35994 + 0x60, 0x25 },
    { _T("Psycho Crusher Burned 2"), 0x35994 + 0x60, 0x35994 + 0x80, 0x25 },
    { _T("V-Ism P1 After Effect 1"), 0x35994 + 0x80, 0x35994 + 0xA0, 0x25 },
    { _T("V-Ism P1 After Effect 2"), 0x35994 + 0xA0, 0x35994 + 0xC0, 0x25 },
    { _T("V-Ism P2 After Effect 1"), 0x35994 + 0xC0, 0x35994 + 0xE0, 0x25 },
    { _T("V-Ism P2 After Effect 2"), 0x35994 + 0xe0, 0x35994 + 0x100, 0x25 },
    { _T("X-Ism Punch Zapped"), 0x35994 + 0x100, 0x35994 + 0x120, 0x25 },
    { _T("X-Ism Kick Zapped"), 0x35994 + 0x120, 0x35994 + 0x140, 0x25 },
    { _T("A-Ism Punch Zapped"), 0x35994 + 0x140, 0x35994 + 0x160, 0x25 },
    { _T("A-Ism Kick Zapped"), 0x35994 + 0x160, 0x35994 + 0x180, 0x25 },
    { _T("V-Ism Punch Zapped"), 0x35994 + 0x180, 0x35994 + 0x1A0, 0x25 },
    { _T("V-Ism Kick Zapped"), 0x35994 + 0x1A0, 0x35994 + 0x1C0, 0x25 },
    { _T("Zapped Skeleton"), 0x35994 + 0x1C0, 0x35994 + 0x1E0, 0x25 },
    { _T("X-Ism Punch Mash"), 0x35994 + 0x1e0, 0x35994 + 0x200, 0x25 },
    { _T("X-Ism Kick Mash"), 0x35994 + 0x200, 0x35994 + 0x220, 0x25 },
    { _T("A-Ism Punch Mash"), 0x35994 + 0x220, 0x35994 + 0x240, 0x25 },
    { _T("A-Ism Kick Mash"), 0x35994 + 0x240, 0x35994 + 0x260, 0x25 },
    { _T("V-Ism Punch Mash"), 0x35994 + 0x260, 0x35994 + 0x280, 0x25 },
    { _T("V-Ism Kick Mash"), 0x35994 + 0x280, 0x35994 + 0x2A0, 0x25 },
    { _T("Priority Win"), 0x35994 + 0x2A0, 0x35994 + 0x2C0, 0x25 },
    { _T("Damage Reduction"), 0x35994 + 0x2C0, 0x35994 + 0x2E0, 0x25 },
    { _T("Just Defend"), 0x35994 + 0x2e0, 0x35994 + 0x300, 0x25 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMP[] =
{
    { _T("X-Ism Punch"), 0x2fcd4, 0x2fcf4, 0x01, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x2fcf4, 0x2fd14, 0x01, 0x01 },
    { _T("X-Ism Punch Extra 2"), 0x2fd14, 0x2fd34 },
    { _T("X-Ism Punch Super Trail Light"), 0x2fd34, 0x2fd54, 0x01, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x2fd54, 0x2fd74, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_XISMK[] =
{
    { _T("X-Ism Kick"), 0x2fd74, 0x2fd94, 0x01, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x2fd94, 0x2fdb4, 0x01, 0x01 },
    { _T("X-Ism Kick Extra 2"), 0x2fdb4, 0x2fdd4 },
    { _T("X-Ism Kick Super Trail Light"), 0x2fdd4, 0x2fdf4, 0x01, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x2fdf4, 0x2fe14, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMP[] =
{
    { _T("A-Ism Punch"), 0x2fe14, 0x2fe34, 0x01, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x2fe34, 0x2fe54, 0x01, 0x01 },
    { _T("A-Ism Punch Extra 2"), 0x2fe54, 0x2fe74 },
    { _T("A-Ism Punch Super Trail Light"), 0x2fe74, 0x2fe94, 0x01, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x2fe94, 0x2feb4, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_AISMK[] =
{
    { _T("A-Ism Kick"), 0x2feb4, 0x2fed4, 0x01, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x2fed4, 0x2fef4, 0x01, 0x01 },
    { _T("A-Ism Kick Extra 2"), 0x2fef4, 0x2ff14 },
    { _T("A-Ism Kick Super Trail Light"), 0x2ff14, 0x2ff34, 0x01, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x2ff34, 0x2ff54, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMP[] =
{
    { _T("V-Ism Punch"), 0x2ff54, 0x2ff74, 0x01, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x2ff74, 0x2ff94, 0x01, 0x01 },
    { _T("V-Ism Punch Extra 2"), 0x2ff94, 0x2ffb4 },
    { _T("V-Ism Punch Super Trail Light"), 0x2ffb4, 0x2ffd4, 0x01, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x2ffd4, 0x2fff4, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_VISMK[] =
{
    { _T("V-Ism Kick"), 0x2fff4, 0x30014, 0x01, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x30014, 0x30034, 0x01, 0x01 },
    { _T("V-Ism Kick Extra 2"), 0x30034, 0x30054 },
    { _T("V-Ism Kick Super Trail Light"), 0x30054, 0x30074, 0x01, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x30074, 0x30094, 0x01, 0x00 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_STATUS[] =
{
    { _T("Burned 1"), 0x35c94 + 0x00, 0x35c94 + 0x20, 0x01 },
    { _T("Burned 2"), 0x35c94 + 0x20, 0x35c94 + 0x40, 0x01 },
    { _T("Psycho Crusher Burned 1"), 0x35c94 + 0x40, 0x35c94 + 0x60, 0x01 },
    { _T("Psycho Crusher Burned 2"), 0x35c94 + 0x60, 0x35c94 + 0x80, 0x01 },
    { _T("V-Ism P1 After Effect 1"), 0x35c94 + 0x80, 0x35c94 + 0xA0, 0x01 },
    { _T("V-Ism P1 After Effect 2"), 0x35c94 + 0xA0, 0x35c94 + 0xC0, 0x01 },
    { _T("V-Ism P2 After Effect 1"), 0x35c94 + 0xC0, 0x35c94 + 0xE0, 0x01 },
    { _T("V-Ism P2 After Effect 2"), 0x35c94 + 0xe0, 0x35c94 + 0x100, 0x01 },
    { _T("X-Ism Punch Zapped"), 0x35c94 + 0x100, 0x35c94 + 0x120, 0x01 },
    { _T("X-Ism Kick Zapped"), 0x35c94 + 0x120, 0x35c94 + 0x140, 0x01 },
    { _T("A-Ism Punch Zapped"), 0x35c94 + 0x140, 0x35c94 + 0x160, 0x01 },
    { _T("A-Ism Kick Zapped"), 0x35c94 + 0x160, 0x35c94 + 0x180, 0x01 },
    { _T("V-Ism Punch Zapped"), 0x35c94 + 0x180, 0x35c94 + 0x1A0, 0x01 },
    { _T("V-Ism Kick Zapped"), 0x35c94 + 0x1A0, 0x35c94 + 0x1C0, 0x01 },
    { _T("Zapped Skeleton"), 0x35c94 + 0x1C0, 0x35c94 + 0x1E0, 0x01 },
    { _T("X-Ism Punch Mash"), 0x35c94 + 0x1e0, 0x35c94 + 0x200, 0x01 },
    { _T("X-Ism Kick Mash"), 0x35c94 + 0x200, 0x35c94 + 0x220, 0x01 },
    { _T("A-Ism Punch Mash"), 0x35c94 + 0x220, 0x35c94 + 0x240, 0x01 },
    { _T("A-Ism Kick Mash"), 0x35c94 + 0x240, 0x35c94 + 0x260, 0x01 },
    { _T("V-Ism Punch Mash"), 0x35c94 + 0x260, 0x35c94 + 0x280, 0x01 },
    { _T("V-Ism Kick Mash"), 0x35c94 + 0x280, 0x35c94 + 0x2A0, 0x01 },
    { _T("Priority Win"), 0x35c94 + 0x2A0, 0x35c94 + 0x2C0, 0x01 },
    { _T("Damage Reduction"), 0x35c94 + 0x2C0, 0x35c94 + 0x2E0, 0x01 },
    { _T("Just Defend"), 0x35c94 + 0x2e0, 0x35c94 + 0x300, 0x01 },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMP[] =
{
    { _T("X-Ism Punch"), 0x30094, 0x300b4, 0x44, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x300b4, 0x300d4 },
    { _T("X-Ism Punch Extra 2"), 0x300d4, 0x300f4 },
    { _T("X-Ism Punch Super Trail Light"), 0x300f4, 0x30114, 0x44, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x30114, 0x30134, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_XISMK[] =
{
    { _T("X-Ism Kick"), 0x30134, 0x30154, 0x44, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x30154, 0x30174 },
    { _T("X-Ism Kick Extra 2"), 0x30174, 0x30194 },
    { _T("X-Ism Kick Super Trail Light"), 0x30194, 0x301b4, 0x44, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x301b4, 0x301d4, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMP[] =
{
    { _T("A-Ism Punch"), 0x301d4, 0x301f4, 0x44, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x301f4, 0x30214 },
    { _T("A-Ism Punch Extra 2"), 0x30214, 0x30234 },
    { _T("A-Ism Punch Super Trail Light"), 0x30234, 0x30254, 0x44, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x30254, 0x30274, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_AISMK[] =
{
    { _T("A-Ism Kick"), 0x30274, 0x30294, 0x44, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x30294, 0x302b4 },
    { _T("A-Ism Kick Extra 2"), 0x302b4, 0x302d4 },
    { _T("A-Ism Kick Super Trail Light"), 0x302d4, 0x302f4, 0x44, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x302f4, 0x30314, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMP[] =
{
    { _T("V-Ism Punch"), 0x30314, 0x30334, 0x44, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x30334, 0x30354 },
    { _T("V-Ism Punch Extra 2"), 0x30354, 0x30374 },
    { _T("V-Ism Punch Super Trail Light"), 0x30374, 0x30394, 0x44, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x30394, 0x303b4, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_VISMK[] =
{
    { _T("V-Ism Kick"), 0x303b4, 0x303d4, 0x44, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x303d4, 0x303f4 },
    { _T("V-Ism Kick Extra 2"), 0x303f4, 0x30414 },
    { _T("V-Ism Kick Super Trail Light"), 0x30414, 0x30434, 0x44, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x30434, 0x30454, 0x44, 0x00 },
};

const sGame_PaletteDataset SFA3_A_GEN_STATUS[] =
{
    { _T("Burned 1"), 0x35f94 + 0x00, 0x35f94 + 0x20, 0x44 },
    { _T("Burned 2"), 0x35f94 + 0x20, 0x35f94 + 0x40, 0x44 },
    { _T("Psycho Crusher Burned 1"), 0x35f94 + 0x40, 0x35f94 + 0x60, 0x44 },
    { _T("Psycho Crusher Burned 2"), 0x35f94 + 0x60, 0x35f94 + 0x80, 0x44 },
    { _T("V-Ism P1 After Effect 1"), 0x35f94 + 0x80, 0x35f94 + 0xA0, 0x44 },
    { _T("V-Ism P1 After Effect 2"), 0x35f94 + 0xA0, 0x35f94 + 0xC0, 0x44 },
    { _T("V-Ism P2 After Effect 1"), 0x35f94 + 0xC0, 0x35f94 + 0xE0, 0x44 },
    { _T("V-Ism P2 After Effect 2"), 0x35f94 + 0xe0, 0x35f94 + 0x100, 0x44 },
    { _T("X-Ism Punch Zapped"), 0x35f94 + 0x100, 0x35f94 + 0x120, 0x44 },
    { _T("X-Ism Kick Zapped"), 0x35f94 + 0x120, 0x35f94 + 0x140, 0x44 },
    { _T("A-Ism Punch Zapped"), 0x35f94 + 0x140, 0x35f94 + 0x160, 0x44 },
    { _T("A-Ism Kick Zapped"), 0x35f94 + 0x160, 0x35f94 + 0x180, 0x44 },
    { _T("V-Ism Punch Zapped"), 0x35f94 + 0x180, 0x35f94 + 0x1A0, 0x44 },
    { _T("V-Ism Kick Zapped"), 0x35f94 + 0x1A0, 0x35f94 + 0x1C0, 0x44 },
    { _T("Zapped Skeleton"), 0x35f94 + 0x1C0, 0x35f94 + 0x1E0, 0x44 },
    { _T("X-Ism Punch Mash"), 0x35f94 + 0x1e0, 0x35f94 + 0x200, 0x44 },
    { _T("X-Ism Kick Mash"), 0x35f94 + 0x200, 0x35f94 + 0x220, 0x44 },
    { _T("A-Ism Punch Mash"), 0x35f94 + 0x220, 0x35f94 + 0x240, 0x44 },
    { _T("A-Ism Kick Mash"), 0x35f94 + 0x240, 0x35f94 + 0x260, 0x44 },
    { _T("V-Ism Punch Mash"), 0x35f94 + 0x260, 0x35f94 + 0x280, 0x44 },
    { _T("V-Ism Kick Mash"), 0x35f94 + 0x280, 0x35f94 + 0x2A0, 0x44 },
    { _T("Priority Win"), 0x35f94 + 0x2A0, 0x35f94 + 0x2C0, 0x44 },
    { _T("Damage Reduction"), 0x35f94 + 0x2C0, 0x35f94 + 0x2E0, 0x44 },
    { _T("Just Defend"), 0x35f94 + 0x2e0, 0x35f94 + 0x300, 0x44 },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMP[] =
{
    { _T("X-Ism Punch"), 0x30454, 0x30474, 0x45, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x30474, 0x30494 },
    { _T("X-Ism Punch Extra 2"), 0x30494, 0x304b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x304b4, 0x304d4, 0x45, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x304d4, 0x304f4, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_XISMK[] =
{
    { _T("X-Ism Kick"), 0x304f4, 0x30514, 0x45, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x30514, 0x30534 },
    { _T("X-Ism Kick Extra 2"), 0x30534, 0x30554 },
    { _T("X-Ism Kick Super Trail Light"), 0x30554, 0x30574, 0x45, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x30574, 0x30594, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMP[] =
{
    { _T("A-Ism Punch"), 0x30594, 0x305b4, 0x45, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x305b4, 0x305d4 },
    { _T("A-Ism Punch Extra 2"), 0x305d4, 0x305f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x305f4, 0x30614, 0x45, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x30614, 0x30634, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_AISMK[] =
{
    { _T("A-Ism Kick"), 0x30634, 0x30654, 0x45, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x30654, 0x30674 },
    { _T("A-Ism Kick Extra 2"), 0x30674, 0x30694 },
    { _T("A-Ism Kick Super Trail Light"), 0x30694, 0x306b4, 0x45, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x306b4, 0x306d4, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMP[] =
{
    { _T("V-Ism Punch"), 0x306d4, 0x306f4, 0x45, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x306f4, 0x30714 },
    { _T("V-Ism Punch Extra 2"), 0x30714, 0x30734 },
    { _T("V-Ism Punch Super Trail Light"), 0x30734, 0x30754, 0x45, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x30754, 0x30774, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_VISMK[] =
{
    { _T("V-Ism Kick"), 0x30774, 0x30794, 0x45, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x30794, 0x307b4 },
    { _T("V-Ism Kick Extra 2"), 0x307b4, 0x307d4 },
    { _T("V-Ism Kick Super Trail Light"), 0x307d4, 0x307f4, 0x45, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x307f4, 0x30814, 0x45, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BALROG_STATUS[] =
{
    { _T("Burned 1"), 0x36294 + 0x00, 0x36294 + 0x20, 0x45 },
    { _T("Burned 2"), 0x36294 + 0x20, 0x36294 + 0x40, 0x45 },
    { _T("Psycho Crusher Burned 1"), 0x36294 + 0x40, 0x36294 + 0x60, 0x45 },
    { _T("Psycho Crusher Burned 2"), 0x36294 + 0x60, 0x36294 + 0x80, 0x45 },
    { _T("V-Ism P1 After Effect 1"), 0x36294 + 0x80, 0x36294 + 0xA0, 0x45 },
    { _T("V-Ism P1 After Effect 2"), 0x36294 + 0xA0, 0x36294 + 0xC0, 0x45 },
    { _T("V-Ism P2 After Effect 1"), 0x36294 + 0xC0, 0x36294 + 0xE0, 0x45 },
    { _T("V-Ism P2 After Effect 2"), 0x36294 + 0xe0, 0x36294 + 0x100, 0x45 },
    { _T("X-Ism Punch Zapped"), 0x36294 + 0x100, 0x36294 + 0x120, 0x45 },
    { _T("X-Ism Kick Zapped"), 0x36294 + 0x120, 0x36294 + 0x140, 0x45 },
    { _T("A-Ism Punch Zapped"), 0x36294 + 0x140, 0x36294 + 0x160, 0x45 },
    { _T("A-Ism Kick Zapped"), 0x36294 + 0x160, 0x36294 + 0x180, 0x45 },
    { _T("V-Ism Punch Zapped"), 0x36294 + 0x180, 0x36294 + 0x1A0, 0x45 },
    { _T("V-Ism Kick Zapped"), 0x36294 + 0x1A0, 0x36294 + 0x1C0, 0x45 },
    { _T("Zapped Skeleton"), 0x36294 + 0x1C0, 0x36294 + 0x1E0, 0x45 },
    { _T("X-Ism Punch Mash"), 0x36294 + 0x1e0, 0x36294 + 0x200, 0x45 },
    { _T("X-Ism Kick Mash"), 0x36294 + 0x200, 0x36294 + 0x220, 0x45 },
    { _T("A-Ism Punch Mash"), 0x36294 + 0x220, 0x36294 + 0x240, 0x45 },
    { _T("A-Ism Kick Mash"), 0x36294 + 0x240, 0x36294 + 0x260, 0x45 },
    { _T("V-Ism Punch Mash"), 0x36294 + 0x260, 0x36294 + 0x280, 0x45 },
    { _T("V-Ism Kick Mash"), 0x36294 + 0x280, 0x36294 + 0x2A0, 0x45 },
    { _T("Priority Win"), 0x36294 + 0x2A0, 0x36294 + 0x2C0, 0x45 },
    { _T("Damage Reduction"), 0x36294 + 0x2C0, 0x36294 + 0x2E0, 0x45 },
    { _T("Just Defend"), 0x36294 + 0x2e0, 0x36294 + 0x300, 0x45 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMP[] =
{
    { _T("X-Ism Punch"), 0x30814, 0x30834, 0x24, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x30834, 0x30854, 0x24, 0x01 },
    { _T("X-Ism Punch Extra 2"), 0x30854, 0x30874, 0x24, 0x00 },
    { _T("X-Ism Punch Super Trail Light"), 0x30874, 0x30894, 0x24, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x30894, 0x308b4, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_XISMK[] =
{
    { _T("X-Ism Kick"), 0x308b4, 0x308d4, 0x24, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x308d4, 0x308f4, 0x24, 0x01 },
    { _T("X-Ism Kick Extra 2"), 0x308f4, 0x30914, 0x24, 0x00 },
    { _T("X-Ism Kick Super Trail Light"), 0x30914, 0x30934, 0x24, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x30934, 0x30954, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMP[] =
{
    { _T("A-Ism Punch"), 0x30954, 0x30974, 0x24, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x30974, 0x30994, 0x24, 0x01 },
    { _T("A-Ism Punch Extra 2"), 0x30994, 0x309b4, 0x24, 0x00 },
    { _T("A-Ism Punch Super Trail Light"), 0x309b4, 0x309d4, 0x24, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x309d4, 0x309f4, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_AISMK[] =
{
    { _T("A-Ism Kick"), 0x309f4, 0x30a14, 0x24, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x30a14, 0x30a34, 0x24, 0x01 },
    { _T("A-Ism Kick Extra 2"), 0x30a34, 0x30a54, 0x24, 0x00 },
    { _T("A-Ism Kick Super Trail Light"), 0x30a54, 0x30a74, 0x24, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x30a74, 0x30a94, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMP[] =
{
    { _T("V-Ism Punch"), 0x30a94, 0x30ab4, 0x24, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x30ab4, 0x30ad4, 0x24, 0x01 },
    { _T("V-Ism Punch Extra 2"), 0x30ad4, 0x30af4, 0x24, 0x00 },
    { _T("V-Ism Punch Super Trail Light"), 0x30af4, 0x30b14, 0x24, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x30b14, 0x30b34, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_VISMK[] =
{
    { _T("V-Ism Kick"), 0x30b34, 0x30b54, 0x24, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x30b54, 0x30b74, 0x24, 0x01 },
    { _T("V-Ism Kick Extra 2"), 0x30b74, 0x30b94, 0x24, 0x00 },
    { _T("V-Ism Kick Super Trail Light"), 0x30b94, 0x30bb4, 0x24, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x30bb4, 0x30bd4, 0x24, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_STATUS[] =
{
    { _T("Burned 1"), 0x36594 + 0x00, 0x36594 + 0x20, 0x24 },
    { _T("Burned 2"), 0x36594 + 0x20, 0x36594 + 0x40, 0x24 },
    { _T("Psycho Crusher Burned 1"), 0x36594 + 0x40, 0x36594 + 0x60, 0x24 },
    { _T("Psycho Crusher Burned 2"), 0x36594 + 0x60, 0x36594 + 0x80, 0x24 },
    { _T("V-Ism P1 After Effect 1"), 0x36594 + 0x80, 0x36594 + 0xA0, 0x24 },
    { _T("V-Ism P1 After Effect 2"), 0x36594 + 0xA0, 0x36594 + 0xC0, 0x24 },
    { _T("V-Ism P2 After Effect 1"), 0x36594 + 0xC0, 0x36594 + 0xE0, 0x24 },
    { _T("V-Ism P2 After Effect 2"), 0x36594 + 0xe0, 0x36594 + 0x100, 0x24 },
    { _T("X-Ism Punch Zapped"), 0x36594 + 0x100, 0x36594 + 0x120, 0x24 },
    { _T("X-Ism Kick Zapped"), 0x36594 + 0x120, 0x36594 + 0x140, 0x24 },
    { _T("A-Ism Punch Zapped"), 0x36594 + 0x140, 0x36594 + 0x160, 0x24 },
    { _T("A-Ism Kick Zapped"), 0x36594 + 0x160, 0x36594 + 0x180, 0x24 },
    { _T("V-Ism Punch Zapped"), 0x36594 + 0x180, 0x36594 + 0x1A0, 0x24 },
    { _T("V-Ism Kick Zapped"), 0x36594 + 0x1A0, 0x36594 + 0x1C0, 0x24 },
    { _T("Zapped Skeleton"), 0x36594 + 0x1C0, 0x36594 + 0x1E0, 0x24 },
    { _T("X-Ism Punch Mash"), 0x36594 + 0x1e0, 0x36594 + 0x200, 0x24 },
    { _T("X-Ism Kick Mash"), 0x36594 + 0x200, 0x36594 + 0x220, 0x24 },
    { _T("A-Ism Punch Mash"), 0x36594 + 0x220, 0x36594 + 0x240, 0x24 },
    { _T("A-Ism Kick Mash"), 0x36594 + 0x240, 0x36594 + 0x260, 0x24 },
    { _T("V-Ism Punch Mash"), 0x36594 + 0x260, 0x36594 + 0x280, 0x24 },
    { _T("V-Ism Kick Mash"), 0x36594 + 0x280, 0x36594 + 0x2A0, 0x24 },
    { _T("Priority Win"), 0x36594 + 0x2A0, 0x36594 + 0x2C0, 0x24 },
    { _T("Damage Reduction"), 0x36594 + 0x2C0, 0x36594 + 0x2E0, 0x24 },
    { _T("Just Defend"), 0x36594 + 0x2e0, 0x36594 + 0x300, 0x24 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMP[] =
{
    { _T("X-Ism Punch"), 0x30bd4, 0x30bf4, 0x46, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x30bf4, 0x30c14 },
    { _T("X-Ism Punch Extra 2"), 0x30c14, 0x30c34 },
    { _T("X-Ism Punch Super Trail Light"), 0x30c34, 0x30c54, 0x46, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x30c54, 0x30c74, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_XISMK[] =
{
    { _T("X-Ism Kick"), 0x30c74, 0x30c94, 0x46, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x30c94, 0x30cb4 },
    { _T("X-Ism Kick Extra 2"), 0x30cb4, 0x30cd4 },
    { _T("X-Ism Kick Super Trail Light"), 0x30cd4, 0x30cf4, 0x46, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x30cf4, 0x30d14, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMP[] =
{
    { _T("A-Ism Punch"), 0x30d14, 0x30d34, 0x46, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x30d34, 0x30d54 },
    { _T("A-Ism Punch Extra 2"), 0x30d54, 0x30d74 },
    { _T("A-Ism Punch Super Trail Light"), 0x30d74, 0x30d94, 0x46, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x30d94, 0x30db4, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_AISMK[] =
{
    { _T("A-Ism Kick"), 0x30db4, 0x30dd4, 0x46, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x30dd4, 0x30df4 },
    { _T("A-Ism Kick Extra 2"), 0x30df4, 0x30e14 },
    { _T("A-Ism Kick Super Trail Light"), 0x30e14, 0x30e34, 0x46, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x30e34, 0x30e54, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMP[] =
{
    { _T("V-Ism Punch"), 0x30e54, 0x30e74, 0x46, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x30e74, 0x30e94 },
    { _T("V-Ism Punch Extra 2"), 0x30e94, 0x30eb4 },
    { _T("V-Ism Punch Super Trail Light"), 0x30eb4, 0x30ed4, 0x46, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x30ed4, 0x30ef4, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_VISMK[] =
{
    { _T("V-Ism Kick"), 0x30ef4, 0x30f14, 0x46, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x30f14, 0x30f34 },
    { _T("V-Ism Kick Extra 2"), 0x30f34, 0x30f54 },
    { _T("V-Ism Kick Super Trail Light"), 0x30f54, 0x30f74, 0x46, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x30f74, 0x30f94, 0x46, 0x00 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_STATUS[] =
{
    { _T("Burned 1"), 0x36894 + 0x00, 0x36894 + 0x20, 0x46 },
    { _T("Burned 2"), 0x36894 + 0x20, 0x36894 + 0x40, 0x46 },
    { _T("Psycho Crusher Burned 1"), 0x36894 + 0x40, 0x36894 + 0x60, 0x46 },
    { _T("Psycho Crusher Burned 2"), 0x36894 + 0x60, 0x36894 + 0x80, 0x46 },
    { _T("V-Ism P1 After Effect 1"), 0x36894 + 0x80, 0x36894 + 0xA0, 0x46 },
    { _T("V-Ism P1 After Effect 2"), 0x36894 + 0xA0, 0x36894 + 0xC0, 0x46 },
    { _T("V-Ism P2 After Effect 1"), 0x36894 + 0xC0, 0x36894 + 0xE0, 0x46 },
    { _T("V-Ism P2 After Effect 2"), 0x36894 + 0xe0, 0x36894 + 0x100, 0x46 },
    { _T("X-Ism Punch Zapped"), 0x36894 + 0x100, 0x36894 + 0x120, 0x46 },
    { _T("X-Ism Kick Zapped"), 0x36894 + 0x120, 0x36894 + 0x140, 0x46 },
    { _T("A-Ism Punch Zapped"), 0x36894 + 0x140, 0x36894 + 0x160, 0x46 },
    { _T("A-Ism Kick Zapped"), 0x36894 + 0x160, 0x36894 + 0x180, 0x46 },
    { _T("V-Ism Punch Zapped"), 0x36894 + 0x180, 0x36894 + 0x1A0, 0x46 },
    { _T("V-Ism Kick Zapped"), 0x36894 + 0x1A0, 0x36894 + 0x1C0, 0x46 },
    { _T("Zapped Skeleton"), 0x36894 + 0x1C0, 0x36894 + 0x1E0, 0x46 },
    { _T("X-Ism Punch Mash"), 0x36894 + 0x1e0, 0x36894 + 0x200, 0x46 },
    { _T("X-Ism Kick Mash"), 0x36894 + 0x200, 0x36894 + 0x220, 0x46 },
    { _T("A-Ism Punch Mash"), 0x36894 + 0x220, 0x36894 + 0x240, 0x46 },
    { _T("A-Ism Kick Mash"), 0x36894 + 0x240, 0x36894 + 0x260, 0x46 },
    { _T("V-Ism Punch Mash"), 0x36894 + 0x260, 0x36894 + 0x280, 0x46 },
    { _T("V-Ism Kick Mash"), 0x36894 + 0x280, 0x36894 + 0x2A0, 0x46 },
    { _T("Priority Win"), 0x36894 + 0x2A0, 0x36894 + 0x2C0, 0x46 },
    { _T("Damage Reduction"), 0x36894 + 0x2C0, 0x36894 + 0x2E0, 0x46 },
    { _T("Just Defend"), 0x36894 + 0x2e0, 0x36894 + 0x300, 0x46 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMP[] =
{
    { _T("X-Ism Punch"), 0x30f94, 0x30fb4, 0x47, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x30fb4, 0x30fd4 },
    { _T("X-Ism Punch Extra 2"), 0x30fd4, 0x30ff4 },
    { _T("X-Ism Punch Super Trail Light"), 0x30ff4, 0x31014, 0x47, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x31014, 0x31034, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_XISMK[] =
{
    { _T("X-Ism Kick"), 0x31034, 0x31054, 0x47, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x31054, 0x31074 },
    { _T("X-Ism Kick Extra 2"), 0x31074, 0x31094 },
    { _T("X-Ism Kick Super Trail Light"), 0x31094, 0x310b4, 0x47, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x310b4, 0x310d4, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMP[] =
{
    { _T("A-Ism Punch"), 0x310d4, 0x310f4, 0x47, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x310f4, 0x31114 },
    { _T("A-Ism Punch Extra 2"), 0x31114, 0x31134 },
    { _T("A-Ism Punch Super Trail Light"), 0x31134, 0x31154, 0x47, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x31154, 0x31174, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_AISMK[] =
{
    { _T("A-Ism Kick"), 0x31174, 0x31194, 0x47, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x31194, 0x311b4 },
    { _T("A-Ism Kick Extra 2"), 0x311b4, 0x311d4 },
    { _T("A-Ism Kick Super Trail Light"), 0x311d4, 0x311f4, 0x47, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x311f4, 0x31214, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMP[] =
{
    { _T("V-Ism Punch"), 0x31214, 0x31234, 0x47, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x31234, 0x31254 },
    { _T("V-Ism Punch Extra 2"), 0x31254, 0x31274 },
    { _T("V-Ism Punch Super Trail Light"), 0x31274, 0x31294, 0x47, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x31294, 0x312b4, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_VISMK[] =
{
    { _T("V-Ism Kick"), 0x312b4, 0x312d4, 0x47, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x312d4, 0x312f4 },
    { _T("V-Ism Kick Extra 2"), 0x312f4, 0x31314 },
    { _T("V-Ism Kick Super Trail Light"), 0x31314, 0x31334, 0x47, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x31334, 0x31354, 0x47, 0x00 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_STATUS[] =
{
    { _T("Burned 1"), 0x36b94 + 0x00, 0x36b94 + 0x20, 0x47 },
    { _T("Burned 2"), 0x36b94 + 0x20, 0x36b94 + 0x40, 0x47 },
    { _T("Psycho Crusher Burned 1"), 0x36b94 + 0x40, 0x36b94 + 0x60, 0x47 },
    { _T("Psycho Crusher Burned 2"), 0x36b94 + 0x60, 0x36b94 + 0x80, 0x47 },
    { _T("V-Ism P1 After Effect 1"), 0x36b94 + 0x80, 0x36b94 + 0xA0, 0x47 },
    { _T("V-Ism P1 After Effect 2"), 0x36b94 + 0xA0, 0x36b94 + 0xC0, 0x47 },
    { _T("V-Ism P2 After Effect 1"), 0x36b94 + 0xC0, 0x36b94 + 0xE0, 0x47 },
    { _T("V-Ism P2 After Effect 2"), 0x36b94 + 0xe0, 0x36b94 + 0x100, 0x47 },
    { _T("X-Ism Punch Zapped"), 0x36b94 + 0x100, 0x36b94 + 0x120, 0x47 },
    { _T("X-Ism Kick Zapped"), 0x36b94 + 0x120, 0x36b94 + 0x140, 0x47 },
    { _T("A-Ism Punch Zapped"), 0x36b94 + 0x140, 0x36b94 + 0x160, 0x47 },
    { _T("A-Ism Kick Zapped"), 0x36b94 + 0x160, 0x36b94 + 0x180, 0x47 },
    { _T("V-Ism Punch Zapped"), 0x36b94 + 0x180, 0x36b94 + 0x1A0, 0x47 },
    { _T("V-Ism Kick Zapped"), 0x36b94 + 0x1A0, 0x36b94 + 0x1C0, 0x47 },
    { _T("Zapped Skeleton"), 0x36b94 + 0x1C0, 0x36b94 + 0x1E0, 0x47 },
    { _T("X-Ism Punch Mash"), 0x36b94 + 0x1e0, 0x36b94 + 0x200, 0x47 },
    { _T("X-Ism Kick Mash"), 0x36b94 + 0x200, 0x36b94 + 0x220, 0x47 },
    { _T("A-Ism Punch Mash"), 0x36b94 + 0x220, 0x36b94 + 0x240, 0x47 },
    { _T("A-Ism Kick Mash"), 0x36b94 + 0x240, 0x36b94 + 0x260, 0x47 },
    { _T("V-Ism Punch Mash"), 0x36b94 + 0x260, 0x36b94 + 0x280, 0x47 },
    { _T("V-Ism Kick Mash"), 0x36b94 + 0x280, 0x36b94 + 0x2A0, 0x47 },
    { _T("Priority Win"), 0x36b94 + 0x2A0, 0x36b94 + 0x2C0, 0x47 },
    { _T("Damage Reduction"), 0x36b94 + 0x2C0, 0x36b94 + 0x2E0, 0x47 },
    { _T("Just Defend"), 0x36b94 + 0x2e0, 0x36b94 + 0x300, 0x47 }, };

const sGame_PaletteDataset SFA3_A_RMIKA_XISMP[] =
{
    { _T("X-Ism Punch"), 0x31354, 0x31374, 0x48, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x31374, 0x31394 },
    { _T("X-Ism Punch Extra 2"), 0x31394, 0x313b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x313b4, 0x313d4, 0x48, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x313d4, 0x313f4, 0x48, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_XISMK[] =
{
    { _T("X-Ism Kick"), 0x313f4, 0x31414, 0x48, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x31414, 0x31434 },
    { _T("X-Ism Kick Extra 2"), 0x31434, 0x31454 },
    { _T("X-Ism Kick Super Trail Light"), 0x31454, 0x31474, 0x48, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x31474, 0x31494, 0x48, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMP[] =
{
    { _T("A-Ism Punch"), 0x31494, 0x314b4, 0x48, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x314b4, 0x314d4 },
    { _T("A-Ism Punch Extra 2"), 0x314d4, 0x314f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x314f4, 0x31514, 0x48, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x31514, 0x31534, 0x48, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_AISMK[] =
{
    { _T("A-Ism Kick"), 0x31534, 0x31554, 0x48, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x31554, 0x31574 },
    { _T("A-Ism Kick Extra 2"), 0x31574, 0x31594 },
    { _T("A-Ism Kick Super Trail Light"), 0x31594, 0x315b4, 0x48, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x315b4, 0x315d4, 0x48, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMP[] =
{
    { _T("V-Ism Punch"), 0x315d4, 0x315f4, 0x48, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x315f4, 0x31614 },
    { _T("V-Ism Punch Extra 2"), 0x31614, 0x31634 },
    { _T("V-Ism Punch Super Trail Light"), 0x31634, 0x31654, 0x48, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x31654, 0x31674, 0x48, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_VISMK[] =
{
    { _T("V-Ism Kick"), 0x31674, 0x31694, 0x48, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x31694, 0x316b4 },
    { _T("V-Ism Kick Extra 2"), 0x316b4, 0x316d4 },
    { _T("V-Ism Kick Super Trail Light"), 0x316d4, 0x316f4, 0x48, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x316f4, 0x31714, 0x48, 0x00 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_STATUS[] =
{
    { _T("Burned 1"), 0x36e94 + 0x00, 0x36e94 + 0x20, 0x48 },
    { _T("Burned 2"), 0x36e94 + 0x20, 0x36e94 + 0x40, 0x48 },
    { _T("Psycho Crusher Burned 1"), 0x36e94 + 0x40, 0x36e94 + 0x60, 0x48 },
    { _T("Psycho Crusher Burned 2"), 0x36e94 + 0x60, 0x36e94 + 0x80, 0x48 },
    { _T("V-Ism P1 After Effect 1"), 0x36e94 + 0x80, 0x36e94 + 0xA0, 0x48 },
    { _T("V-Ism P1 After Effect 2"), 0x36e94 + 0xA0, 0x36e94 + 0xC0, 0x48 },
    { _T("V-Ism P2 After Effect 1"), 0x36e94 + 0xC0, 0x36e94 + 0xE0, 0x48 },
    { _T("V-Ism P2 After Effect 2"), 0x36e94 + 0xe0, 0x36e94 + 0x100, 0x48 },
    { _T("X-Ism Punch Zapped"), 0x36e94 + 0x100, 0x36e94 + 0x120, 0x48 },
    { _T("X-Ism Kick Zapped"), 0x36e94 + 0x120, 0x36e94 + 0x140, 0x48 },
    { _T("A-Ism Punch Zapped"), 0x36e94 + 0x140, 0x36e94 + 0x160, 0x48 },
    { _T("A-Ism Kick Zapped"), 0x36e94 + 0x160, 0x36e94 + 0x180, 0x48 },
    { _T("V-Ism Punch Zapped"), 0x36e94 + 0x180, 0x36e94 + 0x1A0, 0x48 },
    { _T("V-Ism Kick Zapped"), 0x36e94 + 0x1A0, 0x36e94 + 0x1C0, 0x48 },
    { _T("Zapped Skeleton"), 0x36e94 + 0x1C0, 0x36e94 + 0x1E0, 0x48 },
    { _T("X-Ism Punch Mash"), 0x36e94 + 0x1e0, 0x36e94 + 0x200, 0x48 },
    { _T("X-Ism Kick Mash"), 0x36e94 + 0x200, 0x36e94 + 0x220, 0x48 },
    { _T("A-Ism Punch Mash"), 0x36e94 + 0x220, 0x36e94 + 0x240, 0x48 },
    { _T("A-Ism Kick Mash"), 0x36e94 + 0x240, 0x36e94 + 0x260, 0x48 },
    { _T("V-Ism Punch Mash"), 0x36e94 + 0x260, 0x36e94 + 0x280, 0x48 },
    { _T("V-Ism Kick Mash"), 0x36e94 + 0x280, 0x36e94 + 0x2A0, 0x48 },
    { _T("Priority Win"), 0x36e94 + 0x2A0, 0x36e94 + 0x2C0, 0x48 },
    { _T("Damage Reduction"), 0x36e94 + 0x2C0, 0x36e94 + 0x2E0, 0x48 },
    { _T("Just Defend"), 0x36e94 + 0x2e0, 0x36e94 + 0x300, 0x48 },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMP[] =
{
    { _T("X-Ism Punch"), 0x31714, 0x31734, 0x49, 0x00 },
    { _T("Dagger/Cyclone X-Ism Punch"), 0x31734, 0x31754 },
    { _T("X-Ism Punch Extra 2"), 0x31754, 0x31774 },
    { _T("X-Ism Punch Super Trail Light"), 0x31774, 0x31794, 0x49, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x31794, 0x317b4, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_XISMK[] =
{
    { _T("X-Ism Kick"), 0x317b4, 0x317d4, 0x49, 0x00 },
    { _T("Dagger/Cyclone X-Ism Kick"), 0x317d4, 0x317f4 },
    { _T("X-Ism Kick Extra 2"), 0x317f4, 0x31814 },
    { _T("X-Ism Kick Super Trail Light"), 0x31814, 0x31834, 0x49, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x31834, 0x31854, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMP[] =
{
    { _T("A-Ism Punch"), 0x31854, 0x31874, 0x49, 0x00 },
    { _T("Dagger/Cyclone A-Ism Punch"), 0x31874, 0x31894 },
    { _T("A-Ism Punch Extra 2"), 0x31894, 0x318b4 },
    { _T("A-Ism Punch Super Trail Light"), 0x318b4, 0x318d4, 0x49, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x318d4, 0x318f4, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_AISMK[] =
{
    { _T("A-Ism Kick"), 0x318f4, 0x31914, 0x49, 0x00 },
    { _T("Dagger/Cyclone A-Ism Kick"), 0x31914, 0x31934 },
    { _T("A-Ism Kick Extra 2"), 0x31934, 0x31954 },
    { _T("A-Ism Kick Super Trail Light"), 0x31954, 0x31974, 0x49, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x31974, 0x31994, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMP[] =
{
    { _T("V-Ism Punch"), 0x31994, 0x319b4, 0x49, 0x00 },
    { _T("Dagger/Cyclone V-Ism Punch"), 0x319b4, 0x319d4 },
    { _T("V-Ism Punch Extra 2"), 0x319d4, 0x319f4 },
    { _T("V-Ism Punch Super Trail Light"), 0x319f4, 0x31a14, 0x49, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x31a14, 0x31a34, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_VISMK[] =
{
    { _T("V-Ism Kick"), 0x31a34, 0x31a54, 0x49, 0x00 },
    { _T("Dagger/Cyclone V-Ism Kick"), 0x31a54, 0x31a74 },
    { _T("V-Ism Kick Extra 2"), 0x31a74, 0x31a94 },
    { _T("V-Ism Kick Super Trail Light"), 0x31a94, 0x31ab4, 0x49, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x31ab4, 0x31ad4, 0x49, 0x00 },
};

const sGame_PaletteDataset SFA3_A_CODY_STATUS[] =
{
    { _T("Burned 1"), 0x37194 + 0x00, 0x37194 + 0x20, 0x49 },
    { _T("Burned 2"), 0x37194 + 0x20, 0x37194 + 0x40, 0x49 },
    { _T("Psycho Crusher Burned 1"), 0x37194 + 0x40, 0x37194 + 0x60, 0x49 },
    { _T("Psycho Crusher Burned 2"), 0x37194 + 0x60, 0x37194 + 0x80, 0x49 },
    { _T("V-Ism P1 After Effect 1"), 0x37194 + 0x80, 0x37194 + 0xA0, 0x49 },
    { _T("V-Ism P1 After Effect 2"), 0x37194 + 0xA0, 0x37194 + 0xC0, 0x49 },
    { _T("V-Ism P2 After Effect 1"), 0x37194 + 0xC0, 0x37194 + 0xE0, 0x49 },
    { _T("V-Ism P2 After Effect 2"), 0x37194 + 0xe0, 0x37194 + 0x100, 0x49 },
    { _T("X-Ism Punch Zapped"), 0x37194 + 0x100, 0x37194 + 0x120, 0x49 },
    { _T("X-Ism Kick Zapped"), 0x37194 + 0x120, 0x37194 + 0x140, 0x49 },
    { _T("A-Ism Punch Zapped"), 0x37194 + 0x140, 0x37194 + 0x160, 0x49 },
    { _T("A-Ism Kick Zapped"), 0x37194 + 0x160, 0x37194 + 0x180, 0x49 },
    { _T("V-Ism Punch Zapped"), 0x37194 + 0x180, 0x37194 + 0x1A0, 0x49 },
    { _T("V-Ism Kick Zapped"), 0x37194 + 0x1A0, 0x37194 + 0x1C0, 0x49 },
    { _T("Zapped Skeleton"), 0x37194 + 0x1C0, 0x37194 + 0x1E0, 0x49 },
    { _T("X-Ism Punch Mash"), 0x37194 + 0x1e0, 0x37194 + 0x200, 0x49 },
    { _T("X-Ism Kick Mash"), 0x37194 + 0x200, 0x37194 + 0x220, 0x49 },
    { _T("A-Ism Punch Mash"), 0x37194 + 0x220, 0x37194 + 0x240, 0x49 },
    { _T("A-Ism Kick Mash"), 0x37194 + 0x240, 0x37194 + 0x260, 0x49 },
    { _T("V-Ism Punch Mash"), 0x37194 + 0x260, 0x37194 + 0x280, 0x49 },
    { _T("V-Ism Kick Mash"), 0x37194 + 0x280, 0x37194 + 0x2A0, 0x49 },
    { _T("Priority Win"), 0x37194 + 0x2A0, 0x37194 + 0x2C0, 0x49 },
    { _T("Damage Reduction"), 0x37194 + 0x2C0, 0x37194 + 0x2E0, 0x49 },
    { _T("Just Defend"), 0x37194 + 0x2e0, 0x37194 + 0x300, 0x49 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMP[] =
{
    { _T("X-Ism Punch"), 0x31ad4, 0x31af4, indexCPS2_Vega, 0x00, &pairNext },
    { _T("X-Ism Punch Claws"), 0x031AF4, 0x031B14, indexCPS2_Vega, 1 },
    { _T("X-Ism Punch Extra 2"), 0x31b14, 0x31b34 },
    { _T("X-Ism Punch Super Trail Light"), 0x31b34, 0x31b54, indexCPS2_Vega, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x31b54, 0x31b74, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMK[] =
{
    { _T("X-Ism Kick"), 0x31b74, 0x31b94, indexCPS2_Vega, 0x00, &pairNext },
    { _T("X-Ism Kick Claws"), 0x031B94, 0x031BB4, indexCPS2_Vega, 1 },
    { _T("X-Ism Kick Extra 2"), 0x31bb4, 0x31bd4 },
    { _T("X-Ism Kick Super Trail Light"), 0x31bd4, 0x31bf4, indexCPS2_Vega, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x31bf4, 0x31c14, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMP[] =
{
    { _T("A-Ism Punch"), 0x31c14, 0x31c34, indexCPS2_Vega, 0x00, &pairNext },
    { _T("A-Ism Punch Claws"), 0x031C34, 0x031C54, indexCPS2_Vega, 1 },
    { _T("A-Ism Punch Extra 2"), 0x31c54, 0x31c74 },
    { _T("A-Ism Punch Super Trail Light"), 0x31c74, 0x31c94, indexCPS2_Vega, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x31c94, 0x31cb4, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMK[] =
{
    { _T("A-Ism Kick"), 0x31cb4, 0x31cd4, indexCPS2_Vega, 0x00, &pairNext },
    { _T("A-Ism Kick Claws"), 0x031CD4, 0x031CF4, indexCPS2_Vega, 1 },
    { _T("A-Ism Kick Extra 2"), 0x31cf4, 0x31d14 },
    { _T("A-Ism Kick Super Trail Light"), 0x31d14, 0x31d34, indexCPS2_Vega, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x31d34, 0x31d54, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMP[] =
{
    { _T("V-Ism Punch"), 0x31d54, 0x31d74, indexCPS2_Vega, 0x00, &pairNext },
    { _T("V-Ism Punch Claws"), 0x031D74, 0x031D94, indexCPS2_Vega, 1 },
    { _T("V-Ism Punch Extra 2"), 0x31d94, 0x31db4 },
    { _T("V-Ism Punch Super Trail Light"), 0x31db4, 0x31dd4, indexCPS2_Vega, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x31dd4, 0x31df4, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMK[] =
{
    { _T("V-Ism Kick"), 0x31df4, 0x31e14, indexCPS2_Vega, 0x00, &pairNext },
    { _T("V-Ism Kick Claws"), 0x031E14, 0x031E34, indexCPS2_Vega, 1 },
    { _T("V-Ism Kick Extra 2"), 0x31e34, 0x31e54 },
    { _T("V-Ism Kick Super Trail Light"), 0x31e54, 0x31e74, indexCPS2_Vega, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x31e74, 0x31e94, indexCPS2_Vega, 0x00 },
};

const sGame_PaletteDataset SFA3_A_VEGA_STATUS[] =
{
    { _T("Burned 1"), 0x37494 + 0x00, 0x37494 + 0x20, indexCPS2_Vega },
    { _T("Burned 2"), 0x37494 + 0x20, 0x37494 + 0x40, indexCPS2_Vega },
    { _T("Psycho Crusher Burned 1"), 0x37494 + 0x40, 0x37494 + 0x60, indexCPS2_Vega },
    { _T("Psycho Crusher Burned 2"), 0x37494 + 0x60, 0x37494 + 0x80, indexCPS2_Vega },
    { _T("V-Ism P1 After Effect 1"), 0x37494 + 0x80, 0x37494 + 0xA0, indexCPS2_Vega },
    { _T("V-Ism P1 After Effect 2"), 0x37494 + 0xA0, 0x37494 + 0xC0, indexCPS2_Vega },
    { _T("V-Ism P2 After Effect 1"), 0x37494 + 0xC0, 0x37494 + 0xE0, indexCPS2_Vega },
    { _T("V-Ism P2 After Effect 2"), 0x37494 + 0xe0, 0x37494 + 0x100, indexCPS2_Vega },
    { _T("X-Ism Punch Zapped"), 0x37494 + 0x100, 0x37494 + 0x120, indexCPS2_Vega },
    { _T("X-Ism Kick Zapped"), 0x37494 + 0x120, 0x37494 + 0x140, indexCPS2_Vega },
    { _T("A-Ism Punch Zapped"), 0x37494 + 0x140, 0x37494 + 0x160, indexCPS2_Vega },
    { _T("A-Ism Kick Zapped"), 0x37494 + 0x160, 0x37494 + 0x180, indexCPS2_Vega },
    { _T("V-Ism Punch Zapped"), 0x37494 + 0x180, 0x37494 + 0x1A0, indexCPS2_Vega },
    { _T("V-Ism Kick Zapped"), 0x37494 + 0x1A0, 0x37494 + 0x1C0, indexCPS2_Vega },
    { _T("Zapped Skeleton"), 0x37494 + 0x1C0, 0x37494 + 0x1E0, indexCPS2_Vega },
    { _T("X-Ism Punch Mash"), 0x37494 + 0x1e0, 0x37494 + 0x200, indexCPS2_Vega },
    { _T("X-Ism Kick Mash"), 0x37494 + 0x200, 0x37494 + 0x220, indexCPS2_Vega },
    { _T("A-Ism Punch Mash"), 0x37494 + 0x220, 0x37494 + 0x240, indexCPS2_Vega },
    { _T("A-Ism Kick Mash"), 0x37494 + 0x240, 0x37494 + 0x260, indexCPS2_Vega },
    { _T("V-Ism Punch Mash"), 0x37494 + 0x260, 0x37494 + 0x280, indexCPS2_Vega },
    { _T("V-Ism Kick Mash"), 0x37494 + 0x280, 0x37494 + 0x2A0, indexCPS2_Vega },
    { _T("Priority Win"), 0x37494 + 0x2A0, 0x37494 + 0x2C0, indexCPS2_Vega },
    { _T("Damage Reduction"), 0x37494 + 0x2C0, 0x37494 + 0x2E0, indexCPS2_Vega },
    { _T("Just Defend"), 0x37494 + 0x2e0, 0x37494 + 0x300, indexCPS2_Vega },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMP[] =
{
    { _T("X-Ism Punch"), 0x31e94, 0x31eb4, 0x4b, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x31eb4, 0x31ed4 },
    { _T("X-Ism Punch Extra 2"), 0x31ed4, 0x31ef4 },
    { _T("X-Ism Punch Super Trail Light"), 0x31ef4, 0x31f14, 0x4b, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x31f14, 0x31f34, 0x4b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_XISMK[] =
{
    { _T("X-Ism Kick"), 0x31f34, 0x31f54, 0x4b, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x31f54, 0x31f74 },
    { _T("X-Ism Kick Extra 2"), 0x31f74, 0x31f94 },
    { _T("X-Ism Kick Super Trail Light"), 0x31f94, 0x31fb4, 0x4b, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x31fb4, 0x31fd4, 0x4b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMP[] =
{
    { _T("A-Ism Punch"), 0x31fd4, 0x31ff4, 0x4b, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x31ff4, 0x32014 },
    { _T("A-Ism Punch Extra 2"), 0x32014, 0x32034 },
    { _T("A-Ism Punch Super Trail Light"), 0x32034, 0x32054, 0x4b, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x32054, 0x32074, 0x4b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_AISMK[] =
{
    { _T("A-Ism Kick"), 0x32074, 0x32094, 0x4b, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x32094, 0x320b4 },
    { _T("A-Ism Kick Extra 2"), 0x320b4, 0x320d4 },
    { _T("A-Ism Kick Super Trail Light"), 0x320d4, 0x320f4, 0x4b, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x320f4, 0x32114, 0x4b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMP[] =
{
    { _T("V-Ism Punch"), 0x32114, 0x32134, 0x4b, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x32134, 0x32154 },
    { _T("V-Ism Punch Extra 2"), 0x32154, 0x32174 },
    { _T("V-Ism Punch Super Trail Light"), 0x32174, 0x32194, 0x4b, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x32194, 0x321b4, 0x4b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_VISMK[] =
{
    { _T("V-Ism Kick"), 0x321b4, 0x321d4, 0x4b, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x321d4, 0x321f4 },
    { _T("V-Ism Kick Extra 2"), 0x321f4, 0x32214 },
    { _T("V-Ism Kick Super Trail Light"), 0x32214, 0x32234, 0x4b, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x32234, 0x32254, 0x4b, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KARIN_STATUS[] =
{
    { _T("Burned 1"), 0x37934 + 0x00, 0x37934 + 0x20, 0x4B },
    { _T("Burned 2"), 0x37934 + 0x20, 0x37934 + 0x40, 0x4B },
    { _T("Psycho Crusher Burned 1"), 0x37934 + 0x40, 0x37934 + 0x60, 0x4B },
    { _T("Psycho Crusher Burned 2"), 0x37934 + 0x60, 0x37934 + 0x80, 0x4B },
    { _T("V-Ism P1 After Effect 1"), 0x37934 + 0x80, 0x37934 + 0xA0, 0x4B },
    { _T("V-Ism P1 After Effect 2"), 0x37934 + 0xA0, 0x37934 + 0xC0, 0x4B },
    { _T("V-Ism P2 After Effect 1"), 0x37934 + 0xC0, 0x37934 + 0xE0, 0x4B },
    { _T("V-Ism P2 After Effect 2"), 0x37934 + 0xe0, 0x37934 + 0x100, 0x4B },
    { _T("X-Ism Punch Zapped"), 0x37934 + 0x100, 0x37934 + 0x120, 0x4B },
    { _T("X-Ism Kick Zapped"), 0x37934 + 0x120, 0x37934 + 0x140, 0x4B },
    { _T("A-Ism Punch Zapped"), 0x37934 + 0x140, 0x37934 + 0x160, 0x4B },
    { _T("A-Ism Kick Zapped"), 0x37934 + 0x160, 0x37934 + 0x180, 0x4B },
    { _T("V-Ism Punch Zapped"), 0x37934 + 0x180, 0x37934 + 0x1A0, 0x4B },
    { _T("V-Ism Kick Zapped"), 0x37934 + 0x1A0, 0x37934 + 0x1C0, 0x4B },
    { _T("Zapped Skeleton"), 0x37934 + 0x1C0, 0x37934 + 0x1E0, 0x4B },
    { _T("X-Ism Punch Mash"), 0x37934 + 0x1e0, 0x37934 + 0x200, 0x4B },
    { _T("X-Ism Kick Mash"), 0x37934 + 0x200, 0x37934 + 0x220, 0x4B },
    { _T("A-Ism Punch Mash"), 0x37934 + 0x220, 0x37934 + 0x240, 0x4B },
    { _T("A-Ism Kick Mash"), 0x37934 + 0x240, 0x37934 + 0x260, 0x4B },
    { _T("V-Ism Punch Mash"), 0x37934 + 0x260, 0x37934 + 0x280, 0x4B },
    { _T("V-Ism Kick Mash"), 0x37934 + 0x280, 0x37934 + 0x2A0, 0x4B },
    { _T("Priority Win"), 0x37934 + 0x2A0, 0x37934 + 0x2C0, 0x4B },
    { _T("Damage Reduction"), 0x37934 + 0x2C0, 0x37934 + 0x2E0, 0x4B },
    { _T("Just Defend"), 0x37934 + 0x2e0, 0x37934 + 0x300, 0x4B }, };

const sGame_PaletteDataset SFA3_A_JUNI_XISMP[] =
{
    { _T("X-Ism Punch"), 0x32254, 0x32274, 0x4c, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x32274, 0x32294 },
    { _T("X-Ism Punch Extra 2"), 0x32294, 0x322b4 },
    { _T("X-Ism Punch Super Trail Light"), 0x322b4, 0x322d4, 0x4c, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x322d4, 0x322f4, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_XISMK[] =
{
    { _T("X-Ism Kick"), 0x322f4, 0x32314, 0x4c, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x32314, 0x32334 },
    { _T("X-Ism Kick Extra 2"), 0x32334, 0x32354 },
    { _T("X-Ism Kick Super Trail Light"), 0x32354, 0x32374, 0x4c, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x32374, 0x32394, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMP[] =
{
    { _T("A-Ism Punch"), 0x32394, 0x323b4, 0x4c, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x323b4, 0x323d4 },
    { _T("A-Ism Punch Extra 2"), 0x323d4, 0x323f4 },
    { _T("A-Ism Punch Super Trail Light"), 0x323f4, 0x32414, 0x4c, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x32414, 0x32434, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_AISMK[] =
{
    { _T("A-Ism Kick"), 0x32434, 0x32454, 0x4c, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x32454, 0x32474 },
    { _T("A-Ism Kick Extra 2"), 0x32474, 0x32494 },
    { _T("A-Ism Kick Super Trail Light"), 0x32494, 0x324b4, 0x4c, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x324b4, 0x324d4, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMP[] =
{
    { _T("V-Ism Punch"), 0x324d4, 0x324f4, 0x4c, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x324f4, 0x32514 },
    { _T("V-Ism Punch Extra 2"), 0x32514, 0x32534 },
    { _T("V-Ism Punch Super Trail Light"), 0x32534, 0x32554, 0x4c, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x32554, 0x32574, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_VISMK[] =
{
    { _T("V-Ism Kick"), 0x32574, 0x32594, 0x4c, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x32594, 0x325b4 },
    { _T("V-Ism Kick Extra 2"), 0x325b4, 0x325d4 },
    { _T("V-Ism Kick Super Trail Light"), 0x325d4, 0x325f4, 0x4c, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x325f4, 0x32614, 0x4c, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JUNI_STATUS[] =
{
    { _T("Burned 1"), 0x37ff4 + 0x00, 0x37ff4 + 0x20, 0x4C },
    { _T("Burned 2"), 0x37ff4 + 0x20, 0x37ff4 + 0x40, 0x4C },
    { _T("Psycho Crusher Burned 1"), 0x37ff4 + 0x40, 0x37ff4 + 0x60, 0x4C },
    { _T("Psycho Crusher Burned 2"), 0x37ff4 + 0x60, 0x37ff4 + 0x80, 0x4C },
    { _T("V-Ism P1 After Effect 1"), 0x37ff4 + 0x80, 0x37ff4 + 0xA0, 0x4C },
    { _T("V-Ism P1 After Effect 2"), 0x37ff4 + 0xA0, 0x37ff4 + 0xC0, 0x4C },
    { _T("V-Ism P2 After Effect 1"), 0x37ff4 + 0xC0, 0x37ff4 + 0xE0, 0x4C },
    { _T("V-Ism P2 After Effect 2"), 0x37ff4 + 0xe0, 0x37ff4 + 0x100, 0x4C },
    { _T("X-Ism Punch Zapped"), 0x37ff4 + 0x100, 0x37ff4 + 0x120, 0x4C },
    { _T("X-Ism Kick Zapped"), 0x37ff4 + 0x120, 0x37ff4 + 0x140, 0x4C },
    { _T("A-Ism Punch Zapped"), 0x37ff4 + 0x140, 0x37ff4 + 0x160, 0x4C },
    { _T("A-Ism Kick Zapped"), 0x37ff4 + 0x160, 0x37ff4 + 0x180, 0x4C },
    { _T("V-Ism Punch Zapped"), 0x37ff4 + 0x180, 0x37ff4 + 0x1A0, 0x4C },
    { _T("V-Ism Kick Zapped"), 0x37ff4 + 0x1A0, 0x37ff4 + 0x1C0, 0x4C },
    { _T("Zapped Skeleton"), 0x37ff4 + 0x1C0, 0x37ff4 + 0x1E0, 0x4C },
    { _T("X-Ism Punch Mash"), 0x37ff4 + 0x1e0, 0x37ff4 + 0x200, 0x4C },
    { _T("X-Ism Kick Mash"), 0x37ff4 + 0x200, 0x37ff4 + 0x220, 0x4C },
    { _T("A-Ism Punch Mash"), 0x37ff4 + 0x220, 0x37ff4 + 0x240, 0x4C },
    { _T("A-Ism Kick Mash"), 0x37ff4 + 0x240, 0x37ff4 + 0x260, 0x4C },
    { _T("V-Ism Punch Mash"), 0x37ff4 + 0x260, 0x37ff4 + 0x280, 0x4C },
    { _T("V-Ism Kick Mash"), 0x37ff4 + 0x280, 0x37ff4 + 0x2A0, 0x4C },
    { _T("Priority Win"), 0x37ff4 + 0x2A0, 0x37ff4 + 0x2C0, 0x4C },
    { _T("Damage Reduction"), 0x37ff4 + 0x2C0, 0x37ff4 + 0x2E0, 0x4C },
    { _T("Just Defend"), 0x37ff4 + 0x2e0, 0x37ff4 + 0x300, 0x4C },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMP[] =
{
    { _T("X-Ism Punch"), 0x32614, 0x32634, 0x4d, 0x00 },
    { _T("X-Ism Punch Extra 1"), 0x32634, 0x32654 },
    { _T("X-Ism Punch Extra 2"), 0x32654, 0x32674 },
    { _T("X-Ism Punch Super Trail Light"), 0x32674, 0x32694, 0x4d, 0x00 },
    { _T("X-Ism Punch Super Trail Dark"), 0x32694, 0x326b4, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_XISMK[] =
{
    { _T("X-Ism Kick"), 0x326b4, 0x326d4, 0x4d, 0x00 },
    { _T("X-Ism Kick Extra 1"), 0x326d4, 0x326f4 },
    { _T("X-Ism Kick Extra 2"), 0x326f4, 0x32714 },
    { _T("X-Ism Kick Super Trail Light"), 0x32714, 0x32734, 0x4d, 0x00 },
    { _T("X-Ism Kick Super Trail Dark"), 0x32734, 0x32754, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMP[] =
{
    { _T("A-Ism Punch"), 0x32754, 0x32774, 0x4d, 0x00 },
    { _T("A-Ism Punch Extra 1"), 0x32774, 0x32794 },
    { _T("A-Ism Punch Extra 2"), 0x32794, 0x327b4 },
    { _T("A-Ism Punch Super Trail Light"), 0x327b4, 0x327d4, 0x4d, 0x00 },
    { _T("A-Ism Punch Super Trail Dark"), 0x327d4, 0x327f4, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_AISMK[] =
{
    { _T("A-Ism Kick"), 0x327f4, 0x32814, 0x4d, 0x00 },
    { _T("A-Ism Kick Extra 1"), 0x32814, 0x32834 },
    { _T("A-Ism Kick Extra 2"), 0x32834, 0x32854 },
    { _T("A-Ism Kick Super Trail Light"), 0x32854, 0x32874, 0x4d, 0x00 },
    { _T("A-Ism Kick Super Trail Dark"), 0x32874, 0x32894, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMP[] =
{
    { _T("V-Ism Punch"), 0x32894, 0x328b4, 0x4d, 0x00 },
    { _T("V-Ism Punch Extra 1"), 0x328b4, 0x328d4 },
    { _T("V-Ism Punch Extra 2"), 0x328d4, 0x328f4 },
    { _T("V-Ism Punch Super Trail Light"), 0x328f4, 0x32914, 0x4d, 0x00 },
    { _T("V-Ism Punch Super Trail Dark"), 0x32914, 0x32934, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_VISMK[] =
{
    { _T("V-Ism Kick"), 0x32934, 0x32954, 0x4d, 0x00 },
    { _T("V-Ism Kick Extra 1"), 0x32954, 0x32974 },
    { _T("V-Ism Kick Extra 2"), 0x32974, 0x32994 },
    { _T("V-Ism Kick Super Trail Light"), 0x32994, 0x329b4, 0x4d, 0x00 },
    { _T("V-Ism Kick Super Trail Dark"), 0x329b4, 0x329d4, 0x4d, 0x00 },
};

const sGame_PaletteDataset SFA3_A_JULI_STATUS[] =
{
    { _T("Burned 1"), 0x37c34 + 0x00, 0x37c34 + 0x20, 0x4D },
    { _T("Burned 2"), 0x37c34 + 0x20, 0x37c34 + 0x40, 0x4D },
    { _T("Psycho Crusher Burned 1"), 0x37c34 + 0x40, 0x37c34 + 0x60, 0x4D },
    { _T("Psycho Crusher Burned 2"), 0x37c34 + 0x60, 0x37c34 + 0x80, 0x4D },
    { _T("V-Ism P1 After Effect 1"), 0x37c34 + 0x80, 0x37c34 + 0xA0, 0x4D },
    { _T("V-Ism P1 After Effect 2"), 0x37c34 + 0xA0, 0x37c34 + 0xC0, 0x4D },
    { _T("V-Ism P2 After Effect 1"), 0x37c34 + 0xC0, 0x37c34 + 0xE0, 0x4D },
    { _T("V-Ism P2 After Effect 2"), 0x37c34 + 0xe0, 0x37c34 + 0x100, 0x4D },
    { _T("X-Ism Punch Zapped"), 0x37c34 + 0x100, 0x37c34 + 0x120, 0x4D },
    { _T("X-Ism Kick Zapped"), 0x37c34 + 0x120, 0x37c34 + 0x140, 0x4D },
    { _T("A-Ism Punch Zapped"), 0x37c34 + 0x140, 0x37c34 + 0x160, 0x4D },
    { _T("A-Ism Kick Zapped"), 0x37c34 + 0x160, 0x37c34 + 0x180, 0x4D },
    { _T("V-Ism Punch Zapped"), 0x37c34 + 0x180, 0x37c34 + 0x1A0, 0x4D },
    { _T("V-Ism Kick Zapped"), 0x37c34 + 0x1A0, 0x37c34 + 0x1C0, 0x4D },
    { _T("Zapped Skeleton"), 0x37c34 + 0x1C0, 0x37c34 + 0x1E0, 0x4D },
    { _T("X-Ism Punch Mash"), 0x37c34 + 0x1e0, 0x37c34 + 0x200, 0x4D },
    { _T("X-Ism Kick Mash"), 0x37c34 + 0x200, 0x37c34 + 0x220, 0x4D },
    { _T("A-Ism Punch Mash"), 0x37c34 + 0x220, 0x37c34 + 0x240, 0x4D },
    { _T("A-Ism Kick Mash"), 0x37c34 + 0x240, 0x37c34 + 0x260, 0x4D },
    { _T("V-Ism Punch Mash"), 0x37c34 + 0x260, 0x37c34 + 0x280, 0x4D },
    { _T("V-Ism Kick Mash"), 0x37c34 + 0x280, 0x37c34 + 0x2A0, 0x4D },
    { _T("Priority Win"), 0x37c34 + 0x2A0, 0x37c34 + 0x2C0, 0x4D },
    { _T("Damage Reduction"), 0x37c34 + 0x2C0, 0x37c34 + 0x2E0, 0x4D },
    { _T("Just Defend"), 0x37c34 + 0x2e0, 0x37c34 + 0x300, 0x4D },
};

const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE[] =
{
    { _T("Rear Cave Wall"), 0x3C814, 0x3C8D4, indexCPS2_SFA3Assets, 0x0A },
    { _T("Rear Candle Glows 1"), 0x61394, 0x613B4, indexCPS2_SFA3Assets, 0x0B },
    { _T("Rear Candle Glows 2"), 0x613B4, 0x613D4, indexCPS2_SFA3Assets, 0x0B },
    { _T("Right Cave Wall Ceiling"), 0x47CD4, 0x47CF4, indexCPS2_SFA3Assets, 0x0C },
    { _T("Hang Tags / Shadow"), 0x38614, 0x38634, indexCPS2_SFA3Assets, 0x0D },
    { _T("Right Candles Glow 1"), 0x4C574, 0x4C594, indexCPS2_SFA3Assets, 0x0E },
    { _T("Right Candles Glow 2"), 0x4C5B4, 0x4C5D4, indexCPS2_SFA3Assets, 0x0E },
    { _T("Wall Glow"), 0x385B4, 0x385D4, indexCPS2_SFA3Assets, 0x0F },
    { _T("Main Ground"), 0x40F34, 0x41014, indexCPS2_SFA3Assets, 0x10 },
    { _T("Left Candles Glow 1"), 0x62A54, 0x62A74, indexCPS2_SFA3Assets, 0x11 },
    { _T("Left Candles Glow 2"), 0x62A74, 0x62A94, indexCPS2_SFA3Assets, 0x11 },
    { _T("Left Rope Candles 1"), 0x4C554, 0x4C574, indexCPS2_SFA3Assets, 0x12 },
    { _T("Left Rope Candles 2"), 0x4C594, 0x4C5B4, indexCPS2_SFA3Assets, 0x12 },
    { _T("Unknown Sprites 1"), 0x38574, 0x38594 },
    { _T("Unknown Sprites 2"), 0x38594, 0x385B4 },
    { _T("Unknown Sprites 3"), 0x385D4, 0x385F4 },
    { _T("Unknown Sprites 4"), 0x385F4, 0x38614 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KEN_NODE[] =
{
    { _T("Read Building 1"), 0x3C4F4, 0x3C6D4, indexCPS2_SFA3Assets, 0x13 },
    { _T("Rear Building 2"), 0x3C6D4, 0x3C814, indexCPS2_SFA3Assets, 0x14 },
    { _T("Left Building / Palms 1"), 0x40B34, 0x40D34, indexCPS2_SFA3Assets, 0x15 },
    { _T("Left Building / Palms 2"), 0x40D34, 0x40F34, indexCPS2_SFA3Assets, 0x16 },
    
    { _T("Fountain / Flags / Palms 1"), 0x47934, 0x47B34, indexCPS2_SFA3Assets, 0x17 },
    { _T("Fountain / Flags / Palms 2"), 0x47B34, 0x47CD4, indexCPS2_SFA3Assets, 0x18 },
    { _T("Fountain Stream"), 0x38514, 0x38534, indexCPS2_SFA3Assets, 0x19 },
    { _T("Bartender"), 0x384D4, 0x384F4, indexCPS2_SFA3Assets, 0x1a },
    { _T("Girls Lounging"), 0x384B4, 0x384D4, indexCPS2_SFA3Assets, 0x1b },
    { _T("Couple @ Table"), 0x384F4, 0x38514, indexCPS2_SFA3Assets, 0x1c },
    { _T("Plants?"), 0x38534, 0x38554, indexCPS2_SFA3Assets, 0x1d },
    { _T("Post & Statue"), 0x38554, 0x38574, indexCPS2_SFA3Assets, 0x1e },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE[] =
{
    { _T("Sunset / Sea"), 0x3C4B4, 0x3C4F4, indexCPS2_SFA3Assets, 0 },
    { _T("Castle"), 0x383F4, 0x38434, indexCPS2_SFA3Assets, 0x03 },
    { _T("Forest / Cliff Tree / Waterfall Hill"), 0x477F4, 0x47934, indexCPS2_SFA3Assets, 0x04 },
    { _T("Waterfall Landing Anim 1"), 0x63FB4, 0x63FD4, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Landing Anim 2"), 0x63FD4, 0x63FF4, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Landing Anim 3"), 0x63FF4, 0x64014, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Landing Anim 4"), 0x64014, 0x64034, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Stream Anim 1"), 0x63F34, 0x63F54, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Waterfall Stream Anim 2"), 0x63F54, 0x63F74, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Waterfall Stream Anim 3"), 0x63F74, 0x63F94, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Waterfall Stream Anim 4"), 0x63F94, 0x63FB4, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Main Ground / Big Tree Branches"), 0x40994, 0x40B34, indexCPS2_SFA3Assets, 0x05 },
    { _T("Tree Trunk Right Side"), 0x38454, 0x38474, indexCPS2_SFA3Assets, 0x06 },
    { _T("Tree Leaves"), 0x38474, 0x38494, indexCPS2_SFA3Assets, 0x07 },
    { _T("Grass Left Side"), 0x38434, 0x38454, indexCPS2_SFA3Assets, 0x08 },
    { _T("Fighter Shadow"), 0x38494, 0x384B4, indexCPS2_SFA3Assets, 0x09 },
};

const sGame_PaletteDataset SFA3_A_STAGES_NASH_NODE[] =
{
    { _T("Cockpit/Top (Plane)/Landing Gear"), 0x47CF4, 0x47DF4, indexCPS2_SFA3Assets, 0x1f },
    { _T("Plane and Floor Part 1"), 0x41014, 0x41214, indexCPS2_SFA3Assets, 0x20 },
    { _T("Plane and Floor Part 2"), 0x41214, 0x413D4, indexCPS2_SFA3Assets, 0x21 },
    { _T("Rear Windows Metal Ceiling Part 1"), 0x3C8D4, 0x3CA74, indexCPS2_SFA3Assets, 0x22 },
    { _T("Rear Windows Metal Ceiling Part 2"), 0x3CAD4, 0x3CC74, indexCPS2_SFA3Assets, 0x23 },
    { _T("Mechanic Spectators"), 0x38634, 0x38654, indexCPS2_SFA3Assets, 0x25 },
    { _T("Rolling Stairs Thing"), 0x38654, 0x38674, indexCPS2_SFA3Assets, 0x24 },
    { _T("Missile"), 0x38674, 0x38694, indexCPS2_SFA3Assets, 0x26 },
    { _T("Missile Tails"), 0x38694, 0x386B4, indexCPS2_SFA3Assets, 0x27 },
    { _T("Missile Heads"), 0x386B4, 0x386D4, indexCPS2_SFA3Assets, 0x28 },
    { _T("Under Plane???"), 0x386D4, 0x386F4, indexCPS2_SFA3Assets, 0x29 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CHUNLI_NODE[] =
{
    { _T("Far Background - 8x8 (1/2)"), 0x3CC74, 0x3CE74, indexCPS2_SFA3Assets, 0x2A },
    { _T("Far Background - 8x8 (2/2)"), 0x3CE74, 0x3CFD4, indexCPS2_SFA3Assets, 0x2B },
    { _T("Mid Background - 16x16 (1/2)"), 0x413D4, 0x415D4, indexCPS2_SFA3Assets, 0x2C },
    { _T("Mid Background - 16x16 (2/2)"), 0x415D4, 0x417D4, indexCPS2_SFA3Assets, 0x2D },
    { _T("Close Background - 32x32"), 0x47DF4, 0x47ED4, indexCPS2_SFA3Assets, 0x2E },
    { _T("Instructor"), 0x386F4, 0x38714, indexCPS2_SFA3Assets, 0x2F },
    { _T("Lamp Post"), 0x38714, 0x38734, indexCPS2_SFA3Assets, 0x30 },
    { _T("Sign"), 0x38734, 0x38754, indexCPS2_SFA3Assets, 0x31 },
    { _T("Flag"), 0x38754, 0x38774, indexCPS2_SFA3Assets, 0x32 },
    { _T("Tree"), 0x38774, 0x38794, indexCPS2_SFA3Assets, 0x33 },
    { _T("Shadow"), 0x38794, 0x387B4, indexCPS2_SFA3Assets, 0x34 },
};

const sGame_PaletteDataset SFA3_A_STAGES_ADON_NODE[] =
{
    { _T("Adon Stage - 32x32 Pt1"), 0x47ED4, 0x480D4, indexCPS2_SFA3Assets, 0x3b, &pairFullyLinkedNode },
    { _T("Adon Stage - 32x32 Pt2"), 0x480D4, 0x48114, indexCPS2_SFA3Assets, 0x3c },
    { _T("Adon Stage - 16x16 Pt1"), 0x417D4, 0x419D4, indexCPS2_SFA3Assets, 0x39 },
    { _T("Adon Stage - 16x16 Pt2"), 0x419D4, 0x41BD4, indexCPS2_SFA3Assets, 0x3a },
    { _T("Adon Stage - Obj Pt1"), 0x387B4, 0x387F4, indexCPS2_SFA3Assets, 0x35 },
    { _T("Adon Stage - 8x8 Pt1"), 0x3CFD4, 0x3D1D4, indexCPS2_SFA3Assets, 0x36 },
    { _T("Adon Stage - 8x8 Pt2"), 0x3D1D4, 0x3D314, indexCPS2_SFA3Assets, 0x37 },
    { _T("Adon Stage - Obj Pt2"), 0x387F4, 0x38874, indexCPS2_SFA3Assets, 0x38 },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4ce14, 0x4ce94, indexCPS2_SFA3Assets, 0xb4 },
    { _T("X-Ism Kick"), 0x4ce94, 0x4cf14, indexCPS2_SFA3Assets, 0xb4 },
    { _T("A-Ism Punch"), 0x4cf14, 0x4cf94, indexCPS2_SFA3Assets, 0xb4 },
    { _T("A-Ism Kick"), 0x4cf94, 0x4d014, indexCPS2_SFA3Assets, 0xb4 },
    { _T("V-Ism Punch"), 0x4d014, 0x4d094, indexCPS2_SFA3Assets, 0xb4 },
    { _T("V-Ism Kick"), 0x4d094, 0x4d114, indexCPS2_SFA3Assets, 0xb4 },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4d114, 0x4d194, indexCPS2_SFA3Assets, 0xaf },
    { _T("X-Ism Kick"), 0x4d194, 0x4d214, indexCPS2_SFA3Assets, 0xaf },
    { _T("A-Ism Punch"), 0x4d214, 0x4d294, indexCPS2_SFA3Assets, 0xaf },
    { _T("A-Ism Kick"), 0x4d294, 0x4d314, indexCPS2_SFA3Assets, 0xaf },
    { _T("V-Ism Punch"), 0x4d314, 0x4d394, indexCPS2_SFA3Assets, 0xaf },
    { _T("V-Ism Kick"), 0x4d394, 0x4d414, indexCPS2_SFA3Assets, 0xaf },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4d414, 0x4d494, indexCPS2_SFA3Assets, 0xa1 },
    { _T("X-Ism Kick"), 0x4d494, 0x4d514, indexCPS2_SFA3Assets, 0xa1 },
    { _T("A-Ism Punch"), 0x4d514, 0x4d594, indexCPS2_SFA3Assets, 0xa1 },
    { _T("A-Ism Kick"), 0x4d594, 0x4d614, indexCPS2_SFA3Assets, 0xa1 },
    { _T("V-Ism Punch"), 0x4d614, 0x4d694, indexCPS2_SFA3Assets, 0xa1 },
    { _T("V-Ism Kick"), 0x4d694, 0x4d714, indexCPS2_SFA3Assets, 0xa1 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4d714, 0x4d794, indexCPS2_SFA3Assets, 0xa5 },
    { _T("X-Ism Kick"), 0x4d794, 0x4d814, indexCPS2_SFA3Assets, 0xa5 },
    { _T("A-Ism Punch"), 0x4d814, 0x4d894, indexCPS2_SFA3Assets, 0xa5 },
    { _T("A-Ism Kick"), 0x4d894, 0x4d914, indexCPS2_SFA3Assets, 0xa5 },
    { _T("V-Ism Punch"), 0x4d914, 0x4d994, indexCPS2_SFA3Assets, 0xa5 },
    { _T("V-Ism Kick"), 0x4d994, 0x4da14, indexCPS2_SFA3Assets, 0xa5 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4da14, 0x4da94, indexCPS2_SFA3Assets, 0xa6 },
    { _T("X-Ism Kick"), 0x4da94, 0x4db14, indexCPS2_SFA3Assets, 0xa6 },
    { _T("A-Ism Punch"), 0x4db14, 0x4db94, indexCPS2_SFA3Assets, 0xa7 },
    { _T("A-Ism Kick"), 0x4db94, 0x4dc14, indexCPS2_SFA3Assets, 0xa7 },
    { _T("V-Ism Punch"), 0x4dc14, 0x4dc94, indexCPS2_SFA3Assets, 0xa7 },
    { _T("V-Ism Kick"), 0x4dc94, 0x4dd14, indexCPS2_SFA3Assets, 0xa7 },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4dd14, 0x4dd94, indexCPS2_SFA3Assets, 0xa0 },
    { _T("X-Ism Kick"), 0x4dd94, 0x4de14, indexCPS2_SFA3Assets, 0xa0 },
    { _T("A-Ism Punch"), 0x4de14, 0x4de94, indexCPS2_SFA3Assets, 0xa0 },
    { _T("A-Ism Kick"), 0x4de94, 0x4df14, indexCPS2_SFA3Assets, 0xa0 },
    { _T("V-Ism Punch"), 0x4df14, 0x4df94, indexCPS2_SFA3Assets, 0xa0 },
    { _T("V-Ism Kick"), 0x4df94, 0x4e014, indexCPS2_SFA3Assets, 0xa0 },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e014, 0x4e094, indexCPS2_SFA3Assets, 0xb7 },
    { _T("X-Ism Kick"), 0x4e094, 0x4e114, indexCPS2_SFA3Assets, 0xb7 },
    { _T("A-Ism Punch"), 0x4e114, 0x4e194, indexCPS2_SFA3Assets, 0xb7 },
    { _T("A-Ism Kick"), 0x4e194, 0x4e214, indexCPS2_SFA3Assets, 0xb7 },
    { _T("V-Ism Punch"), 0x4e214, 0x4e294, indexCPS2_SFA3Assets, 0xb7 },
    { _T("V-Ism Kick"), 0x4e294, 0x4e314, indexCPS2_SFA3Assets, 0xb7 },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e314, 0x4e394, indexCPS2_SFA3Assets, 0xad },
    { _T("X-Ism Kick"), 0x4e394, 0x4e414, indexCPS2_SFA3Assets, 0xad },
    { _T("A-Ism Punch"), 0x4e414, 0x4e494, indexCPS2_SFA3Assets, 0xad },
    { _T("A-Ism Kick"), 0x4e494, 0x4e514, indexCPS2_SFA3Assets, 0xad },
    { _T("V-Ism Punch"), 0x4e514, 0x4e594, indexCPS2_SFA3Assets, 0xad },
    { _T("V-Ism Kick"), 0x4e594, 0x4e614, indexCPS2_SFA3Assets, 0xad },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e614, 0x4e694, indexCPS2_SFA3Assets, 0xa2 },
    { _T("X-Ism Kick"), 0x4e694, 0x4e714, indexCPS2_SFA3Assets, 0xa2 },
    { _T("A-Ism Punch"), 0x4e714, 0x4e794, indexCPS2_SFA3Assets, 0xa2 },
    { _T("A-Ism Kick"), 0x4e794, 0x4e814, indexCPS2_SFA3Assets, 0xa2 },
    { _T("V-Ism Punch"), 0x4e814, 0x4e894, indexCPS2_SFA3Assets, 0xa2 },
    { _T("V-Ism Kick"), 0x4e894, 0x4e914, indexCPS2_SFA3Assets, 0xa2 },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e914, 0x4e994, indexCPS2_SFA3Assets, 0xb3 },
    { _T("X-Ism Kick"), 0x4e994, 0x4ea14, indexCPS2_SFA3Assets, 0xb3 },
    { _T("A-Ism Punch"), 0x4ea14, 0x4ea94, indexCPS2_SFA3Assets, 0xb3 },
    { _T("A-Ism Kick"), 0x4ea94, 0x4eb14, indexCPS2_SFA3Assets, 0xb3 },
    { _T("V-Ism Punch"), 0x4eb14, 0x4eb94, indexCPS2_SFA3Assets, 0xb3 },
    { _T("V-Ism Kick"), 0x4eb94, 0x4ec14, indexCPS2_SFA3Assets, 0xb3 },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4ec14, 0x4ec94, indexCPS2_SFA3Assets, 0xb0 },
    { _T("X-Ism Kick"), 0x4ec94, 0x4ed14, indexCPS2_SFA3Assets, 0xb0 },
    { _T("A-Ism Punch"), 0x4ed14, 0x4ed94, indexCPS2_SFA3Assets, 0xb0 },
    { _T("A-Ism Kick"), 0x4ed94, 0x4ee14, indexCPS2_SFA3Assets, 0xb0 },
    { _T("V-Ism Punch"), 0x4ee14, 0x4ee94, indexCPS2_SFA3Assets, 0xb0 },
    { _T("V-Ism Kick"), 0x4ee94, 0x4ef14, indexCPS2_SFA3Assets, 0xb0 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4ef14, 0x4ef94, indexCPS2_SFA3Assets, 0xb5 },
    { _T("X-Ism Kick"), 0x4ef94, 0x4f014, indexCPS2_SFA3Assets, 0xb5 },
    { _T("A-Ism Punch"), 0x4f014, 0x4f094, indexCPS2_SFA3Assets, 0xb5 },
    { _T("A-Ism Kick"), 0x4f094, 0x4f114, indexCPS2_SFA3Assets, 0xb5 },
    { _T("V-Ism Punch"), 0x4f114, 0x4f194, indexCPS2_SFA3Assets, 0xb5 },
    { _T("V-Ism Kick"), 0x4f194, 0x4f214, indexCPS2_SFA3Assets, 0xb5 },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4f214, 0x4f294, indexCPS2_SFA3Assets, 0xa9 },
    { _T("X-Ism Kick"), 0x4f294, 0x4f314, indexCPS2_SFA3Assets, 0xa9 },
    { _T("A-Ism Punch"), 0x4f314, 0x4f394, indexCPS2_SFA3Assets, 0xa9 },
    { _T("A-Ism Kick"), 0x4f394, 0x4f414, indexCPS2_SFA3Assets, 0xa9 },
    { _T("V-Ism Punch"), 0x4f414, 0x4f494, indexCPS2_SFA3Assets, 0xa9 },
    { _T("V-Ism Kick"), 0x4f494, 0x4f514, indexCPS2_SFA3Assets, 0xa9 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4f514, 0x4f594, indexCPS2_SFA3Assets, 0xb6 },
    { _T("X-Ism Kick"), 0x4f594, 0x4f614, indexCPS2_SFA3Assets, 0xb6 },
    { _T("A-Ism Punch"), 0x4f614, 0x4f694, indexCPS2_SFA3Assets, 0xb6 },
    { _T("A-Ism Kick"), 0x4f694, 0x4f714, indexCPS2_SFA3Assets, 0xb6 },
    { _T("V-Ism Punch"), 0x4f714, 0x4f794, indexCPS2_SFA3Assets, 0xb6 },
    { _T("V-Ism Kick"), 0x4f794, 0x4f814, indexCPS2_SFA3Assets, 0xb6 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4f814, 0x4f894, indexCPS2_SFA3Assets, 0xb2 },
    { _T("X-Ism Kick"), 0x4f894, 0x4f914, indexCPS2_SFA3Assets, 0xb2 },
    { _T("A-Ism Punch"), 0x4f914, 0x4f994, indexCPS2_SFA3Assets, 0xb2 },
    { _T("A-Ism Kick"), 0x4f994, 0x4fa14, indexCPS2_SFA3Assets, 0xb2 },
    { _T("V-Ism Punch"), 0x4fa14, 0x4fa94, indexCPS2_SFA3Assets, 0xb2 },
    { _T("V-Ism Kick"), 0x4fa94, 0x4fb14, indexCPS2_SFA3Assets, 0xb2 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4fb14, 0x4fb94, indexCPS2_SFA3Assets, 0xaa },
    { _T("X-Ism Kick"), 0x4fb94, 0x4fc14, indexCPS2_SFA3Assets, 0xaa },
    { _T("A-Ism Punch"), 0x4fc14, 0x4fc94, indexCPS2_SFA3Assets, 0xaa },
    { _T("A-Ism Kick"), 0x4fc94, 0x4fd14, indexCPS2_SFA3Assets, 0xaa },
    { _T("V-Ism Punch"), 0x4fd14, 0x4fd94, indexCPS2_SFA3Assets, 0xaa },
    { _T("V-Ism Kick"), 0x4fd94, 0x4fe14, indexCPS2_SFA3Assets, 0xaa },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4fe14, 0x4fe94, indexCPS2_SFA3Assets, 0xb9 },
    { _T("X-Ism Kick"), 0x4fe94, 0x4ff14, indexCPS2_SFA3Assets, 0xb9 },
    { _T("A-Ism Punch"), 0x4ff14, 0x4ff94, indexCPS2_SFA3Assets, 0xb9 },
    { _T("A-Ism Kick"), 0x4ff94, 0x50014, indexCPS2_SFA3Assets, 0xb9 },
    { _T("V-Ism Punch"), 0x50014, 0x50094, indexCPS2_SFA3Assets, 0xb9 },
    { _T("V-Ism Kick"), 0x50094, 0x50114, indexCPS2_SFA3Assets, 0xb9 },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x50114, 0x50194, indexCPS2_SFA3Assets, 0xac },
    { _T("X-Ism Kick"), 0x50194, 0x50214, indexCPS2_SFA3Assets, 0xac },
    { _T("A-Ism Punch"), 0x50214, 0x50294, indexCPS2_SFA3Assets, 0xac },
    { _T("A-Ism Kick"), 0x50294, 0x50314, indexCPS2_SFA3Assets, 0xac },
    { _T("V-Ism Punch"), 0x50314, 0x50394, indexCPS2_SFA3Assets, 0xac },
    { _T("V-Ism Kick"), 0x50394, 0x50414, indexCPS2_SFA3Assets, 0xac },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x50a14, 0x50a94, indexCPS2_SFA3Assets, 0xa4 },
    { _T("X-Ism Kick"), 0x50a94, 0x50b14, indexCPS2_SFA3Assets, 0xa4 },
    { _T("A-Ism Punch"), 0x50b14, 0x50b94, indexCPS2_SFA3Assets, 0xa4 },
    { _T("A-Ism Kick"), 0x50b94, 0x50c14, indexCPS2_SFA3Assets, 0xa4 },
    { _T("V-Ism Punch"), 0x50c14, 0x50c94, indexCPS2_SFA3Assets, 0xa4 },
    { _T("V-Ism Kick"), 0x50c94, 0x50d14, indexCPS2_SFA3Assets, 0xa4 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x50d14, 0x50d94, indexCPS2_SFA3Assets, 0xab },
    { _T("X-Ism Kick"), 0x50d94, 0x50e14, indexCPS2_SFA3Assets, 0xab },
    { _T("A-Ism Punch"), 0x50e14, 0x50e94, indexCPS2_SFA3Assets, 0xab },
    { _T("A-Ism Kick"), 0x50e94, 0x50f14, indexCPS2_SFA3Assets, 0xab },
    { _T("V-Ism Punch"), 0x50f14, 0x50f94, indexCPS2_SFA3Assets, 0xab },
    { _T("V-Ism Kick"), 0x50f94, 0x51014, indexCPS2_SFA3Assets, 0xab },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51014, 0x51094, indexCPS2_SFA3Assets, 0xa3 },
    { _T("X-Ism Kick"), 0x51094, 0x51114, indexCPS2_SFA3Assets, 0xa3 },
    { _T("A-Ism Punch"), 0x51114, 0x51194, indexCPS2_SFA3Assets, 0xa3 },
    { _T("A-Ism Kick"), 0x51194, 0x51214, indexCPS2_SFA3Assets, 0xa3 },
    { _T("V-Ism Punch"), 0x51214, 0x51294, indexCPS2_SFA3Assets, 0xa3 },
    { _T("V-Ism Kick"), 0x51294, 0x51314, indexCPS2_SFA3Assets, 0xa3 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51314, 0x51394, indexCPS2_SFA3Assets, 0xb1 },
    { _T("X-Ism Kick"), 0x51394, 0x51414, indexCPS2_SFA3Assets, 0xb1 },
    { _T("A-Ism Punch"), 0x51414, 0x51494, indexCPS2_SFA3Assets, 0xb1 },
    { _T("A-Ism Kick"), 0x51494, 0x51514, indexCPS2_SFA3Assets, 0xb1 },
    { _T("V-Ism Punch"), 0x51514, 0x51594, indexCPS2_SFA3Assets, 0xb1 },
    { _T("V-Ism Kick"), 0x51594, 0x51614, indexCPS2_SFA3Assets, 0xb1 },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51614, 0x51694, indexCPS2_SFA3Assets, 0xa8 },
    { _T("X-Ism Kick"), 0x51694, 0x51714, indexCPS2_SFA3Assets, 0xa8 },
    { _T("A-Ism Punch"), 0x51714, 0x51794, indexCPS2_SFA3Assets, 0xa8 },
    { _T("A-Ism Kick"), 0x51794, 0x51814, indexCPS2_SFA3Assets, 0xa8 },
    { _T("V-Ism Punch"), 0x51814, 0x51894, indexCPS2_SFA3Assets, 0xa8 },
    { _T("V-Ism Kick"), 0x51894, 0x51914, indexCPS2_SFA3Assets, 0xa8 },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51914, 0x51994, indexCPS2_SFA3Assets, 0xb8 },
    { _T("X-Ism Kick"), 0x51994, 0x51a14, indexCPS2_SFA3Assets, 0xb8 },
    { _T("A-Ism Punch"), 0x51a14, 0x51a94, indexCPS2_SFA3Assets, 0xb8 },
    { _T("A-Ism Kick"), 0x51a94, 0x51b14, indexCPS2_SFA3Assets, 0xb8 },
    { _T("V-Ism Punch"), 0x51b14, 0x51b94, indexCPS2_SFA3Assets, 0xb8 },
    { _T("V-Ism Kick"), 0x51b94, 0x51c14, indexCPS2_SFA3Assets, 0xb8 },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51c14, 0x51c94, indexCPS2_SFA3Assets, 0xae },
    { _T("X-Ism Kick"), 0x51c94, 0x51d14, indexCPS2_SFA3Assets, 0xae },
    { _T("A-Ism Punch"), 0x51d14, 0x51d94, indexCPS2_SFA3Assets, 0xae },
    { _T("A-Ism Kick"), 0x51d94, 0x51e14, indexCPS2_SFA3Assets, 0xae },
    { _T("V-Ism Punch"), 0x51e14, 0x51e94, indexCPS2_SFA3Assets, 0xae },
    { _T("V-Ism Kick"), 0x51e94, 0x51f14, indexCPS2_SFA3Assets, 0xae },
};

const sDescTreeNode SFA3_A_RYU_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_XISMP,      ARRAYSIZE(SFA3_A_RYU_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_XISMK,      ARRAYSIZE(SFA3_A_RYU_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_AISMP,      ARRAYSIZE(SFA3_A_RYU_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_AISMK,      ARRAYSIZE(SFA3_A_RYU_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_VISMP,      ARRAYSIZE(SFA3_A_RYU_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_VISMK,      ARRAYSIZE(SFA3_A_RYU_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_STATUS,     ARRAYSIZE(SFA3_A_RYU_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_RYU_PORTRAIT_PALETTES) },};

const sDescTreeNode SFA3_A_KEN_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_XISMP,      ARRAYSIZE(SFA3_A_KEN_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_XISMK,      ARRAYSIZE(SFA3_A_KEN_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_AISMP,      ARRAYSIZE(SFA3_A_KEN_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_AISMK,      ARRAYSIZE(SFA3_A_KEN_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_VISMP,      ARRAYSIZE(SFA3_A_KEN_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_VISMK,      ARRAYSIZE(SFA3_A_KEN_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_STATUS,     ARRAYSIZE(SFA3_A_KEN_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_KEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_GOUKI_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_XISMP,      ARRAYSIZE(SFA3_A_GOUKI_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_XISMK,      ARRAYSIZE(SFA3_A_GOUKI_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_AISMP,      ARRAYSIZE(SFA3_A_GOUKI_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_AISMK,      ARRAYSIZE(SFA3_A_GOUKI_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_VISMP,      ARRAYSIZE(SFA3_A_GOUKI_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_VISMK,      ARRAYSIZE(SFA3_A_GOUKI_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_STATUS,     ARRAYSIZE(SFA3_A_GOUKI_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_AKUMA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_AKUMA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_CHARLIE_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_XISMP,      ARRAYSIZE(SFA3_A_CHARLIE_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_XISMK,      ARRAYSIZE(SFA3_A_CHARLIE_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_AISMP,      ARRAYSIZE(SFA3_A_CHARLIE_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_AISMK,      ARRAYSIZE(SFA3_A_CHARLIE_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_VISMP,      ARRAYSIZE(SFA3_A_CHARLIE_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_VISMK,      ARRAYSIZE(SFA3_A_CHARLIE_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_STATUS,     ARRAYSIZE(SFA3_A_CHARLIE_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CHARLIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_CHUNLI_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_XISMP,      ARRAYSIZE(SFA3_A_CHUNLI_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_XISMK,      ARRAYSIZE(SFA3_A_CHUNLI_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_AISMP,      ARRAYSIZE(SFA3_A_CHUNLI_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_AISMK,      ARRAYSIZE(SFA3_A_CHUNLI_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_VISMP,      ARRAYSIZE(SFA3_A_CHUNLI_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_VISMK,      ARRAYSIZE(SFA3_A_CHUNLI_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_STATUS,     ARRAYSIZE(SFA3_A_CHUNLI_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ADON_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_XISMP,      ARRAYSIZE(SFA3_A_ADON_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_XISMK,      ARRAYSIZE(SFA3_A_ADON_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_AISMP,      ARRAYSIZE(SFA3_A_ADON_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_AISMK,      ARRAYSIZE(SFA3_A_ADON_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_VISMP,      ARRAYSIZE(SFA3_A_ADON_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_VISMK,      ARRAYSIZE(SFA3_A_ADON_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_STATUS,     ARRAYSIZE(SFA3_A_ADON_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ADON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_SODOM_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_XISMP,      ARRAYSIZE(SFA3_A_SODOM_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_XISMK,      ARRAYSIZE(SFA3_A_SODOM_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_AISMP,      ARRAYSIZE(SFA3_A_SODOM_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_AISMK,      ARRAYSIZE(SFA3_A_SODOM_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_VISMP,      ARRAYSIZE(SFA3_A_SODOM_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_VISMK,      ARRAYSIZE(SFA3_A_SODOM_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_STATUS,     ARRAYSIZE(SFA3_A_SODOM_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_SODOM_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_GUY_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_XISMP,      ARRAYSIZE(SFA3_A_GUY_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_XISMK,      ARRAYSIZE(SFA3_A_GUY_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_AISMP,      ARRAYSIZE(SFA3_A_GUY_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_AISMK,      ARRAYSIZE(SFA3_A_GUY_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_VISMP,      ARRAYSIZE(SFA3_A_GUY_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_VISMK,      ARRAYSIZE(SFA3_A_GUY_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_STATUS,     ARRAYSIZE(SFA3_A_GUY_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_GUY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_BIRDIE_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_XISMP,      ARRAYSIZE(SFA3_A_BIRDIE_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_XISMK,      ARRAYSIZE(SFA3_A_BIRDIE_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_AISMP,      ARRAYSIZE(SFA3_A_BIRDIE_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_AISMK,      ARRAYSIZE(SFA3_A_BIRDIE_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_VISMP,      ARRAYSIZE(SFA3_A_BIRDIE_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_VISMK,      ARRAYSIZE(SFA3_A_BIRDIE_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_STATUS,     ARRAYSIZE(SFA3_A_BIRDIE_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_BIRDIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ROSE_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMP,      ARRAYSIZE(SFA3_A_ROSE_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMK,      ARRAYSIZE(SFA3_A_ROSE_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMP,      ARRAYSIZE(SFA3_A_ROSE_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMK,      ARRAYSIZE(SFA3_A_ROSE_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMP,      ARRAYSIZE(SFA3_A_ROSE_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMK,      ARRAYSIZE(SFA3_A_ROSE_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_STATUS,     ARRAYSIZE(SFA3_A_ROSE_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ROSE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_MBISON_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_XISMP,      ARRAYSIZE(SFA3_A_MBISON_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_XISMK,      ARRAYSIZE(SFA3_A_MBISON_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_AISMP,      ARRAYSIZE(SFA3_A_MBISON_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_AISMK,      ARRAYSIZE(SFA3_A_MBISON_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_VISMP,      ARRAYSIZE(SFA3_A_MBISON_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_VISMK,      ARRAYSIZE(SFA3_A_MBISON_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_STATUS,     ARRAYSIZE(SFA3_A_MBISON_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_MBISON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_SAGAT_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_XISMP,      ARRAYSIZE(SFA3_A_SAGAT_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_XISMK,      ARRAYSIZE(SFA3_A_SAGAT_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_AISMP,      ARRAYSIZE(SFA3_A_SAGAT_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_AISMK,      ARRAYSIZE(SFA3_A_SAGAT_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_VISMP,      ARRAYSIZE(SFA3_A_SAGAT_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_VISMK,      ARRAYSIZE(SFA3_A_SAGAT_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_STATUS,     ARRAYSIZE(SFA3_A_SAGAT_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_SAGAT_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_DAN_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_XISMP,      ARRAYSIZE(SFA3_A_DAN_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_XISMK,      ARRAYSIZE(SFA3_A_DAN_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_AISMP,      ARRAYSIZE(SFA3_A_DAN_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_AISMK,      ARRAYSIZE(SFA3_A_DAN_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_VISMP,      ARRAYSIZE(SFA3_A_DAN_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_VISMK,      ARRAYSIZE(SFA3_A_DAN_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_STATUS,     ARRAYSIZE(SFA3_A_DAN_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_DAN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_SAKURA_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_XISMP,      ARRAYSIZE(SFA3_A_SAKURA_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_XISMK,      ARRAYSIZE(SFA3_A_SAKURA_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_AISMP,      ARRAYSIZE(SFA3_A_SAKURA_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_AISMK,      ARRAYSIZE(SFA3_A_SAKURA_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_VISMP,      ARRAYSIZE(SFA3_A_SAKURA_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_VISMK,      ARRAYSIZE(SFA3_A_SAKURA_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_STATUS,     ARRAYSIZE(SFA3_A_SAKURA_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_SAKURA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ROLENTO_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_XISMP,      ARRAYSIZE(SFA3_A_ROLENTO_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_XISMK,      ARRAYSIZE(SFA3_A_ROLENTO_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_AISMP,      ARRAYSIZE(SFA3_A_ROLENTO_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_AISMK,      ARRAYSIZE(SFA3_A_ROLENTO_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_VISMP,      ARRAYSIZE(SFA3_A_ROLENTO_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_VISMK,      ARRAYSIZE(SFA3_A_ROLENTO_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_STATUS,     ARRAYSIZE(SFA3_A_ROLENTO_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ROLENTO_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_DHALSIM_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_XISMP,      ARRAYSIZE(SFA3_A_DHALSIM_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_XISMK,      ARRAYSIZE(SFA3_A_DHALSIM_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_AISMP,      ARRAYSIZE(SFA3_A_DHALSIM_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_AISMK,      ARRAYSIZE(SFA3_A_DHALSIM_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_VISMP,      ARRAYSIZE(SFA3_A_DHALSIM_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_VISMK,      ARRAYSIZE(SFA3_A_DHALSIM_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_STATUS,     ARRAYSIZE(SFA3_A_DHALSIM_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_DHALSIM_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ZANGIEF_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_XISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_XISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_AISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_AISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_VISMP,      ARRAYSIZE(SFA3_A_ZANGIEF_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_VISMK,      ARRAYSIZE(SFA3_A_ZANGIEF_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_STATUS,     ARRAYSIZE(SFA3_A_ZANGIEF_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ZANGIEF_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_GEN_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_XISMP,      ARRAYSIZE(SFA3_A_GEN_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_XISMK,      ARRAYSIZE(SFA3_A_GEN_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_AISMP,      ARRAYSIZE(SFA3_A_GEN_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_AISMK,      ARRAYSIZE(SFA3_A_GEN_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_VISMP,      ARRAYSIZE(SFA3_A_GEN_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_VISMK,      ARRAYSIZE(SFA3_A_GEN_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_STATUS,     ARRAYSIZE(SFA3_A_GEN_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_GEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_BALROG_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_XISMP,      ARRAYSIZE(SFA3_A_BALROG_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_XISMK,      ARRAYSIZE(SFA3_A_BALROG_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_AISMP,      ARRAYSIZE(SFA3_A_BALROG_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_AISMK,      ARRAYSIZE(SFA3_A_BALROG_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_VISMP,      ARRAYSIZE(SFA3_A_BALROG_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_VISMK,      ARRAYSIZE(SFA3_A_BALROG_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_STATUS,     ARRAYSIZE(SFA3_A_BALROG_STATUS) },
};

const sDescTreeNode SFA3_A_CAMMY_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_XISMP,      ARRAYSIZE(SFA3_A_CAMMY_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_XISMK,      ARRAYSIZE(SFA3_A_CAMMY_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_AISMP,      ARRAYSIZE(SFA3_A_CAMMY_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_AISMK,      ARRAYSIZE(SFA3_A_CAMMY_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_VISMP,      ARRAYSIZE(SFA3_A_CAMMY_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_VISMK,      ARRAYSIZE(SFA3_A_CAMMY_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_STATUS,     ARRAYSIZE(SFA3_A_CAMMY_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CAMMY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_EHONDA_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_XISMP,      ARRAYSIZE(SFA3_A_EHONDA_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_XISMK,      ARRAYSIZE(SFA3_A_EHONDA_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_AISMP,      ARRAYSIZE(SFA3_A_EHONDA_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_AISMK,      ARRAYSIZE(SFA3_A_EHONDA_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_VISMP,      ARRAYSIZE(SFA3_A_EHONDA_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_VISMK,      ARRAYSIZE(SFA3_A_EHONDA_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_STATUS,     ARRAYSIZE(SFA3_A_EHONDA_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_EHONDA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_BLANKA_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_XISMP,      ARRAYSIZE(SFA3_A_BLANKA_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_XISMK,      ARRAYSIZE(SFA3_A_BLANKA_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_AISMP,      ARRAYSIZE(SFA3_A_BLANKA_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_AISMK,      ARRAYSIZE(SFA3_A_BLANKA_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_VISMP,      ARRAYSIZE(SFA3_A_BLANKA_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_VISMK,      ARRAYSIZE(SFA3_A_BLANKA_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_STATUS,     ARRAYSIZE(SFA3_A_BLANKA_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_BLANKA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_RMIKA_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_XISMP,      ARRAYSIZE(SFA3_A_RMIKA_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_XISMK,      ARRAYSIZE(SFA3_A_RMIKA_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_AISMP,      ARRAYSIZE(SFA3_A_RMIKA_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_AISMK,      ARRAYSIZE(SFA3_A_RMIKA_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_VISMP,      ARRAYSIZE(SFA3_A_RMIKA_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_VISMK,      ARRAYSIZE(SFA3_A_RMIKA_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_STATUS,     ARRAYSIZE(SFA3_A_RMIKA_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_RMIKA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_CODY_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_XISMP,      ARRAYSIZE(SFA3_A_CODY_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_XISMK,      ARRAYSIZE(SFA3_A_CODY_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_AISMP,      ARRAYSIZE(SFA3_A_CODY_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_AISMK,      ARRAYSIZE(SFA3_A_CODY_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_VISMP,      ARRAYSIZE(SFA3_A_CODY_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_VISMK,      ARRAYSIZE(SFA3_A_CODY_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_STATUS,     ARRAYSIZE(SFA3_A_CODY_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CODY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_VEGA_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMP,      ARRAYSIZE(SFA3_A_VEGA_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMK,      ARRAYSIZE(SFA3_A_VEGA_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMP,      ARRAYSIZE(SFA3_A_VEGA_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMK,      ARRAYSIZE(SFA3_A_VEGA_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMP,      ARRAYSIZE(SFA3_A_VEGA_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMK,      ARRAYSIZE(SFA3_A_VEGA_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_STATUS,     ARRAYSIZE(SFA3_A_VEGA_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_VEGA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_KARIN_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_XISMP,      ARRAYSIZE(SFA3_A_KARIN_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_XISMK,      ARRAYSIZE(SFA3_A_KARIN_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_AISMP,      ARRAYSIZE(SFA3_A_KARIN_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_AISMK,      ARRAYSIZE(SFA3_A_KARIN_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_VISMP,      ARRAYSIZE(SFA3_A_KARIN_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_VISMK,      ARRAYSIZE(SFA3_A_KARIN_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_STATUS,     ARRAYSIZE(SFA3_A_KARIN_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_KARIN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_JUNI_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_XISMP,      ARRAYSIZE(SFA3_A_JUNI_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_XISMK,      ARRAYSIZE(SFA3_A_JUNI_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_AISMP,      ARRAYSIZE(SFA3_A_JUNI_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_AISMK,      ARRAYSIZE(SFA3_A_JUNI_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_VISMP,      ARRAYSIZE(SFA3_A_JUNI_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_VISMK,      ARRAYSIZE(SFA3_A_JUNI_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_STATUS,     ARRAYSIZE(SFA3_A_JUNI_STATUS) },
};

const sDescTreeNode SFA3_A_JULI_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_XISMP,      ARRAYSIZE(SFA3_A_JULI_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_XISMK,      ARRAYSIZE(SFA3_A_JULI_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_AISMP,      ARRAYSIZE(SFA3_A_JULI_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_AISMK,      ARRAYSIZE(SFA3_A_JULI_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_VISMP,      ARRAYSIZE(SFA3_A_JULI_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_VISMK,      ARRAYSIZE(SFA3_A_JULI_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_STATUS,     ARRAYSIZE(SFA3_A_JULI_STATUS) }, 
};

const sDescTreeNode SFA3_A_BONUS_COLLECTION[] =
{
    { _T("Adon Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_ADON_NODE, ARRAYSIZE(SFA3_A_STAGES_ADON_NODE) },
    { _T("Akuma Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_AKUMA_NODE, ARRAYSIZE(SFA3_A_STAGES_AKUMA_NODE) },
    { _T("Chun-Li Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CHUNLI_NODE, ARRAYSIZE(SFA3_A_STAGES_CHUNLI_NODE) },
    { _T("Ken Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_KEN_NODE, ARRAYSIZE(SFA3_A_STAGES_KEN_NODE) },
    { _T("Ryu Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_RYU_NODE, ARRAYSIZE(SFA3_A_STAGES_RYU_NODE) },
    { _T("Nash Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_NASH_NODE, ARRAYSIZE(SFA3_A_STAGES_NASH_NODE) },
};

const sDescTreeNode SFA3_A_UNITS[SFA3_A_NUM_IND] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_COLLECTION,          ARRAYSIZE(SFA3_A_ADON_COLLECTION) },
    { _T("Balrog"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_COLLECTION,        ARRAYSIZE(SFA3_A_BALROG_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA3_A_BIRDIE_COLLECTION) },
    { _T("Blanka"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_COLLECTION,        ARRAYSIZE(SFA3_A_BLANKA_COLLECTION) },
    { _T("Cammy"),           DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_COLLECTION,         ARRAYSIZE(SFA3_A_CAMMY_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA3_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA3_A_CHUNLI_COLLECTION) },
    { _T("Cody"),            DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_COLLECTION,          ARRAYSIZE(SFA3_A_CODY_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_COLLECTION,           ARRAYSIZE(SFA3_A_DAN_COLLECTION) },
    { _T("Dhalsim"),         DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA3_A_DHALSIM_COLLECTION) },
    { _T("E. Honda"),        DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_COLLECTION,        ARRAYSIZE(SFA3_A_EHONDA_COLLECTION) },
    { _T("Gen"),             DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_COLLECTION,           ARRAYSIZE(SFA3_A_GEN_COLLECTION) },
    { _T("Gouki"),           DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA3_A_GOUKI_COLLECTION) },
    { _T("Guy"),             DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_COLLECTION,           ARRAYSIZE(SFA3_A_GUY_COLLECTION) },
    { _T("Juli"),            DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_COLLECTION,          ARRAYSIZE(SFA3_A_JULI_COLLECTION) },
    { _T("Juni"),            DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_COLLECTION,          ARRAYSIZE(SFA3_A_JUNI_COLLECTION) },
    { _T("Karin"),           DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_COLLECTION,         ARRAYSIZE(SFA3_A_KARIN_COLLECTION) },
    { _T("Ken"),             DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_COLLECTION,           ARRAYSIZE(SFA3_A_KEN_COLLECTION) },
    { _T("M. Bison"),        DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_COLLECTION,        ARRAYSIZE(SFA3_A_MBISON_COLLECTION) },
    { _T("R. Mika"),         DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_COLLECTION,         ARRAYSIZE(SFA3_A_RMIKA_COLLECTION) },
    { _T("Rolento"),         DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA3_A_ROLENTO_COLLECTION) },
    { _T("Rose"),            DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_COLLECTION,          ARRAYSIZE(SFA3_A_ROSE_COLLECTION) },
    { _T("Ryu"),             DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_COLLECTION,           ARRAYSIZE(SFA3_A_RYU_COLLECTION) },
    { _T("Sagat"),           DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA3_A_SAGAT_COLLECTION) },
    { _T("Sakura"),          DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA3_A_SAKURA_COLLECTION) },
    { _T("Sodom"),           DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_COLLECTION,         ARRAYSIZE(SFA3_A_SODOM_COLLECTION) },
    { _T("Vega"),            DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_COLLECTION,          ARRAYSIZE(SFA3_A_VEGA_COLLECTION) },
    { _T("Zangief"),         DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA3_A_ZANGIEF_COLLECTION) },
    { _T("Stages"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BONUS_COLLECTION,         ARRAYSIZE(SFA3_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the SFA3e.txt extensible extras file, if any.
const stExtraDef SFA3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
