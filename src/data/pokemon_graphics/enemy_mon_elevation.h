// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[NUM_SPECIES] =
{
    [SPECIES_VENOMOTH] = 8,
    [SPECIES_KOFFING] = 8,
    [SPECIES_WEEZING] = 6,
    [SPECIES_YANMA] = 8,
    [SPECIES_DUSKULL] = 9,
    [SPECIES_MISDREAVUS] = 8,
    [SPECIES_FLYGON] = 7,
    [SPECIES_JIRACHI] = 12,
};
