#ifdef __VSCODE
//#include "pokedex_text.h"
//#include "pokedex.h"
#endif

const struct PokedexEntry gPokedexEntries[] =
{
    [CALDERA_KIRANT_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    [CALDERA_KIRANT_DEX_VENAP] =
    {
        .categoryName = _("FLYTRAP"),
        .height = 5,
        .weight = 105,
        .description = gVenapPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TRAPLENT] =
    {
        .categoryName = _("FLYTRAP"),
        .height = 11,
        .weight = 445,
        .description = gTraplentPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DIONARE] =
    {
        .categoryName = _("CARNIVOROUS"),
        .height = 19,
        .weight = 1605,
        .description = gDionarePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CELSINGE] =
    {
        .categoryName = _("LION CUB"),
        .height = 7,
        .weight = 80,
        .description = gCelsingePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FAHRAMANE] =
    {
        .categoryName = _("LION"),
        .height = 20,
        .weight = 604,
        .description = gFahramanePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KELVOYANT] =
    {
        .categoryName = _("LION"),
        .height = 16,
        .weight = 277,
        .description = gKelvoyantPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ECHOISE] =
    {
        .categoryName = _("PORPOISE"),
        .height = 6,
        .weight = 76,
        .description = gEchoisePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MERMEIDON] =
    {
        .categoryName = _("DOLPHIN"),
        .height = 14,
        .weight = 220,
        .description = gMermeidonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DOLPHURE] =
    {
        .categoryName = _("DOLPHIN"),
        .height = 14,
        .weight = 220,
        .description = gDolphurePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FIRANT] =
    {
        .categoryName = _("STING"),
        .height = 4,
        .weight = 9,
        .description = gFirantPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PYROON] =
    {
        .categoryName = _("FIRE COCOON"),
        .height = 7,
        .weight = 355,
        .description = gPyroonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PYREIGN] =
    {
        .categoryName = _("PYRO CLAW"),
        .height = 16,
        .weight = 727,
        .description = gPyreignPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FINCHERP] =
    {
        .categoryName = _("HATCHLING"),
        .height = 3,
        .weight = 22,
        .description = gFincherpPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GASHAWK] =
    {
        .categoryName = _("HAWK"),
        .height = 7,
        .weight = 109,
        .description = gGashawkPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_EAGLAIR] =
    {
        .categoryName = _("SWIFT EAGLE"),
        .height = 11,
        .weight = 204,
        .description = gEaglairPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MOGEL] =
    {
        .categoryName = _("PLAYFUL"),
        .height = 4,
        .weight = 95,
        .description = gMogelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FIRREL] =
    {
        .categoryName = _("CONTENT"),
        .height = 13,
        .weight = 286,
        .description = gFirrelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_AMPURE] =
    {
        .categoryName = _("SHOCKING"),
        .height = 5,
        .weight = 55,
        .description = gAmpurePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_OHMURE] =
    {
        .categoryName = _("VOLT TAIL"),
        .height = 12,
        .weight = 241,
        .description = gOhmurePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SANDSHREW] =
    {
        .categoryName = _("SHREW"),
        .height = 6,
        .weight = 12,
        .description = gSandshrewPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SANDSLASH] =
    {
        .categoryName = _("SHREW"),
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LUPINE] =
    {
        .categoryName = _("WOLF CUB"),
        .height = 10,
        .weight = 108,
        .description = gLupinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CANILEAF] =
    {
        .categoryName = _("WOLF"),
        .height = 16,
        .weight = 363,
        .description = gCanileafPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_WOLVINE] =
    {
        .categoryName = _("WOLF"),
        .height = 20,
        .weight = 586,
        .description = gWolvinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_JALSIDA] =
    {
        .categoryName = _("GRASSHOPPER"),
        .height = 4,
        .weight = 68,
        .description = gJalsidaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SPOINK] =
    {
        .categoryName = _("BOUNCE"),
        .height = 8,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GRUMPIG] =
    {
        .categoryName = _("MANIPULATE"),
        .height = 9,
        .weight = 714,
        .description = gGrumpigPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SPIDREAM] =
    {
        .categoryName = _("DREAM-CATCH"),
        .height = 3,
        .weight = 64,
        .description = gSpidreamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ARACHMARE] =
    {
        .categoryName = _("NIGHTMARE"),
        .height = 14,
        .weight = 395,
        .description = gArachmarePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PINECO] =
    {
        .categoryName = _("BAGWORM"),
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FORRETRESS] =
    {
        .categoryName = _("BAGWORM"),
        .height = 12,
        .weight = 1256,
        .description = gForretressPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_EMBEAR] =
    {
        .categoryName = _("LITTLE BEAR"),
        .height = 5,
        .weight = 73,
        .description = gEmbearPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GRIZLARE] =
    {
        .categoryName = _("MARTIAL"),
        .height = 19,
        .weight = 703,
        .description = gGrizlarePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MANKEY] =
    {
        .categoryName = _("PIG MONKEY"),
        .height = 6,
        .weight = 300,
        .description = gMankeyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PRIMEAPE] =
    {
        .categoryName = _("PIG MONKEY"),
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MAREEP] =
    {
        .categoryName = _("WOOL"),
        .height = 7,
        .weight = 78,
        .description = gMareepPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FLAAFFY] =
    {
        .categoryName = _("WOOL"),
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_AMPHAROS] =
    {
        .categoryName = _("WOOL"),
        .height = 22,
        .weight = 615,
        .description = gAmpharosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_WHISPAW] =
    {
        .categoryName = _("TINY CUB"),
        .height = 4,
        .weight = 40,
        .description = gWhispawPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_COROONA] =
    {
        .categoryName = _("SOLAR"),
        .height = 13,
        .weight = 472,
        .description = gCoroonaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MOOCALF] =
    {
        .categoryName = _("CALF"),
        .height = 10,
        .weight = 227,
        .description = gMoocalfPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TAUROS] =
    {
        .categoryName = _("WILD BULL"),
        .height = 15,
        .weight = 884,
        .description = gTaurosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MILTANK] =
    {
        .categoryName = _("MILK COW"),
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_INFLARE] =
    {
        .categoryName = _("YOUNG EMBER"),
        .height = 9,
        .weight = 386,
        .description = gInflarePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_INGERO] =
    {
        .categoryName = _("FIRE GOLEM"),
        .height = 22,
        .weight = 2377,
        .description = gIngeroPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DROWZEE] =
    {
        .categoryName = _("HYPNOSIS"),
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_HYPNO] =
    {
        .categoryName = _("HYPNOSIS"),
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CLEFFA] =
    {
        .categoryName = _("STAR SHAPE"),
        .height = 3,
        .weight = 30,
        .description = gCleffaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CLEFAIRY] =
    {
        .categoryName = _("FAIRY"),
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CLEFABLE] =
    {
        .categoryName = _("FAIRY"),
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GRIFIC] =
    {
        .categoryName = _("GRYPHON"),
        .height = 6,
        .weight = 73,
        .description = gGrificPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GRYPHONIC] =
    {
        .categoryName = _("GRYPHON"),
        .height = 19,
        .weight = 617,
        .description = gGryphonicPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_BARKUB] =
    {
        .categoryName = _("PUPPY"),
        .height = 4,
        .weight = 109,
        .description = gBarkubPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GROWLITHE] =
    {
        .categoryName = _("PUPPY"),
        .height = 6,
        .weight = 190,
        .description = gGrowlithePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ARCANINE] =
    {
        .categoryName = _("LEGENDARY"),
        .height = 20,
        .weight = 1550,
        .description = gArcaninePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VIXUN] =
    {
        .categoryName = _("KIT"),
        .height = 4,
        .weight = 50,
        .description = gVixunPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VULPIX] =
    {
        .categoryName = _("FOX"),
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_NINETALES] =
    {
        .categoryName = _("FOX"),
        .height = 12,
        .weight = 190,
        .description = gNinetalesPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KONDRIA] =
    {
        .categoryName = _("TOXIN"),
        .height = 10,
        .weight = 213,
        .description = gKondriaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_WHISMUR] =
    {
        .categoryName = _("WHISPER"),
        .height = 6,
        .weight = 162,
        .description = gWhismurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LOUDRED] =
    {
        .categoryName = _("BIG VOICE"),
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_EXPLOUD] =
    {
        .categoryName = _("LOUD NOISE"),
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_STRIBRA] =
    {
        .categoryName = _("STRIPES"),
        .height = 15,
        .weight = 467,
        .description = gStribraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MURKROW] =
    {
        .categoryName = _("DARKNESS"),
        .height = 6,
        .weight = 21    ,
        .description = gMurkrowPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_HARSKROW] =
    {
        .categoryName = _("DARK RAVEN"),
        .height = 14,
        .weight = 250,
        .description = gHarskrowPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_JACKALANT] =
    {
        .categoryName = _("SPROUTED"),
        .height = 2,
        .weight = 288,
        .description = gJackalantPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PHANTERN] =
    {
        .categoryName = _("HALLOWEEN"),
        .height = 12,
        .weight = 1045,
        .description = gPhanternPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SKALLOY] =
    {
        .categoryName = _("FLEDGLING"),
        .height = 4,
        .weight = 108,
        .description = gSkalloyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SKARMORY] =
    {
        .categoryName = _("ARMOR BIRD"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DUSKULL] =
    {
        .categoryName = _("REQUIEM"),
        .height = 8,
        .weight = 68,
        .description = gDuskullPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DUSCLOPS] =
    {
        .categoryName = _("BECKON"),
        .height = 16,
        .weight = 310,
        .description = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CASCADET] =
    {
        .categoryName = _("STREAM"),
        .height = 5,
        .weight = 86,
        .description = gCascadetPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VENONAT] =
    {
        .categoryName = _("INSECT"),
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VENOMOTH] =
    {
        .categoryName = _("POISON MOTH"),
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SMALLARD] =
    {
        .categoryName = _("DUCKLING"),
        .height = 5,
        .weight = 145,
        .description = gSmallardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MALLARGE] =
    {
        .categoryName = _("MARSH DUCK"),
        .height = 20,
        .weight = 340,
        .description = gMallargePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GRIMER] =
    {
        .categoryName = _("SLUDGE"),
        .height = 10,
        .weight = 300,
        .description = gGrimerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MUK] =
    {
        .categoryName = _("SLUDGE"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KOFFING] =
    {
        .categoryName = _("POISON GAS"),
        .height = 6,
        .weight = 9,
        .description = gKoffingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_WEEZING] =
    {
        .categoryName = _("POISON GAS"),
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ZANGOOSE] =
    {
        .categoryName = _("CAT FERRET"),
        .height = 13,
        .weight = 413,
        .description = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ZANTILIDAE] =
    {
        .categoryName = _("CAT FERRET"),
        .height = 16,
        .weight = 726,
        .description = gZantilidaePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SEVIPER] =
    {
        .categoryName = _("FANG SNAKE"),
        .height = 27,
        .weight = 522,
        .description = gSeviperPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PYTHANG] =
    {
        .categoryName = _("FANG SNAKE"),
        .height = 32,
        .weight = 794,
        .description = gPythangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MEOWTH] =
    {
        .categoryName = _("SCRATCH CAT"),
        .height = 4,
        .weight = 42,
        .description = gMeowthPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PERSIAN] =
    {
        .categoryName = _("CLASSY CAT"),
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LOTAD] =
    {
        .categoryName = _("WATER WEED"),
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LOMBRE] =
    {
        .categoryName = _("JOLLY"),
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LUDICOLO] =
    {
        .categoryName = _("CAREFREE"),
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TRILLOGILL] =
    {
        .categoryName = _("SLIPPERY"),
        .height = 4,
        .weight = 82,
        .description = gTrillogillPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TIDASALE] =
    {
        .categoryName = _("SAW FISH"),
        .height = 49,
        .weight = 1750,
        .description = gTidasalePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_QUIISORD] =
    {
        .categoryName = _("FENCING"),
        .height = 55,
        .weight = 1500,
        .description = gQuiisordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TSUNALL] =
    {
        .categoryName = _("HAMMERHEAD"),
        .height = 49,
        .weight = 2268,
        .description = gTsunallPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_YANMA] =
    {
        .categoryName = _("CLEAR WING"),
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SLOWPOKE] =
    {
        .categoryName = _("DOPEY"),
        .height = 12,
        .weight = 360,
        .description = gSlowpokePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SLOWBRO] =
    {
        .categoryName = _("HERMIT CRAB"),
        .height = 16,
        .weight = 785,
        .description = gSlowbroPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SLOWKING] =
    {
        .categoryName = _("ROYAL"),
        .height = 20,
        .weight = 795,
        .description = gSlowkingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SLOWPRIEST] =
    {
        .categoryName = _("CARDINAL"),
        .height = 18,
        .weight = 721,
        .description = gSlowpriestPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_REMORAID] =
    {
        .categoryName = _("JET"),
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_OCTILLERY] =
    {
        .categoryName = _("JET"),
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PHANTASOMO] =
    {
        .categoryName = _("SINGING"),
        .height = 11,
        .weight = 137,
        .description = gPhantasomoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SMEARGLE] =
    {
        .categoryName = _("PAINTER"),
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SERAPH] =
    {
        .categoryName = _("ANGELIC"),
        .height = 18,
        .weight = 354,
        .description = gSeraphPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DUNSPARCE] =
    {
        .categoryName = _("LAND SNAKE"),
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ABSOL] =
    {
        .categoryName = _("DISASTER"),
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ABYSSUS] =
    {
        .categoryName = _("CATASTROPHE"),
        .height = 20,
        .weight = 1192,
        .description = gAbyssusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_EQUILL] =
    {
        .categoryName = _("TINY BIRD"),
        .height = 5,
        .weight = 18,
        .description = gEquillPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TELLURE] =
    {
        .categoryName = _("GLOSSY"),
        .height = 14,
        .weight = 308,
        .description = gTellurePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CORPHISH] =
    {
        .categoryName = _("RUFFIAN"),
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CRAWDAUNT] =
    {
        .categoryName = _("ROGUE"),
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DITTO] =
    {
        .categoryName = _("TRANSFORM"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GARGOTH] =
    {
        .categoryName = _("GARGOYLE"),
        .height = 5,
        .weight = 193,
        .description = gGargothPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CRAGOYLE] =
    {
        .categoryName = _("GARGOYLE"),
        .height = 16,
        .weight = 1914,
        .description = gCragoylePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TOGEPI] =
    {
        .categoryName = _("SPIKE BALL"),
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TOGETIC] =
    {
        .categoryName = _("HAPPINESS"),
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CIRROFT] =
    {
        .categoryName = _("TINY CLOUD"),
        .height = 2,
        .weight = 6,
        .description = gCirroftPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CUMULOFT] =
    {
        .categoryName = _("CLOUD"),
        .height = 9,
        .weight = 45,
        .description = gCumuloftPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DESTADO] =
    {
        .categoryName = _("DUST DEVIL"),
        .height = 30,
        .weight = 453,
        .description = gDestadoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FROSTORM] =
    {
        .categoryName = _("BLIZZARD"),
        .height = 22,
        .weight = 490,
        .description = gFrostormPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_NIMBOLT] =
    {
        .categoryName = _("STORM ANVIL"),
        .height = 28,
        .weight = 544,
        .description = gNimboltPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DRAKODO] =
    {
        .categoryName = _("MONITOR"),
        .height = 14,
        .weight = 966,
        .description = gDrakodoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_EEVEE] =
    {
        .categoryName = _("EVOLUTION"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VAPOREON] =
    {
        .categoryName = _("BUBBLE JET"),
        .height = 10,
        .weight = 300,
        .description = gVaporeonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_JOLTEON] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 9,
        .weight = 245,
        .description = gJolteonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FLAREON] =
    {
        .categoryName = _("FLAME"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ESPEON] =
    {
        .categoryName = _("SUN"),
        .height = 9,
        .weight = 250,
        .description = gEspeonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_UMBREON] =
    {
        .categoryName = _("MOONLIGHT"),
        .height = 10,
        .weight = 260,
        .description = gUmbreonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ILLUMEON] =
    {
        .categoryName = _("LIGHT"),
        .height = 6,
        .weight = 236,
        .description = gIllumeonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CHIARAME] =
    {
        .categoryName = _("THREEHEADED"),
        .height = 8,
        .weight = 236,
        .description = gChiaramePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SERBERINE] =
    {
        .categoryName = _("TERROR"),
        .height = 16,
        .weight = 975,
        .description = gSerberinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MISDREAVUS] =
    {
        .categoryName = _("SCREECH"),
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ENGIL] =
    {
        .categoryName = _("CHERUB"),
        .height = 4,
        .weight = 113,
        .description = gEngilPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_BENENGIL] =
    {
        .categoryName = _("HARMONY"),
        .height = 18,
        .weight = 426,
        .description = gBenengilPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_DUVAL] =
    {
        .categoryName = _("YOUNG DEMON"),
        .height = 4,
        .weight = 90,
        .description = gDuvalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MALDUVAL] =
    {
        .categoryName = _("FLAME DEVIL"),
        .height = 19,
        .weight = 630,
        .description = gMalduvalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_QWILFISH] =
    {
        .categoryName = _("BALLOON"),
        .height = 5,
        .weight = 39,
        .description = gQwilfishPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TANGELA] =
    {
        .categoryName = _("VINE"),
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TROPIUS] =
    {
        .categoryName = _("FRUIT"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_BRONTOGON] =
    {
        .categoryName = _("TREMOR"),
        .height = 350,
        .weight = 845,
        .description = gBrontogonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_BLITZFAUST] =
    {
        .categoryName = _("HONOR"),
        .height = 15,
        .weight = 288,
        .description = gBlitzfaustPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VILEPHIST] =
    {
        .categoryName = _("DECEIT"),
        .height = 16,
        .weight = 260,
        .description = gVilephistPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_RHYHORN] =
    {
        .categoryName = _("SPIKES"),
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_RHYDON] =
    {
        .categoryName = _("DRILL"),
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TORKOAL] =
    {
        .categoryName = _("COAL"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SINESTRIL] =
    {
        .categoryName = _("SNOUT"),
        .height = 4,
        .weight = 32,
        .description = gSinestrilPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MALISTRIL] =
    {
        .categoryName = _("DEMON CLAW"),
        .height = 10,
        .weight = 168,
        .description = gMalistrilPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SCYTHER] =
    {
        .categoryName = _("MANTIS"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SCIZOR] =
    {
        .categoryName = _("PINCER"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_BAKURGE] =
    {
        .categoryName = _("THUNDER"),
        .height = 20,
        .weight = 1555,
        .description = gBakurgePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LAPRAS] =
    {
        .categoryName = _("TRANSPORT"),
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SIRENE] =
    {
        .categoryName = _("GENTLE RIDE"),
        .height = 37,
        .weight = 2379,
        .description = gSirenePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_IGLONIA] =
    {
        .categoryName = _("IGLOO SHELL"),
        .height = 7,
        .weight = 839,
        .description = gIgloniaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_STANTLER] =
    {
        .categoryName = _("BIG HORN"),
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CARIBRISK] =
    {
        .categoryName = _("CARIBOU"),
        .height = 16,
        .weight = 862,
        .description = gCaribriskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_HUSKII] =
    {
        .categoryName = _("WOLF CUB"),
        .height = 11,
        .weight = 149,
        .description = gHuskiiPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TUNDROLF] =
    {
        .categoryName = _("ICE WOLF"),
        .height = 18,
        .weight = 442,
        .description = gTundrolfPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_WOLFROST] =
    {
        .categoryName = _("LYCANTHROPE"),
        .height = 20,
        .weight = 765,
        .description = gWolfrostPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_REEFRAIN] =
    {
        .categoryName = _("EEL"),
        .height = 46,
        .weight = 349,
        .description = gReefrainPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_POLARA] =
    {
        .categoryName = _("BEAR CUB"),
        .height = 10,
        .weight = 190,
        .description = gPolaraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_POLARICE] =
    {
        .categoryName = _("POLAR BEAR"),
        .height = 22,
        .weight = 1796,
        .description = gPolaricePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MIRUST] =
    {
        .categoryName = _("HAUNTED"),
        .height = 6,
        .weight = 186,
        .description = gMirustPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FERRIAN] =
    {
        .categoryName = _("SPECTRE"),
        .height = 18,
        .weight = 499,
        .description = gFerrianPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CACNEA] =
    {
        .categoryName = _("CACTUS"),
        .height = 4,
        .weight = 51.3,
        .description = gCacneaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CACTURNE] =
    {
        .categoryName = _("SCARECROW"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CACKINGE] =
    {
        .categoryName = _("COWBOY"),
        .height = 16,
        .weight = 820,
        .description = gCackingePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SCORCHION] =
    {
        .categoryName = _("FIRESTINGER"),
        .height = 15,
        .weight = 467,
        .description = gScorchionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TRAPINCH] =
    {
        .categoryName = _("ANT PIT"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_VIBRAVA] =
    {
        .categoryName = _("VIBRATION"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FLYGON] =
    {
        .categoryName = _("MYSTIC"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_STARYU] =
    {
        .categoryName = _("STAR SHAPE"),
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_STARMIE] =
    {
        .categoryName = _("STAR SHAPE"),
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CORSOLA] =
    {
        .categoryName = _("CORAL"),
        .height = 6,
        .weight = 48,
        .description = gCorsolaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_CHINCHOU] =
    {
        .categoryName = _("ANGLER"),
        .height = 5,
        .weight = 118,
        .description = gChinchouPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LANTURN] =
    {
        .categoryName = _("LIGHT"),
        .height = 12,
        .weight = 227,
        .description = gLanturnPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_RELICANTH] =
    {
        .categoryName = _("LONGEVITY"),
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MISTICADE] =
    {
        .categoryName = _("RAINCOAT"),
        .height = 16,
        .weight = 29,
        .description = gMisticadePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KRAKLAW] =
    {
        .categoryName = _("KRAKEN"),
        .height = 31,
        .weight = 1597,
        .description = gKraklawPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_LEORACLE] =
    {
        .categoryName = _("IMPERIAL"),
        .height = 22,
        .weight = 3874,
        .description = gLeoraclePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KHAPHIX] =
    {
        .categoryName = _("SPHINX"),
        .height = 18,
        .weight = 957,
        .description = gKhaphixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_FLINTUSK] =
    {
        .categoryName = _("WOOLY"),
        .height = 15,
        .weight = 984,
        .description = gFlintuskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_METUSK] =
    {
        .categoryName = _("MAMMOTH"),
        .height = 23,
        .weight = 3057,
        .description = gMetuskPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ALLUFANG] =
    {
        .categoryName = _("FROST BITE"),
        .height = 10,
        .weight = 248,
        .description = gAllufangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KUNAIGA] =
    {
        .categoryName = _("WHITE FANG"),
        .height = 18,
        .weight = 1080,
        .description = gKunaigaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_PURIOR] =
    {
        .categoryName = _("BRAVERY"),
        .height = 13,
        .weight = 593,
        .description = gPuriorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_GOLDRAKE] =
    {
        .categoryName = _("LUCKY FISH"),
        .height = 9,
        .weight = 181,
        .description = gGoldrakePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_AROWANA] =
    {
        .categoryName = _("GOLD DRAGON"),
        .height = 35,
        .weight = 2708,
        .description = gArowanaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ATLAXA] =
    {
        .categoryName = _("BONE SQUIRE"),
        .height = 11,
        .weight = 144,
        .description = gAtlaxaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_THORAXA] =
    {
        .categoryName = _("BONE PRINCE"),
        .height = 15,
        .weight = 375,
        .description = gThoraxaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_ILLUMBRA] =
    {
        .categoryName = _("BONE KING"),
        .height = 22,
        .weight = 669,
        .description = gIllumbraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_SNARLIGER] =
    {
        .categoryName = _("TIGER CUB"),
        .height = 6,
        .weight = 122,
        .description = gSnarligerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_NOCTIGER] =
    {
        .categoryName = _("STRIPE TAIL"),
        .height = 9,
        .weight = 404,
        .description = gNoctigerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_RAIGER] =
    {
        .categoryName = _("BLACK TIGER"),
        .height = 17,
        .weight = 1496,
        .description = gRaigerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_MATAKITE] =
    {
        .categoryName = _("SEER"),
        .height = 16,
        .weight = 513,
        .description = gMatakitePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TAGATI] =
    {
        .categoryName = _("DOOMBRINGER"),
        .height = 15,
        .weight = 613,
        .description = gTagatiPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_NEICHIA] =
    {
        .categoryName = _("CRAZY FIST"),
        .height = 15,
        .weight = 555,
        .description = gNeichiaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KURANPU] =
    {
        .categoryName = _("BALANCE"),
        .height = 10,
        .weight = 249,
        .description = gKuranpuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_TYPHIDNA] =
    {
        .categoryName = _("HYDRA"),
        .height = 50,
        .weight = 4050,
        .description = gTyphidnaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_UNICROWN] =
    {
        .categoryName = _("MYSTIC HORN"),
        .height = 33,
        .weight = 3066,
        .description = gUnicrownPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_KIPPOROK] =
    {
        .categoryName = _("JEWELER"),
        .height = 6,
        .weight = 45,
        .description = gKipporokPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [CALDERA_KIRANT_DEX_JIRACHI] =
    {
        .categoryName = _("WISH"),
        .height = 3,
        .weight = 10,
        .description = gJirachiPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
};














































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































