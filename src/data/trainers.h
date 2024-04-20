#define DUMMY_TRAINER_DATA                                       \
    {                                                            \
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,            \
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,   \
        .trainerPic = TRAINER_PIC_HIKER,                         \
        .trainerName = gText_ExpandedPlaceholder_Empty,          \
        .trainerType = TRAINER(.items = {},                      \
                               .aiFlags = 0),                    \
        .doubleBattle = FALSE,                                   \
        .partySize = 0,                                          \
        .party = NULL,                                           \
    }

const struct Trainer gTrainers[] = {
    [TRAINER_NONE] = DUMMY_TRAINER_DATA,

    //=====================================================
    // Bradley #1
    //=====================================================

    [TRAINER_BRADLEY_NEOBAY_1_VENAP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRADLEY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BradleyNeoBay1Venap),
    },

    [TRAINER_BRADLEY_NEOBAY_1_CELSINGE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRADLEY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BradleyNeoBay1Celsinge),
    },

    [TRAINER_BRADLEY_NEOBAY_1_ECHOISE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRADLEY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BradleyNeoBay1Echoise),
    },

    //=====================================================
    // Route 201
    //=====================================================

    [TRAINER_ALLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gTrainerNameString_Allen,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Allen),
    },

    [TRAINER_GUS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gTrainerNameString_Gus,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gus),
    },

    //=====================================================
    // Route 202
    //=====================================================

    [TRAINER_TYLER] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gTrainerNameString_Tyler,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tyler),
    },

    [TRAINER_NOAH] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gTrainerNameString_Noah,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Noah),
    },

    [TRAINER_MAT] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gTrainerNameString_Mat,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mat),
    },

    [TRAINER_JANICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gTrainerNameString_Janice,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Janice),
    },

    //=====================================================
    // Bradley #2
    //=====================================================

    [TRAINER_BRADLEY_NEOBAY_2_VENAP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRADLEY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BradleyNeoBay2Venap),
    },

    [TRAINER_BRADLEY_NEOBAY_2_CELSINGE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRADLEY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BradleyNeoBay2Celsinge),
    },

    [TRAINER_BRADLEY_NEOBAY_2_ECHOISE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRADLEY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BradleyNeoBay2Echoise),
    },

    //=====================================================
    // Route 203
    //=====================================================

    [TRAINER_REED] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gTrainerNameString_Reed,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Reed),
    },

    [TRAINER_RYAN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gTrainerNameString_Ryan,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ryan),
    },

    [TRAINER_ALBERTO] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gTrainerNameString_Alberto,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alberto),
    },

    [TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gTrainerNameString_Charlie,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Charlie),
    },

    [TRAINER_CLIFTON] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gTrainerNameString_Clifton,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Clifton),
    },

    //=====================================================
    // Chartree Forest
    //=====================================================

    [TRAINER_FRANKLIN] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gTrainerNameString_Franklin,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Franklin),
    },

    [TRAINER_MARVIN] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gTrainerNameString_Marvin,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Marvin),
    },

    [TRAINER_WALLY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gTrainerNameString_Wally,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wally),
    },

    [TRAINER_ZELDA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gTrainerNameString_Zelda,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Zelda),
    },

    [TRAINER_SARAH] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gTrainerNameString_Sarah,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sarah),
    },

    //=====================================================
    // Route 204
    //=====================================================

    [TRAINER_AINA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gTrainerNameString_Aina,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Aina),
    },

    [TRAINER_DERRICK] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gTrainerNameString_Derrick,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Derrick),
    },

    [TRAINER_LEXI] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gTrainerNameString_Lexi,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lexi),
    },

    [TRAINER_BEATRICE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gTrainerNameString_Beatrice,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Beatrice),
    },

    //=====================================================
    // Cranewing Gym
    //=====================================================

    [TRAINER_SLADE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gTrainerNameString_Slade,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Slade),
    },

    [TRAINER_LOLA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gTrainerNameString_Lola,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lola),
    },

    [TRAINER_FROY] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_FROY,
        .trainerName = gTrainerNameString_Froy,
        .trainerType = TRAINER(.items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Froy),
    },

    //=====================================================
    // Route 204 Shook and Allard
    //=====================================================

    [TRAINER_SHOOK_AND_ALLARD_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_SHOOK_AND_ALLARD,
        .trainerName = gTrainerNameString_Recruits,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_ShookAndAllard1),
    },

    //=====================================================
    // Chartree Forest Rocket Encounter
    //=====================================================

    [TRAINER_GRUNT_CHARTREE_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = gTrainerNameString_Grunt,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_ChartreeRocket1),
    },

    [TRAINER_GRUNT_CHARTREE_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = gTrainerNameString_Grunt,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_ChartreeRocket2),
    },

    [TRAINER_GRUNT_CHARTREE_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = gTrainerNameString_Grunt,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_ChartreeRocket3),
    },

    [TRAINER_BALFOUR_1] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BALFOUR,
        .trainerName = gTrainerNameString_Balfour,
        .trainerType = TRAINER(.items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Balfour1),
    },

    //=====================================================
    // Softwind City Orion Encounter
    //=====================================================

    [TRAINER_WOLSEY_1] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_WOLSEY,
        .trainerName = gTrainerNameString_Wolsey,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wolsey1),
    },

    //=====================================================
    // Softwind City Gym
    //=====================================================

    [TRAINER_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gTrainerNameString_Yuki,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Yuki),
    },

    [TRAINER_NESSA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gTrainerNameString_Nessa,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nessa),
    },

    [TRAINER_BRANDYN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gTrainerNameString_Brandyn,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brandyn),
    },

    [TRAINER_GREGOR] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gTrainerNameString_Gregor,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gregor),
    },

    [TRAINER_THERMA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_THERMA,
        .trainerName = gTrainerNameString_Therma,
        .trainerType = TRAINER(.items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Therma),
    },

    //=====================================================
    // Alisa #1
    //=====================================================

    [TRAINER_ALISA_1_VENAP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ALISA,
        .trainerName = gTrainerNameString_Alisa,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alisa1Venap),
    },

    [TRAINER_ALISA_1_CELSINGE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ALISA,
        .trainerName = gTrainerNameString_Alisa,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alisa1Celsinge),
    },

    [TRAINER_ALISA_1_ECHOISE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ALISA,
        .trainerName = gTrainerNameString_Alisa,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alisa1Echoise),
    },

    //=====================================================
    // Route 205
    //=====================================================

    [TRAINER_FRANCIS] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gTrainerNameString_Francis,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Francis),
    },

    [TRAINER_AMY_AND_ALLY] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gTrainerNameString_AmyAndAlly,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndAlly),
    },

    [TRAINER_TRAVIS] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gTrainerNameString_Travis,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Travis),
    },

    [TRAINER_GWEN] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = gTrainerNameString_Gwen,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gwen),
    },

    [TRAINER_PERCY] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gTrainerNameString_Percy,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Percy),
    },

    [TRAINER_ISHMAEL] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gTrainerNameString_Ishmael,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ishmael),
    },

    //=====================================================
    // Route 206
    //=====================================================

    [TRAINER_MIKAEL] =
    {
        .trainerClass = TRAINER_CLASS_ARTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gTrainerNameString_Mikael,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mikael),
    },

    [TRAINER_JURGEN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gTrainerNameString_Jurgen,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jurgen),
    },

    [TRAINER_WINSTON] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gTrainerNameString_Winston,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winston),
    },

    [TRAINER_ELI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gTrainerNameString_Eli,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Eli),
    },

    [TRAINER_SIERRA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gTrainerNameString_Sierra,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sierra),
    },

    [TRAINER_WANDA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gTrainerNameString_Wanda,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Wanda),
    },





















































    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst3),
    },

    [TRAINER_GABBY_AND_TY_6] =
    {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy6),
    },

    [TRAINER_LOLA_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lola1),
    },

    [TRAINER_AUSTINA] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Austina),
    },

    [TRAINER_LOLA_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lola2),
    },

    [TRAINER_LOLA_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lola3),
    },

    [TRAINER_LOLA_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lola4),
    },

    [TRAINER_LOLA_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lola5),
    },

    [TRAINER_RICKY_1] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ricky1),
    },

    [TRAINER_SIMON] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Simon),
    },

    [TRAINER_RICKY_2] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ricky2),
    },

    [TRAINER_RICKY_3] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ricky3),
    },

    [TRAINER_RICKY_4] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ricky4),
    },

    [TRAINER_RICKY_5] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ricky5),
    },

    [TRAINER_RANDALL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Randall),
    },

    [TRAINER_PARKER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Parker),
    },

    [TRAINER_GEORGE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_George),
    },

    [TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Berke),
    },

    [TRAINER_BRAXTON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Braxton),
    },

    [TRAINER_VINCENT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Vincent),
    },

    [TRAINER_LEROY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Leroy),
    },

    [TRAINER_WILTON_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wilton1),
    },

    [TRAINER_EDGAR] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edgar),
    },

    [TRAINER_ALBERT] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Albert),
    },

    [TRAINER_SAMUEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Samuel),
    },

    [TRAINER_VITO] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Vito),
    },

    [TRAINER_OWEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Owen),
    },

    [TRAINER_WILTON_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wilton2),
    },

    [TRAINER_WILTON_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wilton3),
    },

    [TRAINER_WILTON_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wilton4),
    },

    [TRAINER_WILTON_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wilton5),
    },

    [TRAINER_WARREN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Warren),
    },

    [TRAINER_MARY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mary),
    },

    [TRAINER_ALEXIA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alexia),
    },

    [TRAINER_JODY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jody),
    },

    [TRAINER_WENDY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wendy),
    },

    [TRAINER_KEIRA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Keira),
    },

    [TRAINER_BROOKE_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brooke1),
    },

    [TRAINER_JENNIFER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jennifer),
    },

    [TRAINER_HOPE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hope),
    },

    [TRAINER_SHANNON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shannon),
    },

    [TRAINER_MICHELLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Michelle),
    },

    [TRAINER_CAROLINE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Caroline),
    },

    [TRAINER_JULIE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Julie),
    },

    [TRAINER_BROOKE_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brooke2),
    },

    [TRAINER_BROOKE_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brooke3),
    },

    [TRAINER_BROOKE_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brooke4),
    },

    [TRAINER_BROOKE_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brooke5),
    },

    [TRAINER_PATRICIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Patricia),
    },

    [TRAINER_KINDRA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kindra),
    },

    [TRAINER_TAMMY] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tammy),
    },

    [TRAINER_VALERIE_1] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Valerie1),
    },

    [TRAINER_TASHA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tasha),
    },

    [TRAINER_VALERIE_2] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Valerie2),
    },

    [TRAINER_VALERIE_3] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Valerie3),
    },

    [TRAINER_VALERIE_4] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Valerie4),
    },

    [TRAINER_VALERIE_5] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Valerie5),
    },

    [TRAINER_CINDY_1] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cindy1),
    },

    [TRAINER_DAPHNE] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Daphne),
    },

    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter2),
    },

    [TRAINER_CINDY_2] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cindy2),
    },

    [TRAINER_BRIANNA] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brianna),
    },

    [TRAINER_NAOMI] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Naomi),
    },

    [TRAINER_CINDY_3] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cindy3),
    },

    [TRAINER_CINDY_4] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cindy4),
    },

    [TRAINER_CINDY_5] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cindy5),
    },

    [TRAINER_CINDY_6] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cindy6),
    },

    [TRAINER_MELISSA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Melissa),
    },

    [TRAINER_SHEILA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sheila),
    },

    [TRAINER_SHIRLEY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shirley),
    },

    [TRAINER_JESSICA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jessica1),
    },

    [TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Connie),
    },

    [TRAINER_BRIDGET] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bridget),
    },

    [TRAINER_OLIVIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Olivia),
    },

    [TRAINER_TIFFANY] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tiffany),
    },

    [TRAINER_JESSICA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jessica2),
    },

    [TRAINER_JESSICA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jessica3),
    },

    [TRAINER_JESSICA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jessica4),
    },

    [TRAINER_JESSICA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jessica5),
    },

    [TRAINER_WINSTON_1] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winston1),
    },

    [TRAINER_MOLLIE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mollie),
    },

    [TRAINER_GARRET] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Garret),
    },

    [TRAINER_WINSTON_2] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winston2),
    },

    [TRAINER_WINSTON_3] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winston3),
    },

    [TRAINER_WINSTON_4] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winston4),
    },

    [TRAINER_WINSTON_5] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winston5),
    },

    [TRAINER_STEVE_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Steve1),
    },

    [TRAINER_THALIA_1] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Thalia1),
    },

    [TRAINER_MARK] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mark),
    },

    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney1),
    },

    [TRAINER_STEVE_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Steve2),
    },

    [TRAINER_STEVE_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Steve3),
    },

    [TRAINER_STEVE_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Steve4),
    },

    [TRAINER_STEVE_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Steve5),
    },

    [TRAINER_LUIS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Luis),
    },

    [TRAINER_DOMINIK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dominik),
    },

    [TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Douglas),
    },

    [TRAINER_DARRIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Darrin),
    },

    [TRAINER_TONY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tony1),
    },

    [TRAINER_JEROME] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jerome),
    },

    [TRAINER_GRUNT_CHARTREE_3HEW] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Matthew),
    },

    [TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_David),
    },

    [TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Spencer),
    },

    [TRAINER_ROLAND] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Roland),
    },

    [TRAINER_NOLEN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nolen),
    },

    [TRAINER_STAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Stan),
    },

    [TRAINER_BARRY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Barry),
    },

    [TRAINER_DEAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dean),
    },

    [TRAINER_RODNEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Rodney),
    },

    [TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Richard),
    },

    [TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Herman),
    },

    [TRAINER_SANTIAGO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Santiago),
    },

    [TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gilbert),
    },

    [TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kevin),
    },

    [TRAINER_JACK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jack),
    },

    [TRAINER_DUDLEY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dudley),
    },

    [TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Chad),
    },

    [TRAINER_TONY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tony2),
    },

    [TRAINER_TONY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tony3),
    },

    [TRAINER_TONY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tony4),
    },

    [TRAINER_TONY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tony5),
    },

    [TRAINER_TAKAO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Takao),
    },

    [TRAINER_HITOSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hitoshi),
    },

    [TRAINER_KIYO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kiyo),
    },

    [TRAINER_KOICHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Koichi),
    },

    [TRAINER_NOB_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nob1),
    },

    [TRAINER_NOB_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nob2),
    },

    [TRAINER_NOB_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nob3),
    },

    [TRAINER_NOB_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nob4),
    },

    [TRAINER_NOB_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nob5),
    },

    [TRAINER_YUJI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Yuji),
    },

    [TRAINER_DAISUKE] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Daisuke),
    },

    [TRAINER_ATSUSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Atsushi),
    },

    [TRAINER_KIRK] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kirk),
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout7),
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout8),
    },

    [TRAINER_SHAWN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shawn),
    },

    [TRAINER_FERNANDO_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Fernando1),
    },

    [TRAINER_DALTON_1] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dalton1),
    },

    [TRAINER_DALTON_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dalton2),
    },

    [TRAINER_DALTON_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dalton3),
    },

    [TRAINER_DALTON_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dalton4),
    },

    [TRAINER_DALTON_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dalton5),
    },

    [TRAINER_COLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cole),
    },

    [TRAINER_JEFF] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jeff),
    },

    [TRAINER_AXLE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Axle),
    },

    [TRAINER_JACE] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jace),
    },

    [TRAINER_KEEGAN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Keegan),
    },

    [TRAINER_BERNIE_1] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bernie1),
    },

    [TRAINER_BERNIE_2] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bernie2),
    },

    [TRAINER_BERNIE_3] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bernie3),
    },

    [TRAINER_BERNIE_4] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bernie4),
    },

    [TRAINER_BERNIE_5] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bernie5),
    },

    [TRAINER_DREW] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Drew),
    },

    [TRAINER_BEAU] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Beau),
    },

    [TRAINER_LARRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Larry),
    },

    [TRAINER_SHANE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shane),
    },

    [TRAINER_JUSTIN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Justin),
    },

    [TRAINER_ETHAN_1] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ethan1),
    },

    [TRAINER_AUTUMN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Autumn),
    },

    [TRAINER_ETHAN_2] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ethan2),
    },

    [TRAINER_ETHAN_3] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ethan3),
    },

    [TRAINER_ETHAN_4] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ethan4),
    },

    [TRAINER_ETHAN_5] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ethan5),
    },

    [TRAINER_BRENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brent),
    },

    [TRAINER_DONALD] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Donald),
    },

    [TRAINER_TAYLOR] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Taylor),
    },

    [TRAINER_JEFFREY_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jeffrey1),
    },

    [TRAINER_DEREK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Derek),
    },

    [TRAINER_JEFFREY_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jeffrey2),
    },

    [TRAINER_JEFFREY_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jeffrey3),
    },

    [TRAINER_JEFFREY_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jeffrey4),
    },

    [TRAINER_JEFFREY_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jeffrey5),
    },

    [TRAINER_EDWARD] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edward),
    },

    [TRAINER_PRESTON] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Preston),
    },

    [TRAINER_VIRGIL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Virgil),
    },

    [TRAINER_BLAKE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Blake),
    },

    [TRAINER_WILLIAM] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_William),
    },

    [TRAINER_JOSHUA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Joshua),
    },

    [TRAINER_CAMERON_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cameron1),
    },

    [TRAINER_CAMERON_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cameron2),
    },

    [TRAINER_CAMERON_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cameron3),
    },

    [TRAINER_CAMERON_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cameron4),
    },

    [TRAINER_CAMERON_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cameron5),
    },

    [TRAINER_JACLYN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jaclyn),
    },

    [TRAINER_HANNAH] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hannah),
    },

    [TRAINER_SAMANTHA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Samantha),
    },

    [TRAINER_MAURA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Maura),
    },

    [TRAINER_KAYLA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kayla),
    },

    [TRAINER_ALEXIS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alexis),
    },

    [TRAINER_JACKI_1] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jacki1),
    },

    [TRAINER_JACKI_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jacki2),
    },

    [TRAINER_JACKI_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jacki3),
    },

    [TRAINER_JACKI_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jacki4),
    },

    [TRAINER_JACKI_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jacki5),
    },

    [TRAINER_WALTER_1] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Walter1),
    },

    [TRAINER_MICAH] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Micah),
    },

    [TRAINER_THOMAS] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Thomas),
    },

    [TRAINER_WALTER_2] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Walter2),
    },

    [TRAINER_WALTER_3] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Walter3),
    },

    [TRAINER_WALTER_4] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Walter4),
    },

    [TRAINER_WALTER_5] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Walter5),
    },

    [TRAINER_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sidney),
    },

    [TRAINER_PHOEBE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Phoebe),
    },

    [TRAINER_GLACIA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Glacia),
    },

    [TRAINER_DRAKE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Drake),
    },

    [TRAINER_ROXANNE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Roxanne1),
    },

    [TRAINER_BRAWLY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brawly1),
    },

    [TRAINER_WATTSON_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wattson1),
    },

    [TRAINER_FLANNERY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Flannery1),
    },

    [TRAINER_NORMAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Norman1),
    },

    [TRAINER_WINONA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Winona1),
    },

    [TRAINER_TATE_AND_LIZA_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_TateAndLiza1),
    },

    [TRAINER_JUAN_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Juan1),
    },

    [TRAINER_JERRY_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jerry1),
    },

    [TRAINER_TED] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ted),
    },

    [TRAINER_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Paul),
    },

    [TRAINER_JERRY_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jerry2),
    },

    [TRAINER_JERRY_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jerry3),
    },

    [TRAINER_JERRY_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jerry4),
    },

    [TRAINER_JERRY_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jerry5),
    },

    [TRAINER_KAREN_1] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Karen1),
    },

    [TRAINER_GEORGIA] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Georgia),
    },

    [TRAINER_KAREN_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Karen2),
    },

    [TRAINER_KAREN_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Karen3),
    },

    [TRAINER_KAREN_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Karen4),
    },

    [TRAINER_KAREN_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Karen5),
    },

    [TRAINER_KATE_AND_JOY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KateAndJoy),
    },

    [TRAINER_ANNA_AND_MEG_1] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg1),
    },

    [TRAINER_ANNA_AND_MEG_2] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg2),
    },

    [TRAINER_ANNA_AND_MEG_3] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg3),
    },

    [TRAINER_ANNA_AND_MEG_4] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg4),
    },

    [TRAINER_ANNA_AND_MEG_5] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg5),
    },

    [TRAINER_VICTOR] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Victor),
    },

    [TRAINER_MIGUEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Miguel1),
    },

    [TRAINER_COLTON] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Colton),
    },

    [TRAINER_MIGUEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Miguel2),
    },

    [TRAINER_MIGUEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Miguel3),
    },

    [TRAINER_MIGUEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Miguel4),
    },

    [TRAINER_MIGUEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Miguel5),
    },

    [TRAINER_VICTORIA] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Victoria),
    },

    [TRAINER_VANESSA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Vanessa),
    },

    [TRAINER_BETHANY] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bethany),
    },

    [TRAINER_ISABEL_1] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabel1),
    },

    [TRAINER_ISABEL_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabel2),
    },

    [TRAINER_ISABEL_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabel3),
    },

    [TRAINER_ISABEL_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabel4),
    },

    [TRAINER_ISABEL_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabel5),
    },

    [TRAINER_TIMOTHY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Timothy1),
    },

    [TRAINER_TIMOTHY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Timothy2),
    },

    [TRAINER_TIMOTHY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Timothy3),
    },

    [TRAINER_TIMOTHY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Timothy4),
    },

    [TRAINER_TIMOTHY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Timothy5),
    },

    [TRAINER_VICKY] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Vicky),
    },

    [TRAINER_SHELBY_1] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shelby1),
    },

    [TRAINER_SHELBY_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shelby2),
    },

    [TRAINER_SHELBY_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shelby3),
    },

    [TRAINER_SHELBY_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shelby4),
    },

    [TRAINER_SHELBY_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shelby5),
    },

    [TRAINER_CALVIN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Calvin1),
    },

    [TRAINER_BILLY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Billy),
    },

    [TRAINER_JOSH] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Josh),
    },

    [TRAINER_TOMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tommy),
    },

    [TRAINER_JOEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Joey),
    },

    [TRAINER_BEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ben),
    },

    [TRAINER_QUINCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Quincy),
    },

    [TRAINER_KATELYNN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katelynn),
    },

    [TRAINER_JAYLEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jaylen),
    },

    [TRAINER_DILLON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dillon),
    },

    [TRAINER_CALVIN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Calvin2),
    },

    [TRAINER_CALVIN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Calvin3),
    },

    [TRAINER_CALVIN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Calvin4),
    },

    [TRAINER_CALVIN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Calvin5),
    },

    [TRAINER_EDDIE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Eddie),
    },

    [TRAINER_TIMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Timmy),
    },

    [TRAINER_WALLACE] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wallace),
    },

    [TRAINER_ANDREW] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andrew),
    },

    [TRAINER_IVAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ivan),
    },

    [TRAINER_CLAUDE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Claude),
    },

    [TRAINER_ELLIOT_1] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Elliot1),
    },

    [TRAINER_NED] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ned),
    },

    [TRAINER_DALE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dale),
    },

    [TRAINER_NOLAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nolan),
    },

    [TRAINER_BARNY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Barny),
    },

    [TRAINER_WADE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wade),
    },

    [TRAINER_CARTER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Carter),
    },

    [TRAINER_ELLIOT_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Elliot2),
    },

    [TRAINER_ELLIOT_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Elliot3),
    },

    [TRAINER_ELLIOT_4] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Elliot4),
    },

    [TRAINER_ELLIOT_5] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Elliot5),
    },

    [TRAINER_RONALD] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ronald),
    },

    [TRAINER_JACOB] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jacob),
    },

    [TRAINER_ANTHONY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Anthony),
    },

    [TRAINER_BENJAMIN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Benjamin1),
    },

    [TRAINER_BENJAMIN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Benjamin2),
    },

    [TRAINER_BENJAMIN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Benjamin3),
    },

    [TRAINER_BENJAMIN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Benjamin4),
    },

    [TRAINER_BENJAMIN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Benjamin5),
    },

    [TRAINER_ABIGAIL_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Abigail1),
    },

    [TRAINER_JASMINE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jasmine),
    },

    [TRAINER_ABIGAIL_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Abigail2),
    },

    [TRAINER_ABIGAIL_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Abigail3),
    },

    [TRAINER_ABIGAIL_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Abigail4),
    },

    [TRAINER_ABIGAIL_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Abigail5),
    },

    [TRAINER_DYLAN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dylan1),
    },

    [TRAINER_DYLAN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dylan2),
    },

    [TRAINER_DYLAN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dylan3),
    },

    [TRAINER_DYLAN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dylan4),
    },

    [TRAINER_DYLAN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dylan5),
    },

    [TRAINER_MARIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Maria1),
    },

    [TRAINER_MARIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Maria2),
    },

    [TRAINER_MARIA_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Maria3),
    },

    [TRAINER_MARIA_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Maria4),
    },

    [TRAINER_MARIA_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Maria5),
    },

    [TRAINER_CAMDEN] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Camden),
    },

    [TRAINER_DEMETRIUS] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Demetrius),
    },

    [TRAINER_ISAIAH_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaiah1),
    },

    [TRAINER_PABLO_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pablo1),
    },

    [TRAINER_CHASE] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Chase),
    },

    [TRAINER_ISAIAH_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaiah2),
    },

    [TRAINER_ISAIAH_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaiah3),
    },

    [TRAINER_ISAIAH_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaiah4),
    },

    [TRAINER_ISAIAH_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaiah5),
    },

    [TRAINER_ISOBEL] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isobel),
    },

    [TRAINER_DONNY] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Donny),
    },

    [TRAINER_TALIA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Talia),
    },

    [TRAINER_KATELYN_1] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katelyn1),
    },

    [TRAINER_ALLISON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Allison),
    },

    [TRAINER_KATELYN_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katelyn2),
    },

    [TRAINER_KATELYN_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katelyn3),
    },

    [TRAINER_KATELYN_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katelyn4),
    },

    [TRAINER_KATELYN_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katelyn5),
    },

    [TRAINER_NICOLAS_1] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nicolas1),
    },

    [TRAINER_NICOLAS_2] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nicolas2),
    },

    [TRAINER_NICOLAS_3] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nicolas3),
    },

    [TRAINER_NICOLAS_4] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nicolas4),
    },

    [TRAINER_NICOLAS_5] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nicolas5),
    },

    [TRAINER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Aaron),
    },

    [TRAINER_PERRY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Perry),
    },

    [TRAINER_HUGH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hugh),
    },

    [TRAINER_PHIL] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Phil),
    },

    [TRAINER_JARED] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jared),
    },

    [TRAINER_HUMBERTO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Humberto),
    },

    [TRAINER_PRESLEY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Presley),
    },

    [TRAINER_EDWARDO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edwardo),
    },

    [TRAINER_COLIN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Colin),
    },

    [TRAINER_ROBERT_1] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Robert1),
    },

    [TRAINER_BENNY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Benny),
    },

    [TRAINER_CHESTER] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Chester),
    },

    [TRAINER_ROBERT_2] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Robert2),
    },

    [TRAINER_ROBERT_3] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Robert3),
    },

    [TRAINER_ROBERT_4] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Robert4),
    },

    [TRAINER_ROBERT_5] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Robert5),
    },

    [TRAINER_ALEX] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alex),
    },

    [TRAINER_BECK] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Beck),
    },

    [TRAINER_YASU] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Yasu),
    },

    [TRAINER_TAKASHI] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Takashi),
    },

    [TRAINER_DIANNE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Dianne),
    },

    [TRAINER_JANI] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Jani),
    },

    [TRAINER_LAO_1] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Lao1),
    },

    [TRAINER_LUNG] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Lung),
    },

    [TRAINER_LAO_2] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Lao2),
    },

    [TRAINER_LAO_3] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Lao3),
    },

    [TRAINER_LAO_4] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Lao4),
    },

    [TRAINER_LAO_5] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Lao5),
    },

    [TRAINER_JOCELYN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jocelyn),
    },

    [TRAINER_LAURA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Laura),
    },

    [TRAINER_CYNDY_1] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cyndy1),
    },

    [TRAINER_CORA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cora),
    },

    [TRAINER_PAULA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Paula),
    },

    [TRAINER_CYNDY_2] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cyndy2),
    },

    [TRAINER_CYNDY_3] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cyndy3),
    },

    [TRAINER_CYNDY_4] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cyndy4),
    },

    [TRAINER_CYNDY_5] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cyndy5),
    },

    [TRAINER_MADELINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Madeline1),
    },

    [TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Clarissa),
    },

    [TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Angelica),
    },

    [TRAINER_MADELINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Madeline2),
    },

    [TRAINER_MADELINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Madeline3),
    },

    [TRAINER_MADELINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Madeline4),
    },

    [TRAINER_MADELINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Madeline5),
    },

    [TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Beverly),
    },

    [TRAINER_IMANI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Imani),
    },

    [TRAINER_KYLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kyla),
    },

    [TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Denise),
    },

    [TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Beth),
    },

    [TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tara),
    },

    [TRAINER_MISSY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Missy),
    },

    [TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alice),
    },

    [TRAINER_JENNY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jenny1),
    },

    [TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Grace),
    },

    [TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tanya),
    },

    [TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sharon),
    },

    [TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nikki),
    },

    [TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brenda),
    },

    [TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Katie),
    },

    [TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Susie),
    },

    [TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kara),
    },

    [TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dana),
    },

    [TRAINER_SIENNA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sienna),
    },

    [TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Debra),
    },

    [TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Linda),
    },

    [TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kaylee),
    },

    [TRAINER_LAUREL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Laurel),
    },

    [TRAINER_CARLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Carlee),
    },

    [TRAINER_JENNY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jenny2),
    },

    [TRAINER_JENNY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jenny3),
    },

    [TRAINER_JENNY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jenny4),
    },

    [TRAINER_JENNY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jenny5),
    },

    [TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Heidi),
    },

    [TRAINER_BECKY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Becky),
    },

    [TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Carol),
    },

    [TRAINER_NANCY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nancy),
    },

    [TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Martha),
    },

    [TRAINER_DIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Diana1),
    },

    [TRAINER_CEDRIC] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cedric),
    },

    [TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Irene),
    },

    [TRAINER_DIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Diana2),
    },

    [TRAINER_DIANA_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Diana3),
    },

    [TRAINER_DIANA_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Diana4),
    },

    [TRAINER_DIANA_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Diana5),
    },

    [TRAINER_AMY_AND_LIV_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv1),
    },

    [TRAINER_AMY_AND_LIV_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv2),
    },

    [TRAINER_GINA_AND_MIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_GinaAndMia1),
    },

    [TRAINER_MIU_AND_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_MiuAndYuki),
    },

    [TRAINER_AMY_AND_LIV_3] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv3),
    },

    [TRAINER_GINA_AND_MIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_GinaAndMia2),
    },

    [TRAINER_AMY_AND_LIV_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv4),
    },

    [TRAINER_AMY_AND_LIV_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv5),
    },

    [TRAINER_AMY_AND_LIV_6] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv6),
    },

    [TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Huey),
    },

    [TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edmond),
    },

    [TRAINER_ERNEST_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ernest1),
    },

    [TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dwayne),
    },

    [TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Phillip),
    },

    [TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Leonard),
    },

    [TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Duncan),
    },

    [TRAINER_ERNEST_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ernest2),
    },

    [TRAINER_ERNEST_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ernest3),
    },

    [TRAINER_ERNEST_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ernest4),
    },

    [TRAINER_ERNEST_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ernest5),
    },

    [TRAINER_ANNIKA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Annika),
    },

    [TRAINER_JAZMYN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jazmyn),
    },

    [TRAINER_JONAS] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jonas),
    },

    [TRAINER_KAYLEY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kayley),
    },

    [TRAINER_AURON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Auron),
    },

    [TRAINER_KELVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kelvin),
    },

    [TRAINER_MARLEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Marley),
    },

    [TRAINER_REYNA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Reyna),
    },

    [TRAINER_HUDSON] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hudson),
    },

    [TRAINER_CONOR] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Conor),
    },

    [TRAINER_EDWIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edwin1),
    },

    [TRAINER_HECTOR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hector),
    },

    [TRAINER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_TabithaMossdeep),
    },

    [TRAINER_EDWIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edwin2),
    },

    [TRAINER_EDWIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edwin3),
    },

    [TRAINER_EDWIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edwin4),
    },

    [TRAINER_EDWIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Edwin5),
    },

    [TRAINER_WALLY_VR_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_WallyVR1),
    },

    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Mudkip),
    },

    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Mudkip),
    },

    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Mudkip),
    },

    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Treecko),
    },

    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Treecko),
    },

    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Treecko),
    },

    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Torchic),
    },

    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Torchic),
    },

    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Torchic),
    },

    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute103Mudkip),
    },

    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute110Mudkip),
    },

    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute119Mudkip),
    },

    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute103Treecko),
    },

    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute110Treecko),
    },

    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute119Treecko),
    },

    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute103Torchic),
    },

    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute110Torchic),
    },

    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRoute119Torchic),
    },

    [TRAINER_ISAAC_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaac1),
    },

    [TRAINER_DAVIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Davis),
    },

    [TRAINER_MITCHELL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mitchell),
    },

    [TRAINER_ISAAC_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaac2),
    },

    [TRAINER_ISAAC_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaac3),
    },

    [TRAINER_ISAAC_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaac4),
    },

    [TRAINER_ISAAC_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isaac5),
    },

    [TRAINER_LYDIA_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lydia1),
    },

    [TRAINER_HALLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Halle),
    },

    [TRAINER_GARRISON] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Garrison),
    },

    [TRAINER_LYDIA_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lydia2),
    },

    [TRAINER_LYDIA_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lydia3),
    },

    [TRAINER_LYDIA_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lydia4),
    },

    [TRAINER_LYDIA_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lydia5),
    },

    [TRAINER_JACKSON_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jackson1),
    },

    [TRAINER_LORENZO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lorenzo),
    },

    [TRAINER_SEBASTIAN] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sebastian),
    },

    [TRAINER_JACKSON_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jackson2),
    },

    [TRAINER_JACKSON_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jackson3),
    },

    [TRAINER_JACKSON_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jackson4),
    },

    [TRAINER_JACKSON_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jackson5),
    },

    [TRAINER_CATHERINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Catherine1),
    },

    [TRAINER_JENNA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jenna),
    },

    [TRAINER_SOPHIA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sophia),
    },

    [TRAINER_CATHERINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Catherine2),
    },

    [TRAINER_CATHERINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Catherine3),
    },

    [TRAINER_CATHERINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Catherine4),
    },

    [TRAINER_CATHERINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Catherine5),
    },

    [TRAINER_JULIO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Julio),
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern5),
    },

    [TRAINER_GRUNT_UNUSED] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntUnused),
    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre4),
    },

    [TRAINER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntJaggedPass),
    },

    [TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Marc),
    },

    [TRAINER_BRENDEN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brenden),
    },

    [TRAINER_LILITH] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lilith),
    },

    [TRAINER_CRISTIAN] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cristian),
    },

    [TRAINER_SYLVIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sylvia),
    },

    [TRAINER_LEONARDO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Leonardo),
    },

    [TRAINER_ATHENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Athena),
    },

    [TRAINER_HARRISON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Harrison),
    },

    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney2),
    },

    [TRAINER_CLARENCE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Clarence),
    },

    [TRAINER_TERRY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Terry),
    },

    [TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nate),
    },

    [TRAINER_KATHLEEN] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kathleen),
    },

    [TRAINER_CLIFFORD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Clifford),
    },

    [TRAINER_NICHOLAS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Nicholas),
    },

    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter3),
    },

    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter4),
    },

    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter5),
    },

    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter6),
    },

    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter7),
    },

    [TRAINER_MACEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Macey),
    },

    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroTreecko),
    },

    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroMudkip),
    },

    [TRAINER_PAXTON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Paxton),
    },

    [TRAINER_ISABELLA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabella),
    },

    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst5),
    },

    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_TabithaMtChimney),
    },

    [TRAINER_JONATHAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jonathan),
    },

    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroTorchic),
    },

    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRustboroMudkip),
    },

    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MaxieMagmaHideout),
    },

    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MaxieMtChimney),
    },

    [TRAINER_TIANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tiana),
    },

    [TRAINER_HALEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Haley1),
    },

    [TRAINER_JANICE_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Janice),
    },

    [TRAINER_VIVI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Vivi),
    },

    [TRAINER_HALEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Haley2),
    },

    [TRAINER_HALEY_3] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Haley3),
    },

    [TRAINER_HALEY_4] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Haley4),
    },

    [TRAINER_HALEY_5] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Haley5),
    },

    [TRAINER_SALLY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sally),
    },

    [TRAINER_ROBIN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Robin),
    },

    [TRAINER_ANDREA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andrea),
    },

    [TRAINER_CRISSY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Crissy),
    },

    [TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Rick),
    },

    [TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lyle),
    },

    [TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jose),
    },

    [TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Doug),
    },

    [TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Greg),
    },

    [TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kent),
    },

    [TRAINER_JAMES_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_James1),
    },

    [TRAINER_JAMES_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_James2),
    },

    [TRAINER_JAMES_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_James3),
    },

    [TRAINER_JAMES_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_James4),
    },

    [TRAINER_JAMES_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_James5),
    },

    [TRAINER_BRICE] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brice),
    },

    [TRAINER_TRENT_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Trent1),
    },

    [TRAINER_LENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lenny),
    },

    [TRAINER_LUCAS_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lucas1),
    },

    [TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alan),
    },

    [TRAINER_CLARK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Clark),
    },

    [TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Eric),
    },

    [TRAINER_LUCAS_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lucas2),
    },

    [TRAINER_MIKE_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mike1),
    },

    [TRAINER_MIKE_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Mike2),
    },

    [TRAINER_TRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Trent2),
    },

    [TRAINER_TRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Trent3),
    },

    [TRAINER_TRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Trent4),
    },

    [TRAINER_TRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Trent5),
    },

    [TRAINER_DEZ_AND_LUKE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_DezAndLuke),
    },

    [TRAINER_LEA_AND_JED] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LeaAndJed),
    },

    [TRAINER_KIRA_AND_DAN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KiraAndDan1),
    },

    [TRAINER_KIRA_AND_DAN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KiraAndDan2),
    },

    [TRAINER_KIRA_AND_DAN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KiraAndDan3),
    },

    [TRAINER_KIRA_AND_DAN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KiraAndDan4),
    },

    [TRAINER_KIRA_AND_DAN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KiraAndDan5),
    },

    [TRAINER_JOHANNA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Johanna),
    },

    [TRAINER_GERALD] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gerald),
    },

    [TRAINER_VIVIAN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Vivian),
    },

    [TRAINER_DANIELLE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Danielle),
    },

    [TRAINER_HIDEO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hideo),
    },

    [TRAINER_KEIGO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Keigo),
    },

    [TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Riley),
    },

    [TRAINER_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Flint),
    },

    [TRAINER_ASHLEY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ashley),
    },

    [TRAINER_WALLY_MAUVILLE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_WallyMauville),
    },

    [TRAINER_WALLY_VR_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_WallyVR2),
    },

    [TRAINER_WALLY_VR_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_WallyVR3),
    },

    [TRAINER_WALLY_VR_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_WallyVR4),
    },

    [TRAINER_WALLY_VR_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_WallyVR5),
    },

    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveMudkip),
    },

    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveTreecko),
    },

    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveTorchic),
    },

    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayLilycoveMudkip),
    },

    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayLilycoveTreecko),
    },

    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayLilycoveTorchic),
    },

    [TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jonah),
    },

    [TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Henry),
    },

    [TRAINER_ROGER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Roger),
    },

    [TRAINER_ALEXA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alexa),
    },

    [TRAINER_RUBEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ruben),
    },

    [TRAINER_KOJI_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Koji1),
    },

    [TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wayne),
    },

    [TRAINER_AIDAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Aidan),
    },

    [TRAINER_TISHA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tisha),
    },

    [TRAINER_TORI_AND_TIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_ToriAndTia),
    },

    [TRAINER_KIM_AND_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_KimAndIris),
    },

    [TRAINER_TYRA_AND_IVY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_TyraAndIvy),
    },

    [TRAINER_MEL_AND_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_MelAndPaul),
    },

    [TRAINER_JOHN_AND_JAY_1] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_JohnAndJay1),
    },

    [TRAINER_JOHN_AND_JAY_2] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_JohnAndJay2),
    },

    [TRAINER_JOHN_AND_JAY_3] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_JohnAndJay3),
    },

    [TRAINER_JOHN_AND_JAY_4] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_JohnAndJay4),
    },

    [TRAINER_JOHN_AND_JAY_5] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_JohnAndJay5),
    },

    [TRAINER_RELI_AND_IAN] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_ReliAndIan),
    },

    [TRAINER_LILA_AND_ROY_1] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy1),
    },

    [TRAINER_LILA_AND_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy2),
    },

    [TRAINER_LILA_AND_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy3),
    },

    [TRAINER_LILA_AND_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy4),
    },

    [TRAINER_LILA_AND_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy5),
    },

    [TRAINER_LISA_AND_RAY] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_LisaAndRay),
    },

    [TRAINER_CHRIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Chris),
    },

    [TRAINER_DAWSON] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dawson),
    },

    [TRAINER_DARIAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Darian),
    },

    [TRAINER_HAILEY] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hailey),
    },

    [TRAINER_CHANDLER] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Chandler),
    },

    [TRAINER_KALEB] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kaleb),
    },

    [TRAINER_JOSEPH] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Joseph),
    },

    [TRAINER_ALYSSA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alyssa),
    },

    [TRAINER_MARCOS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Marcos),
    },

    [TRAINER_RHETT] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Rhett),
    },

    [TRAINER_TYRON] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tyron),
    },

    [TRAINER_CELINA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Celina),
    },

    [TRAINER_BIANCA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bianca),
    },

    [TRAINER_HAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Hayden),
    },

    [TRAINER_SOPHIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sophie),
    },

    [TRAINER_COBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Coby),
    },

    [TRAINER_LAWRENCE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lawrence),
    },

    [TRAINER_WYATT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Wyatt),
    },

    [TRAINER_ANGELINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Angelina),
    },

    [TRAINER_KAI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kai),
    },

    [TRAINER_CHARLOTTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Charlotte),
    },

    [TRAINER_DEANDRE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Deandre),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout1),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout2),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout3),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout4),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout5),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout6),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout7),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout8),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout9),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout10),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout11),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout12),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout13),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout14),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout15),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout16),
    },

    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_TabithaMagmaHideout),
    },

    [TRAINER_DARCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Darcy),
    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MaxieMossdeep),
    },

    [TRAINER_PETE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pete),
    },

    [TRAINER_ISABELLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Isabelle),
    },

    [TRAINER_ANDRES_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andres1),
    },

    [TRAINER_JOSUE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Josue),
    },

    [TRAINER_CAMRON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Camron),
    },

    [TRAINER_CORY_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cory1),
    },

    [TRAINER_CAROLINA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Carolina),
    },

    [TRAINER_ELIJAH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Elijah),
    },

    [TRAINER_CELIA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Celia),
    },

    [TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bryan),
    },

    [TRAINER_BRANDEN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Branden),
    },

    [TRAINER_BRYANT] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Bryant),
    },

    [TRAINER_SHAYLA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Shayla),
    },

    [TRAINER_KYRA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Kyra),
    },

    [TRAINER_JAIDEN] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Jaiden),
    },

    [TRAINER_ALIX] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Alix),
    },

    [TRAINER_HELENE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Helene),
    },

    [TRAINER_MARLENE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Marlene),
    },

    [TRAINER_DEVAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Devan),
    },

    [TRAINER_JOHNSON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Johnson),
    },

    [TRAINER_MELINA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Melina),
    },

    [TRAINER_BRANDI] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brandi),
    },

    [TRAINER_AISHA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Aisha),
    },

    [TRAINER_MAKAYLA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Makayla),
    },

    [TRAINER_FABIAN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Fabian),
    },

    [TRAINER_DAYTON] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Dayton),
    },

    [TRAINER_RACHEL] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Rachel),
    },

    [TRAINER_LEONEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Leonel),
    },

    [TRAINER_CALLIE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Callie),
    },

    [TRAINER_CALE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cale),
    },

    [TRAINER_MYLES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Myles),
    },

    [TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pat),
    },

    [TRAINER_CRISTIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cristin1),
    },

    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRustboroTreecko),
    },

    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_MayRustboroTorchic),
    },

    [TRAINER_ROXANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Roxanne2),
    },

    [TRAINER_ROXANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Roxanne3),
    },

    [TRAINER_ROXANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Roxanne4),
    },

    [TRAINER_ROXANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Roxanne5),
    },

    [TRAINER_BRAWLY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Brawly2),
    },

    [TRAINER_BRAWLY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Brawly3),
    },

    [TRAINER_BRAWLY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Brawly4),
    },

    [TRAINER_BRAWLY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Brawly5),
    },

    [TRAINER_WATTSON_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Wattson2),
    },

    [TRAINER_WATTSON_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Wattson3),
    },

    [TRAINER_WATTSON_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Wattson4),
    },

    [TRAINER_WATTSON_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Wattson5),
    },

    [TRAINER_FLANNERY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Flannery2),
    },

    [TRAINER_FLANNERY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Flannery3),
    },

    [TRAINER_FLANNERY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Flannery4),
    },

    [TRAINER_FLANNERY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Flannery5),
    },

    [TRAINER_NORMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Norman2),
    },

    [TRAINER_NORMAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Norman3),
    },

    [TRAINER_NORMAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Norman4),
    },

    [TRAINER_NORMAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Norman5),
    },

    [TRAINER_WINONA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Winona2),
    },

    [TRAINER_WINONA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Winona3),
    },

    [TRAINER_WINONA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Winona4),
    },

    [TRAINER_WINONA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Winona5),
    },

    [TRAINER_TATE_AND_LIZA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_TateAndLiza2),
    },

    [TRAINER_TATE_AND_LIZA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_TateAndLiza3),
    },

    [TRAINER_TATE_AND_LIZA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_TateAndLiza4),
    },

    [TRAINER_TATE_AND_LIZA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_TateAndLiza5),
    },

    [TRAINER_JUAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Juan2),
    },

    [TRAINER_JUAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Juan3),
    },

    [TRAINER_JUAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Juan4),
    },

    [TRAINER_JUAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = TRUE,
        .party = TRAINER_PARTY(sParty_Juan5),
    },

    [TRAINER_ANGELO] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Angelo),
    },

    [TRAINER_DARIUS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Darius),
    },

    [TRAINER_STEVEN] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Steven),
    },

    [TRAINER_ANABEL] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Anabel),
    },

    [TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Tucker),
    },

    [TRAINER_SPENSER] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Spenser),
    },

    [TRAINER_GRETA] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Greta),
    },

    [TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Noland),
    },

    [TRAINER_LUCY] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Lucy),
    },

    [TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Brandon),
    },

    [TRAINER_ANDRES_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andres2),
    },

    [TRAINER_ANDRES_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andres3),
    },

    [TRAINER_ANDRES_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andres4),
    },

    [TRAINER_ANDRES_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Andres5),
    },

    [TRAINER_CORY_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cory2),
    },

    [TRAINER_CORY_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cory3),
    },

    [TRAINER_CORY_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cory4),
    },

    [TRAINER_CORY_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cory5),
    },

    [TRAINER_PABLO_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pablo2),
    },

    [TRAINER_PABLO_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pablo3),
    },

    [TRAINER_PABLO_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pablo4),
    },

    [TRAINER_PABLO_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Pablo5),
    },

    [TRAINER_KOJI_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Koji2),
    },

    [TRAINER_KOJI_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Koji3),
    },

    [TRAINER_KOJI_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Koji4),
    },

    [TRAINER_KOJI_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Koji5),
    },

    [TRAINER_CRISTIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cristin2),
    },

    [TRAINER_CRISTIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cristin3),
    },

    [TRAINER_CRISTIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cristin4),
    },

    [TRAINER_CRISTIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Cristin5),
    },

    [TRAINER_FERNANDO_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Fernando2),
    },

    [TRAINER_FERNANDO_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Fernando3),
    },

    [TRAINER_FERNANDO_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Fernando4),
    },

    [TRAINER_FERNANDO_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Fernando5),
    },

    [TRAINER_SAWYER_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sawyer2),
    },

    [TRAINER_SAWYER_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sawyer3),
    },

    [TRAINER_SAWYER_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sawyer4),
    },

    [TRAINER_SAWYER_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Sawyer5),
    },

    [TRAINER_GABRIELLE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gabrielle2),
    },

    [TRAINER_GABRIELLE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gabrielle3),
    },

    [TRAINER_GABRIELLE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gabrielle4),
    },

    [TRAINER_GABRIELLE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Gabrielle5),
    },

    [TRAINER_THALIA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Thalia2),
    },

    [TRAINER_THALIA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Thalia3),
    },

    [TRAINER_THALIA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Thalia4),
    },

    [TRAINER_THALIA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Thalia5),
    },

    [TRAINER_MARIELA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Mariela),
    },

    [TRAINER_ALVARO] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Alvaro),
    },

    [TRAINER_EVERETT] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Everett),
    },

    [TRAINER_RED] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Red),
    },

    [TRAINER_LEAF] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_Leaf),
    },

    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_BrendanLinkPlaceholder),
    },

    [TRAINER_MAY_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = 0),
        .doubleBattle
        .party = TRAINER_PARTY(sParty_MayLinkPlaceholder),
    },

    [TRAINER_ED] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Ed),
    },

    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .trainerClass = TRAINER_CLASS_ORION_DEFENDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_GruntPetalburgWoods),
    },

    [TRAINER_DECLAN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE),
        .doubleBattle = FALSE,
        .party = TRAINER_PARTY(sParty_Declan),
    },
};
