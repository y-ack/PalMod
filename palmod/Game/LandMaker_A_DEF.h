#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to NEWGAME_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

// ref table at 0x975ee
#define LandMaker_A_STRUCTURE(addr) addr, addr + 0x20*4
#define LandMaker_A_PORTRAIT(addr) addr, addr + 0x40*4
#define LandMaker_A_TILE(addr) addr, addr + 0x10*4

const sGame_PaletteDataset LandMaker_A_HIRYU_PALETTES[] =
{
    { L"Hiryu/Soumei Structures - Red",    LandMaker_A_STRUCTURE(0x01d5bc) },
    { L"Hiryu/Soumei Structures - Blue",   LandMaker_A_STRUCTURE(0x01d1bc) },
    { L"Hiryu/Soumei Structures - Orange", LandMaker_A_STRUCTURE(0x0d2dd4) },
    { L"Hiryu/Soumei Structures - Green",  LandMaker_A_STRUCTURE(0x01d03c) },
    { L"Hiryu Structures - Yellow",        LandMaker_A_STRUCTURE(0x0d28d4) }, // [sic], only yellow unique
    { L"Hiryu/Soumei Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2954) },
    { L"Hiryu/Soumei Structures - Purple", LandMaker_A_STRUCTURE(0x01cd3c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x028c3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x028d3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02363c) },
};
const sGame_PaletteDataset LandMaker_A_AIFA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019b3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01793c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a9bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017bbc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0190bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d29d4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x016bbc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02873c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02883c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02803c) },
};
const sGame_PaletteDataset LandMaker_A_SOUMEI_PALETTES[] =
{
    { L"Soumei Structures - Yellow",        LandMaker_A_STRUCTURE(0x01d93c) }, // [sic], only yellow unique
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x023a3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02473c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02523c) },
};
const sGame_PaletteDataset LandMaker_A_RENKI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01d7bc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01d23c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01d8bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x01d2bc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01d9bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2a54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01d33c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02703c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x026f3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02733c) },
};
const sGame_PaletteDataset LandMaker_A_YOUEN_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019abc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0178bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a93c) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017b3c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0196bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2ad4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x0193bc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02583c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02593c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02543c) },
};
const sGame_PaletteDataset LandMaker_A_KOUKO_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x0199bc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01833c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a7bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017d3c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0188bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2b54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01863c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02933c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x02923c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02993c) },
};
const sGame_PaletteDataset LandMaker_A_RINREI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x019a3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0177bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01abbc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017dbc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x0191bc) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2bd4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01943c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x024f3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025a3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02513c) },
};
const sGame_PaletteDataset LandMaker_A_ROUSHINSHI_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01ab3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x01843c) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01aa3c) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017e3c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01963c) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2c54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x018d3c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x027c3c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x023f3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x02403c) },
};
const sGame_PaletteDataset LandMaker_A_RANJU_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x01a5bc) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0183bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x01a83c) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x01853c) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01973c) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2cd4) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x017fbc) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02773c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x025b3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x026a3c) },
};
const sGame_PaletteDataset LandMaker_A_GAIRA_PALETTES[] =
{
    { L"Structures - Red",    LandMaker_A_STRUCTURE(0x018e3c) },
    { L"Structures - Blue",   LandMaker_A_STRUCTURE(0x0180bc) },
    { L"Structures - Orange", LandMaker_A_STRUCTURE(0x0181bc) },
    { L"Structures - Green",  LandMaker_A_STRUCTURE(0x017cbc) },
    { L"Structures - Yellow", LandMaker_A_STRUCTURE(0x01883c) },
    { L"Structures - Gray",   LandMaker_A_STRUCTURE(0x0d2d54) },
    { L"Structures - Purple", LandMaker_A_STRUCTURE(0x01813c) },
    { L"Portrait 1",     LandMaker_A_PORTRAIT(0x02793c) },
    { L"Portrait 2",     LandMaker_A_PORTRAIT(0x029d3c) },
    { L"Portrait 3",     LandMaker_A_PORTRAIT(0x026b3c) },
};

const sGame_PaletteDataset LandMaker_A_COMMON_PALETTES[] =
{
    { L"Tiles - Red",    LandMaker_A_TILE(0x01acbc) },
    { L"Tiles - Blue",   LandMaker_A_TILE(0x0195bc) },
    { L"Tiles - Orange", LandMaker_A_TILE(0x01af3c) },
    { L"Tiles - Green",  LandMaker_A_TILE(0x017ebc) },
    { L"Tiles - L. Blue",LandMaker_A_TILE(0x01acfc) },
    { L"Tiles - Yellow", LandMaker_A_TILE(0x0195fc) },
    { L"Tiles - Gray",   LandMaker_A_TILE(0x01af7c) },
    { L"Tiles - Purple", LandMaker_A_TILE(0x017efc) },
    { L"Structures - Flash", LandMaker_A_STRUCTURE(0x1d13c) },
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
