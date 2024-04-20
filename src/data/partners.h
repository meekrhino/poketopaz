const struct Trainer gPartners[] = {
    [PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = gText_ExpandedPlaceholder_Empty,
        .trainerType = PARTNER(.otId = 0,
                               .aiFlags = 0),
        .partySize = 0,
        .party = NULL,
    },

    [PARTNER_STEVEN] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = gText_Steven,
        .trainerType = PARTNER(.otId = STEVEN_OTID,
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY), // TODO: allow partners to use their own AI flags
        .party = TRAINER_PARTY(sPartnerParty_Steven),
    },

    //=====================================================
    // Route 204 Bradley
    //=====================================================
    [PARTNER_BRADLEY_ROUTE_204_VENAP] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .party = TRAINER_PARTY(sPartnerParty_BradleRoute204Venap),
    },

    [PARTNER_BRADLEY_ROUTE_204_CELSINGE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .party = TRAINER_PARTY(sPartnerParty_BradleRoute204Celsinge),
    },

    [PARTNER_BRADLEY_ROUTE_204_ECHOISE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = gTrainerNameString_Bradley,
        .trainerType = TRAINER(.items = {},
                               .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY),
        .party = TRAINER_PARTY(sPartnerParty_BradleRoute204Echoise),
    },
};