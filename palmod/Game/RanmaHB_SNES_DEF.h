#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to RANMAHB_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<UINT16> RANMAHB_SNES_IMGIDS_USED =
{
    indexRanmaHB1Sprites_Akane,         // 0x57
    indexRanmaHB1Sprites_Genma,         // 0x58
    indexRanmaHB1Sprites_Gosunkugi,     // 0x59
    indexRanmaHB1Sprites_King,          // 0x5A
    indexRanmaHB1Sprites_Mousse,        // 0x5B
    indexRanmaHB1Sprites_Pantyhose,     // 0x5C
    indexRanmaHB1Sprites_PantyhoseT,    // 0x5D
    indexRanmaHB1Sprites_RanmaF,        // 0x5E
    indexRanmaHB1Sprites_RanmaM,        // 0x5F
    indexRanmaHB1Sprites_Ryoga,         // 0x60
    indexRanmaHB1Sprites_Shampoo,       // 0x61
    indexRanmaHB1Sprites_Ukyo,          // 0x62
    indexRanmaHB1Sprites_Bonus,         // 0x63
};

const sGame_PaletteDataset RANMAHB_SNES_RANMAM_P1_PALETTES[] =
{
    { L"Ranma (M) P1", 0x185F5, 0x18615, indexRanmaHB1Sprites_RanmaM },
};

const sGame_PaletteDataset RANMAHB_SNES_RANMAM_P2_PALETTES[] =
{
    { L"Ranma (M) P2", 0x18617, 0x18637, indexRanmaHB1Sprites_RanmaM },
};

const sGame_PaletteDataset RANMAHB_SNES_RANMAF_P1_PALETTES[] =
{
    { L"Ranma (F) P1", 0x18669, 0x18689, indexRanmaHB1Sprites_RanmaF },
};

const sGame_PaletteDataset RANMAHB_SNES_RANMAF_P2_PALETTES[] =
{
    { L"Ranma (F) P2", 0x1868B, 0x186AB, indexRanmaHB1Sprites_RanmaF },
};

const sGame_PaletteDataset RANMAHB_SNES_AKANE_P1_PALETTES[] =
{
    { L"Akane P1", 0x182C9, 0x182E9, indexRanmaHB1Sprites_Akane },
};

const sGame_PaletteDataset RANMAHB_SNES_AKANE_P2_PALETTES[] =
{
    { L"Akane P2", 0x182EB, 0x1830B, indexRanmaHB1Sprites_Akane },
};

const sGame_PaletteDataset RANMAHB_SNES_SHAMPOO_P1_PALETTES[] =
{
    { L"Shampoo P1", 0x18425, 0x18445, indexRanmaHB1Sprites_Shampoo },
};

const sGame_PaletteDataset RANMAHB_SNES_SHAMPOO_P2_PALETTES[] =
{
    { L"Shampoo P2", 0x18447, 0x18467, indexRanmaHB1Sprites_Shampoo },
};

const sGame_PaletteDataset RANMAHB_SNES_MOUSSE_P1_PALETTES[] =
{
    { L"Mousse P1", 0x18255, 0x18275, indexRanmaHB1Sprites_Mousse },
};

const sGame_PaletteDataset RANMAHB_SNES_MOUSSE_P2_PALETTES[] =
{
    { L"Mousse P2", 0x18277, 0x18297, indexRanmaHB1Sprites_Mousse },
};

const sGame_PaletteDataset RANMAHB_SNES_UKYO_P1_PALETTES[] =
{
    { L"Ukyo P1", 0x183B1, 0x183D1, indexRanmaHB1Sprites_Ukyo },
};

const sGame_PaletteDataset RANMAHB_SNES_UKYO_P2_PALETTES[] =
{
    { L"Ukyo P2", 0x183D3, 0x183F3, indexRanmaHB1Sprites_Ukyo },
};

const sGame_PaletteDataset RANMAHB_SNES_GENMA_P1_PALETTES[] =
{
    { L"Genma P1", 0x1850D, 0x1852D, indexRanmaHB1Sprites_Genma },
};

const sGame_PaletteDataset RANMAHB_SNES_GENMA_P2_PALETTES[] =
{
    { L"Genma P2", 0x1852F, 0x1854F, indexRanmaHB1Sprites_Genma },
};

const sGame_PaletteDataset RANMAHB_SNES_GOSUNKUGI_P1_PALETTES[] =
{
    { L"Gosunkugi P1", 0x181E1, 0x18201, indexRanmaHB1Sprites_Gosunkugi },
};

const sGame_PaletteDataset RANMAHB_SNES_GOSUNKUGI_P2_PALETTES[] =
{
    { L"Gosunkugi P2", 0x18203, 0x18223, indexRanmaHB1Sprites_Gosunkugi },
};

const sGame_PaletteDataset RANMAHB_SNES_KING_P1_PALETTES[] =
{
    { L"King P1", 0x18581, 0x185A1, indexRanmaHB1Sprites_King },
};

const sGame_PaletteDataset RANMAHB_SNES_KING_P2_PALETTES[] =
{
    { L"King P2", 0x185A3, 0x185C3, indexRanmaHB1Sprites_King },
};

const sGame_PaletteDataset RANMAHB_SNES_RYOGA_P1_PALETTES[] =
{
    { L"Ryoga P1", 0x186DD, 0x186FD, indexRanmaHB1Sprites_Ryoga },
};

const sGame_PaletteDataset RANMAHB_SNES_RYOGA_P2_PALETTES[] =
{
    { L"Ryoga P2", 0x186FF, 0x1871F, indexRanmaHB1Sprites_Ryoga },
};

const sGame_PaletteDataset RANMAHB_SNES_PANTYHOSE_P1_PALETTES[] =
{
    { L"Pantyhose P1", 0x1833D, 0x1835D, indexRanmaHB1Sprites_Pantyhose },
};

const sGame_PaletteDataset RANMAHB_SNES_PANTYHOSE_P2_PALETTES[] =
{
    { L"Pantyhose P2", 0x1835F, 0x1837F, indexRanmaHB1Sprites_Pantyhose },
};

const sGame_PaletteDataset RANMAHB_SNES_PANTYHOSET_P1_PALETTES[] =
{
    { L"Pantyhose (Transformed) P1", 0x18499, 0x184B9, indexRanmaHB1Sprites_PantyhoseT },
};

const sGame_PaletteDataset RANMAHB_SNES_PANTYHOSET_P2_PALETTES[] =
{
    { L"Pantyhose (Transformed) P2", 0x184BB, 0x184DB, indexRanmaHB1Sprites_PantyhoseT },
};

const sDescTreeNode RANMAHB_SNES_RANMAM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RANMAM_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_RANMAM_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RANMAM_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_RANMAM_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_RANMAF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RANMAF_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_RANMAF_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RANMAF_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_RANMAF_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_AKANE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_AKANE_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_AKANE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_AKANE_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_AKANE_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_SHAMPOO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_SHAMPOO_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_SHAMPOO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_SHAMPOO_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_SHAMPOO_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_MOUSSE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_MOUSSE_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_MOUSSE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_MOUSSE_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_MOUSSE_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_UKYO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_UKYO_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_UKYO_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_UKYO_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_UKYO_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_GENMA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_GENMA_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_GENMA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_GENMA_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_GENMA_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_GOSUNKUGI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_GOSUNKUGI_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_GOSUNKUGI_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_GOSUNKUGI_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_GOSUNKUGI_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_KING_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_KING_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_KING_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_KING_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_KING_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_RYOGA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RYOGA_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_RYOGA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RYOGA_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_RYOGA_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_PANTYHOSE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_PANTYHOSE_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_PANTYHOSE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_PANTYHOSE_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_PANTYHOSE_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_PANTYHOSET_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_PANTYHOSET_P1_PALETTES, ARRAYSIZE(RANMAHB_SNES_PANTYHOSET_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_PANTYHOSET_P2_PALETTES, ARRAYSIZE(RANMAHB_SNES_PANTYHOSET_P2_PALETTES) },
};

const sDescTreeNode RANMAHB_SNES_UNITS[] =
{
    { L"Ranma (M)", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RANMAM_COLLECTION, ARRAYSIZE(RANMAHB_SNES_RANMAM_COLLECTION) },
    { L"Ranma (F)", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RANMAF_COLLECTION, ARRAYSIZE(RANMAHB_SNES_RANMAF_COLLECTION) },
    { L"Akane", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_AKANE_COLLECTION, ARRAYSIZE(RANMAHB_SNES_AKANE_COLLECTION) },
    { L"Shampoo", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_SHAMPOO_COLLECTION, ARRAYSIZE(RANMAHB_SNES_SHAMPOO_COLLECTION) },
    { L"Mousse", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_MOUSSE_COLLECTION, ARRAYSIZE(RANMAHB_SNES_MOUSSE_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_UKYO_COLLECTION, ARRAYSIZE(RANMAHB_SNES_UKYO_COLLECTION) },
    { L"Genma", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_GENMA_COLLECTION, ARRAYSIZE(RANMAHB_SNES_GENMA_COLLECTION) },
    { L"Gosunkugi", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_GOSUNKUGI_COLLECTION, ARRAYSIZE(RANMAHB_SNES_GOSUNKUGI_COLLECTION) },
    { L"King", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_KING_COLLECTION, ARRAYSIZE(RANMAHB_SNES_KING_COLLECTION) },
    { L"Ryoga", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_RYOGA_COLLECTION, ARRAYSIZE(RANMAHB_SNES_RYOGA_COLLECTION) },
    { L"Pantyhose", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_PANTYHOSE_COLLECTION, ARRAYSIZE(RANMAHB_SNES_PANTYHOSE_COLLECTION) },
    { L"Pantyhose (Transformed)", DESC_NODETYPE_TREE, (void*)RANMAHB_SNES_PANTYHOSET_COLLECTION, ARRAYSIZE(RANMAHB_SNES_PANTYHOSET_COLLECTION) },
};

constexpr auto RANMAHB_SNES_NUMUNIT = ARRAYSIZE(RANMAHB_SNES_UNITS);

#define RANMAHB_SNES_EXTRALOC RANMAHB_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef RANMAHB_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
