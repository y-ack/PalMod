#pragma once

enum Supported_MSHVSF_7B_PaletteListIndex
{
    index_MSHVSF_7B_Extras,
    index_MSHVSF_7B_Last
};

constexpr auto MSHVSF_A_NUM_IND_7B = index_MSHVSF_7B_Last;

constexpr auto MSHVSF_A_EXTRALOC_7B = MSHVSF_A_NUM_IND_7B;

const std::vector<uint16_t> MSHVSF_A_IMGIDS_USED =
{
    indexCPS2Sprites_Ryu,
    indexCPS2Sprites_Zangief,
    indexCPS2Sprites_Cyclops,
    indexCPS2Sprites_Wolverine,
    indexCPS2Sprites_CapAm,
    indexCPS2Sprites_Spidey,
    indexCPS2Sprites_Hulk,
    indexCPS2Sprites_Akuma,
    indexCPS2Sprites_ChunLi,
    indexCPS2Sprites_Charlie,
    indexCPS2Sprites_Sakura,
    indexCPS2Sprites_Dan,
    indexCPS2Sprites_Dhalsim,
    indexCPS2Sprites_Bison,
    indexCPS2Sprites_Ken,
    indexCPS2Sprites_Shuma,
    indexCPS2Sprites_OmegaRed,
    indexCPS2Sprites_Blackheart,
    indexCPS2Sprites_Apocalypse,       // 0x4f
    indexCPS2Sprites_CyberAkuma,
    indexCPS2Sprites_Norimaro,
    indexCPS2Sprites_MSHVSFAssets,
};

#pragma region SecondaryPaletteEffects

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Cyclops =
{
    // there are 8 intro frames
    { SUPP_NODE, 0x04, 8,
        MOD_LUM, 1, 15, NEG + 3 },
    { SUPP_NODE, 0x05, 8,
        MOD_LUM, 1, 15, NEG + 7 },
    { SUPP_NODE, 0x06, 8,
        MOD_LUM, 1, 15, NEG + 11 },
    { SUPP_NODE, 0x07, 8,
        MOD_LUM, 1, 15, NEG + 17 },
    { SUPP_NODE, 0x08, 8,
        MOD_LUM, 1, 15, NEG + 24 },
    { SUPP_NODE, 0x09, 8,
        MOD_LUM, 1, 15, NEG + 30 },
    { SUPP_NODE, 0x0a, 8,
        MOD_LUM, 1, 15, NEG + 33 },
    { SUPP_NODE, 0x0b, 8,
        MOD_LUM, 1, 15, NEG + 39 },

    // Mega Optic Blast Stance
    // default color slightly darkened
    { SUPP_NODE, 0x0c, 2,
        MOD_LUM, 1, 15, NEG + 2 },
    // default color with red tint
    { SUPP_NODE, 0x0d, 2,
        MOD_TINT, 1, 15, 1, 5, NEG + 1, NEG + 1 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Dhalsim =
{
    // 5 teleport frames
    { SUPP_NODE, 0x03, 5,
        MOD_LUM, 1, 15, 15 },
    { SUPP_NODE, 0x04, 5,
        MOD_LUM, 1, 15, 27 },
    { SUPP_NODE, 0x05, 5,
        MOD_LUM, 1, 15, 42 },
    { SUPP_NODE, 0x06, 5,
        MOD_LUM, 1, 15, 65 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Norimaro =
{
    // Throw rage
    { SUPP_NODE, 0x01, 2,
        MOD_TINT, 2, 5, 1, 3, NEG + 3, NEG + 3 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_OmegaRed =
{
    //Omega Red: intro frames
    { SUPP_NODE, 0x01, 4,
            MOD_LUM, 1, 15, 25 + NEG },
    { SUPP_NODE, 0x02, 4,
            MOD_LUM, 1, 15, 12 + NEG },
    { SUPP_NODE, 0x03, 4,
            MOD_LUM, 1, 15, 9 + NEG },
    { SUPP_NODE, 0x04, 4,
            MOD_LUM, 1, 15, 5 + NEG },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Sakura =
{
    //Kei should have the same outfit
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x02, 2,
        MOD_COPY, 9, 7, 9 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Shuma =
{
    // We don't expose the unused blue palettes here, so this sort is different than MSH
    // 
    // Dash/Guard: Extra 01
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x01, 8,
        MOD_COPY, 1, 8, 1 },

    // Stance (after FP): 5 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x03, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x04, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x05, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x06, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x07, 0x30, MOD_COPY, 2, 7, 2 },

    // Stone Drop (d+HK): 5 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x08, 0x30,
        MOD_COPY, 9, 3, 9 },
    { SUPP_NODE, 0x09, 0x30,
        MOD_SAT, 1, 8, NEG + 70,
        MOD_LUM, 1, 8, 5 },
    { SUPP_NODE, 0x0a, 0x30,
        MOD_SAT, 1, 8, NEG + 55,
        MOD_LUM, 1, 8, 5 },
    { SUPP_NODE, 0x0b, 0x30,
        MOD_SAT, 1, 8, NEG + 30,
        MOD_LUM, 1, 8, 5 },
    { SUPP_NODE, 0x0c, 0x30 },

    // 10 unexposed blue palettes
    // 10 unchanged life drain palettes

    // HP Flash frames: 7 frames
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x17, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x18, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x19, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1a, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1b, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1c, 0x30, MOD_COPY, 2, 7, 2 },
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1d, 0x30, MOD_COPY, 2, 7, 2 },

    // Chaos Dimension: 5 paired frames: same sort as MvC2
    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1e, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 65,
        MOD_LUM, 2, 7, 17,
        MOD_LUM, 9, 3, 10 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x1f, 0x30,
        MOD_COPY, 1, 8, 1,
        MOD_LUM, 1, 8, 5 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x20, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 45,
        MOD_LUM, 2, 7, 13 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x21, 0x30,
        MOD_COPY, 1, 8, 1,
        MOD_LUM, 1, 8, 10 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x22, 0x30,
        MOD_COPY, 1, 11, 1,
        MOD_SAT, 2, 7, NEG + 35,
        MOD_LUM, 2, 7, 14 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x23, 0x30,
        MOD_COPY, 1, 8, 1,
        MOD_LUM, 1, 8, 15 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x24, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_COPY, 9, 3, 9,
        MOD_SAT, 2, 7, NEG + 25,
        MOD_LUM, 2, 7, 17 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x25, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_LUM, 1, 8, 20 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x26, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_COPY, 9, 3, 9,
        MOD_SAT, 2, 7, NEG + 15,
        MOD_LUM, 2, 7, 20,
        MOD_LUM, 9, 3, 10 },

    { SUPP_NODE | SUPP_NODE_NOCOPY, 0x27, 0x30,
    // the skin highlight is flipped here
        MOD_COPY, 1, 1, 1,
        MOD_COPY, 2, 1, 8,
        MOD_COPY, 3, 1, 7,
        MOD_COPY, 4, 1, 6,
        MOD_COPY, 5, 1, 5,
        MOD_COPY, 6, 1, 4,
        MOD_COPY, 7, 1, 3,
        MOD_COPY, 8, 1, 2,
        MOD_LUM, 1, 8, 25 },

    // Mystic Smash Shadows
    { SUPP_NODE, 0x28, 0x30,
        MOD_LUM, 1, 15, NEG + 20 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Spidey =
{
    // Taunt balloon: we don't touch

    // Intro
    { SUPP_NODE, 0x03, 16,
        MOD_LUM, 01, 10, NEG + 29 },
    { SUPP_NODE, 0x04, 16,
        MOD_LUM, 01, 10, NEG + 23 },
    { SUPP_NODE, 0x05, 16,
        MOD_LUM, 01, 10, NEG + 17 },
    { SUPP_NODE, 0x06, 16,
        MOD_LUM, 01, 10, NEG + 12 },
    { SUPP_NODE, 0x07, 16,
        MOD_LUM, 01, 10, NEG + 8 },
    { SUPP_NODE, 0x08, 16,
        MOD_LUM, 01, 10, NEG + 7 },
    { SUPP_NODE, 0x09, 16,
        MOD_LUM, 01, 10, NEG + 5 },
    { SUPP_NODE, 0x0a, 16,
        MOD_LUM, 01, 10, NEG + 3 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Wolverine =
{
    // his berserker barrage trails a bit of his costume.
    { SUPP_NODE | SUPP_NODE_NOCOPY, 2, 8,
        MOD_COPY,  2, 1, 12,
        MOD_COPY, 11, 1, 13,
        MOD_COPY, 10, 1, 14,
        MOD_COPY,  9, 1, 15 },
};

const std::vector<std::vector<uint16_t>> paletteBuddy_MSHVSF_Zangief =
{
    // 3 FAB rage palettes
    { SUPP_NODE, 0x03, 3,
        MOD_TINT, 1, 7, 1, 2, NEG + 2, NEG + 2 }, // ~15% tint
    { SUPP_NODE, 0x04, 3,
        MOD_TINT, 1, 7, 1, 4, NEG + 4, NEG + 4 }, // ~35% tint
    { SUPP_NODE, 0x05, 3,
        MOD_TINT, 1, 7, 1, 7, NEG + 6, NEG + 6 }, // ~75% tint
};

const stPaletteProcessingInformation secondaryMSHVSFCyclopsEffects{ paletteBuddy_MSHVSF_Cyclops };
const stPaletteProcessingInformation secondaryMSHVSFDhalsimEffects{ paletteBuddy_MSHVSF_Dhalsim };
const stPaletteProcessingInformation secondaryMSHVSFNorimaroEffects{ paletteBuddy_MSHVSF_Norimaro };
const stPaletteProcessingInformation secondaryMSHVSFOmegaRedEffects{ paletteBuddy_MSHVSF_OmegaRed };
const stPaletteProcessingInformation secondaryMSHVSFSakuraEffects{ paletteBuddy_MSHVSF_Sakura };
const stPaletteProcessingInformation secondaryMSHVSFShumaEffects{ paletteBuddy_MSHVSF_Shuma };
const stPaletteProcessingInformation secondaryMSHVSFSpideyEffects{ paletteBuddy_MSHVSF_Spidey };
const stPaletteProcessingInformation secondaryMSHVSFWolverineEffects{ paletteBuddy_MSHVSF_Wolverine };
const stPaletteProcessingInformation secondaryMSHVSFZangiefEffects{ paletteBuddy_MSHVSF_Zangief };

#pragma endregion

const sGame_PaletteDataset MSHVSF_A_APOCALYPSE_PALETTES_SHARED[] =
{
    { L"Small Body (Intro)", 0x71ECc, 0x71EEc, indexCPS2Sprites_Apocalypse, 0x00 },
    { L"Giant Head",         0x71E8c, 0x71EAc, indexCPS2Sprites_Apocalypse, 0x01 },
    { L"Giant Body",         0x59EF2, 0x59F32, indexCPS2Sprites_Apocalypse, 0x03 },
    { L"Giant Arm",          0x71E6c, 0x71E8c, indexCPS2Sprites_Apocalypse, 0x02 },
    { L"Shoulder Gun",       0x71EAc, 0x71ECc, indexCPS2Sprites_Apocalypse, 0x04 },
    { L"Shockwave",          0x71EEc, 0x71F0c },
    { L"?",                  0x71F0c, 0x71F2c },
    { L"Apocalypse Drone",   0x71F2c, 0x71F4c, indexCPS2Sprites_Apocalypse, 0x05 },
    { L"Hand: Mace and Drill", 0x71F4c, 0x71F6c, indexCPS2Sprites_Apocalypse, 0x06 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7340c, 0x7342c, indexCPS2Sprites_Spidey },
    { L"Extra 01: webs",          0x7342c, 0x7344c, indexCPS2Sprites_Spidey, 2 },
};

const sGame_PaletteDataset MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7346c, 0x7348c, indexCPS2Sprites_Spidey },
    { L"Extra 02: webs",         0x7348c, 0x734Ac, indexCPS2Sprites_Spidey, 2 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7258c, 0x725Ac, indexCPS2Sprites_Blackheart },
    { L"Extra 01",               0x725Ac, 0x725Cc },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x725Ec, 0x7260c, indexCPS2Sprites_Blackheart },
    { L"Extra 02",               0x7260c, 0x7262c },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7334c, 0x7336c, indexCPS2Sprites_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x733Ac, 0x733Cc, indexCPS2Sprites_Blackheart },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED[] =
{
    //{ L"P1 Extras 1?", 0x76BEc, 0x76C0c }, // doesn't match mvc2 anything bugbug
    { L"P1 HP/HK Demons", 0x769Cc, 0x769Ec, indexCPS2Sprites_Blackheart, 0x02 },
    { L"Blackheart P1 HP/HK Demons (hurt)", 0x725Cc, 0x725Ec, indexCPS2Sprites_Blackheart, 0x02 },
    { L"Mephisto P1 HP/HK Demons (hurt)", 0x7338c, 0x733Ac, indexCPS2Sprites_Blackheart, 0x02 },
    { L"P2 HP/HK Demons", 0x76B4c, 0x76B6c, indexCPS2Sprites_Blackheart, 0x02 },
    { L"Blackheart P2 HP/HK Demons (hurt)", 0x7262c, 0x7264c, indexCPS2Sprites_Blackheart, 0x02 },
    { L"Mephisto P2 HP/HK Demons (hurt)", 0x733Ec, 0x7340c, indexCPS2Sprites_Blackheart, 0x02 },
    { L"HCF+P Dark Thunder", 0x769Ec, 0x76A0c, indexCPS2Sprites_Blackheart, 0x01 },
    { L"HCB+LP (Thunder Inferno)", 0x76A0c, 0x76A2c, indexCPS2Sprites_Blackheart, 0x09 },
    { L"HCB+MP (Ice Inferno)", 0x76A2c, 0x76A4c, indexCPS2Sprites_Blackheart, 0x08 },
    { L"HCB+HP (Flame Inferno)", 0x76A4c, 0x76A6c, indexCPS2Sprites_Blackheart, 0x0A },
    { L"Armageddon Meteors (QCF+3P)", 0x76A8c, 0x76AAc, indexCPS2Sprites_Blackheart, 0x0B },
    { L"Heart of Darkness (QCF+3K)", 0x76BAc, 0x76BCc },
    { L"j.MP Lightning (All)", 0x76BCc, 0x76BEc, indexCPS2Sprites_Blackheart, 0x0D },
    { L"MP/HP Throw (Ground)", 0x76AAc, 0x76ACc, indexCPS2Sprites_Blackheart, 0x0C },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",           0x7210c, 0x7212c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P1 Shield",                  0x7212c, 0x7214c, indexCPS2Sprites_CapAm, 1 },
    { L"P1 Charging Star",           0x7214c, 0x7216c, indexCPS2Sprites_CapAm, 2 },

};

const sGame_PaletteDataset MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",            0x7216c, 0x7218c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P2 Shield",                  0x7218c, 0x721Ac, indexCPS2Sprites_CapAm, 1 },
    { L"P2 Charging Star",           0x721Ac, 0x721Cc, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",   0x727Cc, 0x727Ec, indexCPS2Sprites_ChunLi, 0, &pairNext },
    { L"P1 Keiokuken (shades)", 0x727Ec, 0x7280c, indexCPS2Sprites_ChunLi, 1 },
    { L"P1 Kikosho",         0x7280c, 0x7282c, indexCPS2Sprites_ChunLi, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",    0x7282c, 0x7284c, indexCPS2Sprites_ChunLi, 0, &pairNext },
    { L"P2 Keiokuken (shades)", 0x7284c, 0x7286c, indexCPS2Sprites_ChunLi, 1 },
    { L"P2 Kikosho",         0x7286c, 0x7288c, indexCPS2Sprites_ChunLi, 2 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)", 0x72ECc, 0x72EEc, indexCPS2Sprites_CyberAkuma, 0, &pairNext },
    { L"P1 Machinery, Hadouken 2", 0x72F0c, 0x72F2c, indexCPS2Sprites_CyberAkuma, 1 },
    { L"P1 Hadouken 1 Tatsu Flames", 0x72EEc, 0x72F0c, indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x72F2c, 0x72F4c, indexCPS2Sprites_CyberAkuma, 0, &pairNext },
    { L"P2 Machinery, Hadouken 2", 0x72F6c, 0x72F8c, indexCPS2Sprites_CyberAkuma, 1 },
    { L"P2 Hadouken 1 Tatsu Flames", 0x72F4c, 0x72F6c, indexCPS2Sprites_Akuma, 1 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)", 0x71F8c, 0x71FAc, indexCPS2Sprites_Cyclops, 0, &pairNext, &secondaryMSHVSFCyclopsEffects },
    { L"P1 HK Extra", 0x71FAc, 0x71FCc, indexCPS2Sprites_Cyclops, 1 },
    { L"P1 Optic Blast Super", 0x71FCc, 0x71FEc, indexCPS2Sprites_Cyclops, 2 },
    // ? don't know what this maps to
    // ? don't know what this maps to
    { L"P1 Laser FX", 0x7208C, 0x720AC, indexCPS2Sprites_Cyclops, 3 },
    { L"P1 Intro 1", 0x7616c, 0x7618c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 2", 0x7618c, 0x761Ac, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 3", 0x761Ac, 0x761Cc, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 4", 0x761Cc, 0x761Ec, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 5", 0x761Ec, 0x7620c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 6", 0x7620c, 0x7622c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 7", 0x7622c, 0x7624c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Intro 8", 0x7624c, 0x7626c, indexCPS2Sprites_Cyclops, 12 },
    { L"P1 Extra Lighting", 0x7640c, 0x7642c, indexCPS2Sprites_Cyclops, 13 },
    { L"P1 Optic Light Extra?", 0x7642c, 0x7644c, indexCPS2Sprites_Cyclops, 13 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x71FEc, 0x7200c, indexCPS2Sprites_Cyclops, 0, &pairNext, &secondaryMSHVSFCyclopsEffects },
    { L"P2 HK Extra", 0x7200c, 0x7202c, indexCPS2Sprites_Cyclops, 1 },
    { L"P2 Optic Blast Super", 0x7202c, 0x7204c, indexCPS2Sprites_Cyclops, 2 },
    // ? don't know what this maps to
    // ? don't know what this maps to
    { L"P2 Laser FX", 0x720Ec, 0x7210c, indexCPS2Sprites_Cyclops, 3 },
    { L"P2 Intro 1", 0x7626c, 0x7628c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 2", 0x7628c, 0x762Ac, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 3", 0x762Ac, 0x762Cc, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 4", 0x762Cc, 0x762Ec, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 5", 0x762Ec, 0x7630c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 6", 0x7630c, 0x7632c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 7", 0x7632c, 0x7634c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Intro 8", 0x7634c, 0x7636c, indexCPS2Sprites_Cyclops, 12 },
    { L"P2 Extra Lighting 2", 0x7644c, 0x7646c, indexCPS2Sprites_Cyclops, 13 },
    { L"P2 Optic Light Extra?", 0x7646c, 0x7648c, indexCPS2Sprites_Cyclops, 13 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_PALETTES_SHARED[] =
{
    { L"Optic Blast / Optic Bullet 1/5 (shared)", 0x7636c, 0x7638c, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 2/5 (shared)", 0x7638c, 0x763Ac, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 3/5 (shared)", 0x763ac, 0x763cc, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 4/5 (shared)", 0x763cc, 0x763ec, indexCPS2Sprites_Cyclops, 0x0b },
    { L"Optic Blast / Optic Bullet 5/5 (shared)", 0x763ec, 0x7640c, indexCPS2Sprites_Cyclops, 0x0b },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",  0x72E0c, 0x72E2c, indexCPS2Sprites_Dan },
    { L"P1 gadoken blue",   0x72E2c, 0x72E4c, indexCPS2Sprites_Dan, 1 },
    { L"P1 gadoken red",    0x72E4c, 0x72E6c, indexCPS2Sprites_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",   0x72E6c, 0x72E8c, indexCPS2Sprites_Dan },
    { L"P2 gadoken blue",   0x72E8c, 0x72EAc, indexCPS2Sprites_Dan, 1 },
    { L"P2 gadoken red",    0x72Eac, 0x72Ecc, indexCPS2Sprites_Dan, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",  0x7310c, 0x7312c, indexCPS2Sprites_Sakura },
    { L"P1 Hadouken",       0x7312c, 0x7314c, indexCPS2Sprites_Ken, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",   0x7316c, 0x7318c, indexCPS2Sprites_Sakura },
    { L"P2 Hadouken",       0x7318c, 0x731Ac, indexCPS2Sprites_Ken, 1 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7288c, 0x728Ac, indexCPS2Sprites_Dhalsim, 0x00, nullptr, &secondaryMSHVSFDhalsimEffects },
    { L"P1 Extras 1 Flames",      0x728Ac, 0x728Cc, indexCPS2Sprites_Dhalsim, 1 },
    { L"P1 Extras Sally",         0x728Cc, 0x728Ec, indexCPS2Sprites_Dhalsim, 2 },
    { L"P1 Teleport 1", 0x76CCc, 0x76CEc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P1 Teleport 2", 0x76CEc, 0x76D0c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P1 Teleport 3", 0x76D0c, 0x76D2c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P1 Teleport 4", 0x76D2c, 0x76D4c, indexCPS2Sprites_Dhalsim, 0xb },
    //{ L"P1 Teleport 5", 0x76D4c, 0x76D6c, indexCPS2Sprites_Dhalsim, 0xb }, // This is just the all-white frame.

};
const sGame_PaletteDataset MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x728Ec, 0x7290c, indexCPS2Sprites_Dhalsim, 0x00, nullptr, &secondaryMSHVSFDhalsimEffects },
    { L"P2 Extras 1 Flames",     0x7290c, 0x7292c, indexCPS2Sprites_Dhalsim, 1 },
    { L"P2 Extras Sally",        0x7292c, 0x7294c, indexCPS2Sprites_Dhalsim, 2 },
    { L"P2 Teleport 1",          0x76D6c, 0x76D8c, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P2 Teleport 2",          0x76D8c, 0x76DAc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P2 Teleport 3",          0x76DAc, 0x76DCc, indexCPS2Sprites_Dhalsim, 0xb },
    { L"P2 Teleport 4",          0x76DCc, 0x76DEc, indexCPS2Sprites_Dhalsim, 0xb },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72BCc, 0x72BEc, indexCPS2Sprites_Akuma },
    { L"Extra 01 Hadouken",      0x72BEc, 0x72C0c, indexCPS2Sprites_Akuma, 1 },
    { L"Extra 02",               0x72C0c, 0x72C2c },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72C2c, 0x72C4c, indexCPS2Sprites_Akuma },
    { L"Extra 01 Hadouken",      0x72C4c, 0x72C6c, indexCPS2Sprites_Akuma, 1 },
    { L"Extra 02",               0x72C6c, 0x72C8c },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x721Cc, 0x721Ec, indexCPS2Sprites_Hulk },
    { L"P1 Extras 1",             0x721Ec, 0x7220c, indexCPS2Sprites_Hulk, 1 },
    { L"P1 Extras 2",             0x7220c, 0x7222c, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_HULK_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",         0x7222c, 0x7224c, indexCPS2Sprites_Hulk },
    { L"P2 Extras 1",             0x7224c, 0x7226c, indexCPS2Sprites_Hulk, 1 },
    { L"P2 Extras 2 ",            0x7226c, 0x7228c, indexCPS2Sprites_Hulk, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7270c, 0x7272c, indexCPS2Sprites_Ken },
    { L"P1 Hadouken",             0x7272c, 0x7274c, indexCPS2Sprites_Ken, 1 },
    { L"P1 Shoryuken",            0x7274c, 0x7276c, indexCPS2Sprites_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",       0x7276c, 0x7278c, indexCPS2Sprites_Ken },
    { L"P2 Hadouken",           0x7278c, 0x727Ac, indexCPS2Sprites_Ken, 1 },
    { L"P2 Shoryuken",          0x727Ac, 0x727Cc, indexCPS2Sprites_Ken, 2 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72B0c, 0x72B2c, indexCPS2Sprites_Bison },
    { L"P1 Extras 1",            0x72B2c, 0x72B4c, indexCPS2Sprites_Bison, 0x08 },
    { L"P1 Extras 2",            0x72B4c, 0x72B6c, indexCPS2Sprites_Bison, 0x09 },
    { L"P1 Extras 3",            0x7708c, 0x770Ac, indexCPS2Sprites_Bison, 0x08 },
    { L"P1 Extras 4",            0x770Ac, 0x770Cc, indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72B6c, 0x72B8c, indexCPS2Sprites_Bison },
    { L"P2 Extras 1",            0x72B8c, 0x72BAc, indexCPS2Sprites_Bison, 0x08 },
    { L"P2 Extras 2",            0x72BAc, 0x72BCc, indexCPS2Sprites_Bison, 0x09 },
    { L"P2 Extras 3",            0x770Cc, 0x770Ec, indexCPS2Sprites_Bison, 0x08 },
    { L"P2 Extras 4",            0x770Ec, 0x7710c, indexCPS2Sprites_Bison, 0x09 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72F8c, 0x72FAc, indexCPS2Sprites_Zangief },
    { L"P1 Vodka Fire",          0x72FAc, 0x72FCc, indexCPS2Sprites_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72FEc, 0x7300c, indexCPS2Sprites_Zangief },
    { L"P2 Vodka Fire",          0x7300c, 0x7302c, indexCPS2Sprites_Zangief, 3 },
};

const sGame_PaletteDataset MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED[] =
{
    { L"P1+P2 Super Armor ",     0x7304c, 0x7306c, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x72D4c, 0x72D6c, indexCPS2Sprites_Norimaro, 0x00, nullptr, &secondaryMSHVSFNorimaroEffects },
    { L"P1 Extras 1",            0x7710c, 0x7712c, indexCPS2Sprites_Norimaro, 0x02 },
    { L"P1 Extras 2",            0x7716c, 0x7718c },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x72DAc, 0x72DCc, indexCPS2Sprites_Norimaro, 0x00, nullptr, &secondaryMSHVSFNorimaroEffects },
    { L"P2 Extras 1",            0x7718c, 0x771Ac, indexCPS2Sprites_Norimaro, 0x02 },
    { L"P2 Extras 2",            0x72DCc, 0x72DEc },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_PALETTES_EXTRAS[] =
{
    { L"P1 Extras 3",            0x72D6c, 0x72D8c },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7240c, 0x7242c, indexCPS2Sprites_OmegaRed, 0x00, nullptr, &secondaryMSHVSFOmegaRedEffects },
    { L"P1 Intro 1", 0x764Ac, 0x764Cc, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro 2", 0x764Cc, 0x764Ec, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro 3", 0x764Ec, 0x7650c, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro 4", 0x7650c, 0x7652c, indexCPS2Sprites_OmegaRed },
    { L"P1 Intro Shockwave 1", 0x7242c, 0x7244c, indexCPS2Sprites_OmegaRed, 1 },
    { L"P1 Intro Shockwave 2", 0x7244c, 0x7246c, indexCPS2Sprites_OmegaRed, 1 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",       0x7246c, 0x7248c, indexCPS2Sprites_OmegaRed, 0x00, nullptr, &secondaryMSHVSFOmegaRedEffects },
    { L"P2 Intro 1", 0x7652c, 0x7654c, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro 2", 0x7654c, 0x7656c, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro 3", 0x7656c, 0x7658c, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro 4", 0x7658c, 0x765Ac, indexCPS2Sprites_OmegaRed },
    { L"P2 Intro Shockwave 1", 0x7248c, 0x724Ac, indexCPS2Sprites_OmegaRed, 1 },
    { L"P2 Intro Shockwave 2", 0x724Ac, 0x724Cc, indexCPS2Sprites_OmegaRed, 2 },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7264c, 0x7266c, indexCPS2Sprites_Ryu },
    { L"P1 Hadouken", 0x7266c, 0x7268c, indexCPS2Sprites_Ryu, 1 },
    { L"P1 Extra 2", 0x7268c, 0x726Ac },
};

const sGame_PaletteDataset MSHVSF_A_RYU_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x726Ac, 0x726Cc, indexCPS2Sprites_Ryu },
    { L"P2 Hadouken", 0x726Cc, 0x726Ec, indexCPS2Sprites_Ryu, 1 },
    { L"P2 Extra 2", 0x726Ec, 0x7270c },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",          0x72C8c, 0x72CAc, indexCPS2Sprites_Sakura, 0x00, nullptr, &secondaryMSHVSFSakuraEffects },
    { L"P1 Extras 1 Hadouken",      0x72CAc, 0x72CCc, indexCPS2Sprites_Ken, 1 },
    { L"P1 Extras 2 Friend (Kei)",  0x77FCc, 0x77FEc, indexCPS2Sprites_Sakura, 0x09, &pairNext },
    { L"P1 Extras 3 Bag",           0x77FEc, 0x7800c, indexCPS2Sprites_Sakura, 0x0a },

    { L"P1 Extras Dark Sakura?",  0x77F6c, 0x77F8c, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",           0x72CEc, 0x72D0c, indexCPS2Sprites_Sakura, 0x00, nullptr, &secondaryMSHVSFSakuraEffects },
    { L"P2 Extras 1 Hadouken",      0x72D0c, 0x72D2c, indexCPS2Sprites_Ken, 1 },
    { L"P2 Extras 2 Friend (Kei)",  0x7800c, 0x7802c, indexCPS2Sprites_Sakura, 0x09, &pairNext },
    { L"P2 Extras 3 Bag",           0x7802c, 0x7804c, indexCPS2Sprites_Sakura, 0x0a },

    { L"P2 Extras Dark Sakura?",  0x77F8c, 0x77Fac, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_PALETTES_SHARED[] =
{
    { L"Winpose - Cherry Blossoms",  0x77Fac, 0x77Fcc, indexCPS2Sprites_Sakura, 0x08 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x731Cc, 0x731Ec, indexCPS2Sprites_Charlie },
    { L"P1 Sonic Boom", 0x731Ec, 0x7320c, indexCPS2Sprites_Charlie, 1 },
    { L"P1 Flash Kick", 0x7320c, 0x7322c, indexCPS2Sprites_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x7322c, 0x7324c, indexCPS2Sprites_Charlie },
    { L"P2 Sonic Boom", 0x7324c, 0x7326c, indexCPS2Sprites_Charlie, 1 },
    { L"P2 Flash Kick", 0x7326c, 0x7328c, indexCPS2Sprites_Charlie, 2 },
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7234c, 0x7236c, indexCPS2Sprites_Shuma, 0x00, nullptr, &secondaryMSHVSFShumaEffects },
        { L"P1 HP", 0x7236c, 0x7238c, indexCPS2Sprites_Shuma },
        { L"P1 FP / jFP / cFP / Intro", 0x7238c, 0x723Ac },

    { L"P1 Post HP Stance 1", 0x7728c, 0x772Ac, indexCPS2Sprites_Shuma },
    { L"P1 Post HP Stance 2", 0x772Ac, 0x772Cc, indexCPS2Sprites_Shuma },
    { L"P1 Post HP Stance 3", 0x772Cc, 0x772Ec, indexCPS2Sprites_Shuma },
    { L"P1 Post HP Stance 4", 0x772Ec, 0x7730c, indexCPS2Sprites_Shuma },
    { L"P1 Post HP Stance 5", 0x7730c, 0x7732c, indexCPS2Sprites_Shuma },

    { L"P1 Stone Drop 1", 0x7732c, 0x7734c, indexCPS2Sprites_Shuma },
    { L"P1 Stone Drop 2", 0x7734c, 0x7736c, indexCPS2Sprites_Shuma },
    { L"P1 Stone Drop 3", 0x7736c, 0x7738c, indexCPS2Sprites_Shuma },
    { L"P1 Stone Drop 4", 0x7738c, 0x773Ac, indexCPS2Sprites_Shuma },
    { L"P1 Stone Drop 5", 0x773Ac, 0x773Cc, indexCPS2Sprites_Shuma },

    // Unused blue region

    // HK grab region
    { L"P1 Life Drain 1", 0x7750c, 0x7752c, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 2", 0x7752c, 0x7754c, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 3", 0x7754c, 0x7756c, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 4", 0x7756c, 0x7758c, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 5", 0x7758c, 0x775Ac, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 6", 0x775Ac, 0x775Cc, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 7", 0x775Cc, 0x775Ec, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 8", 0x775Ec, 0x7760c, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 9", 0x7760c, 0x7762c, indexCPS2Sprites_Shuma },
    { L"P1 Life Drain 10", 0x7762c, 0x7764c, indexCPS2Sprites_Shuma },

    // HP flash
    { L"P1 HP Flash 1", 0x7764c, 0x7766c, indexCPS2Sprites_Shuma },
    { L"P1 HP Flash 2", 0x7766c, 0x7768c, indexCPS2Sprites_Shuma },
    { L"P1 HP Flash 3", 0x7768c, 0x776Ac, indexCPS2Sprites_Shuma },
    { L"P1 HP Flash 4", 0x776Ac, 0x776Cc, indexCPS2Sprites_Shuma },
    { L"P1 HP Flash 5", 0x776Cc, 0x776Ec, indexCPS2Sprites_Shuma },
    { L"P1 HP Flash 6", 0x776Ec, 0x7770c, indexCPS2Sprites_Shuma },
    { L"P1 HP Flash 7", 0x7770c, 0x7772c, indexCPS2Sprites_Shuma },

    { L"P1 Chaos Dimension 1", 0x7772c, 0x7774c, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension Dash 1", 0x7774c, 0x7776c, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension 2", 0x7776c, 0x7778c, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension Dash 2", 0x7778c, 0x777Ac, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension 3", 0x777Ac, 0x777Cc, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension Dash 3", 0x777Cc, 0x777Ec, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension 4", 0x777Ec, 0x7780c, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension Dash 4", 0x7780c, 0x7782c, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension 5", 0x7782c, 0x7784c, indexCPS2Sprites_Shuma },
    { L"P1 Chaos Dimension Dash 5", 0x7784c, 0x7786c, indexCPS2Sprites_Shuma },

    { L"P1 Mystic Smash", 0x7786c, 0x7788c, indexCPS2Sprites_Shuma },

    // { L"P1 Extra 11", 0x79C0c, 0x79C2c, indexCPS2Sprites_Shuma },//  this is shuma but doesn't fit.  excising until somebody tells me why they want it
};

const sGame_PaletteDataset MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK[] =
{

    { L"P2 Color (Kick)", 0x723Ac, 0x723Cc, indexCPS2Sprites_Shuma, 0x00, nullptr, &secondaryMSHVSFShumaEffects },
    { L"P2 HP", 0x723Cc, 0x723Ec, indexCPS2Sprites_Shuma },
    { L"P2 FP / jFP / cFP / Intro", 0x723Ec, 0x7240c },

    { L"P2 Post HP Stance 1", 0x7788c, 0x778Ac, indexCPS2Sprites_Shuma },
    { L"P2 Post HP Stance 2", 0x778Ac, 0x778Cc, indexCPS2Sprites_Shuma },
    { L"P2 Post HP Stance 3", 0x778Cc, 0x778Ec, indexCPS2Sprites_Shuma },
    { L"P2 Post HP Stance 4", 0x778Ec, 0x7790c, indexCPS2Sprites_Shuma },
    { L"P2 Post HP Stance 5", 0x7790c, 0x7792c, indexCPS2Sprites_Shuma },

    { L"P2 Stone Drop 1", 0x7792c, 0x7794c, indexCPS2Sprites_Shuma },
    { L"P2 Stone Drop 2", 0x7794c, 0x7796c, indexCPS2Sprites_Shuma },
    { L"P2 Stone Drop 3", 0x7796c, 0x7798c, indexCPS2Sprites_Shuma },
    { L"P2 Stone Drop 4", 0x7798c, 0x779Ac, indexCPS2Sprites_Shuma },
    { L"P2 Stone Drop 5", 0x779Ac, 0x779Cc, indexCPS2Sprites_Shuma },

    // unused 'blue range': 799ce-77b0e

    // HK grab region
    { L"P2 Life Drain 1", 0x77B0c, 0x77B2c, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 2", 0x77B2c, 0x77B4c, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 3", 0x77B4c, 0x77B6c, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 4", 0x77B6c, 0x77B8c, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 5", 0x77B8c, 0x77BAc, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 6", 0x77BAc, 0x77BCc, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 7", 0x77BCc, 0x77BEc, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 8", 0x77BEc, 0x77C0c, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 9", 0x77C0c, 0x77C2c, indexCPS2Sprites_Shuma },
    { L"P2 Life Drain 10", 0x77C2c, 0x77C4c, indexCPS2Sprites_Shuma },

    // HP flash
    { L"P2 HP Flash 1", 0x77C4c, 0x77C6c, indexCPS2Sprites_Shuma },
    { L"P2 HP Flash 2", 0x77C6c, 0x77C8c, indexCPS2Sprites_Shuma },
    { L"P2 HP Flash 3", 0x77C8c, 0x77CAc, indexCPS2Sprites_Shuma },
    { L"P2 HP Flash 4", 0x77CAc, 0x77CCc, indexCPS2Sprites_Shuma },
    { L"P2 HP Flash 5", 0x77CCc, 0x77CEc, indexCPS2Sprites_Shuma },
    { L"P2 HP Flash 6", 0x77CEc, 0x77D0c, indexCPS2Sprites_Shuma },
    { L"P2 HP Flash 7", 0x77D0c, 0x77D2c, indexCPS2Sprites_Shuma },

    { L"P2 Chaos Dimension 1", 0x77D2c, 0x77D4c, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension Dash 1", 0x77D4c, 0x77D6c, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension 2", 0x77D6c, 0x77D8c, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension Dash 2", 0x77D8c, 0x77DAc, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension 3", 0x77DAc, 0x77DCc, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension Dash 3", 0x77DCc, 0x77DEc, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension 4", 0x77DEc, 0x77E0c, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension Dash 4", 0x77E0c, 0x77E2c, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension 5", 0x77E2c, 0x77E4c, indexCPS2Sprites_Shuma },
    { L"P2 Chaos Dimension Dash 5", 0x77E4c, 0x77E6c, indexCPS2Sprites_Shuma },

    { L"P2 Mystic Smash", 0x77E6c, 0x77E8c, indexCPS2Sprites_Shuma },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH[] =
{ // 2 is web
    { L"P1 Color (Punch)", 0x724Cc, 0x724Ec, indexCPS2Sprites_Spidey, 0x00, nullptr, &secondaryMSHVSFSpideyEffects },
    { L"P1 Extras 1", 0x724Ec, 0x7250c, indexCPS2Sprites_Spidey, 0x2 },
    { L"P1 Spotlight", 0x7250c, 0x7252c, indexCPS2Sprites_Spidey, 13 },
    { L"P1 Intro 1", 0x765Cc, 0x765Ec, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 2", 0x765Ec, 0x7660c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 3", 0x7660c, 0x7662c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 4", 0x7662c, 0x7664c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 5", 0x7664c, 0x7666c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 6", 0x7666c, 0x7668c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 7", 0x7668c, 0x766Ac, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Intro 8", 0x766Ac, 0x766Cc, indexCPS2Sprites_Spidey, 0x0B },
    { L"P1 Spider symbol", 0x766cc, 0x766ec, indexCPS2Sprites_Spidey, 0x0c },
    { L"P1 Spider symbol + taunt", 0x766ec, 0x7670c, indexCPS2Sprites_Spidey, 0x0d },
};

const sGame_PaletteDataset MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)", 0x7252c, 0x7254c, indexCPS2Sprites_Spidey, 0x00, nullptr, &secondaryMSHVSFSpideyEffects },
    { L"P2 Extras 1", 0x7254c, 0x7256c, indexCPS2Sprites_Spidey, 0x2 },
    { L"P2 Spotlight", 0x7256c, 0x7258c, indexCPS2Sprites_Spidey, 13 },
    { L"P2 Intro 1", 0x767Cc, 0x767Ec, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 2", 0x767Ec, 0x7680c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 3", 0x7680c, 0x7682c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 4", 0x7682c, 0x7684c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 5", 0x7684c, 0x7686c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 6", 0x7686c, 0x7688c, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 7", 0x7688c, 0x768Ac, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Intro 8", 0x768Ac, 0x768Cc, indexCPS2Sprites_Spidey, 0x0B },
    { L"P2 Spider symbol", 0x768cc, 0x768ec, indexCPS2Sprites_Spidey, 0x0c },
    { L"P2 Spider symbol + taunt", 0x768ec, 0x7690c, indexCPS2Sprites_Spidey, 0x0d },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",        0x7328c, 0x732Ac, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P1 Shield", 0x732Ac, 0x732Cc, indexCPS2Sprites_CapAm, 1 },
    { L"P1 Charging Star", 0x732Cc, 0x732Ec, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x732Ec, 0x7330c, indexCPS2Sprites_CapAm, 0, &pairNext },
    { L"P2 Shield", 0x7330c, 0x7332c, indexCPS2Sprites_CapAm, 1 },
    { L"P2 Charging Star", 0x7332c, 0x7334c, indexCPS2Sprites_CapAm, 2 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",       0x7228c, 0x722Ac, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMSHVSFWolverineEffects },
    { L"P1 Claws", 0x722Ac, 0x722Cc, indexCPS2Sprites_Wolverine, 1 },
    { L"P1 Extras 1", 0x722Cc, 0x722Ec, indexCPS2Sprites_Wolverine, 2 },
    { L"P1 Extras 2 (Fatal Claw)", 0x7804c, 0x7806c },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x722Ec, 0x7230c, indexCPS2Sprites_Wolverine, 0, &pairNext, &secondaryMSHVSFWolverineEffects },
    { L"P2 Claws", 0x7230c, 0x7232c, indexCPS2Sprites_Wolverine, 1 },
    { L"P2 Extras 1", 0x7232c, 0x7234c, indexCPS2Sprites_Wolverine, 2 },
    { L"P2 Extras 2 (Fatal Claw)", 0x7806c, 0x7808c },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH[] =
{
    { L"P1 Color (Punch)",   0x7294c, 0x7296c, indexCPS2Sprites_Zangief, 0x00, nullptr, &secondaryMSHVSFZangiefEffects },
    { L"P1 Banishing Fist",  0x7296c, 0x7298c, indexCPS2Sprites_Zangief, 1 },
    { L"P1 Extra 2",         0x7298c, 0x729Ac },
    { L"P1 FAB 1",           0x72A4c, 0x72A6c, indexCPS2Sprites_Zangief },
    { L"P1 FAB 2",           0x72A6c, 0x72A8c, indexCPS2Sprites_Zangief },
    { L"P1 FAB 3",           0x72A8c, 0x72AAc, indexCPS2Sprites_Zangief },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK[] =
{
    { L"P2 Color (Kick)",        0x729Ac, 0x729Cc, indexCPS2Sprites_Zangief, 0x00, nullptr, &secondaryMSHVSFZangiefEffects },
    { L"P2 Banishing Fist",      0x729Cc, 0x729Ec, indexCPS2Sprites_Zangief, 1 },
    { L"P2 Extra 2",             0x729Ec, 0x72A0c },
    { L"P2 FAB 1",               0x72AAc, 0x72ACc, indexCPS2Sprites_Zangief },
    { L"P2 FAB 2",               0x72ACc, 0x72AEc, indexCPS2Sprites_Zangief },
    { L"P2 FAB 3",               0x72AEc, 0x72B0c, indexCPS2Sprites_Zangief },
};

#ifdef UNKNOWN_STATUS_PALETES
// maybe cyber akuma? unclear
{ L"Burning Light", 0x73acc + (0 * 0x20), 0x73aec + (0 * 0x20), indexCPS2Sprites_Akuma },
{ L"Burning Dark",   0x73acc + (1 * 0x20), 0x73aec + (1 * 0x20), indexCPS2Sprites_Akuma },
{ L"Shocked Light",  0x73acc + (2 * 0x20), 0x73aec + (2 * 0x20), indexCPS2Sprites_Akuma },
{ L"Shocked Dark",   0x73acc + (3 * 0x20), 0x73aec + (3 * 0x20), indexCPS2Sprites_Akuma },
{ L"Dark Burn Light",0x73acc + (4 * 0x20), 0x73aec + (4 * 0x20), indexCPS2Sprites_Akuma },
{ L"Dark Burn Dark", 0x73acc + (5 * 0x20), 0x73aec + (5 * 0x20), indexCPS2Sprites_Akuma },
{ L"Kinetic 1 (Unused)",      0x73acc + (6 * 0x20), 0x73aec + (6 * 0x20), indexCPS2Sprites_Akuma },
{ L"Kinetic 2 (Unused)",      0x73acc + (7 * 0x20), 0x73aec + (7 * 0x20), indexCPS2Sprites_Akuma },
{ L"Kinetic 3 (Unused)",      0x73acc + (8 * 0x20), 0x73aec + (8 * 0x20), indexCPS2Sprites_Akuma },
#endif

const sGame_PaletteDataset MSHVSF_A_DAN_STATUS[] =
{
    { L"Dan Burn Light", 0x74c0c, 0x74c2c, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Burn Dark", 0x74c2c, 0x74c4c, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Shocked Light", 0x74c4c, 0x74c6c, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Shocked Dark", 0x74c6c, 0x74c8c, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Dark Burn Light", 0x74c8c, 0x74cac, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Dark Burn Dark", 0x74cac, 0x74ccc, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Light Super Trail", 0x739cc, 0x739ec, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan Dark Super Trail", 0x739ec, 0x73a0c, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CYBERAKUMA_STATUS[] =
{
    { L"Cyber Akuma - Burn Light", 0x74ccc, 0x74cec, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Machinery - Burn Light", 0x74dec, 0x74e0c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Cyber Akuma - Burn Dark", 0x74cec, 0x74d0c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Machinery - Burn Dark", 0x74e0c, 0x74e2c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Cyber Akuma - Shocked Light", 0x74d0c, 0x74d2c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Machinery - Shocked Light", 0x74e2c, 0x74e4c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Cyber Akuma - Shocked Dark", 0x74d2c, 0x74d4c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Machinery - Shocked Dark", 0x74e4c, 0x74e6c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Cyber Akuma - Dark Burn Light", 0x74d4c, 0x74d6c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Machinery - Dark Burn Light", 0x74e6c, 0x74e8c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Cyber Akuma - Dark Burn Dark", 0x74d6c, 0x74d8c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Machinery - Dark Burn Dark", 0x74e8c, 0x74eac, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },

    { L"Cyber Akuma Light Super Trail", 0x73a0c, 0x73a2c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Arm Light Super Trail", 0x73a4c, 0x73a6c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
    { L"Cyber Akuma Dark Super Trail", 0x73a2c, 0x73a4c, indexCPS2Sprites_CyberAkuma, 0x00, &pairNext },
    { L"Cyber Akuma Arm Dark Super Trail", 0x73a6c, 0x73a8c, indexCPS2Sprites_CyberAkuma, 0x01, &pairPrevious },
};

const sGame_PaletteDataset MSHVSF_A_SHADOW_STATUS[] =
{
    { L"Burning Light",  0x73acc + (24 * 0x20), 0x73aec + (24 * 0x20), indexCPS2Sprites_Charlie },
    { L"Burning Dark",   0x73acc + (25 * 0x20), 0x73aec + (25 * 0x20), indexCPS2Sprites_Charlie },
    { L"Shocked Light",  0x73acc + (26 * 0x20), 0x73aec + (26 * 0x20), indexCPS2Sprites_Charlie },
    { L"Shocked Dark",   0x73acc + (27 * 0x20), 0x73aec + (27 * 0x20), indexCPS2Sprites_Charlie },
    { L"Dark Burn Light",0x73acc + (28 * 0x20), 0x73aec + (28 * 0x20), indexCPS2Sprites_Charlie },
    { L"Dark Burn Dark", 0x73acc + (29 * 0x20), 0x73aec + (29 * 0x20), indexCPS2Sprites_Charlie },
    { L"Shadow Light Super Trail", 0x73a8c, 0x73aac, indexCPS2Sprites_Charlie, 0x00 },
    { L"Shadow Dark Super Trail", 0x73aac, 0x73acc, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CYCLOPS_STATUS[] =
{
    { L"Burning Light",  0x73acc + (9 * 0x20), 0x73aec + (9 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Burning Dark",   0x73acc + (10 * 0x20), 0x73aec + (10 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Shocked Light",  0x73acc + (11 * 0x20), 0x73aec + (11 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Shocked Dark",   0x73acc + (12 * 0x20), 0x73aec + (12 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Dark Burn Light",0x73acc + (13 * 0x20), 0x73aec + (13 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Dark Burn Dark", 0x73acc + (14 * 0x20), 0x73aec + (14 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Kinetic 1 (Unused)",      0x73acc + (15 * 0x20), 0x73aec + (15 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Kinetic 2 (Unused)",      0x73acc + (16 * 0x20), 0x73aec + (16 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Kinetic 3 (Unused)",      0x73acc + (17 * 0x20), 0x73aec + (17 * 0x20), indexCPS2Sprites_Cyclops },
    { L"Cyclops Light Super Trail", 0x7350c, 0x7352c, indexCPS2Sprites_Cyclops, 0x00 },
    { L"Cyclops Dark Super Trail", 0x7352c, 0x7354c, indexCPS2Sprites_Cyclops, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CAPTAINAMERICA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (18 * 0x20), 0x73aec + (18 * 0x20), indexCPS2Sprites_CapAm },
    { L"Burning Dark",   0x73acc + (19 * 0x20), 0x73aec + (19 * 0x20), indexCPS2Sprites_CapAm },
    { L"Shocked Light",  0x73acc + (20 * 0x20), 0x73aec + (20 * 0x20), indexCPS2Sprites_CapAm },
    { L"Shocked Dark",   0x73acc + (21 * 0x20), 0x73aec + (21 * 0x20), indexCPS2Sprites_CapAm },
    { L"Dark Burn Light",0x73acc + (22 * 0x20), 0x73aec + (22 * 0x20), indexCPS2Sprites_CapAm },
    { L"Dark Burn Dark", 0x73acc + (23 * 0x20), 0x73aec + (23 * 0x20), indexCPS2Sprites_CapAm },
    { L"Captain America/U.S. Agent Light Super Trail", 0x7354c, 0x7356c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Captain America/U.S. Agent Shield Super Trail (Unused)", 0x7358c, 0x735ac, indexCPS2Sprites_CapAm, 0x01, &pairPrevious },
    { L"Captain America/U.S. Agent Dark Super Trail", 0x7356c, 0x7358c, indexCPS2Sprites_CapAm, 0x00, &pairNext },
    { L"Captain America/U.S. Agent Shield Super Trail (Unused)", 0x735ac, 0x735cc, indexCPS2Sprites_CapAm, 0x01, &pairPrevious },
};

const sGame_PaletteDataset MSHVSF_A_HULK_STATUS[] =
{
    { L"Burning Light",  0x73acc + (30 * 0x20), 0x73aec + (30 * 0x20), indexCPS2Sprites_Hulk },
    { L"Burning Dark",   0x73acc + (31 * 0x20), 0x73aec + (31 * 0x20), indexCPS2Sprites_Hulk },
    { L"Shocked Light",  0x73acc + (32 * 0x20), 0x73aec + (32 * 0x20), indexCPS2Sprites_Hulk },
    { L"Shocked Dark",   0x73acc + (33 * 0x20), 0x73aec + (33 * 0x20), indexCPS2Sprites_Hulk },
    { L"Dark Burn Light",0x73acc + (34 * 0x20), 0x73aec + (34 * 0x20), indexCPS2Sprites_Hulk },
    { L"Dark Burn Dark", 0x73acc + (35 * 0x20), 0x73aec + (35 * 0x20), indexCPS2Sprites_Hulk },
    { L"Hulk Light Super Trail", 0x735cc, 0x735ec, indexCPS2Sprites_Hulk, 0x00 },
    { L"Hulk Dark Super Trail", 0x735ec, 0x7360c, indexCPS2Sprites_Hulk, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_WOLVERINE_STATUS[] =
{
    { L"Burning Light",  0x73acc + (36 * 0x20), 0x73aec + (36 * 0x20), indexCPS2Sprites_Wolverine },
    { L"Burning Dark",   0x73acc + (37 * 0x20), 0x73aec + (37 * 0x20), indexCPS2Sprites_Wolverine },
    { L"Shocked Light",  0x73acc + (38 * 0x20), 0x73aec + (38 * 0x20), indexCPS2Sprites_Wolverine },
    { L"Shocked Dark",   0x73acc + (39 * 0x20), 0x73aec + (39 * 0x20), indexCPS2Sprites_Wolverine },
    { L"Dark Burn Light",0x73acc + (40 * 0x20), 0x73aec + (40 * 0x20), indexCPS2Sprites_Wolverine },
    { L"Dark Burn Dark", 0x73acc + (41 * 0x20), 0x73aec + (41 * 0x20), indexCPS2Sprites_Wolverine },
    { L"Wolverine Light Super Trail", 0x7360c, 0x7362c, indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Wolverine Claws Light Super Trail (Unused)", 0x734cc, 0x734ec, indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
    { L"Wolverine Dark Super Trail", 0x7362c, 0x7364c, indexCPS2Sprites_Wolverine, 0x00, &pairNext },
    { L"Wolverine Claws Dark Super Trail (Unused)", 0x734ec, 0x7350c, indexCPS2Sprites_Wolverine, 0x01, &pairPrevious },
};

const sGame_PaletteDataset MSHVSF_A_SHUMA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (42 * 0x20), 0x73aec + (42 * 0x20), indexCPS2Sprites_Shuma },
    { L"Burning Dark",   0x73acc + (43 * 0x20), 0x73aec + (43 * 0x20), indexCPS2Sprites_Shuma },
    { L"Shocked Light",  0x73acc + (44 * 0x20), 0x73aec + (44 * 0x20), indexCPS2Sprites_Shuma },
    { L"Shocked Dark",   0x73acc + (45 * 0x20), 0x73aec + (45 * 0x20), indexCPS2Sprites_Shuma },
    { L"Dark Burn Light",0x73acc + (46 * 0x20), 0x73aec + (46 * 0x20), indexCPS2Sprites_Shuma },
    { L"Dark Burn Dark", 0x73acc + (47 * 0x20), 0x73aec + (47 * 0x20), indexCPS2Sprites_Shuma },
    { L"Shuma-Gorath Light Super Trail", 0x7364c, 0x7366c, indexCPS2Sprites_Shuma, 0x00 },
    { L"Shuma-Gorath Dark Super Trail", 0x7366c, 0x7368c, indexCPS2Sprites_Shuma, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_OMEGARED_STATUS[] =
{
    { L"Burning Light",  0x73acc + (48 * 0x20), 0x73aec + (48 * 0x20), indexCPS2Sprites_OmegaRed },
    { L"Burning Dark",   0x73acc + (49 * 0x20), 0x73aec + (49 * 0x20), indexCPS2Sprites_OmegaRed },
    { L"Shocked Light",  0x73acc + (50 * 0x20), 0x73aec + (50 * 0x20), indexCPS2Sprites_OmegaRed },
    { L"Shocked Dark",   0x73acc + (51 * 0x20), 0x73aec + (51 * 0x20), indexCPS2Sprites_OmegaRed },
    { L"Dark Burn Light",0x73acc + (52 * 0x20), 0x73aec + (52 * 0x20), indexCPS2Sprites_OmegaRed },
    { L"Dark Burn Dark", 0x73acc + (53 * 0x20), 0x73aec + (53 * 0x20), indexCPS2Sprites_OmegaRed },
    { L"Omega-Red Light Super Trail", 0x7368c, 0x736ac, indexCPS2Sprites_OmegaRed, 0x00 },
    { L"Omega-Red Dark Super Trail", 0x736ac, 0x736cc, indexCPS2Sprites_OmegaRed, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SPIDEY_STATUS[] =
{
    { L"Burning Light",  0x73acc + (54 * 0x20), 0x73aec + (54 * 0x20), indexCPS2Sprites_Spidey },
    { L"Burning Dark",   0x73acc + (55 * 0x20), 0x73aec + (55 * 0x20), indexCPS2Sprites_Spidey },
    { L"Shocked Light",  0x73acc + (56 * 0x20), 0x73aec + (56 * 0x20), indexCPS2Sprites_Spidey },
    { L"Shocked Dark",   0x73acc + (57 * 0x20), 0x73aec + (57 * 0x20), indexCPS2Sprites_Spidey },
    { L"Dark Burn Light",0x73acc + (58 * 0x20), 0x73aec + (58 * 0x20), indexCPS2Sprites_Spidey },
    { L"Dark Burn Dark", 0x73acc + (59 * 0x20), 0x73aec + (59 * 0x20), indexCPS2Sprites_Spidey },
    { L"Spider-Man/Armored Spider-Man Light Super Trail", 0x736cc, 0x736ec, indexCPS2Sprites_Spidey, 0x00 },
    { L"Spider-Man/Armored Spider-Man Dark Super Trail", 0x736ec, 0x7370c, indexCPS2Sprites_Spidey, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_BLACKHEART_STATUS[] =
{
    { L"Burning Light",  0x73acc + (60 * 0x20), 0x73aec + (60 * 0x20), indexCPS2Sprites_Blackheart },
    { L"Burning Dark",   0x73acc + (61 * 0x20), 0x73aec + (61 * 0x20), indexCPS2Sprites_Blackheart },
    { L"Shocked Light",  0x73acc + (62 * 0x20), 0x73aec + (62 * 0x20), indexCPS2Sprites_Blackheart },
    { L"Shocked Dark",   0x73acc + (63 * 0x20), 0x73aec + (63 * 0x20), indexCPS2Sprites_Blackheart },
    { L"Dark Burn Light",0x73acc + (64 * 0x20), 0x73aec + (64 * 0x20), indexCPS2Sprites_Blackheart },
    { L"Dark Burn Dark", 0x73acc + (65 * 0x20), 0x73aec + (65 * 0x20), indexCPS2Sprites_Blackheart },
    { L"Blackheart/Mephisto Light Super Trail", 0x7370c, 0x7372c, indexCPS2Sprites_Blackheart, 0x00 },
    { L"Blackheart/Mephisto Dark Super Trail", 0x7372c, 0x7374c, indexCPS2Sprites_Blackheart, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_RYU_STATUS[] =
{
    { L"Burning Light",  0x73acc + (66 * 0x20), 0x73aec + (66 * 0x20), indexCPS2Sprites_Ryu },
    { L"Burning Dark",   0x73acc + (67 * 0x20), 0x73aec + (67 * 0x20), indexCPS2Sprites_Ryu },
    { L"Shocked Light",  0x73acc + (68 * 0x20), 0x73aec + (68 * 0x20), indexCPS2Sprites_Ryu },
    { L"Shocked Dark",   0x73acc + (69 * 0x20), 0x73aec + (69 * 0x20), indexCPS2Sprites_Ryu },
    { L"Dark Burn Light",0x73acc + (70 * 0x20), 0x73aec + (70 * 0x20), indexCPS2Sprites_Ryu },
    { L"Dark Burn Dark", 0x73acc + (71 * 0x20), 0x73aec + (71 * 0x20), indexCPS2Sprites_Ryu },
    { L"Ryu Light Super Trail", 0x7374c, 0x7376c, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ryu Dark Super Trail", 0x7376c, 0x7378c, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_KEN_STATUS[] =
{
    { L"Burning Light",  0x73acc + (72 * 0x20), 0x73aec + (72 * 0x20), indexCPS2Sprites_Ken },
    { L"Burning Dark",   0x73acc + (73 * 0x20), 0x73aec + (73 * 0x20), indexCPS2Sprites_Ken },
    { L"Shocked Light",  0x73acc + (74 * 0x20), 0x73aec + (74 * 0x20), indexCPS2Sprites_Ken },
    { L"Shocked Dark",   0x73acc + (75 * 0x20), 0x73aec + (75 * 0x20), indexCPS2Sprites_Ken },
    { L"Dark Burn Light",0x73acc + (76 * 0x20), 0x73aec + (76 * 0x20), indexCPS2Sprites_Ken },
    { L"Dark Burn Dark", 0x73acc + (77 * 0x20), 0x73aec + (77 * 0x20), indexCPS2Sprites_Ken },
    { L"Ken Light Super Trail", 0x7378c, 0x737ac, indexCPS2Sprites_Ken, 0x00 },
    { L"Ken Dark Super Trail", 0x737ac, 0x737cc, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CHUNLI_STATUS[] =
{
    { L"Burning Light",  0x73acc + (78 * 0x20), 0x73aec + (78 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Burning Dark",   0x73acc + (79 * 0x20), 0x73aec + (79 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Shocked Light",  0x73acc + (80 * 0x20), 0x73aec + (80 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Shocked Dark",   0x73acc + (81 * 0x20), 0x73aec + (81 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Dark Burn Light",0x73acc + (82 * 0x20), 0x73aec + (82 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Dark Burn Dark", 0x73acc + (83 * 0x20), 0x73aec + (83 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Kinetic 1 (Unused)",      0x73acc + (84 * 0x20), 0x73aec + (84 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Kinetic 2 (Unused)",      0x73acc + (85 * 0x20), 0x73aec + (85 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Kinetic 3 (Unused)",      0x73acc + (86 * 0x20), 0x73aec + (86 * 0x20), indexCPS2Sprites_ChunLi },
    { L"Chun-Li Light Super Trail", 0x737cc, 0x737ec, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Chun-Li Dark Super Trail", 0x737ec, 0x7380c, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_DHALSIM_STATUS[] =
{
    { L"Burning Light",  0x73acc + (87 * 0x20), 0x73aec + (87 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Burning Dark",   0x73acc + (88 * 0x20), 0x73aec + (88 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Shocked Light",  0x73acc + (89 * 0x20), 0x73aec + (89 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Shocked Dark",   0x73acc + (90 * 0x20), 0x73aec + (90 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Dark Burn Light",0x73acc + (91 * 0x20), 0x73aec + (91 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Dark Burn Dark", 0x73acc + (92 * 0x20), 0x73aec + (92 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Kinetic 1 (Unused)",      0x73acc + (93 * 0x20), 0x73aec + (93 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Kinetic 2 (Unused)",      0x73acc + (94 * 0x20), 0x73aec + (94 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Kinetic 3 (Unused)",      0x73acc + (95 * 0x20), 0x73aec + (95 * 0x20), indexCPS2Sprites_Dhalsim },
    { L"Dhalsim Light Super Trail", 0x7380c, 0x7382c, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Dhalsim Dark Super Trail", 0x7382c, 0x7384c, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_ZANGIEF_STATUS[] =
{
    { L"Burning Light",  0x73acc + (96 * 0x20), 0x73aec + (96 * 0x20), indexCPS2Sprites_Zangief },
    { L"Burning Dark",   0x73acc + (97 * 0x20), 0x73aec + (97 * 0x20), indexCPS2Sprites_Zangief },
    { L"Shocked Light",  0x73acc + (98 * 0x20), 0x73aec + (98 * 0x20), indexCPS2Sprites_Zangief },
    { L"Shocked Dark",   0x73acc + (99 * 0x20), 0x73aec + (99 * 0x20), indexCPS2Sprites_Zangief },
    { L"Dark Burn Light",0x73acc + (100 * 0x20), 0x73aec + (100 * 0x20), indexCPS2Sprites_Zangief },
    { L"Dark Burn Dark", 0x73acc + (101 * 0x20), 0x73aec + (101 * 0x20), indexCPS2Sprites_Zangief },
    { L"Kinetic 1 (Unused)",      0x73acc + (102 * 0x20), 0x73aec + (102 * 0x20), indexCPS2Sprites_Zangief },
    { L"Kinetic 2 (Unused)",      0x73acc + (103 * 0x20), 0x73aec + (103 * 0x20), indexCPS2Sprites_Zangief },
    { L"Kinetic 3 (Unused)",      0x73acc + (104 * 0x20), 0x73aec + (104 * 0x20), indexCPS2Sprites_Zangief },
    { L"Zangief/Mech-Zangief Light Super Trail", 0x7384c, 0x7386c, indexCPS2Sprites_Zangief, 0x00 },
    { L"Zangief/Mech-Zangief Dark Super Trail", 0x7386c, 0x7388c, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_BISON_STATUS[] =
{
    { L"Burning Light",  0x73acc + (105 * 0x20), 0x73aec + (105 * 0x20), indexCPS2Sprites_Bison },
    { L"Burning Dark",   0x73acc + (106 * 0x20), 0x73aec + (106 * 0x20), indexCPS2Sprites_Bison },
    { L"Shocked Light",  0x73acc + (107 * 0x20), 0x73aec + (107 * 0x20), indexCPS2Sprites_Bison },
    { L"Burning Light",  0x73acc + (108 * 0x20), 0x73aec + (108 * 0x20), indexCPS2Sprites_Bison },
    { L"Burning Dark",   0x73acc + (109 * 0x20), 0x73aec + (109 * 0x20), indexCPS2Sprites_Bison },
    { L"Dark Burn Dark", 0x73acc + (110 * 0x20), 0x73aec + (110 * 0x20), indexCPS2Sprites_Bison },
    { L"Kinetic 1 (Unused)",      0x73acc + (111 * 0x20), 0x73aec + (111 * 0x20), indexCPS2Sprites_Bison },
    { L"Kinetic 2 (Unused)",      0x73acc + (112 * 0x20), 0x73aec + (112 * 0x20), indexCPS2Sprites_Bison },
    { L"Kinetic 3 (Unused)",      0x73acc + (113 * 0x20), 0x73aec + (113 * 0x20), indexCPS2Sprites_Bison },
    { L"M. Bison Light Super Trail", 0x7388c, 0x738ac, indexCPS2Sprites_Bison, 0x00 },
    { L"M. Bison Dark Super Trail", 0x738ac, 0x738cc, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_AKUMA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (114 * 0x20), 0x73aec + (114 * 0x20), indexCPS2Sprites_Akuma },
    { L"Burning Dark",   0x73acc + (115 * 0x20), 0x73aec + (115 * 0x20), indexCPS2Sprites_Akuma },
    { L"Shocked Light",  0x73acc + (116 * 0x20), 0x73aec + (116 * 0x20), indexCPS2Sprites_Akuma },
    { L"Shocked Dark",   0x73acc + (117 * 0x20), 0x73aec + (117 * 0x20), indexCPS2Sprites_Akuma },
    { L"Dark Burn Light",0x73acc + (118 * 0x20), 0x73aec + (118 * 0x20), indexCPS2Sprites_Akuma },
    { L"Dark Burn Dark", 0x73acc + (119 * 0x20), 0x73aec + (119 * 0x20), indexCPS2Sprites_Akuma },
    { L"Kinetic 1 (Unused)",      0x73acc + (120 * 0x20), 0x73aec + (120 * 0x20), indexCPS2Sprites_Akuma },
    { L"Kinetic 2 (Unused)",      0x73acc + (121 * 0x20), 0x73aec + (121 * 0x20), indexCPS2Sprites_Akuma },
    { L"Kinetic 3 (Unused)",      0x73acc + (122 * 0x20), 0x73aec + (122 * 0x20), indexCPS2Sprites_Akuma },
    { L"Akuma Light Super Trail", 0x738cc, 0x738ec, indexCPS2Sprites_Akuma, 0x00 },
    { L"Akuma Dark Super Trail", 0x738ec, 0x7390c, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_SAKURA_STATUS[] =
{
    { L"Burning Light",  0x73acc + (123 * 0x20), 0x73aec + (123 * 0x20), indexCPS2Sprites_Sakura },
    { L"Burning Dark",   0x73acc + (124 * 0x20), 0x73aec + (124 * 0x20), indexCPS2Sprites_Sakura },
    { L"Shocked Light",  0x73acc + (125 * 0x20), 0x73aec + (125 * 0x20), indexCPS2Sprites_Sakura },
    { L"Shocked Dark",   0x73acc + (126 * 0x20), 0x73aec + (126 * 0x20), indexCPS2Sprites_Sakura },
    { L"Dark Burn Light",0x73acc + (127 * 0x20), 0x73aec + (127 * 0x20), indexCPS2Sprites_Sakura },
    { L"Dark Burn Dark", 0x73acc + (128 * 0x20), 0x73aec + (128 * 0x20), indexCPS2Sprites_Sakura },
    { L"Kinetic 1 (Unused)",      0x73acc + (129 * 0x20), 0x73aec + (129 * 0x20), indexCPS2Sprites_Sakura },
    { L"Kinetic 2 (Unused)",      0x73acc + (130 * 0x20), 0x73aec + (130 * 0x20), indexCPS2Sprites_Sakura },
    { L"Kinetic 3 (Unused)",      0x73acc + (131 * 0x20), 0x73aec + (131 * 0x20), indexCPS2Sprites_Sakura },
    { L"Sakura Light Super Trail", 0x7390c, 0x7392c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Sakura Dark Super Trail", 0x7392c, 0x7394c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Dark Sakura Light Super Trail", 0x7394c, 0x7396c, indexCPS2Sprites_Sakura, 0x00 },
    { L"Dark Sakura Dark Super Trail", 0x7396c, 0x7398c, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_NORIMARO_STATUS[] =
{
    { L"Burning Light",  0x73acc + (132 * 0x20), 0x73aec + (132 * 0x20), indexCPS2Sprites_Norimaro },
    { L"Burning Dark",   0x73acc + (133 * 0x20), 0x73aec + (133 * 0x20), indexCPS2Sprites_Norimaro },
    { L"Shocked Light",  0x73acc + (134 * 0x20), 0x73aec + (134 * 0x20), indexCPS2Sprites_Norimaro },
    { L"Shocked Dark",   0x73acc + (135 * 0x20), 0x73aec + (135 * 0x20), indexCPS2Sprites_Norimaro },
    { L"Dark Burn Light",0x73acc + (136 * 0x20), 0x73aec + (136 * 0x20), indexCPS2Sprites_Norimaro },
    { L"Dark Burn Dark", 0x73acc + (137 * 0x20), 0x73aec + (137 * 0x20), indexCPS2Sprites_Norimaro },
    { L"Norimaro Light Super Trail", 0x7398c, 0x739ac, indexCPS2Sprites_Norimaro, 0x00 },
    { L"Norimaro Dark Super Trail", 0x739ac, 0x739cc, indexCPS2Sprites_Norimaro, 0x00 },
};

const sGame_PaletteDataset MSHVSF_A_CSI_PALETTES[] =
{
    { L"Zangief CSI", 0x7990c, 0x7992c, indexCPS2Sprites_Zangief, 0x30 },
    { L"M. Bison CSI", 0x7992c, 0x7994c, indexCPS2Sprites_Bison, 0x30 },
    { L"Dhalsim CSI", 0x798Ec, 0x7990c, indexCPS2Sprites_Dhalsim, 0x30 },
    { L"Sakura CSI", 0x7996c, 0x7998c, indexCPS2Sprites_Sakura, 0x30 },
    { L"Akuma CSI", 0x7994c, 0x7996c, indexCPS2Sprites_Akuma, 0x30 },
    { L"Chun-Li CSI", 0x798Cc, 0x798Ec, indexCPS2Sprites_ChunLi, 0x30 },
    { L"Cyclops CSI", 0x7978c, 0x797Ac, indexCPS2Sprites_Cyclops, 0x30 },
    { L"Spider-Man CSI", 0x7984c, 0x7986c, indexCPS2Sprites_Spidey, 0x30 },
    { L"Captain America CSI", 0x797Ac, 0x797Cc, indexCPS2Sprites_CapAm, 0x30 },
    { L"Ken CSI", 0x798Ac, 0x798Cc, indexCPS2Sprites_Ken, 0x30 },
    { L"Ryu CSI", 0x7988c, 0x798Ac, indexCPS2Sprites_Ryu, 0x30 },
    { L"Dan CSI", 0x799Ac, 0x799Cc, indexCPS2Sprites_Dan, 0x30 },
    { L"Shuma-Gorath CSI", 0x7980c, 0x7982c, indexCPS2Sprites_Shuma, 0x30 },
    { L"Wolverine CSI", 0x797Ec, 0x7980c, indexCPS2Sprites_Wolverine, 0x30 },
    { L"Hulk CSI", 0x797Cc, 0x797Ec, indexCPS2Sprites_Hulk, 0x30 },
    { L"Blackheart CSI", 0x7986c, 0x7988c, indexCPS2Sprites_Blackheart, 0x30 },
    { L"Norimaro CSI", 0x7998c, 0x799Ac, indexCPS2Sprites_Norimaro, 0x30 },
    { L"Omega Red CSI", 0x7982c, 0x7984c, indexCPS2Sprites_OmegaRed, 0x30 },
    { L"MSHvSF Logo", 0x7a2ec, 0x7a30c },
};

const sGame_PaletteDataset MSHVSF_A_CHARSELECT_PALETTES[] =
{
    { L"Mode Select 1", 0x799cc, 0x799ec },
    { L"Mode Select 2", 0x7a00c, 0x7a02c },
    { L"Mode Select 3", 0x7a02c, 0x7a04c },
    { L"Mode Select 4", 0x7a04c, 0x7a06c },
    { L"Mode Select 5", 0x7a06c, 0x7a08c },
    { L"Mode Select 6", 0x7a08c, 0x7a0ac },
    { L"Mode Select 7", 0x7a0ac, 0x7a0cc },
    { L"P2 Select Ring 1", 0x79a0c, 0x79a2c },
    { L"P2 Select Ring 2", 0x7a10c, 0x7a12c },
    { L"P2 Select Ring 3", 0x7a12c, 0x7a14c },
    { L"P2 Select Ring 4", 0x7a14c, 0x7a16c },
    { L"P2 Select Ring 5", 0x7a16c, 0x7a18c },
    { L"P2 Select Ring 6", 0x7a18c, 0x7a1ac },
    { L"P2 Select Ring 1", 0x79a2c, 0x79a4c },
    { L"P2 Select Ring 2", 0x7a1ac, 0x7a1cc },
    { L"P2 Select Ring 3", 0x7a1cc, 0x7a1ec },
    { L"P2 Select Ring 4", 0x7a1ec, 0x7a20c },
    { L"P2 Select Ring 5", 0x7a20c, 0x7a22c },
    { L"P2 Select Ring 6", 0x7a22c, 0x7a24c },
    { L"Character Name 1", 0x79a4c, 0x79a6c },
    { L"Character Name 2", 0x7a26c, 0x7a28c },
    { L"Character Name 3", 0x7a28c, 0x7a2ac },
};

const sGame_PaletteDataset MSHVSF_A_SSP_PALETTES[] =
{
    // P1 to P2 SSP is diff 0x10E0
    { L"A. Spider-Man P1 SSP", 0x7DA4c, 0x7DA8c, indexCPS2Sprites_Spidey, 0x31 },
    { L"A. Spider-Man P2 SSP", 0x7EB2c, 0x7EB6c, indexCPS2Sprites_Spidey, 0x31 },
    { L"Akuma P1 SSP", 0x7D40c, 0x7D48c, indexCPS2Sprites_Akuma, 0x31 },
    { L"Akuma P2 SSP", 0x7E4Ec, 0x7E56c, indexCPS2Sprites_Akuma, 0x31 },
    { L"Blackheart P1 SSP", 0x7CFAc, 0x7D02c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Blackheart P2 SSP", 0x7E08c, 0x7E10c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Captain America P1 SSP", 0x7CBEc, 0x7CC8c, indexCPS2Sprites_CapAm, 0x31 },
    { L"Captain America P2 SSP", 0x7DCCc, 0x7DD6c, indexCPS2Sprites_CapAm, 0x31 },
    { L"Chun-Li P1 SSP", 0x7D18c, 0x7D20c, indexCPS2Sprites_ChunLi, 0x31 },
    { L"Chun-Li P2 SSP", 0x7E26c, 0x7E2Ec, indexCPS2Sprites_ChunLi, 0x31 },
    { L"Cyber Akuma P1 SSP", 0x7D68c, 0x7D70c, indexCPS2Sprites_CyberAkuma, 0x31 },
    { L"Cyber Akuma P2 SSP", 0x7E76c, 0x7E7Ec, indexCPS2Sprites_CyberAkuma, 0x31 },
    { L"Cyclops P1 SSP", 0x7CB4c, 0x7CBEc, indexCPS2Sprites_Cyclops, 0x31 },
    { L"Cyclops P2 SSP", 0x7DC2c, 0x7DCCc, indexCPS2Sprites_Cyclops, 0x31 },
    { L"Dan P1 SSP", 0x7D5Ec, 0x7D66c, indexCPS2Sprites_Dan, 0x31 },
    { L"Dan P2 SSP", 0x7E6Cc, 0x7E74c, indexCPS2Sprites_Dan, 0x31 },
    { L"Dark Sakura P1 SSP", 0x7D7Cc, 0x7D84c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Dark Sakura P2 SSP", 0x7E8Ac, 0x7E92c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Dhalsim P1 SSP", 0x7D22c, 0x7D2Ac, indexCPS2Sprites_Dhalsim, 0x31 },
    { L"Dhalsim P2 SSP", 0x7E30c, 0x7E38c, indexCPS2Sprites_Dhalsim, 0x31 },
    { L"Hulk P1 SSP", 0x7CC8c, 0x7CCEc, indexCPS2Sprites_Hulk, 0x31 },
    { L"Hulk P2 SSP", 0x7DD6c, 0x7DDCc, indexCPS2Sprites_Hulk, 0x31 },
    { L"Ken P1 SSP", 0x7D0Ec, 0x7D16c, indexCPS2Sprites_Ken, 0x31 },
    { L"Ken P2 SSP", 0x7E1Cc, 0x7E24c, indexCPS2Sprites_Ken, 0x31 },
    { L"M. Bison P1 SSP", 0x7D36c, 0x7D3Ec, indexCPS2Sprites_Bison, 0x31 },
    { L"M. Bison P2 SSP", 0x7E44c, 0x7E4Cc, indexCPS2Sprites_Bison, 0x31 },
    { L"Mech Zangief P1 SSP", 0x7D72c, 0x7D78c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Mech Zangief P2 SSP", 0x7E80c, 0x7E86c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Mephisto P1 SSP", 0x7D9Ac, 0x7DA2c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Mephisto P2 SSP", 0x7EA8c, 0x7EB0c, indexCPS2Sprites_Blackheart, 0x31 },
    { L"Norimaro P1 SSP", 0x7D54c, 0x7D5Ec, indexCPS2Sprites_Norimaro, 0x31 },
    { L"Norimaro P2 SSP", 0x7E62c, 0x7E6Cc, indexCPS2Sprites_Norimaro, 0x31 },
    { L"Omega Red P1 SSP", 0x7CE6c, 0x7CEEc, indexCPS2Sprites_OmegaRed, 0x31 },
    { L"Omega Red P2 SSP", 0x7DF4c, 0x7DFCc, indexCPS2Sprites_OmegaRed, 0x31 },
    { L"Ryu P1 SSP", 0x7D04c, 0x7D0Cc, indexCPS2Sprites_Ryu, 0x31 },
    { L"Ryu P2 SSP", 0x7E12c, 0x7E1Ac, indexCPS2Sprites_Ryu, 0x31 },
    { L"Sakura P1 SSP", 0x7D4Ac, 0x7D52c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Sakura P2 SSP", 0x7E58c, 0x7E60c, indexCPS2Sprites_Sakura, 0x31 },
    { L"Shadow P1 SSP", 0x7D86c, 0x7D90c, indexCPS2Sprites_Charlie, 0x31 },
    { L"Shadow P2 SSP", 0x7E94c, 0x7E9Ec, indexCPS2Sprites_Charlie, 0x31 },
    { L"Shuma-Gorath P1 SSP", 0x7CDCc, 0x7CE2c, indexCPS2Sprites_Shuma, 0x31 },
    { L"Shuma-Gorath P2 SSP", 0x7DEAc, 0x7DF0c, indexCPS2Sprites_Shuma, 0x31 },
    { L"Spider-Man P1 SSP", 0x7CF0c, 0x7CF4c, indexCPS2Sprites_Spidey, 0x31 },
    { L"Spider-Man P2 SSP", 0x7DFEc, 0x7E02c, indexCPS2Sprites_Spidey, 0x31 },
    { L"US Agent P1 SSP", 0x7D90c, 0x7D9Ac, indexCPS2Sprites_CapAm, 0x31 },
    { L"US Agent P2 SSP", 0x7E9Ec, 0x7EA8c, indexCPS2Sprites_CapAm, 0x31 },
    { L"Wolverine P1 SSP", 0x7CD2c, 0x7CDAc, indexCPS2Sprites_Wolverine, 0x31 },
    { L"Wolverine P2 SSP", 0x7DE0c, 0x7DE8c, indexCPS2Sprites_Wolverine, 0x31 },
    { L"Zangief P1 SSP", 0x7D2Cc, 0x7D32c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Zangief P2 SSP", 0x7E3Ac, 0x7E40c, indexCPS2Sprites_Zangief, 0x31 },
    { L"Apocalypse P1 SSP", 0x7CAAc, 0x7CB0c, 0x4F, 0x31 },
    { L"Apocalypse P2 SSP", 0x7DB8c, 0x7DBEc, 0x4F, 0x31 },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES[] =
{
    // P1 to P2 VSPs are also a difference of 0x10E0
    { L"A. Spider-Man P1 VSP", 0x7FD4c, 0x7FD8c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"Akuma P1 VSP", 0x7F70c, 0x7F78c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P1 VSP", 0x7F2Ac, 0x7F2Ec, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P1 VSP", 0x7EEEc, 0x7EF8c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Captain America P2 VSP Part 1", 0x7FFCc, 0x80000 },
    { L"Chun-Li P1 VSP", 0x7F48c, 0x7F4Ec, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P1 VSP", 0x7F98c, 0x7FA2c, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Cyclops P1 VSP", 0x7EE4c, 0x7EEEc, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Cyclops P2 VSP", 0x7FF2c, 0x7FFCc, indexCPS2Sprites_Cyclops, indexMSHVSF_VSP },
    { L"Dan P1 VSP", 0x7F8Ec, 0x7F98c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P1 VSP", 0x7FACc, 0x7FB6c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P1 VSP", 0x7F52c, 0x7F5Cc, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P1 VSP", 0x7EF8c, 0x7EFEc, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Ken P1 VSP", 0x7F3Ec, 0x7F48c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Omega Red P1 VSP", 0x7F16c, 0x7F20c, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P1 VSP", 0x7F66c, 0x7F70c, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P1 VSP", 0x7FA2c, 0x7FACc, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P1 VSP", 0x7FCAc, 0x7FCEc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P1 VSP", 0x7F84c, 0x7F8Ec, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P1 VSP", 0x7F34c, 0x7F3Ec, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Sakura P1 VSP", 0x7F7Ac, 0x7F84c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Shadow P1 VSP", 0x7FB6c, 0x7FC0c, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P1 VSP", 0x7F0Cc, 0x7F14c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P1 VSP", 0x7F20c, 0x7F24c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"U.S Agent P1 VSP", 0x7FC0c, 0x7FCAc, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P1 VSP", 0x7F02c, 0x7F0Cc, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P1 VSP", 0x7F5Cc, 0x7F66c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Apocalypse P1 VSP", 0x7EDAc, 0x7EE4c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
    { L"Apocalypse P2 VSP", 0x7FE8c, 0x7FF2c, indexCPS2Sprites_Apocalypse, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_VSP_PALETTES_7B[] =
{
    { L"A. Spider-Man P2 VSP", 0xe2c, 0xe6c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP  },
    { L"Akuma P2 VSP", 0x7ec, 0x86c, indexCPS2Sprites_Akuma, indexMSHVSF_VSP },
    { L"Blackheart P2 VSP", 0x38c, 0x3cc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Captain America P2 VSP Part 2", 0x000, 0x06c },
    { L"Chun-Li P2 VSP", 0x56c, 0x5cc, indexCPS2Sprites_ChunLi, indexMSHVSF_VSP },
    { L"Cyber Akuma P2 VSP", 0xA6c, 0xB0c, indexCPS2Sprites_CyberAkuma, indexMSHVSF_VSP },
    { L"Dan P2 VSP", 0x9cc, 0xa6c, indexCPS2Sprites_Dan, indexMSHVSF_VSP },
    { L"Dark Sakura P2 VSP", 0xbac, 0xc4c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Dhalsim P2 VSP", 0x60c, 0x6ac, indexCPS2Sprites_Dhalsim, indexMSHVSF_VSP },
    { L"Hulk P2 VSP", 0x06c, 0x0cc, indexCPS2Sprites_Hulk, indexMSHVSF_VSP },
    { L"Ken P2 VSP", 0x4cc, 0x56c, indexCPS2Sprites_Ken, indexMSHVSF_VSP },
    { L"Omega Red P2 VSP", 0x24c, 0x2ec, indexCPS2Sprites_OmegaRed, indexMSHVSF_VSP },
    { L"M. Bison P2 VSP", 0x74c, 0x7ec, indexCPS2Sprites_Bison, indexMSHVSF_VSP },
    { L"Mech Zangief P2 VSP", 0xb0c, 0xbac, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
    { L"Mephisto P2 VSP", 0xd8c, 0xdcc, indexCPS2Sprites_Blackheart, indexMSHVSF_VSP },
    { L"Norimaro P2 VSP", 0x92c, 0x9cc, indexCPS2Sprites_Norimaro, indexMSHVSF_VSP },
    { L"Ryu P2 VSP", 0x42c, 0x4cc, indexCPS2Sprites_Ryu, indexMSHVSF_VSP },
    { L"Sakura P2 VSP", 0x88c, 0x92c, indexCPS2Sprites_Sakura, indexMSHVSF_VSP },
    { L"Shadow P2 VSP", 0xC4c, 0xCEc, indexCPS2Sprites_Charlie, indexMSHVSF_VSP },
    { L"Shuma-Gorath P2 VSP", 0x1ac, 0x22c, indexCPS2Sprites_Shuma, indexMSHVSF_VSP },
    { L"Spider-Man P2 VSP", 0x2ec, 0x32c, indexCPS2Sprites_Spidey, indexMSHVSF_VSP },
    { L"US Agent P2 VSP", 0xcec, 0xd8c, indexCPS2Sprites_CapAm, indexMSHVSF_VSP },
    { L"Wolverine P2 VSP", 0x10c, 0x1ac, indexCPS2Sprites_Wolverine, indexMSHVSF_VSP },
    { L"Zangief P2 VSP", 0x6ac, 0x74c, indexCPS2Sprites_Zangief, indexMSHVSF_VSP },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_RIVER_PALETTES[] =
{
    { L"Background Sky",            0x56EF2, 0x570F2, indexCPS2Sprites_MSHVSFAssets, 0x00, &pairFullyLinkedNode },
    { L"Background Reflection",     0x570F2, 0x572F2, indexCPS2Sprites_MSHVSFAssets, 0x01 },
    { L"Ridge Trees",               0x5F552, 0x5F652, indexCPS2Sprites_MSHVSFAssets, 0x02 },
    { L"Bridge",                    0x5A2F2, 0x5A352, indexCPS2Sprites_MSHVSFAssets, 0x03 },
    { L"People Crater Water Posts", 0x7846c, 0x7854c, indexCPS2Sprites_MSHVSFAssets, 0x04 },
    { L"Unknown",                   0x5A4F2, 0x5A6F2 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_MALLMAYHEM_PALETTES[] =
{
    { L"Mall PL#400.1",                     0x5EC32, 0x5ee32, indexCPS2Sprites_MSHVSFAssets, 0x05, &pairFullyLinkedNode },
    { L"Mall PL#400.2",                     0x5Ee32, 0x5F032, indexCPS2Sprites_MSHVSFAssets, 0x06 },
    { L"Mall PL#200.1",                     0x59AF2, 0x59cF2, indexCPS2Sprites_MSHVSFAssets, 0x07 },
    { L"Mall PL#200.2",                     0x59cF2, 0x59EF2, indexCPS2Sprites_MSHVSFAssets, 0x08 },
    { L"Mall PL#190 [Megaman]",             0x7926C, 0x7930C, indexCPS2Sprites_MSHVSFAssets, 0x0c },
    { L"Mall PL#600.1",                     0x63952, 0x63b52, indexCPS2Sprites_MSHVSFAssets, 0x0a },
    { L"Mall PL#600.2",                     0x63b52, 0x63D52, indexCPS2Sprites_MSHVSFAssets, 0x0b },
    { L"Mall PL#190 [Spectators LS]",       0x7930C, 0x7934C, indexCPS2Sprites_MSHVSFAssets, 0x09 },
    { L"Mall PL#190 [RS Sprites: Lady]",    0x7934C, 0x7936C, indexCPS2Sprites_MSHVSFAssets, 0x0d },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_DEATHVALLEY_PALETTES[] =
{
    { L"Death Valley 1 - Sky BG",                               0x573F2, 0x57412, indexCPS2Sprites_MSHVSFAssets, 0x0e, &pairFullyLinkedNode },
    { L"Death Valley 1 - Mountain MG",                          0x5F972, 0x5F992, indexCPS2Sprites_MSHVSFAssets, 0x0f },
    { L"Death Valley 1 - Floor/Cave FG",                        0x5A6F2, 0x5A712, indexCPS2Sprites_MSHVSFAssets, 0x10 },
    { L"Death Valley 1 - CenterPiece FG",                       0x5A752, 0x5A772, indexCPS2Sprites_MSHVSFAssets, 0x11 },
    { L"Death Valley 1 - Sprites [Beast, Blanka, Fire/Smoke]",  0x7854C, 0x785AC, indexCPS2Sprites_MSHVSFAssets, 0x12 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_HILLTOP_PALETTES[] =
{
    { L"On the Hilltop - SkyBG",        0x57AF2, 0x57B52 },
    { L"On the Hilltop - TreeTrunk",    0x5B2F2, 0x5B392 },
    { L"On the Hilltop - LeavesMG",     0x60612, 0x60672 },
    { L"On the Hilltop - Base Leaves",  0x787EC, 0x7880C },
    { L"On the Hilltop - Owls",         0x7882C, 0x7886C },
//    { L"On the Hilltop PL#200.2 Unknown", 0x57E12, 0x57EB2 },
};

const sGame_PaletteDataset MSHVSF_A_STAGES_TEMPLE_PALETTES[] =
{
    { L"Temple of Fists - Sky BG [PL#600.1]",           0x60152, 0x602B2, indexCPS2Sprites_MSHVSFAssets, 0x13, &pairFullyLinkedNode },
    { L"Temple of Fists - Floor Buildings [PL#400.1]",  0x5AEF2, 0x5B0F2, indexCPS2Sprites_MSHVSFAssets, 0x14 },
    { L"Temple of Fists - Big Statue [PL#400.2]",       0x5B0F2, 0x5B2B2, indexCPS2Sprites_MSHVSFAssets, 0x15 },
    { L"Temple of Fists - Sprites [PL#190]",            0x7870C, 0x787EC, indexCPS2Sprites_MSHVSFAssets, 0x16 },
};

// Extra - Not Needed v
//    { L"Temple of Fists - Uknown [PL#600.2]", 0x60472, 0x60552 },


const sGame_PaletteDataset MSHVSF_A_BONUS_HUD_PALETTES[] =
{
    { L"Main HUD", 0x71a4c, 0x71a8c },
    { L"HUD Text / Meter Levek 0", 0x7198c, 0x719ac },
    { L"Game Text / VS Screen Text / Win Quotes", 0x719ac, 0x719cc },
    { L"Offscreen Icons", 0x719cc, 0x719ec },
    { L"Assist Icons", 0x71c8c, 0x71cec },
};

const sGame_PaletteDataset MSHVSF_A_BONUS_BONUS_PALETTES[] =
{
    { L"Super Floor 1", 0x6eaaa, 0x6eaca, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 2", 0x6eaca, 0x6eaea, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 3", 0x6eaea, 0x6eb0a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 4", 0x6eb0a, 0x6eb2a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 5", 0x6eb2a, 0x6eb4a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 6", 0x6eb4a, 0x6eb6a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 7", 0x6eb6a, 0x6eb8a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 8", 0x6eb8a, 0x6ebaa, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 9", 0x6ebaa, 0x6ebca, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 10", 0x6ebca, 0x6ebea, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 11", 0x6ebea, 0x6ec0a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 12", 0x6ec0a, 0x6ec2a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 13", 0x6ec2a, 0x6ec4a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor 14", 0x6ec4a, 0x6ec6a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Background 1", 0x6f02a, 0x6f04a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 2", 0x6f04a, 0x6f06a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 3", 0x6f06a, 0x6f08a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 4", 0x6f08a, 0x6f0aa, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 5", 0x6f0aa, 0x6f0ca, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 6", 0x6f0ca, 0x6f0ea, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 7", 0x6f0ea, 0x6f10a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 8", 0x6f10a, 0x6f12a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 9", 0x6f12a, 0x6f14a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 10", 0x6f14a, 0x6f16a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 11", 0x6f16a, 0x6f18a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 12", 0x6f18a, 0x6f1aa, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 13", 0x6f1aa, 0x6f1ca, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 14", 0x6f1ca, 0x6f1ea, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background 15 (Unused)", 0x6efea, 0x6f00a },
    { L"Super Floor Alt. 1", 0x6ecaa, 0x6ecca, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 2", 0x6ecca, 0x6ecea, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 3", 0x6ecea, 0x6ed0a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 4", 0x6ed0a, 0x6ed2a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 5", 0x6ed2a, 0x6ed4a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 6", 0x6ed4a, 0x6ed6a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 7", 0x6ed6a, 0x6ed8a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 8", 0x6ed8a, 0x6edaa, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 9", 0x6edaa, 0x6edca, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 10", 0x6edca, 0x6edea, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 11", 0x6edea, 0x6ee0a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 12", 0x6ee0a, 0x6ee2a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 13", 0x6ee2a, 0x6ee4a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Floor Alt. 14", 0x6ee4a, 0x6ee6a, indexCPS2Sprites_MSHVSFAssets, -1, &pairNext14 },
    { L"Super Background Alt 1", 0x6f22a, 0x6f24a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 2", 0x6f24a, 0x6f26a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 3", 0x6f26a, 0x6f28a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 4", 0x6f28a, 0x6f2aa, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 5", 0x6f2aa, 0x6f2ca, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 6", 0x6f2ca, 0x6f2ea, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 7", 0x6f2ea, 0x6f30a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 8", 0x6f30a, 0x6f32a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 9", 0x6f32a, 0x6f34a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 10", 0x6f34a, 0x6f36a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 11", 0x6f36a, 0x6f38a, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 12", 0x6f38a, 0x6f3aa, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 13", 0x6f3aa, 0x6f3ca, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 14", 0x6f3ca, 0x6f3ea, indexCPS2Sprites_MSHVSFAssets, -1, &pairPrevious14 },
    { L"Super Background Alt 15 (Unused)", 0x6f00a, 0x6f02a },
};

const sDescTreeNode MSHVSF_A_APOCALYPSE_COLLECTION[] =
{
    //{ L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P1COLOR_PUNCH) },
    //{ L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_APOCALYPSE_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_APOCALYPSE_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_AKUMA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_AKUMA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_AKUMA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION[] =
{
    { L"Blackheart P1 Color (Punch)", DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH,   ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P1COLOR_PUNCH)  },
    { L"Blackheart P2 Color (Kick)",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK,    ARRAYSIZE(MSHVSF_A_BLACKHEART_PALETTES_P2COLOR_KICK)   },
    { L"Mephisto P1 Color (Punch)",   DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH,     ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P1COLOR_PUNCH)    },
    { L"Mephisto P2 Color (Kick)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK,      ARRAYSIZE(MSHVSF_A_MEPHISTO_PALETTES_P2COLOR_KICK)     },
    { L"Shared Palettes",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_CAPTAIN_AMERICA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CHUNLI_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CHUNLI_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CYBER_AKUMA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_CYCLOPS_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_CYCLOPS_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_DAN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_DARK_SAKURA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DARK_SAKURA_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_DHALSIM_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_DHALSIM_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_HULK_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_HULK_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_KEN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_KEN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_MBIPSON_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MBIPSON_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_MECH_ZANGIEF_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_P2COLOR_KICK) },
    { L"Shared",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED,           ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_NORIMARO_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_PALETTES_EXTRAS,           ARRAYSIZE(MSHVSF_A_NORIMARO_PALETTES_EXTRAS) },
};

const sDescTreeNode MSHVSF_A_OMEGARED_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_OMEGARED_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_RYU_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_RYU_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SAKURA_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_P2COLOR_KICK) },
    { L"Extras",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_PALETTES_SHARED,     ARRAYSIZE(MSHVSF_A_SAKURA_PALETTES_SHARED) },
};

const sDescTreeNode MSHVSF_A_SHADOW_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHADOW_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SHUMAGORATH_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SHUMAGORATH_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_SPIDERMAN_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_SPIDERMAN_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_USAGENT_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_USAGENT_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_WOLVERINE_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_WOLVERINE_PALETTES_P2COLOR_KICK) },
};

const sDescTreeNode MSHVSF_A_ZANGIEF_COLLECTION[] =
{
    { L"P1 Color (Punch)",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH,    ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P1COLOR_PUNCH) },
    { L"P2 Color (Kick)",     DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK,     ARRAYSIZE(MSHVSF_A_ZANGIEF_PALETTES_P2COLOR_KICK) },
};

// It would make sense to move the under the specific character, but that doesn't quite work since 
// palette swaps like USAgent share the status effects with the core palette
const sDescTreeNode MSHVSF_A_STATUS_COLLECTION[] =
{
    { L"Akuma",             DESC_NODETYPE_TREE,    (void*)MSHVSF_A_AKUMA_STATUS,            ARRAYSIZE(MSHVSF_A_AKUMA_STATUS) },
    { L"Blackheart/Mephisto",       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BLACKHEART_STATUS,       ARRAYSIZE(MSHVSF_A_BLACKHEART_STATUS) },
    { L"Captain America/US Agent",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CAPTAINAMERICA_STATUS,   ARRAYSIZE(MSHVSF_A_CAPTAINAMERICA_STATUS) },
    { L"Chun-Li",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHUNLI_STATUS,           ARRAYSIZE(MSHVSF_A_CHUNLI_STATUS) },
    { L"Cyclops",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYCLOPS_STATUS,          ARRAYSIZE(MSHVSF_A_CYCLOPS_STATUS) },
    { L"Dhalsim",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DHALSIM_STATUS,          ARRAYSIZE(MSHVSF_A_DHALSIM_STATUS) },
    { L"Hulk",              DESC_NODETYPE_TREE,    (void*)MSHVSF_A_HULK_STATUS,             ARRAYSIZE(MSHVSF_A_HULK_STATUS) },
    { L"Ken",               DESC_NODETYPE_TREE,    (void*)MSHVSF_A_KEN_STATUS,              ARRAYSIZE(MSHVSF_A_KEN_STATUS) },
    { L"M.Bison",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BISON_STATUS,            ARRAYSIZE(MSHVSF_A_BISON_STATUS) },
    { L"Norimaro",          DESC_NODETYPE_TREE,    (void*)MSHVSF_A_NORIMARO_STATUS,         ARRAYSIZE(MSHVSF_A_NORIMARO_STATUS) },
    { L"Omega Red",         DESC_NODETYPE_TREE,    (void*)MSHVSF_A_OMEGARED_STATUS,         ARRAYSIZE(MSHVSF_A_OMEGARED_STATUS) },
    { L"RYu",               DESC_NODETYPE_TREE,    (void*)MSHVSF_A_RYU_STATUS,              ARRAYSIZE(MSHVSF_A_RYU_STATUS) },
    { L"Sakura/Dark Sakura",        DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SAKURA_STATUS,           ARRAYSIZE(MSHVSF_A_SAKURA_STATUS) },
    { L"Shadow",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHADOW_STATUS,           ARRAYSIZE(MSHVSF_A_SHADOW_STATUS) },
    { L"Shuma-Gorath",      DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SHUMA_STATUS,            ARRAYSIZE(MSHVSF_A_SHUMA_STATUS) },
    { L"Spider-Man/Armored Spider-Man",        DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SPIDEY_STATUS,           ARRAYSIZE(MSHVSF_A_SPIDEY_STATUS) },
    { L"Wolverine",         DESC_NODETYPE_TREE,    (void*)MSHVSF_A_WOLVERINE_STATUS,        ARRAYSIZE(MSHVSF_A_WOLVERINE_STATUS) },
    { L"Zangief",           DESC_NODETYPE_TREE,    (void*)MSHVSF_A_ZANGIEF_STATUS,          ARRAYSIZE(MSHVSF_A_ZANGIEF_STATUS) },

    { L"Dan",               DESC_NODETYPE_TREE,    (void*)MSHVSF_A_DAN_STATUS,              ARRAYSIZE(MSHVSF_A_DAN_STATUS) },
    { L"Cyber Akuma",       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CYBERAKUMA_STATUS,       ARRAYSIZE(MSHVSF_A_CYBERAKUMA_STATUS) },
};

const sDescTreeNode MSHVSF_A_BONUS_COLLECTION[] =
{
    { L"Character Select Icons",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CSI_PALETTES,    ARRAYSIZE(MSHVSF_A_CSI_PALETTES) },
    { L"Character Select",          DESC_NODETYPE_TREE,    (void*)MSHVSF_A_CHARSELECT_PALETTES, ARRAYSIZE(MSHVSF_A_CHARSELECT_PALETTES) },
    { L"HUD",                       DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_HUD_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_HUD_PALETTES) },
    { L"Super Screen Portraits",    DESC_NODETYPE_TREE,    (void*)MSHVSF_A_SSP_PALETTES,    ARRAYSIZE(MSHVSF_A_SSP_PALETTES) },
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES) },
    { L"Bonus Palettes",            DESC_NODETYPE_TREE,    (void*)MSHVSF_A_BONUS_BONUS_PALETTES, ARRAYSIZE(MSHVSF_A_BONUS_BONUS_PALETTES) },
};


const sDescTreeNode MSHVSF_A_BONUS_COLLECTION_7B[] =
{
    { L"Palettes",  DESC_NODETYPE_TREE,    (void*)MSHVSF_A_VSP_PALETTES_7B,    ARRAYSIZE(MSHVSF_A_VSP_PALETTES_7B) },
};

const sDescTreeNode MSHVSF_A_STAGE_COLLECTION[] =
{
    //{ L"The Cataract",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_CATARACT_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_CATARACT_PALETTES) },
    { L"Death Valley",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_DEATHVALLEY_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_DEATHVALLEY_PALETTES) },
    //{ L"Manhattan",                     DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_MANHATTAN_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_MANHATTAN_PALETTES) },
    
    { L"Mall Mayhem",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_MALLMAYHEM_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_MALLMAYHEM_PALETTES) },
    // Battle on the hilltop?
    { L"On the Hilltop",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_HILLTOP_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_HILLTOP_PALETTES) },
    { L"River Bridge",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_RIVER_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_RIVER_PALETTES) },
    //{ L"Raging Inferno: Night Time",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_INFERNO_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_INFERNO_PALETTES) },
    //{ L"Showdown in the Park",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_SHOWDOWN_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_SHOWDOWN_PALETTES) },
    { L"Temple of Fists",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGES_TEMPLE_PALETTES, ARRAYSIZE(MSHVSF_A_STAGES_TEMPLE_PALETTES) },
};

const sDescTreeNode MSHVSF_A_UNITS_6A[] =
{
    { L"Akuma",                 DESC_NODETYPE_TREE, (void*)MSHVSF_A_AKUMA_COLLECTION,               ARRAYSIZE(MSHVSF_A_AKUMA_COLLECTION) },
    { L"Armored Spider-Man",    DESC_NODETYPE_TREE, (void*)MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHVSF_A_ARMORED_SPIDERMAN_COLLECTION) },
    { L"Blackheart/Mephisto",   DESC_NODETYPE_TREE, (void*)MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION, ARRAYSIZE(MSHVSF_A_BLACKHEART_MEPHISTO_COLLECTION) },
    { L"Captain America",       DESC_NODETYPE_TREE, (void*)MSHVSF_A_CAPTAIN_AMERICA_COLLECTION,     ARRAYSIZE(MSHVSF_A_CAPTAIN_AMERICA_COLLECTION) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_CHUNLI_COLLECTION,              ARRAYSIZE(MSHVSF_A_CHUNLI_COLLECTION) },
    { L"Cyber Akuma",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYBER_AKUMA_COLLECTION,         ARRAYSIZE(MSHVSF_A_CYBER_AKUMA_COLLECTION) },
    { L"Cyclops",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_CYCLOPS_COLLECTION,             ARRAYSIZE(MSHVSF_A_CYCLOPS_COLLECTION) },
    { L"Dan",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_DAN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_DAN_COLLECTION) },
    { L"Dark Sakura",           DESC_NODETYPE_TREE, (void*)MSHVSF_A_DARK_SAKURA_COLLECTION,         ARRAYSIZE(MSHVSF_A_DARK_SAKURA_COLLECTION) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_DHALSIM_COLLECTION,             ARRAYSIZE(MSHVSF_A_DHALSIM_COLLECTION) },
    { L"Hulk",                  DESC_NODETYPE_TREE, (void*)MSHVSF_A_HULK_COLLECTION,                ARRAYSIZE(MSHVSF_A_HULK_COLLECTION) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_KEN_COLLECTION,                 ARRAYSIZE(MSHVSF_A_KEN_COLLECTION) },
    { L"M. Bison",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_MBIPSON_COLLECTION,             ARRAYSIZE(MSHVSF_A_MBIPSON_COLLECTION) },
    { L"Mech-Zangief",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_MECH_ZANGIEF_COLLECTION,        ARRAYSIZE(MSHVSF_A_MECH_ZANGIEF_COLLECTION) },
    { L"Norimaro",              DESC_NODETYPE_TREE, (void*)MSHVSF_A_NORIMARO_COLLECTION,            ARRAYSIZE(MSHVSF_A_NORIMARO_COLLECTION) },
    { L"Omega Red",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_OMEGARED_COLLECTION,            ARRAYSIZE(MSHVSF_A_OMEGARED_COLLECTION) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)MSHVSF_A_RYU_COLLECTION,                 ARRAYSIZE(MSHVSF_A_RYU_COLLECTION) },
    { L"Sakura",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_SAKURA_COLLECTION,              ARRAYSIZE(MSHVSF_A_SAKURA_COLLECTION) },
    { L"Shadow",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHADOW_COLLECTION,              ARRAYSIZE(MSHVSF_A_SHADOW_COLLECTION) },
    { L"Shuma-Gorath",          DESC_NODETYPE_TREE, (void*)MSHVSF_A_SHUMAGORATH_COLLECTION,         ARRAYSIZE(MSHVSF_A_SHUMAGORATH_COLLECTION) },
    { L"Spider-Man",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_SPIDERMAN_COLLECTION,           ARRAYSIZE(MSHVSF_A_SPIDERMAN_COLLECTION) },
    { L"U.S. Agent",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_USAGENT_COLLECTION,             ARRAYSIZE(MSHVSF_A_USAGENT_COLLECTION) },
    { L"Wolverine",             DESC_NODETYPE_TREE, (void*)MSHVSF_A_WOLVERINE_COLLECTION,           ARRAYSIZE(MSHVSF_A_WOLVERINE_COLLECTION) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)MSHVSF_A_ZANGIEF_COLLECTION,             ARRAYSIZE(MSHVSF_A_ZANGIEF_COLLECTION) },
    { L"Apocalypse",            DESC_NODETYPE_TREE, (void*)MSHVSF_A_APOCALYPSE_COLLECTION,          ARRAYSIZE(MSHVSF_A_APOCALYPSE_COLLECTION) },
    { L"Status Effects",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_STATUS_COLLECTION,              ARRAYSIZE(MSHVSF_A_STATUS_COLLECTION) },
    { L"Bonus Palettes",        DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION,               ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION) },
    { L"Stages",                DESC_NODETYPE_TREE, (void*)MSHVSF_A_STAGE_COLLECTION,               ARRAYSIZE(MSHVSF_A_STAGE_COLLECTION) },
};

constexpr auto MSHVSF_A_NUM_IND_6A = ARRAYSIZE(MSHVSF_A_UNITS_6A);
constexpr auto MSHVSF_A_EXTRALOC_6A = MSHVSF_A_NUM_IND_6A;

enum Supported_MSHVSF_6A_PaletteListIndex
{
    index_MSHVSF_Gouki,
    index_MSHVSF_ArmoredSpiderMan,
    index_MSHVSF_Blackheart_Mephisto,
    index_MSHVSF_CaptainAmerica,
    index_MSHVSF_ChunLi,
    index_MSHVSF_CyberGouki,
    index_MSHVSF_Cyclops,
    index_MSHVSF_Dan,
    index_MSHVSF_DarkSakura,
    index_MSHVSF_Dhalsim,
    index_MSHVSF_Hulk,
    index_MSHVSF_Ken,
    index_MSHVSF_MBison,
    index_MSHVSF_MechZangief,
    index_MSHVSF_Norimaro,
    index_MSHVSF_OmegaRed,
    index_MSHVSF_Ryu,
    index_MSHVSF_Sakura,
    index_MSHVSF_Shadow,
    index_MSHVSF_ShumaGorath,
    index_MSHVSF_SpiderMan,
    index_MSHVSF_USAgent,
    index_MSHVSF_Wolverine,
    index_MSHVSF_Zangief,
    index_MSHVSF_Apocalypse,
    index_MSHVSF_StatusEffects,
    index_MSHVSF_IconsAndPortraits,
    index_MSHVSF_Stages,
};

const sDescTreeNode MSHVSF_A_UNITS_7B[MSHVSF_A_NUM_IND_7B] =
{
    { L"Victory Screen Portraits",  DESC_NODETYPE_TREE, (void*)MSHVSF_A_BONUS_COLLECTION_7B, ARRAYSIZE(MSHVSF_A_BONUS_COLLECTION_7B) },
};
