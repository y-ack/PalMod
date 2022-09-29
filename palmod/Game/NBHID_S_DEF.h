#pragma once

const std::vector<uint16_t> NBHID_S_IMGIDS_USED =
{
};

const std::vector<LPCWSTR> NBHIDButtonLabelsNormal =
{
    L"01",
    L"02",
    L"03",
    L"04",
    L"05",
    L"06",
    L"07",
    L"08",
    L"09",
    L"10",
    L"11",
    L"12",
    L"13",
    L"14",
    L"15",
    L"16",
    L"17",
    L"18",
    L"19",
    L"20",
    L"21",
    L"22",
    L"23",
    L"24",
    L"25",
    L"26",
    // Unused Palettes
    L"27 (Unused)",
    L"28 (Unused)",
    L"29 (Unused)",
    L"30 (Unused)",
    L"31 (Unused)",
    L"32 (Unused)",
    L"33 (Unused)",
    L"34 (Unused)",
    L"35 (Unused)",
    L"36 (Unused)",
    L"37 (Unused)",
    L"38 (Unused)",
    L"39 (Unused)",
    L"40 (Unused)",
    L"41 (Unused)",
    L"42 (Unused)",
    L"43 (Unused)",
    L"44 (Unused)",
    L"45 (Unused)",
    L"46 (Unused)",
    L"47 (Unused)",
    L"48 (Unused)",
    L"49 (Unused)",
    L"50 (Unused)",
    L"51 (Unused)",
    L"52 (Unused)",
    L"53 (Unused)",
    L"54 (Unused)",
    L"55 (Unused)",
    L"56 (Unused)",
    L"57 (Unused)",
    L"58 (Unused)",
    L"59 (Unused)",
    L"60 (Unused)",
    L"61 (Unused)",
    L"62 (Unused)",
    L"63 (Unused)",
    L"64 (Unused)",
};

const std::vector<LPCWSTR> NBHIDButtonLabelsPartner =
{
    L"Player 1",
    L"Player 2",
    // Unused Palettes
    L"03 (Unused)",
    L"04 (Unused)",
    L"05 (Unused)",
    L"06 (Unused)",
    L"07 (Unused)",
    L"08 (Unused)",
    L"09 (Unused)",
    L"10 (Unused)",
    L"11 (Unused)",
    L"12 (Unused)",
    L"13 (Unused)",
    L"14 (Unused)",
    L"15 (Unused)",
    L"16 (Unused)",
    L"17 (Unused)",
    L"18 (Unused)",
    L"19 (Unused)",
    L"20 (Unused)",
    L"21 (Unused)",
    L"22 (Unused)",
    L"23 (Unused)",
    L"24 (Unused)",
    L"25 (Unused)",
    L"26 (Unused)",
    L"27 (Unused)",
    L"28 (Unused)",
    L"29 (Unused)",
    L"30 (Unused)",
    L"31 (Unused)",
    L"32 (Unused)",
    L"33 (Unused)",
    L"34 (Unused)",
    L"35 (Unused)",
    L"36 (Unused)",
    L"37 (Unused)",
    L"38 (Unused)",
    L"39 (Unused)",
    L"40 (Unused)",
    L"41 (Unused)",
    L"42 (Unused)",
    L"43 (Unused)",
    L"44 (Unused)",
    L"45 (Unused)",
    L"46 (Unused)",
    L"47 (Unused)",
    L"48 (Unused)",
    L"49 (Unused)",
    L"50 (Unused)",
    L"51 (Unused)",
    L"52 (Unused)",
    L"53 (Unused)",
    L"54 (Unused)",
    L"55 (Unused)",
    L"56 (Unused)",
    L"57 (Unused)",
    L"58 (Unused)",
    L"59 (Unused)",
    L"60 (Unused)",
    L"61 (Unused)",
    L"62 (Unused)",
    L"63 (Unused)",
    L"64 (Unused)",
};

const std::vector<LPCWSTR> NBHIDButtonLabelsBoss =
{
    L"Main Palette",
    // Unused Palettes
    L"02 (Unused)",
    L"03 (Unused)",
    L"04 (Unused)",
    L"05 (Unused)",
    L"06 (Unused)",
    L"07 (Unused)",
    L"08 (Unused)",
    L"09 (Unused)",
    L"10 (Unused)",
    L"11 (Unused)",
    L"12 (Unused)",
    L"13 (Unused)",
    L"14 (Unused)",
    L"15 (Unused)",
    L"16 (Unused)",
    L"17 (Unused)",
    L"18 (Unused)",
    L"19 (Unused)",
    L"20 (Unused)",
    L"21 (Unused)",
    L"22 (Unused)",
    L"23 (Unused)",
    L"24 (Unused)",
    L"25 (Unused)",
    L"26 (Unused)",
    L"27 (Unused)",
    L"28 (Unused)",
    L"29 (Unused)",
    L"30 (Unused)",
    L"31 (Unused)",
    L"32 (Unused)",
    L"33 (Unused)",
    L"34 (Unused)",
    L"35 (Unused)",
    L"36 (Unused)",
    L"37 (Unused)",
    L"38 (Unused)",
    L"39 (Unused)",
    L"40 (Unused)",
    L"41 (Unused)",
    L"42 (Unused)",
    L"43 (Unused)",
    L"44 (Unused)",
    L"45 (Unused)",
    L"46 (Unused)",
    L"47 (Unused)",
    L"48 (Unused)",
    L"49 (Unused)",
    L"50 (Unused)",
    L"51 (Unused)",
    L"52 (Unused)",
    L"53 (Unused)",
    L"54 (Unused)",
    L"55 (Unused)",
    L"56 (Unused)",
    L"57 (Unused)",
    L"58 (Unused)",
    L"59 (Unused)",
    L"60 (Unused)",
    L"61 (Unused)",
    L"62 (Unused)",
    L"63 (Unused)",
    L"64 (Unused)",
};

const sGCBUPF_BasicNodeData NBHIDPaletteNodesNormal =
{
    { L"Palettes" }, 0x0, NBHIDButtonLabelsNormal
};

const sGCBUPF_BasicNodeData NBHIDPaletteNodesPartner =
{
    { L"Palettes" }, 0x0, NBHIDButtonLabelsPartner
};

const sGCBUPF_BasicNodeData NBHIDPaletteNodesBoss =
{
    { L"Palettes" }, 0x0, NBHIDButtonLabelsBoss
};

const std::vector<sGCBUPF_BasicFileData> NBHIDCharacterData_NL =
{
    { L"flashrom\\act\\chara\\chara_0C_00.pal",        L"Homura",                                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0C_00m.pal",       L"Homura (Swimsuit)",                     0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0Cs_00.pal",       L"Homura (Intro Clothes)",                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_09_00.pal",        L"Saber",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_02_00.pal",        L"Ruili",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_00_00.pal",        L"Ein",                                   0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_00s_00.pal",       L"Ein (School Friends)",                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_01_00.pal",        L"Mora",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_06_00.pal",        L"Anna",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0D_00.pal",        L"Ouka",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0Ds_00.pal",       L"Ouka (Win Clothes)",                    0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0B_00.pal",        L"Heart Aino",                            0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0B_00m.pal",       L"Heart Aino (Swimsuit)",                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_05_00.pal",        L"Ignis",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_05s_00.pal",       L"Ignis (Intro Clothes)",                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_07_00.pal",        L"Muramasa",                              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_07s_00.pal",       L"Muramasa (Minato Kageaki)",             0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_03_00.pal",        L"Al Azif",                               0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_03s_00.pal",       L"Al Azif (Kurou & Magius Style)",        0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_04_00.pal",        L"Saya",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_08_00.pal",        L"Ethica",                                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0A_00.pal",        L"Super Sonico",                          0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0A_00m.pal",       L"Super Sonico (Swimsuit)",               0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    //P1/P2, but not a partner
    { L"flashrom\\act\\chara\\chara_0As_00.pal",       L"Super Sonico (Cats)",                   0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },

    { L"flashrom\\act\\partner\\partner_00_00.pal",    L"(Partner) Aibara Natsumi",              0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_01_00.pal",    L"(Partner) Henri",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_05_00.pal",    L"(Partner) Franco",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_04_00.pal",    L"(Partner) Another Blood",               0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_03_00.pal",    L"(Partner) Dragon",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_02_00.pal",    L"(Partner) Kaigen Ishima",               0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_06_00.pal",    L"(Partner) Spica",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_07_00.pal",    L"(Partner) Sakura",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_09_00.pal",    L"(Partner) Carol",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_0A_00.pal",    L"(Partner) Miyuki Sone",                 0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_0B_00.pal",    L"(Partner) Aoi Mukou",                   0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_08_00.pal",    L"(Partner) Sonico",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_08_01.pal",    L"(Partner) Suzu & Fuuri",                0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_13_00.pal",    L"(Partner) Yoguruma Mugen",              0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_11_00.pal",    L"(Partner) Mitsurugi Yoishi",            0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_10_00.pal",    L"(Partner) Althea",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_0F_00.pal",    L"(Partner) Angela",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_0C_00.pal",    L"(Partner) Iria",                        0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_0D_00.pal",    L"(Partner) Akane",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_0E_00.pal",    L"(Partner) Amy",                         0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\partner\\partner_12_00.pal",    L"(Partner) Yuki",                        0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0E_00.pal",        L"(Boss) Al Azif Ex Mortis",              0x10010, NBHIDPaletteNodesBoss,           GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },

    { L"flashrom\\act\\chara\\chara_01s_00.pal",       L"(Unused) Konomi (Dog & Friends))",      0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0Bs_00.pal",       L"(Unused) Sasara (Frog 2)",              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0D_01.pal",        L"(Unused) Chizuru (Demon Blood)",        0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_04s_00.pal",       L"(Unused) Hakuowlo (Aruruu & Eruruu)",   0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0F_00.pal",        L"(Unused) Ein",                          0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_0Bp_00.pal",       L"(Unused) Sasara (Frog 1)",              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"flashrom\\act\\chara\\chara_03p_00.pal",       L"(Unused) Multi (Broom Effect)",         0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
};

const std::vector<sGCBUPF_BasicFileData> NBHIDCharacterData_P =
{
    { L"USRDIR\\act\\chara\\chara_0C_00.pal",        L"Homura",                                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0C_00m.pal",       L"Homura (Swimsuit)",                     0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0Cs_00.pal",       L"Homura (Intro Clothes)",                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_09_00.pal",        L"Saber",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_02_00.pal",        L"Ruili",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_00_00.pal",        L"Ein",                                   0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_00s_00.pal",       L"Ein (School Friends)",                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_01_00.pal",        L"Mora",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_06_00.pal",        L"Anna",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0D_00.pal",        L"Ouka",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0Ds_00.pal",       L"Ouka (Win Clothes)",                    0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0B_00.pal",        L"Heart Aino",                            0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0B_00m.pal",       L"Heart Aino (Swimsuit)",                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_05_00.pal",        L"Ignis",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_05s_00.pal",       L"Ignis (Intro Clothes)",                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_07_00.pal",        L"Muramasa",                              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_07s_00.pal",       L"Muramasa (Minato Kageaki)",             0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_03_00.pal",        L"Al Azif",                               0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_03s_00.pal",       L"Al Azif (Kurou & Magius Style)",        0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_04_00.pal",        L"Saya",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_08_00.pal",        L"Ethica",                                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0A_00.pal",        L"Super Sonico",                          0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0A_00m.pal",       L"Super Sonico (Swimsuit)",               0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    //P1/P2, but not a partner
    { L"USRDIR\\act\\chara\\chara_0As_00.pal",       L"Super Sonico (Cats)",                   0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },

    { L"USRDIR\\act\\partner\\partner_00_00.pal",    L"(Partner) Aibara Natsumi",              0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_01_00.pal",    L"(Partner) Henri",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_05_00.pal",    L"(Partner) Franco",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_04_00.pal",    L"(Partner) Another Blood",               0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_03_00.pal",    L"(Partner) Dragon",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_02_00.pal",    L"(Partner) Kaigen Ishima",               0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_06_00.pal",    L"(Partner) Spica",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_07_00.pal",    L"(Partner) Sakura",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_09_00.pal",    L"(Partner) Carol",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_0A_00.pal",    L"(Partner) Miyuki Sone",                 0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_0B_00.pal",    L"(Partner) Aoi Mukou",                   0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_08_00.pal",    L"(Partner) Sonico",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_08_01.pal",    L"(Partner) Suzu & Fuuri",                0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_13_00.pal",    L"(Partner) Yoguruma Mugen",              0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_11_00.pal",    L"(Partner) Mitsurugi Yoishi",            0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_10_00.pal",    L"(Partner) Althea",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_0F_00.pal",    L"(Partner) Angela",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_0C_00.pal",    L"(Partner) Iria",                        0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_0D_00.pal",    L"(Partner) Akane",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_0E_00.pal",    L"(Partner) Amy",                         0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\partner\\partner_12_00.pal",    L"(Partner) Yuki",                        0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0E_00.pal",        L"(Boss) Al Azif Ex Mortis",              0x10010, NBHIDPaletteNodesBoss,           GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },

    { L"USRDIR\\act\\chara\\chara_01s_00.pal",       L"(Unused) Konomi (Dog & Friends))",      0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0Bs_00.pal",       L"(Unused) Sasara (Frog 2)",              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0D_01.pal",        L"(Unused) Chizuru (Demon Blood)",        0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_04s_00.pal",       L"(Unused) Hakuowlo (Aruruu & Eruruu)",   0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0F_00.pal",        L"(Unused) Ein",                          0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_0Bp_00.pal",       L"(Unused) Sasara (Frog 1)",              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"USRDIR\\act\\chara\\chara_03p_00.pal",       L"(Unused) Multi (Broom Effect)",         0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
};

const std::vector<sGCBUPF_BasicFileData> NBHIDCharacterData_Steam =
{
    { L"data\\zf0mllWg2ubniw0uuu0w0ubuu2b0l20jwf",        L"Homura",                                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\jpte8g0qeevv0glexe00lev0gqG08l8sewp",       L"Homura (Swimsuit)",                     0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\rxmetday0mof0otmdm0otmdm04Oe0440bmx",       L"Homura (Intro Clothes)",                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\wn7d8pn0w0od8wldwbh0ww08iwhynky0y0",        L"Saber",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\q0qcb0hx242xj00xbvqsqqsh0qqfi2seh0",        L"Ruili",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\egglevvvpse00xtewj00glqepel00000e0",        L"Ein",                                   0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\g00tdidiqmsbisn77tbsd00m0bpubb7b0b7",       L"Ein (School Friends)",                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\pv0cybrwkk0drm6kkkmmbkrkb600060z7v",        L"Mora",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\rx0e0doytm0fto8mamtodmmm22m002db0x",        L"Anna",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\mo000mota0mmmdf0brmmxydtx0eoP000dt",        L"Ouka",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\05v0iteyekavt0fvtlm0haakt0tkttW505l",       L"Ouka (Win Clothes)",                    0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\ccevejtqnjtj0nc00hct4curoc0e0440cD",        L"Heart Aino",                            0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\zfumblig0uwn0wbulu0wbulu02V022g0juf",       L"Heart Aino (Swimsuit)",                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\m70o2dm0x0t22tfdmrox0m0tb0medamyom",        L"Ignis",                                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\wqfxm5tm0f5y0hhmwf0hr0wf0f0xf5k0ufq",       L"Ignis (Intro Clothes)",                 0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\y0paf0a4q04fy00pjdayy4ymnpjfryk1y0",        L"Muramasa",                              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\96z0990zhsmohtvyoj0hjj0wshyhyho00ha",       L"Muramasa (Minato Kageaki)",             0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\bhwodnki0wyp0ydwnw0ydwnw0810880lwh",        L"Al Azif",                               0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\id4vokfdsdudv0011fodfp0urd0kkw10du0",       L"Al Azif (Kurou & Magius Style)",        0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\cc0j00eccv48c0ejchtnu404n0cqotrjte",        L"Saya",                                  0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\pvyckb0w0k4drm0k6krmbkmk06r0k6bz0v",        L"Ethica",                                0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\pvyckb0w0kKdrm0k6krmbkmk06r0k6bz0v",        L"Super Sonico",                          0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\pvkmrmKw06bbkcrkd0k0rkz0mwy06k60bkv",       L"Super Sonico (Swimsuit)",               0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    //P1/P2, but not a partner
    { L"data\\zgjs02Ssu220hsuxsekzjdk0sul00dsjs0z",       L"Super Sonico (Cats)",                   0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },

    { L"data\\h0fqhqfubsh00xh02jjvcqf0i2b02ehuqjdqd2",    L"(Partner) Aibara Natsumi",              0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\lr0yux5s4ggzgvkxktgxzv0x0tzxn4g004iv0r",    L"(Partner) Henri",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\xd0k0jwelssl2h0j0fsjuh7jsfljw200z2ghsd",    L"(Partner) Franco",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\t0trpqovtvn40c0ep0rhc00ctrnctgg00cujv0",    L"(Partner) Another Blood",               0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\rxmetday0mof0bmdfzqd0bmdfzqd0810880bmx",    L"(Partner) Dragon",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\nk0wpdjwn068wao0linbj6l0apn0h0wlhw6pny",    L"(Partner) Kaigen Ishima",               0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\itpawz0uzi0bixbzmvk0ixbzmv0z044004ixnt",    L"(Partner) Spica",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\djaq0p3k6yfryncpcl0prnypml0py600y60nrj",    L"(Partner) Sakura",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\qwldsczx0lne0alceypc0alceypc0320330alw",    L"(Partner) Carol",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\byb0zxb0zwkk04bo0d0pbmcdvKkzx0o4v4kdrk",    L"(Partner) Miyuki Sone",                 0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\m0iomoizoxv0077cnvgagvk0mjhW70m0kvmvkz",    L"(Partner) Aoi Mukou",                   0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\fsbofodsfqo60cf0doztzogv88a080h0bhfhd0",    L"(Partner) Sonico",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\qwldsczx0lne0alceypc0alceypc0310340alw",    L"(Partner) Suzu & Fuuri",                0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\t0trpqovtvn30c1ep0rhc00ctrnctgg00cujv0",    L"(Partner) Yoguruma Mugen",              0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\nk0wpdjwn077wao0linbj6l0apn0h0wlhw6pny",    L"(Partner) Mitsurugi Yoishi",            0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\lr0yux4s4ggzgvkxktgxzv0x0tzxn5g004iv0r",    L"(Partner) Althea",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\j0kszljwjgjX0uh2fldxds20jsl0fhe02s0shw",    L"(Partner) Angela",                      0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\lr0yuxIs4ggzgvkxktgxzv0x0tzxn4g004iv0r",    L"(Partner) Iria",                        0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\x0xgt0zzxnrJy000vz4lg0vgxst4ukxvig4krg",    L"(Partner) Akane",                       0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\rxmetday0mof0bmdfzqd0bmdfzqd08Q0880bmx",    L"(Partner) Amy",                         0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\rxmetday0mof0bmdfzqd0bmdfzqd0900880bmx",    L"(Partner) Yuki",                        0x10010, NBHIDPaletteNodesPartner,        GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\jplwevlqvevx0g8e0eIgsege0800l8et0p",        L"(Boss) Al Azif Ex Mortis",              0x10010, NBHIDPaletteNodesBoss,           GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },

    { L"data\\bbmss0t07ud7p0gsbtiimn7b800dibqb0db",       L"(Unused) Konomi (Dog & Friends))",      0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\hvtuceqo0jtnccjct0cejcc0n80u088Dre0",       L"(Unused) Sasara (Frog 2)",              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\jplwevlqvevx0g8e0eHgsege0800l9et0p",        L"(Unused) Chizuru (Demon Blood)",        0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\jpte8g0qeevvwglexe00lev0g8200l8sewp",       L"(Unused) Hakuowlo (Aruruu & Eruruu)",   0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\wilwwnn0dpyd6wy00bo0Bdh60kyhw6wnw0",        L"(Unused) Ein",                          0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\djyqfamk0yfr0af0py0apypy00Zn00y0nyj",       L"(Unused) Sasara (Frog 1)",              0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
    { L"data\\g00qdidiqmsbisn77tbsd00m0bpubb7b0b0",       L"(Unused) Multi (Broom Effect)",         0x10010, NBHIDPaletteNodesNormal,         GCBUPF_UseButtonLabelsAsPaletteSet,      0x10 },
};
