#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to NEWGAME_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

#define LandMaker_A_STRUCTURE(addr) addr, addr + 0x20*4
#define LandMaker_A_PORTRAIT(addr) addr, addr + 0x40*4
#define LandMaker_A_CHIBI(addr) addr, addr + 0x20*4
#define LandMaker_A_TILE(addr) addr, addr + 0x10*4
#define LandMaker_A_SPARKLE(addr) addr, addr + 0x20*4

// 2.02 O (landmakr) addresses
// ref table at 0x979ee
const sGame_PaletteDataset LandMaker_A_HIRYU_PALETTES[] =
{
    { L"Hiryu/Soumei Structures - Red",    LandMaker_A_STRUCTURE(0x01d9b0) },
    { L"Hiryu/Soumei Structures - Blue",   LandMaker_A_STRUCTURE(0x01d5b0) },
    { L"Hiryu/Soumei Structures - Orange", LandMaker_A_STRUCTURE(0x0d3234) },
    { L"Hiryu/Soumei Structures - Green",  LandMaker_A_STRUCTURE(0x01d430) },
    { L"Hiryu Structures - Yellow",        LandMaker_A_STRUCTURE(0x0d2d34) }, // [sic], only yellow unique
    { L"Hiryu/Soumei Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2db4) },
    { L"Hiryu/Soumei Structures - Purple", LandMaker_A_STRUCTURE(0x01d130) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01ceb0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x029030) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x029130) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x023a30) },
};
const sGame_PaletteDataset LandMaker_A_AIFA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019f30) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x017d30) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01adb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017fb0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0194b0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2e34) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x016fb0) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01a1b0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x028b30) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x028c30) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x028430) },
};
const sGame_PaletteDataset LandMaker_A_SOUMEI_PALETTES[] =
{
    { L"Soumei Structures - Yellow",        LandMaker_A_STRUCTURE(0x01dd30) }, // [sic], only yellow unique
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01b6b0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x023e30) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x024b30) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x025630) },
};
const sGame_PaletteDataset LandMaker_A_RENKI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01dbb0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01d630) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01dcb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x01d6b0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01ddb0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2eb4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01d730) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01bab0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x027430) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x027330) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x027730) },
};
const sGame_PaletteDataset LandMaker_A_YOUEN_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019eb0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x017cb0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01ad30) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017f30) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x019ab0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2f34) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x0197b0) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01c3b0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x025c30) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025d30) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x025830) },
};
const sGame_PaletteDataset LandMaker_A_KOUKO_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019db0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x018730) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01abb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x018130) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x018cb0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2fb4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x018a30) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f4b0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x029730) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x029630) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x029d30) },
};
const sGame_PaletteDataset LandMaker_A_RINREI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019e30) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x017bb0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01afb0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x0181b0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0195b0) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d3034) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x019830) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f030) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x025330) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025e30) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x025530) },
};
const sGame_PaletteDataset LandMaker_A_ROUSHINSHI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01af30) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x018830) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01ae30) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x018230) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x019a30) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d30b4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x019130) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f6b0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x028030) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x024330) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x024430) },
};
const sGame_PaletteDataset LandMaker_A_RANJU_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01a9b0) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0187b0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01ac30) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x018930) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x019b30) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d3134) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x0183b0) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f7b0) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x027b30) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025f30) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x026e30) },
};
const sGame_PaletteDataset LandMaker_A_GAIRA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019230) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0184b0) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x0185b0) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x0180b0) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x018c30) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d31b4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x018530) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01ee30) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x027d30) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02a130) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x026f30) },
};

const sGame_PaletteDataset LandMaker_A_COMMON_PALETTES[] =
{
    { L"Tiles - Red",    LandMaker_A_TILE(0x01b0b0) },
    { L"Tiles - Blue",   LandMaker_A_TILE(0x0199b0) },
    { L"Tiles - Orange", LandMaker_A_TILE(0x01b330) },
    { L"Tiles - Green",  LandMaker_A_TILE(0x0182b0) },
    { L"Tiles - L. Blue",LandMaker_A_TILE(0x01b0f0) },
    { L"Tiles - Yellow", LandMaker_A_TILE(0x0199f0) },
    { L"Tiles - Gray",   LandMaker_A_TILE(0x01b370) },
    { L"Tiles - Purple", LandMaker_A_TILE(0x0182f0) },
    { L"Efx Corner Shine - Red",    LandMaker_A_SPARKLE(0x016830) },
    { L"Efx Corner Shine - Blue",   LandMaker_A_SPARKLE(0x0165b0) },
    { L"Efx Corner Shine - Orange", LandMaker_A_SPARKLE(0x0168b0) },
    { L"Efx Corner Shine - Green",  LandMaker_A_SPARKLE(0x016530) },
    { L"Efx Corner Shine - L. Blue",LandMaker_A_SPARKLE(0x016630) },
    { L"Efx Corner Shine - Yellow", LandMaker_A_SPARKLE(0x016730) },
    { L"Efx Corner Shine - Gray",   LandMaker_A_SPARKLE(0x0167b0) },
    { L"Efx Corner Shine - Purple", LandMaker_A_SPARKLE(0x0166b0) },
    { L"Efx Unknown - Red",    LandMaker_A_SPARKLE(0x016c30) },
    { L"Efx Unknown - Blue",   LandMaker_A_SPARKLE(0x0169b0) },
    { L"Efx Unknown - Orange", LandMaker_A_SPARKLE(0x016d30) },
    { L"Efx Unknown - Green",  LandMaker_A_SPARKLE(0x016930) },
    { L"Efx Unknown - L. Blue",LandMaker_A_SPARKLE(0x016a30) },
    { L"Efx Unknown - Yellow", LandMaker_A_SPARKLE(0x016b30) },
    { L"Efx Unknown - Gray",   LandMaker_A_SPARKLE(0x0d27b4) },
    { L"Efx Unknown - Purple", LandMaker_A_SPARKLE(0x016ab0) },
    { L"Structures - Flash", LandMaker_A_STRUCTURE(0x1d530) },
};

const sDescTreeNode LandMaker_A_HIRYU_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_HIRYU_PALETTES, ARRAYSIZE(LandMaker_A_HIRYU_PALETTES) }
};
const sDescTreeNode LandMaker_A_AIFA_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_AIFA_PALETTES, ARRAYSIZE(LandMaker_A_AIFA_PALETTES) }
};
const sDescTreeNode LandMaker_A_SOUMEI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_SOUMEI_PALETTES, ARRAYSIZE(LandMaker_A_SOUMEI_PALETTES) }
};
const sDescTreeNode LandMaker_A_RENKI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_RENKI_PALETTES, ARRAYSIZE(LandMaker_A_RENKI_PALETTES) }
};
const sDescTreeNode LandMaker_A_YOUEN_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_YOUEN_PALETTES, ARRAYSIZE(LandMaker_A_YOUEN_PALETTES) }
};
const sDescTreeNode LandMaker_A_KOUKO_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_KOUKO_PALETTES, ARRAYSIZE(LandMaker_A_KOUKO_PALETTES) }
};
const sDescTreeNode LandMaker_A_RINREI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_RINREI_PALETTES, ARRAYSIZE(LandMaker_A_RINREI_PALETTES) }
};
const sDescTreeNode LandMaker_A_ROUSHINSHI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_ROUSHINSHI_PALETTES, ARRAYSIZE(LandMaker_A_ROUSHINSHI_PALETTES) }
};
const sDescTreeNode LandMaker_A_RANJU_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_RANJU_PALETTES, ARRAYSIZE(LandMaker_A_RANJU_PALETTES) }
};
const sDescTreeNode LandMaker_A_GAIRA_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_GAIRA_PALETTES, ARRAYSIZE(LandMaker_A_GAIRA_PALETTES) }
};
const sDescTreeNode LandMaker_A_COMMON_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_A_COMMON_PALETTES, ARRAYSIZE(LandMaker_A_COMMON_PALETTES) }
};

const sDescTreeNode LandMaker_A_UNITS[] =
{
    { L"Common", DESC_NODETYPE_TREE, (void*)LandMaker_A_COMMON_COLLECTION, ARRAYSIZE(LandMaker_A_COMMON_COLLECTION) },
    { L"Hiryu", DESC_NODETYPE_TREE, (void*)LandMaker_A_HIRYU_COLLECTION, ARRAYSIZE(LandMaker_A_HIRYU_COLLECTION) },
    { L"Aifa", DESC_NODETYPE_TREE, (void*)LandMaker_A_AIFA_COLLECTION, ARRAYSIZE(LandMaker_A_AIFA_COLLECTION) },
    { L"Soumei", DESC_NODETYPE_TREE, (void*)LandMaker_A_SOUMEI_COLLECTION, ARRAYSIZE(LandMaker_A_SOUMEI_COLLECTION) },
    { L"Renki", DESC_NODETYPE_TREE, (void*)LandMaker_A_RENKI_COLLECTION, ARRAYSIZE(LandMaker_A_RENKI_COLLECTION) },
    { L"Youen", DESC_NODETYPE_TREE, (void*)LandMaker_A_YOUEN_COLLECTION, ARRAYSIZE(LandMaker_A_YOUEN_COLLECTION) },
    { L"Kouko", DESC_NODETYPE_TREE, (void*)LandMaker_A_KOUKO_COLLECTION, ARRAYSIZE(LandMaker_A_KOUKO_COLLECTION) },
    { L"Rinrei", DESC_NODETYPE_TREE, (void*)LandMaker_A_RINREI_COLLECTION, ARRAYSIZE(LandMaker_A_RINREI_COLLECTION) },
    { L"Roushinshi", DESC_NODETYPE_TREE, (void*)LandMaker_A_ROUSHINSHI_COLLECTION, ARRAYSIZE(LandMaker_A_ROUSHINSHI_COLLECTION) },
    { L"Ranju", DESC_NODETYPE_TREE, (void*)LandMaker_A_RANJU_COLLECTION, ARRAYSIZE(LandMaker_A_RANJU_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)LandMaker_A_GAIRA_COLLECTION, ARRAYSIZE(LandMaker_A_GAIRA_COLLECTION) },
};

constexpr auto LandMaker_A_NUMUNIT = ARRAYSIZE(LandMaker_A_UNITS);

constexpr auto LandMaker_A_EXTRALOC = LandMaker_A_NUMUNIT;


// 2.01 J (landmakrj) addresses
// ref table at 0x975ee
const sGame_PaletteDataset LandMaker_201J_A_HIRYU_PALETTES[] =
{
    { L"Hiryu/Soumei Structures - Red",    LandMaker_A_STRUCTURE(0x01d5bc) },
    { L"Hiryu/Soumei Structures - Blue",   LandMaker_A_STRUCTURE(0x01d1bc) },
    { L"Hiryu/Soumei Structures - Orange", LandMaker_A_STRUCTURE(0x0d2dd4) },
    { L"Hiryu/Soumei Structures - Green",  LandMaker_A_STRUCTURE(0x01d03c) },
    { L"Hiryu Structures - Yellow",        LandMaker_A_STRUCTURE(0x0d28d4) }, // [sic], only yellow unique
    { L"Hiryu/Soumei Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2954) },
    { L"Hiryu/Soumei Structures - Purple", LandMaker_A_STRUCTURE(0x01cd3c) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01cabc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x028c3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x028d3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02363c) },
};
const sGame_PaletteDataset LandMaker_201J_A_AIFA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019b3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01793c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a9bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017bbc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0190bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d29d4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x016bbc) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x019dbc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02873c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02883c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02803c) },
};
const sGame_PaletteDataset LandMaker_201J_A_SOUMEI_PALETTES[] =
{
    { L"Soumei Structures - Yellow",        LandMaker_A_STRUCTURE(0x01d93c) }, // [sic], only yellow unique
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01b2bc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x023a3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02473c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02523c) },
};
const sGame_PaletteDataset LandMaker_201J_A_RENKI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01d7bc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01d23c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01d8bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x01d2bc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01d9bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2a54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01d33c) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01b6bc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02703c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x026f3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02733c) },
};
const sGame_PaletteDataset LandMaker_201J_A_YOUEN_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019abc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0178bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a93c) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017b3c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0196bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2ad4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x0193bc) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01bfbc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02583c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02593c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02543c) },
};
const sGame_PaletteDataset LandMaker_201J_A_KOUKO_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x0199bc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01833c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a7bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017d3c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0188bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2b54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01863c) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f0bc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02933c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02923c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02993c) },
};
const sGame_PaletteDataset LandMaker_201J_A_RINREI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019a3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0177bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01abbc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017dbc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0191bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2bd4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01943c) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01ec3c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x024f3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025a3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02513c) },
};
const sGame_PaletteDataset LandMaker_201J_A_ROUSHINSHI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01ab3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01843c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01aa3c) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017e3c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01963c) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2c54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x018d3c) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f2bc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x027c3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x023f3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02403c) },
};
const sGame_PaletteDataset LandMaker_201J_A_RANJU_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01a5bc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0183bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a83c) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x01853c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01973c) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2cd4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x017fbc) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01f3bc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02773c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025b3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x026a3c) },
};
const sGame_PaletteDataset LandMaker_201J_A_GAIRA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x018e3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0180bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x0181bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017cbc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01883c) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2d54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01813c) },
    { L"Chibi Sprites",  LandMaker_A_CHIBI(0x01ea3c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02793c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x029d3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x026b3c) },
};

const sGame_PaletteDataset LandMaker_201J_A_COMMON_PALETTES[] =
{
    { L"Tiles - Red",    LandMaker_A_TILE(0x01acbc) },
    { L"Tiles - Blue",   LandMaker_A_TILE(0x0195bc) },
    { L"Tiles - Orange", LandMaker_A_TILE(0x01af3c) },
    { L"Tiles - Green",  LandMaker_A_TILE(0x017ebc) },
    { L"Tiles - L. Blue",LandMaker_A_TILE(0x01acfc) },
    { L"Tiles - Yellow", LandMaker_A_TILE(0x0195fc) },
    { L"Tiles - Gray",   LandMaker_A_TILE(0x01af7c) },
    { L"Tiles - Purple", LandMaker_A_TILE(0x017efc) },
    { L"Efx Corner Shine - Red",    LandMaker_A_SPARKLE(0x01643c) },
    { L"Efx Corner Shine - Blue",   LandMaker_A_SPARKLE(0x0161bc) },
    { L"Efx Corner Shine - Orange", LandMaker_A_SPARKLE(0x0164bc) },
    { L"Efx Corner Shine - Green",  LandMaker_A_SPARKLE(0x01613c) },
    { L"Efx Corner Shine - L. Blue",LandMaker_A_SPARKLE(0x01623c) },
    { L"Efx Corner Shine - Yellow", LandMaker_A_SPARKLE(0x01633c) },
    { L"Efx Corner Shine - Gray",   LandMaker_A_SPARKLE(0x0163bc) },
    { L"Efx Corner Shine - Purple", LandMaker_A_SPARKLE(0x0162bc) },
    { L"Efx Unknown - Red",    LandMaker_A_SPARKLE(0x01683c) },
    { L"Efx Unknown - Blue",   LandMaker_A_SPARKLE(0x0165bc) },
    { L"Efx Unknown - Orange", LandMaker_A_SPARKLE(0x01693c) },
    { L"Efx Unknown - Green",  LandMaker_A_SPARKLE(0x01653c) },
    { L"Efx Unknown - L. Blue",LandMaker_A_SPARKLE(0x01664c) },
    { L"Efx Unknown - Yellow", LandMaker_A_SPARKLE(0x01674c) },
    { L"Efx Unknown - Gray",   LandMaker_A_SPARKLE(0x0d2354) },
    { L"Efx Unknown - Purple", LandMaker_A_SPARKLE(0x0166bc) },
    { L"Structures - Flash", LandMaker_A_STRUCTURE(0x1d13c) },
};

const sDescTreeNode LandMaker_201J_A_HIRYU_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_HIRYU_PALETTES, ARRAYSIZE(LandMaker_201J_A_HIRYU_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_AIFA_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_AIFA_PALETTES, ARRAYSIZE(LandMaker_201J_A_AIFA_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_SOUMEI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_SOUMEI_PALETTES, ARRAYSIZE(LandMaker_201J_A_SOUMEI_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_RENKI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_RENKI_PALETTES, ARRAYSIZE(LandMaker_201J_A_RENKI_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_YOUEN_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_YOUEN_PALETTES, ARRAYSIZE(LandMaker_201J_A_YOUEN_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_KOUKO_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_KOUKO_PALETTES, ARRAYSIZE(LandMaker_201J_A_KOUKO_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_RINREI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_RINREI_PALETTES, ARRAYSIZE(LandMaker_201J_A_RINREI_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_ROUSHINSHI_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_ROUSHINSHI_PALETTES, ARRAYSIZE(LandMaker_201J_A_ROUSHINSHI_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_RANJU_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_RANJU_PALETTES, ARRAYSIZE(LandMaker_201J_A_RANJU_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_GAIRA_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_GAIRA_PALETTES, ARRAYSIZE(LandMaker_201J_A_GAIRA_PALETTES) }
};
const sDescTreeNode LandMaker_201J_A_COMMON_COLLECTION[] =
{
    { L"Normal", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_COMMON_PALETTES, ARRAYSIZE(LandMaker_201J_A_COMMON_PALETTES) }
};

const sDescTreeNode LandMaker_201J_A_UNITS[] =
{
    { L"Common", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_COMMON_COLLECTION, ARRAYSIZE(LandMaker_201J_A_COMMON_COLLECTION) },
    { L"Hiryu", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_HIRYU_COLLECTION, ARRAYSIZE(LandMaker_201J_A_HIRYU_COLLECTION) },
    { L"Aifa", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_AIFA_COLLECTION, ARRAYSIZE(LandMaker_201J_A_AIFA_COLLECTION) },
    { L"Soumei", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_SOUMEI_COLLECTION, ARRAYSIZE(LandMaker_201J_A_SOUMEI_COLLECTION) },
    { L"Renki", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_RENKI_COLLECTION, ARRAYSIZE(LandMaker_201J_A_RENKI_COLLECTION) },
    { L"Youen", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_YOUEN_COLLECTION, ARRAYSIZE(LandMaker_201J_A_YOUEN_COLLECTION) },
    { L"Kouko", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_KOUKO_COLLECTION, ARRAYSIZE(LandMaker_201J_A_KOUKO_COLLECTION) },
    { L"Rinrei", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_RINREI_COLLECTION, ARRAYSIZE(LandMaker_201J_A_RINREI_COLLECTION) },
    { L"Roushinshi", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_ROUSHINSHI_COLLECTION, ARRAYSIZE(LandMaker_201J_A_ROUSHINSHI_COLLECTION) },
    { L"Ranju", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_RANJU_COLLECTION, ARRAYSIZE(LandMaker_201J_A_RANJU_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)LandMaker_201J_A_GAIRA_COLLECTION, ARRAYSIZE(LandMaker_201J_A_GAIRA_COLLECTION) },
};

constexpr auto LandMaker_201J_A_NUMUNIT = ARRAYSIZE(LandMaker_201J_A_UNITS);

constexpr auto LandMaker_201J_A_EXTRALOC = LandMaker_201J_A_NUMUNIT;
