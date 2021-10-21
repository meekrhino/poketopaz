#include "global.h"
#include "graphics.h"
#include "mail.h"
#include "palette.h"
#include "pokemon_icon.h"
#include "sprite.h"

#define POKE_ICON_BASE_PAL_TAG 56000

#define INVALID_ICON_SPECIES SPECIES_NONE // Oddly specific, used when an icon should be a ?. Any of the 'old unown' would work

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u8 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

// static functions
static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);

// .rodata

const u8 *const gMonIconTable[] =
{
    [SPECIES_NONE] = gMonIcon_Venap,
    [SPECIES_VENAP] = gMonIcon_Venap,
    [SPECIES_TRAPLENT] = gMonIcon_Traplent,
    [SPECIES_DIONARE] = gMonIcon_Dionare,
    [SPECIES_CELSINGE] = gMonIcon_Celsinge,
    [SPECIES_FAHRAMANE] = gMonIcon_Fahramane,
    [SPECIES_KELVOYANT] = gMonIcon_Kelvoyant,
    [SPECIES_ECHOISE] = gMonIcon_Echoise,
    [SPECIES_MERMEIDON] = gMonIcon_Mermeidon,
    [SPECIES_DOLPHURE] = gMonIcon_Dolphure,
    [SPECIES_FIRANT] = gMonIcon_Firant,
    [SPECIES_PYROON] = gMonIcon_Pyroon,
    [SPECIES_PYREIGN] = gMonIcon_Pyreign,
    [SPECIES_FINCHERP] = gMonIcon_Fincherp,
    [SPECIES_GASHAWK] = gMonIcon_Gashawk,
    [SPECIES_EAGLAIR] = gMonIcon_Eaglair,
    [SPECIES_MOGEL] = gMonIcon_Mogel,
    [SPECIES_FIRREL] = gMonIcon_Firrel,
    [SPECIES_AMPURE] = gMonIcon_Ampure,
    [SPECIES_OHMURE] = gMonIcon_Ohmure,
    [SPECIES_SANDSHREW] = gMonIcon_Sandshrew,
    [SPECIES_SANDSLASH] = gMonIcon_Sandslash,
    [SPECIES_LUPINE] = gMonIcon_Lupine,
    [SPECIES_CANILEAF] = gMonIcon_Canileaf,
    [SPECIES_WOLVINE] = gMonIcon_Wolvine,
    [SPECIES_JALSIDA] = gMonIcon_Jalsida,
    [SPECIES_SPOINK] = gMonIcon_Spoink,
    [SPECIES_GRUMPIG] = gMonIcon_Grumpig,
    [SPECIES_SPIDREAM] = gMonIcon_Spidream,
    [SPECIES_ARACHMARE] = gMonIcon_Arachmare,
    [SPECIES_PINECO] = gMonIcon_Pineco,
    [SPECIES_FORRETRESS] = gMonIcon_Forretress,
    [SPECIES_EMBEAR] = gMonIcon_Embear,
    [SPECIES_GRIZLARE] = gMonIcon_Grizlare,
    [SPECIES_MANKEY] = gMonIcon_Mankey,
    [SPECIES_PRIMEAPE] = gMonIcon_Primeape,
    [SPECIES_MAREEP] = gMonIcon_Mareep,
    [SPECIES_FLAAFFY] = gMonIcon_Flaaffy,
    [SPECIES_AMPHAROS] = gMonIcon_Ampharos,
    [SPECIES_WHISPAW] = gMonIcon_Whispaw,
    [SPECIES_COROONA] = gMonIcon_Coroona,
    [SPECIES_MOOCALF] = gMonIcon_Moocalf,
    [SPECIES_TAUROS] = gMonIcon_Tauros,
    [SPECIES_MILTANK] = gMonIcon_Miltank,
    [SPECIES_INFLARE] = gMonIcon_Inflare,
    [SPECIES_INGERO] = gMonIcon_Ingero,
    [SPECIES_DROWZEE] = gMonIcon_Drowzee,
    [SPECIES_HYPNO] = gMonIcon_Hypno,
    [SPECIES_CLEFFA] = gMonIcon_Cleffa,
    [SPECIES_CLEFAIRY] = gMonIcon_Clefairy,
    [SPECIES_CLEFABLE] = gMonIcon_Clefable,
    [SPECIES_GRIFIC] = gMonIcon_Grific,
    [SPECIES_GRYPHONIC] = gMonIcon_Gryphonic,
    [SPECIES_BARKUB] = gMonIcon_Barkub,
    [SPECIES_GROWLITHE] = gMonIcon_Growlithe,
    [SPECIES_ARCANINE] = gMonIcon_Arcanine,
    [SPECIES_VIXUN] = gMonIcon_Vixun,
    [SPECIES_VULPIX] = gMonIcon_Vulpix,
    [SPECIES_NINETALES] = gMonIcon_Ninetales,
    [SPECIES_KONDRIA] = gMonIcon_Kondria,
    [SPECIES_WHISMUR] = gMonIcon_Whismur,
    [SPECIES_LOUDRED] = gMonIcon_Loudred,
    [SPECIES_EXPLOUD] = gMonIcon_Exploud,
    [SPECIES_STRIBRA] = gMonIcon_Stribra,
    [SPECIES_MURKROW] = gMonIcon_Murkrow,
    [SPECIES_HARSKROW] = gMonIcon_Harskrow,
    [SPECIES_JACKALANT] = gMonIcon_Jackalant,
    [SPECIES_PHANTERN] = gMonIcon_Phantern,
    [SPECIES_SKALLOY] = gMonIcon_Skalloy,
    [SPECIES_SKARMORY] = gMonIcon_Skarmory,
    [SPECIES_DUSKULL] = gMonIcon_Duskull,
    [SPECIES_DUSCLOPS] = gMonIcon_Dusclops,
    [SPECIES_CASCADET] = gMonIcon_Cascadet,
    [SPECIES_VENONAT] = gMonIcon_Venonat,
    [SPECIES_VENOMOTH] = gMonIcon_Venomoth,
    [SPECIES_SMALLARD] = gMonIcon_Smallard,
    [SPECIES_MALLARGE] = gMonIcon_Mallarge,
    [SPECIES_GRIMER] = gMonIcon_Grimer,
    [SPECIES_MUK] = gMonIcon_Muk,
    [SPECIES_KOFFING] = gMonIcon_Koffing,
    [SPECIES_WEEZING] = gMonIcon_Weezing,
    [SPECIES_ZANGOOSE] = gMonIcon_Zangoose,
    [SPECIES_ZANTILIDAE] = gMonIcon_Zantilidae,
    [SPECIES_SEVIPER] = gMonIcon_Seviper,
    [SPECIES_PYTHANG] = gMonIcon_Pythang,
    [SPECIES_MEOWTH] = gMonIcon_Meowth,
    [SPECIES_PERSIAN] = gMonIcon_Persian,
    [SPECIES_LOTAD] = gMonIcon_Lotad,
    [SPECIES_LOMBRE] = gMonIcon_Lombre,
    [SPECIES_LUDICOLO] = gMonIcon_Ludicolo,
    [SPECIES_TRILLOGILL] = gMonIcon_Trillogill,
    [SPECIES_TIDASALE] = gMonIcon_Tidasale,
    [SPECIES_QUIISORD] = gMonIcon_Quiisord,
    [SPECIES_TSUNALL] = gMonIcon_Tsunall,
    [SPECIES_YANMA] = gMonIcon_Yanma,
    [SPECIES_SLOWPOKE] = gMonIcon_Slowpoke,
    [SPECIES_SLOWBRO] = gMonIcon_Slowbro,
    [SPECIES_SLOWKING] = gMonIcon_Slowking,
    [SPECIES_SLOWPRIEST] = gMonIcon_Slowpriest,
    [SPECIES_REMORAID] = gMonIcon_Remoraid,
    [SPECIES_OCTILLERY] = gMonIcon_Octillery,
    [SPECIES_PHANTASOMO] = gMonIcon_Phantasomo,
    [SPECIES_SMEARGLE] = gMonIcon_Smeargle,
    [SPECIES_SERAPH] = gMonIcon_Seraph,
    [SPECIES_DUNSPARCE] = gMonIcon_Dunsparce,
    [SPECIES_ABSOL] = gMonIcon_Absol,
    [SPECIES_ABYSSUS] = gMonIcon_Abyssus,
    [SPECIES_EQUILL] = gMonIcon_Equill,
    [SPECIES_TELLURE] = gMonIcon_Tellure,
    [SPECIES_CORPHISH] = gMonIcon_Corphish,
    [SPECIES_CRAWDAUNT] = gMonIcon_Crawdaunt,
    [SPECIES_DITTO] = gMonIcon_Ditto,
    [SPECIES_GARGOTH] = gMonIcon_Gargoth,
    [SPECIES_CRAGOYLE] = gMonIcon_Cragoyle,
    [SPECIES_TOGEPI] = gMonIcon_Togepi,
    [SPECIES_TOGETIC] = gMonIcon_Togetic,
    [SPECIES_CIRROFT] = gMonIcon_Cirroft,
    [SPECIES_CUMULOFT] = gMonIcon_Cumuloft,
    [SPECIES_DESTADO] = gMonIcon_Destado,
    [SPECIES_FROSTORM] = gMonIcon_Frostorm,
    [SPECIES_NIMBOLT] = gMonIcon_Nimbolt,
    [SPECIES_DRAKODO] = gMonIcon_Drakodo,
    [SPECIES_EEVEE] = gMonIcon_Eevee,
    [SPECIES_VAPOREON] = gMonIcon_Vaporeon,
    [SPECIES_JOLTEON] = gMonIcon_Jolteon,
    [SPECIES_FLAREON] = gMonIcon_Flareon,
    [SPECIES_ESPEON] = gMonIcon_Espeon,
    [SPECIES_UMBREON] = gMonIcon_Umbreon,
    [SPECIES_ILLUMEON] = gMonIcon_Illumeon,
    [SPECIES_CHIARAME] = gMonIcon_Chiarame,
    [SPECIES_SERBERINE] = gMonIcon_Serberine,
    [SPECIES_MISDREAVUS] = gMonIcon_Misdreavus,
    [SPECIES_ENGIL] = gMonIcon_Engil,
    [SPECIES_BENENGIL] = gMonIcon_Benengil,
    [SPECIES_DUVAL] = gMonIcon_Duval,
    [SPECIES_MALDUVAL] = gMonIcon_Malduval,
    [SPECIES_QWILFISH] = gMonIcon_Qwilfish,
    [SPECIES_TANGELA] = gMonIcon_Tangela,
    [SPECIES_TROPIUS] = gMonIcon_Tropius,
    [SPECIES_BRONTOGON] = gMonIcon_Brontogon,
    [SPECIES_BLITZFAUST] = gMonIcon_Blitzfaust,
    [SPECIES_VILEPHIST] = gMonIcon_Vilephist,
    [SPECIES_RHYHORN] = gMonIcon_Rhyhorn,
    [SPECIES_RHYDON] = gMonIcon_Rhydon,
    [SPECIES_TORKOAL] = gMonIcon_Torkoal,
    [SPECIES_SINESTRIL] = gMonIcon_Sinestril,
    [SPECIES_MALISTRIL] = gMonIcon_Malistril,
    [SPECIES_SCYTHER] = gMonIcon_Scyther,
    [SPECIES_SCIZOR] = gMonIcon_Scizor,
    [SPECIES_BAKURGE] = gMonIcon_Bakurge,
    [SPECIES_LAPRAS] = gMonIcon_Lapras,
    [SPECIES_SIRENE] = gMonIcon_Sirene,
    [SPECIES_IGLONIA] = gMonIcon_Iglonia,
    [SPECIES_STANTLER] = gMonIcon_Stantler,
    [SPECIES_CARIBRISK] = gMonIcon_Caribrisk,
    [SPECIES_HUSKII] = gMonIcon_Huskii,
    [SPECIES_TUNDROLF] = gMonIcon_Tundrolf,
    [SPECIES_WOLFROST] = gMonIcon_Wolfrost,
    [SPECIES_REEFRAIN] = gMonIcon_Reefrain,
    [SPECIES_POLARA] = gMonIcon_Polara,
    [SPECIES_POLARICE] = gMonIcon_Polarice,
    [SPECIES_MIRUST] = gMonIcon_Mirust,
    [SPECIES_FERRIAN] = gMonIcon_Ferrian,
    [SPECIES_CACNEA] = gMonIcon_Cacnea,
    [SPECIES_CACTURNE] = gMonIcon_Cacturne,
    [SPECIES_CACKINGE] = gMonIcon_Cackinge,
    [SPECIES_SCORCHION] = gMonIcon_Scorchion,
    [SPECIES_TRAPINCH] = gMonIcon_Trapinch,
    [SPECIES_VIBRAVA] = gMonIcon_Vibrava,
    [SPECIES_FLYGON] = gMonIcon_Flygon,
    [SPECIES_STARYU] = gMonIcon_Staryu,
    [SPECIES_STARMIE] = gMonIcon_Starmie,
    [SPECIES_CORSOLA] = gMonIcon_Corsola,
    [SPECIES_CHINCHOU] = gMonIcon_Chinchou,
    [SPECIES_LANTURN] = gMonIcon_Lanturn,
    [SPECIES_RELICANTH] = gMonIcon_Relicanth,
    [SPECIES_MISTICADE] = gMonIcon_Misticade,
    [SPECIES_KRAKLAW] = gMonIcon_Kraklaw,
    [SPECIES_LEORACLE] = gMonIcon_Leoracle,
    [SPECIES_KHAPHIX] = gMonIcon_Khaphix,
    [SPECIES_FLINTUSK] = gMonIcon_Flintusk,
    [SPECIES_METUSK] = gMonIcon_Metusk,
    [SPECIES_ALLUFANG] = gMonIcon_Allufang,
    [SPECIES_KUNAIGA] = gMonIcon_Kunaiga,
    [SPECIES_PURIOR] = gMonIcon_Purior,
    [SPECIES_GOLDRAKE] = gMonIcon_Goldrake,
    [SPECIES_AROWANA] = gMonIcon_Arowana,
    [SPECIES_ATLAXA] = gMonIcon_Atlaxa,
    [SPECIES_THORAXA] = gMonIcon_Thoraxa,
    [SPECIES_ILLUMBRA] = gMonIcon_Illumbra,
    [SPECIES_SNARLIGER] = gMonIcon_Snarliger,
    [SPECIES_NOCTIGER] = gMonIcon_Noctiger,
    [SPECIES_RAIGER] = gMonIcon_Raiger,
    [SPECIES_MATAKITE] = gMonIcon_Matakite,
    [SPECIES_TAGATI] = gMonIcon_Tagati,
    [SPECIES_NEICHIA] = gMonIcon_Neichia,
    [SPECIES_KURANPU] = gMonIcon_Kuranpu,
    [SPECIES_TYPHIDNA] = gMonIcon_Typhidna,
    [SPECIES_UNICROWN] = gMonIcon_Unicrown,
    [SPECIES_KIPPOROK] = gMonIcon_Kipporok,
    [SPECIES_JIRACHI] = gMonIcon_Jirachi,
    [SPECIES_EGG] = gMonIcon_Egg,
};

const u8 gMonIconPaletteIndices[] =
{
    [SPECIES_NONE] = 0,
    [SPECIES_VENAP] = 1,
    [SPECIES_TRAPLENT] = 1,
    [SPECIES_DIONARE] = 1,
    [SPECIES_CELSINGE] = 0,
    [SPECIES_FAHRAMANE] = 0,
    [SPECIES_KELVOYANT] = 2,
    [SPECIES_ECHOISE] = 0,
    [SPECIES_MERMEIDON] = 0,
    [SPECIES_DOLPHURE] = 0,
    [SPECIES_FIRANT] = 0,
    [SPECIES_PYROON] = 0,
    [SPECIES_PYREIGN] = 0,
    [SPECIES_FINCHERP] = 0,
    [SPECIES_GASHAWK] = 0,
    [SPECIES_EAGLAIR] = 0,
    [SPECIES_MOGEL] = 2,
    [SPECIES_FIRREL] = 2,
    [SPECIES_AMPURE] = 0,
    [SPECIES_OHMURE] = 0,
    [SPECIES_SANDSHREW] = 2,
    [SPECIES_SANDSLASH] = 2,
    [SPECIES_LUPINE] = 1,
    [SPECIES_CANILEAF] = 1,
    [SPECIES_WOLVINE] = 1,
    [SPECIES_JALSIDA] = 1,
    [SPECIES_SPOINK] = 0,
    [SPECIES_GRUMPIG] = 2,
    [SPECIES_SPIDREAM] = 2,
    [SPECIES_ARACHMARE] = 0,
    [SPECIES_PINECO] = 0,
    [SPECIES_FORRETRESS] = 2,
    [SPECIES_EMBEAR] = 0,
    [SPECIES_GRIZLARE] = 0,
    [SPECIES_MANKEY] = 1,
    [SPECIES_PRIMEAPE] = 2,
    [SPECIES_MAREEP] = 2,
    [SPECIES_FLAAFFY] = 0,
    [SPECIES_AMPHAROS] = 0,
    [SPECIES_WHISPAW] = 2,
    [SPECIES_COROONA] = 2,
    [SPECIES_MOOCALF] = 0,
    [SPECIES_TAUROS] = 2,
    [SPECIES_MILTANK] = 1,
    [SPECIES_INFLARE] = 0,
    [SPECIES_INGERO] = 0,
    [SPECIES_DROWZEE] = 2,
    [SPECIES_HYPNO] = 1,
    [SPECIES_CLEFFA] = 0,
    [SPECIES_CLEFAIRY] = 0,
    [SPECIES_CLEFABLE] = 0,
    [SPECIES_GRIFIC] = 2,
    [SPECIES_GRYPHONIC] = 0,
    [SPECIES_BARKUB] = 1,
    [SPECIES_GROWLITHE] = 0,
    [SPECIES_ARCANINE] = 0,
    [SPECIES_VIXUN] = 0,
    [SPECIES_VULPIX] = 2,
    [SPECIES_NINETALES] = 1,
    [SPECIES_KONDRIA] = 2,
    [SPECIES_WHISMUR] = 0,
    [SPECIES_LOUDRED] = 2,
    [SPECIES_EXPLOUD] = 2,
    [SPECIES_STRIBRA] = 0,
    [SPECIES_MURKROW] = 2,
    [SPECIES_HARSKROW] = 0,
    [SPECIES_JACKALANT] = 1,
    [SPECIES_PHANTERN] = 0,
    [SPECIES_SKALLOY] = 0,
    [SPECIES_SKARMORY] = 0,
    [SPECIES_DUSKULL] = 0,
    [SPECIES_DUSCLOPS] = 0,
    [SPECIES_CASCADET] = 0,
    [SPECIES_VENONAT] = 0,
    [SPECIES_VENOMOTH] = 2,
    [SPECIES_SMALLARD] = 0,
    [SPECIES_MALLARGE] = 0,
    [SPECIES_GRIMER] = 2,
    [SPECIES_MUK] = 2,
    [SPECIES_KOFFING] = 2,
    [SPECIES_WEEZING] = 2,
    [SPECIES_ZANGOOSE] = 0,
    [SPECIES_ZANTILIDAE] = 0,
    [SPECIES_SEVIPER] = 2,
    [SPECIES_PYTHANG] = 2,
    [SPECIES_MEOWTH] = 1,
    [SPECIES_PERSIAN] = 1,
    [SPECIES_LOTAD] = 1,
    [SPECIES_LOMBRE] = 1,
    [SPECIES_LUDICOLO] = 1,
    [SPECIES_TRILLOGILL] = 0,
    [SPECIES_TIDASALE] = 0,
    [SPECIES_QUIISORD] = 0,
    [SPECIES_TSUNALL] = 0,
    [SPECIES_YANMA] = 1,
    [SPECIES_SLOWPOKE] = 0,
    [SPECIES_SLOWBRO] = 0,
    [SPECIES_SLOWKING] = 0,
    [SPECIES_SLOWPRIEST] = 0,
    [SPECIES_REMORAID] = 0,
    [SPECIES_OCTILLERY] = 0,
    [SPECIES_PHANTASOMO] = 0,
    [SPECIES_SMEARGLE] = 1,
    [SPECIES_SERAPH] = 0,
    [SPECIES_DUNSPARCE] = 0,
    [SPECIES_ABSOL] = 0,
    [SPECIES_ABYSSUS] = 0,
    [SPECIES_EQUILL] = 2,
    [SPECIES_TELLURE] = 2,
    [SPECIES_CORPHISH] = 0,
    [SPECIES_CRAWDAUNT] = 0,
    [SPECIES_DITTO] = 2,
    [SPECIES_GARGOTH] = 2,
    [SPECIES_CRAGOYLE] = 0,
    [SPECIES_TOGEPI] = 2,
    [SPECIES_TOGETIC] = 2,
    [SPECIES_CIRROFT] = 0,
    [SPECIES_CUMULOFT] = 0,
    [SPECIES_DESTADO] = 0,
    [SPECIES_FROSTORM] = 0,
    [SPECIES_NIMBOLT] = 0,
    [SPECIES_DRAKODO] = 0,
    [SPECIES_EEVEE] = 2,
    [SPECIES_VAPOREON] = 0,
    [SPECIES_JOLTEON] = 0,
    [SPECIES_FLAREON] = 0,
    [SPECIES_ESPEON] = 2,
    [SPECIES_UMBREON] = 2,
    [SPECIES_ILLUMEON] = 0,
    [SPECIES_CHIARAME] = 0,
    [SPECIES_SERBERINE] = 0,
    [SPECIES_MISDREAVUS] = 0,
    [SPECIES_ENGIL] = 2,
    [SPECIES_BENENGIL] = 2,
    [SPECIES_DUVAL] = 2,
    [SPECIES_MALDUVAL] = 2,
    [SPECIES_QWILFISH] = 0,
    [SPECIES_TANGELA] = 0,
    [SPECIES_TROPIUS] = 1,
    [SPECIES_BRONTOGON] = 1,
    [SPECIES_BLITZFAUST] = 2,
    [SPECIES_VILEPHIST] = 2,
    [SPECIES_RHYHORN] = 1,
    [SPECIES_RHYDON] = 1,
    [SPECIES_TORKOAL] = 1,
    [SPECIES_SINESTRIL] = 0,
    [SPECIES_MALISTRIL] = 0,
    [SPECIES_SCYTHER] = 1,
    [SPECIES_SCIZOR] = 0,
    [SPECIES_BAKURGE] = 0,
    [SPECIES_LAPRAS] = 2,
    [SPECIES_SIRENE] = 2,
    [SPECIES_IGLONIA] = 2,
    [SPECIES_STANTLER] = 2,
    [SPECIES_CARIBRISK] = 2,
    [SPECIES_HUSKII] = 2,
    [SPECIES_TUNDROLF] = 2,
    [SPECIES_WOLFROST] = 0,
    [SPECIES_REEFRAIN] = 0,
    [SPECIES_POLARA] = 2,
    [SPECIES_POLARICE] = 0,
    [SPECIES_MIRUST] = 2,
    [SPECIES_FERRIAN] = 2,
    [SPECIES_CACNEA] = 1,
    [SPECIES_CACTURNE] = 1,
    [SPECIES_CACKINGE] = 1,
    [SPECIES_SCORCHION] = 0,
    [SPECIES_TRAPINCH] = 1,
    [SPECIES_VIBRAVA] = 1,
    [SPECIES_FLYGON] = 1,
    [SPECIES_STARYU] = 2,
    [SPECIES_STARMIE] = 2,
    [SPECIES_CORSOLA] = 0,
    [SPECIES_CHINCHOU] = 2,
    [SPECIES_LANTURN] = 0,
    [SPECIES_RELICANTH] = 1,
    [SPECIES_MISTICADE] = 0,
    [SPECIES_KRAKLAW] = 0,
    [SPECIES_LEORACLE] = 2,
    [SPECIES_KHAPHIX] = 2,
    [SPECIES_FLINTUSK] = 0,
    [SPECIES_METUSK] = 0,
    [SPECIES_ALLUFANG] = 0,
    [SPECIES_KUNAIGA] = 0,
    [SPECIES_PURIOR] = 2,
    [SPECIES_GOLDRAKE] = 0,
    [SPECIES_AROWANA] = 0,
    [SPECIES_ATLAXA] = 1,
    [SPECIES_THORAXA] = 0,
    [SPECIES_ILLUMBRA] = 1,
    [SPECIES_SNARLIGER] = 2,
    [SPECIES_NOCTIGER] = 2,
    [SPECIES_RAIGER] = 0,
    [SPECIES_MATAKITE] = 0,
    [SPECIES_TAGATI] = 2,
    [SPECIES_NEICHIA] = 0,
    [SPECIES_KURANPU] = 1,
    [SPECIES_TYPHIDNA] = 0,
    [SPECIES_UNICROWN] = 1,
    [SPECIES_KIPPOROK] = 0,
    [SPECIES_JIRACHI] = 0,
    [SPECIES_EGG] = 1,
};

const struct SpritePalette gMonIconPaletteTable[] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },

// There are only 3 actual palettes. The following are unused
// and don't point to valid data.
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 },
};

const struct OamData sMonIconOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

const u16 sSpriteImageSizes[3][4] =
{
    [ST_OAM_SQUARE] =
    {
        [SPRITE_SIZE(8x8)]   =  0x20,
        [SPRITE_SIZE(16x16)] =  0x80,
        [SPRITE_SIZE(32x32)] = 0x200,
        [SPRITE_SIZE(64x64)] = 0x800,
    },
    [ST_OAM_H_RECTANGLE] =
    {
        [SPRITE_SIZE(16x8)]  =  0x40,
        [SPRITE_SIZE(32x8)]  =  0x80,
        [SPRITE_SIZE(32x16)] = 0x100,
        [SPRITE_SIZE(64x32)] = 0x400,
    },
    [ST_OAM_V_RECTANGLE] =
    {
        [SPRITE_SIZE(8x16)]  =  0x40,
        [SPRITE_SIZE(8x32)]  =  0x80,
        [SPRITE_SIZE(16x32)] = 0x100,
        [SPRITE_SIZE(32x64)] = 0x400,
    },
};

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality, bool32 handleDeoxys)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality, handleDeoxys),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 CreateMonIconNoPersonality(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, bool32 handleDeoxys)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = NULL,
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    iconTemplate.image = GetMonIconTiles(species);
    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    u16 result;


    if (species > NUM_SPECIES)
        result = INVALID_ICON_SPECIES;
    else
        result = species;

    return result;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    if (!personality)
        return 0;
    else
        return GET_UNOWN_LETTER(personality);
}

u16 GetIconSpeciesNoPersonality(u16 species)
{
    u16 value;

    return GetIconSpecies(species, 0);
}

const u8 *GetMonIconPtr(u16 species, u32 personality, bool32 handleDeoxys)
{
    return GetMonIconTiles(GetIconSpecies(species, personality));
}

void FreeAndDestroyMonIconSprite(struct Sprite *sprite)
{
    sub_80D328C(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

// unused
void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalette(u16 species)
{
    u8 palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

// unused
void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void FreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

const u8* GetMonIconTiles(u16 species)
{
    const u8* iconSprite = gMonIconTable[species];
    return iconSprite;
}

void sub_80D304C(u16 offset)
{
    s32 i;
    const struct SpritePalette* monIconPalettePtr;

    if (offset <= 0xA0)
    {
        monIconPalettePtr = gMonIconPaletteTable;
        for(i = 5; i >= 0; i--)
        {
            LoadPalette(monIconPalettePtr->data, offset, 0x20);
            offset += 0x10;
            monIconPalettePtr++;
        }
    }
}

u8 GetValidMonIconPalIndex(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteIndices[species];
}

u8 GetMonIconPaletteIndexFromSpecies(u16 species)
{
    return gMonIconPaletteIndices[species];
}

const u16* GetValidMonIconPalettePtr(u16 species)
{
    if (species > NUM_SPECIES)
        species = INVALID_ICON_SPECIES;
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = 0xFFFF,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

void sub_80D328C(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
