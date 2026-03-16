// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_VENAP] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },

    [SPECIES_TRAPLENT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },

    [SPECIES_DIONARE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },

    [SPECIES_CELSINGE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_FAHRAMANE] =
    {
        .size = MON_COORDS_SIZE(50, 56),
        .y_offset = 5,
    },

    [SPECIES_KELVOYANT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },

    [SPECIES_ECHOISE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_MERMEIDON] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },

    [SPECIES_DOLPHURE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },

    [SPECIES_FIRANT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },

    [SPECIES_PYROON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 12,
    },

    [SPECIES_PYREIGN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_FINCHERP] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 12,
    },

    [SPECIES_GASHAWK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },

    [SPECIES_EAGLAIR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_MOGEL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_FIRREL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },

    [SPECIES_AMPURE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },

    [SPECIES_OHMURE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },

    [SPECIES_SANDSHREW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },

    [SPECIES_SANDSLASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_LUPINE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },

    [SPECIES_CANILEAF] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 10,
    },

    [SPECIES_WOLVINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_JALSIDA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },

    [SPECIES_GRUMPIG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },

    [SPECIES_SPIDREAM] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },

    [SPECIES_ARACHMARE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },

    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_EMBEAR] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },

    [SPECIES_GRIZLARE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 2,
    },

    [SPECIES_MANKEY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },

    [SPECIES_PRIMEAPE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },

    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },

    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_WHISPAW] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },

    [SPECIES_COROONA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_MOOCALF] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },

    [SPECIES_TAUROS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },

    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },

    [SPECIES_INFLARE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },

    [SPECIES_INGERO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_DROWZEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_HYPNO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },

    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },

    [SPECIES_CLEFAIRY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },

    [SPECIES_CLEFABLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },

    [SPECIES_GRIFIC] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 2,
    },

    [SPECIES_GRYPHONIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },

    [SPECIES_BARKUB] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },

    [SPECIES_GROWLITHE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },

    [SPECIES_ARCANINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_VIXUN] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },

    [SPECIES_VULPIX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },

    [SPECIES_NINETALES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_KONDRIA] =
    {
        .size = MON_COORDS_SIZE(50, 56),
        .y_offset = 5,
    },

    [SPECIES_WHISMUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },

    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },

    [SPECIES_EXPLOUD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_STRIBRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },

    [SPECIES_HARSKROW] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_JACKALANT] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },

    [SPECIES_PHANTERN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_SKALLOY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_DUSKULL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },

    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },

    [SPECIES_CASCADET] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_VENONAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },

    [SPECIES_VENOMOTH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_SMALLARD] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_MALLARGE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_GRIMER] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },

    [SPECIES_MUK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },

    [SPECIES_KOFFING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },

    [SPECIES_WEEZING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },

    [SPECIES_ZANTILIDAE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },

    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },

    [SPECIES_PYTHANG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_MEOWTH] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },

    [SPECIES_PERSIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },

    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },

    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_TRILLOGILL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },

    [SPECIES_TIDASALE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },

    [SPECIES_QUIISORD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_TSUNALL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },

    [SPECIES_YANMA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },

    [SPECIES_SLOWPOKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },

    [SPECIES_SLOWBRO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },

    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },

    [SPECIES_SLOWPRIEST] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 0,
    },

    [SPECIES_REMORAID] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },

    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },

    [SPECIES_PHANTASOMO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },

    [SPECIES_SERAPH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },

    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },

    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },

    [SPECIES_ABYSSUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_EQUILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },

    [SPECIES_TELLURE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },

    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },

    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },

    [SPECIES_DITTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },

    [SPECIES_GARGOTH] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },

    [SPECIES_CRAGOYLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },

    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 4,
    },

    [SPECIES_CIRROFT] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },

    [SPECIES_CUMULOFT] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_DESTADO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_FROSTORM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_NIMBOLT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_DRAKODO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },

    [SPECIES_EEVEE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_VAPOREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },

    [SPECIES_JOLTEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_FLAREON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },

    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },

    [SPECIES_UMBREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },

    [SPECIES_ILLUMEON] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },

    [SPECIES_CHIARAME] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_SERBERINE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },

    [SPECIES_MISDREAVUS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },

    [SPECIES_ENGIL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_BENENGIL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_DUVAL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_MALDUVAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },

    [SPECIES_TANGELA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },

    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_BRONTOGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_BLITZFAUST] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },

    [SPECIES_VILEPHIST] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },

    [SPECIES_RHYHORN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_RHYDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_SINESTRIL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },

    [SPECIES_MALISTRIL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },

    [SPECIES_SCYTHER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_BAKURGE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },

    [SPECIES_LAPRAS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },

    [SPECIES_SIRENE] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },

    [SPECIES_IGLONIA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },

    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_CARIBRISK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },

    [SPECIES_HUSKII] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },

    [SPECIES_TUNDROLF] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },

    [SPECIES_WOLFROST] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },

    [SPECIES_REEFRAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_POLARA] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 14,
    },

    [SPECIES_POLARICE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },

    [SPECIES_MIRUST] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },

    [SPECIES_FERRIAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_CACNEA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },

    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_CACKINGE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 1,
    },

    [SPECIES_SCORCHION] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },

    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 12,
    },

    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_STARYU] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },

    [SPECIES_STARMIE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },

    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },

    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },

    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 11,
    },

    [SPECIES_RELICANTH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 11,
    },

    [SPECIES_MISTICADE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },

    [SPECIES_KRAKLAW] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_LEORACLE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_KHAPHIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_FLINTUSK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_METUSK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_ALLUFANG] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },

    [SPECIES_KUNAIGA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_PURIOR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },

    [SPECIES_GOLDRAKE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 4,
    },

    [SPECIES_AROWANA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_ATLAXA] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },

    [SPECIES_THORAXA] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },

    [SPECIES_ILLUMBRA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },

    [SPECIES_SNARLIGER] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },

    [SPECIES_NOCTIGER] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },

    [SPECIES_RAIGER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },

    [SPECIES_MATAKITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },

    [SPECIES_TAGATI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_NEICHIA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },

    [SPECIES_KURANPU] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },

    [SPECIES_TYPHIDNA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },

    [SPECIES_UNICROWN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },

    [SPECIES_KIPPOROK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 12,
    },

    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },

    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 20,
    },
};
