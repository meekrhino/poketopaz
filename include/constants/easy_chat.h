#ifndef GUARD_CONSTANTS_EASY_CHAT_H
#define GUARD_CONSTANTS_EASY_CHAT_H

#define EASY_CHAT_TYPE_PROFILE                 0
#define EASY_CHAT_TYPE_BATTLE_START            1
#define EASY_CHAT_TYPE_BATTLE_WON              2
#define EASY_CHAT_TYPE_BATTLE_LOST             3
#define EASY_CHAT_TYPE_MAIL                    4
#define EASY_CHAT_TYPE_INTERVIEW               5
#define EASY_CHAT_TYPE_BARD_SONG               6
#define EASY_CHAT_TYPE_FAN_CLUB                7
#define EASY_CHAT_TYPE_DUMMY_SHOW              8
#define EASY_CHAT_TYPE_TRENDY_PHRASE           9
#define EASY_CHAT_TYPE_GABBY_AND_TY            10
#define EASY_CHAT_TYPE_CONTEST_INTERVIEW       11
#define EASY_CHAT_TYPE_BATTLE_TOWER_INTERVIEW  12
#define EASY_CHAT_TYPE_GOOD_SAYING             13
#define EASY_CHAT_TYPE_FAN_QUESTION            14
#define EASY_CHAT_TYPE_QUIZ_ANSWER             15
#define EASY_CHAT_TYPE_QUIZ_QUESTION           16
#define EASY_CHAT_TYPE_QUIZ_SET_QUESTION       17
#define EASY_CHAT_TYPE_QUIZ_SET_ANSWER         18
#define EASY_CHAT_TYPE_APPRENTICE              19
#define EASY_CHAT_TYPE_QUESTIONNAIRE           20

#define EASY_CHAT_PERSON_REPORTER_MALE   0
#define EASY_CHAT_PERSON_REPORTER_FEMALE 1
#define EASY_CHAT_PERSON_BOY             2
#define EASY_CHAT_PERSON_DISPLAY_NONE    3

#define EC_GROUP_POKEMON          0
#define EC_GROUP_TRAINER          1
#define EC_GROUP_STATUS           2
#define EC_GROUP_BATTLE           3
#define EC_GROUP_GREETINGS        4
#define EC_GROUP_PEOPLE           5
#define EC_GROUP_VOICES           6
#define EC_GROUP_SPEECH           7
#define EC_GROUP_ENDINGS          8
#define EC_GROUP_FEELINGS         9
#define EC_GROUP_CONDITIONS       10
#define EC_GROUP_ACTIONS          11
#define EC_GROUP_LIFESTYLE        12
#define EC_GROUP_HOBBIES          13
#define EC_GROUP_TIME             14
#define EC_GROUP_MISC             15
#define EC_GROUP_ADJECTIVES       16
#define EC_GROUP_EVENTS           17
#define EC_GROUP_MOVE_1           18
#define EC_GROUP_MOVE_2           19
#define EC_GROUP_TRENDY_SAYING    20
#define EC_NUM_GROUPS             21

// TRAINER
#define EC_WORD_I_CHOOSE_YOU  (EC_GROUP_TRAINER << 9) | 0x0
#define EC_WORD_GOTCHA        (EC_GROUP_TRAINER << 9) | 0x1
#define EC_WORD_TRADE         (EC_GROUP_TRAINER << 9) | 0x2
#define EC_WORD_SAPPHIRE      (EC_GROUP_TRAINER << 9) | 0x3
#define EC_WORD_EVOLVE        (EC_GROUP_TRAINER << 9) | 0x4
#define EC_WORD_ENCYCLOPEDIA  (EC_GROUP_TRAINER << 9) | 0x5
#define EC_WORD_NATURE        (EC_GROUP_TRAINER << 9) | 0x6
#define EC_WORD_CENTER        (EC_GROUP_TRAINER << 9) | 0x7
#define EC_WORD_EGG           (EC_GROUP_TRAINER << 9) | 0x8
#define EC_WORD_LINK          (EC_GROUP_TRAINER << 9) | 0x9
#define EC_WORD_SP_ABILITY    (EC_GROUP_TRAINER << 9) | 0xa
#define EC_WORD_TRAINER       (EC_GROUP_TRAINER << 9) | 0xb
#define EC_WORD_VERSION       (EC_GROUP_TRAINER << 9) | 0xc
#define EC_WORD_POKENAV       (EC_GROUP_TRAINER << 9) | 0xd
#define EC_WORD_POKEMON       (EC_GROUP_TRAINER << 9) | 0xe
#define EC_WORD_GET           (EC_GROUP_TRAINER << 9) | 0xf
#define EC_WORD_POKEDEX       (EC_GROUP_TRAINER << 9) | 0x10
#define EC_WORD_RUBY          (EC_GROUP_TRAINER << 9) | 0x11
#define EC_WORD_LEVEL         (EC_GROUP_TRAINER << 9) | 0x12
#define EC_WORD_RED           (EC_GROUP_TRAINER << 9) | 0x13
#define EC_WORD_GREEN         (EC_GROUP_TRAINER << 9) | 0x14
#define EC_WORD_BAG           (EC_GROUP_TRAINER << 9) | 0x15
#define EC_WORD_FLAME         (EC_GROUP_TRAINER << 9) | 0x16
#define EC_WORD_GOLD          (EC_GROUP_TRAINER << 9) | 0x17
#define EC_WORD_LEAF          (EC_GROUP_TRAINER << 9) | 0x18
#define EC_WORD_SILVER        (EC_GROUP_TRAINER << 9) | 0x19
#define EC_WORD_EMERALD       (EC_GROUP_TRAINER << 9) | 0x1a

// STATUS
#define EC_WORD_DARK          (EC_GROUP_STATUS << 9) | 0x0
#define EC_WORD_STENCH        (EC_GROUP_STATUS << 9) | 0x1
#define EC_WORD_THICK_FAT     (EC_GROUP_STATUS << 9) | 0x2
#define EC_WORD_RAIN_DISH     (EC_GROUP_STATUS << 9) | 0x3
#define EC_WORD_DRIZZLE       (EC_GROUP_STATUS << 9) | 0x4
#define EC_WORD_ARENA_TRAP    (EC_GROUP_STATUS << 9) | 0x5
#define EC_WORD_INTIMIDATE    (EC_GROUP_STATUS << 9) | 0x6
#define EC_WORD_ROCK_HEAD     (EC_GROUP_STATUS << 9) | 0x7
#define EC_WORD_COLOR         (EC_GROUP_STATUS << 9) | 0x8
#define EC_WORD_ALT_COLOR     (EC_GROUP_STATUS << 9) | 0x9
#define EC_WORD_ROCK          (EC_GROUP_STATUS << 9) | 0xa
#define EC_WORD_BEAUTIFUL     (EC_GROUP_STATUS << 9) | 0xb
#define EC_WORD_BEAUTY        (EC_GROUP_STATUS << 9) | 0xc
#define EC_WORD_AIR_LOCK      (EC_GROUP_STATUS << 9) | 0xd
#define EC_WORD_PSYCHIC       (EC_GROUP_STATUS << 9) | 0xe
#define EC_WORD_HYPER_CUTTER  (EC_GROUP_STATUS << 9) | 0xf
#define EC_WORD_FIGHTING      (EC_GROUP_STATUS << 9) | 0x10
#define EC_WORD_SHADOW_TAG    (EC_GROUP_STATUS << 9) | 0x11
#define EC_WORD_SMART         (EC_GROUP_STATUS << 9) | 0x12
#define EC_WORD_SMARTNESS     (EC_GROUP_STATUS << 9) | 0x13
#define EC_WORD_SPEED_BOOST   (EC_GROUP_STATUS << 9) | 0x14
#define EC_WORD_COOL          (EC_GROUP_STATUS << 9) | 0x15
#define EC_WORD_COOLNESS      (EC_GROUP_STATUS << 9) | 0x16
#define EC_WORD_BATTLE_ARMOR  (EC_GROUP_STATUS << 9) | 0x17
#define EC_WORD_CUTE          (EC_GROUP_STATUS << 9) | 0x18
#define EC_WORD_CUTENESS      (EC_GROUP_STATUS << 9) | 0x19
#define EC_WORD_STURDY        (EC_GROUP_STATUS << 9) | 0x1a
#define EC_WORD_SUCTION_CUPS  (EC_GROUP_STATUS << 9) | 0x1b
#define EC_WORD_GRASS         (EC_GROUP_STATUS << 9) | 0x1c
#define EC_WORD_CLEAR_BODY    (EC_GROUP_STATUS << 9) | 0x1d
#define EC_WORD_TORRENT       (EC_GROUP_STATUS << 9) | 0x1e
#define EC_WORD_GHOST         (EC_GROUP_STATUS << 9) | 0x1f
#define EC_WORD_ICE           (EC_GROUP_STATUS << 9) | 0x20
#define EC_WORD_GUTS          (EC_GROUP_STATUS << 9) | 0x21
#define EC_WORD_ROUGH_SKIN    (EC_GROUP_STATUS << 9) | 0x22
#define EC_WORD_SHELL_ARMOR   (EC_GROUP_STATUS << 9) | 0x23
#define EC_WORD_NATURAL_CURE  (EC_GROUP_STATUS << 9) | 0x24
#define EC_WORD_DAMP          (EC_GROUP_STATUS << 9) | 0x25
#define EC_WORD_GROUND        (EC_GROUP_STATUS << 9) | 0x26
#define EC_WORD_LIMBER        (EC_GROUP_STATUS << 9) | 0x27
#define EC_WORD_MAGNET_PULL   (EC_GROUP_STATUS << 9) | 0x28
#define EC_WORD_WHITE_SMOKE   (EC_GROUP_STATUS << 9) | 0x29
#define EC_WORD_SYNCHRONIZE   (EC_GROUP_STATUS << 9) | 0x2a
#define EC_WORD_OVERGROW      (EC_GROUP_STATUS << 9) | 0x2b
#define EC_WORD_SWIFT_SWIM    (EC_GROUP_STATUS << 9) | 0x2c
#define EC_WORD_SAND_STREAM   (EC_GROUP_STATUS << 9) | 0x2d
#define EC_WORD_SAND_VEIL     (EC_GROUP_STATUS << 9) | 0x2e
#define EC_WORD_KEEN_EYE      (EC_GROUP_STATUS << 9) | 0x2f
#define EC_WORD_INNER_FOCUS   (EC_GROUP_STATUS << 9) | 0x30
#define EC_WORD_STATIC        (EC_GROUP_STATUS << 9) | 0x31
#define EC_WORD_TYPE          (EC_GROUP_STATUS << 9) | 0x32
#define EC_WORD_TOUGH         (EC_GROUP_STATUS << 9) | 0x33
#define EC_WORD_TOUGHNESS     (EC_GROUP_STATUS << 9) | 0x34
#define EC_WORD_SHED_SKIN     (EC_GROUP_STATUS << 9) | 0x35
#define EC_WORD_HUGE_POWER    (EC_GROUP_STATUS << 9) | 0x36
#define EC_WORD_VOLT_ABSORB   (EC_GROUP_STATUS << 9) | 0x37
#define EC_WORD_WATER_ABSORB  (EC_GROUP_STATUS << 9) | 0x38
#define EC_WORD_ELECTRIC      (EC_GROUP_STATUS << 9) | 0x39
#define EC_WORD_FORECAST      (EC_GROUP_STATUS << 9) | 0x3a
#define EC_WORD_SERENE_GRACE  (EC_GROUP_STATUS << 9) | 0x3b
#define EC_WORD_POISON        (EC_GROUP_STATUS << 9) | 0x3c
#define EC_WORD_POISON_POINT  (EC_GROUP_STATUS << 9) | 0x3d
#define EC_WORD_DRAGON        (EC_GROUP_STATUS << 9) | 0x3e
#define EC_WORD_TRACE         (EC_GROUP_STATUS << 9) | 0x3f
#define EC_WORD_OBLIVIOUS     (EC_GROUP_STATUS << 9) | 0x40
#define EC_WORD_TRUANT        (EC_GROUP_STATUS << 9) | 0x41
#define EC_WORD_RUN_AWAY      (EC_GROUP_STATUS << 9) | 0x42
#define EC_WORD_STICKY_HOLD   (EC_GROUP_STATUS << 9) | 0x43
#define EC_WORD_CLOUD_NINE    (EC_GROUP_STATUS << 9) | 0x44
#define EC_WORD_NORMAL        (EC_GROUP_STATUS << 9) | 0x45
#define EC_WORD_STEEL         (EC_GROUP_STATUS << 9) | 0x46
#define EC_WORD_ILLUMINATE    (EC_GROUP_STATUS << 9) | 0x47
#define EC_WORD_EARLY_BIRD    (EC_GROUP_STATUS << 9) | 0x48
#define EC_WORD_HUSTLE        (EC_GROUP_STATUS << 9) | 0x49
#define EC_WORD_SHINE         (EC_GROUP_STATUS << 9) | 0x4a
#define EC_WORD_FLYING        (EC_GROUP_STATUS << 9) | 0x4b
#define EC_WORD_DROUGHT       (EC_GROUP_STATUS << 9) | 0x4c
#define EC_WORD_LIGHTNINGROD  (EC_GROUP_STATUS << 9) | 0x4d
#define EC_WORD_COMPOUNDEYES  (EC_GROUP_STATUS << 9) | 0x4e
#define EC_WORD_MARVEL_SCALE  (EC_GROUP_STATUS << 9) | 0x4f
#define EC_WORD_WONDER_GUARD  (EC_GROUP_STATUS << 9) | 0x50
#define EC_WORD_INSOMNIA      (EC_GROUP_STATUS << 9) | 0x51
#define EC_WORD_LEVITATE      (EC_GROUP_STATUS << 9) | 0x52
#define EC_WORD_PLUS          (EC_GROUP_STATUS << 9) | 0x53
#define EC_WORD_PRESSURE      (EC_GROUP_STATUS << 9) | 0x54
#define EC_WORD_LIQUID_OOZE   (EC_GROUP_STATUS << 9) | 0x55
#define EC_WORD_COLOR_CHANGE  (EC_GROUP_STATUS << 9) | 0x56
#define EC_WORD_SOUNDPROOF    (EC_GROUP_STATUS << 9) | 0x57
#define EC_WORD_EFFECT_SPORE  (EC_GROUP_STATUS << 9) | 0x58
#define EC_WORD_PKRS          (EC_GROUP_STATUS << 9) | 0x59
#define EC_WORD_FIRE          (EC_GROUP_STATUS << 9) | 0x5a
#define EC_WORD_FLAME_BODY    (EC_GROUP_STATUS << 9) | 0x5b
#define EC_WORD_MINUS         (EC_GROUP_STATUS << 9) | 0x5c
#define EC_WORD_OWN_TEMPO     (EC_GROUP_STATUS << 9) | 0x5d
#define EC_WORD_MAGMA_ARMOR   (EC_GROUP_STATUS << 9) | 0x5e
#define EC_WORD_WATER         (EC_GROUP_STATUS << 9) | 0x5f
#define EC_WORD_WATER_VEIL    (EC_GROUP_STATUS << 9) | 0x60
#define EC_WORD_BUG           (EC_GROUP_STATUS << 9) | 0x61
#define EC_WORD_SWARM         (EC_GROUP_STATUS << 9) | 0x62
#define EC_WORD_CUTE_CHARM    (EC_GROUP_STATUS << 9) | 0x63
#define EC_WORD_IMMUNITY      (EC_GROUP_STATUS << 9) | 0x64
#define EC_WORD_BLAZE         (EC_GROUP_STATUS << 9) | 0x65
#define EC_WORD_PICKUP        (EC_GROUP_STATUS << 9) | 0x66
#define EC_WORD_PATTERN       (EC_GROUP_STATUS << 9) | 0x67
#define EC_WORD_FLASH_FIRE    (EC_GROUP_STATUS << 9) | 0x68
#define EC_WORD_VITAL_SPIRIT  (EC_GROUP_STATUS << 9) | 0x69
#define EC_WORD_CHLOROPHYLL   (EC_GROUP_STATUS << 9) | 0x6a
#define EC_WORD_PURE_POWER    (EC_GROUP_STATUS << 9) | 0x6b
#define EC_WORD_SHIELD_DUST   (EC_GROUP_STATUS << 9) | 0x6c

// BATTLE
#define EC_WORD_MATCH_UP     (EC_GROUP_BATTLE << 9) | 0x0
#define EC_WORD_GO           (EC_GROUP_BATTLE << 9) | 0x1
#define EC_WORD_NO_1         (EC_GROUP_BATTLE << 9) | 0x2
#define EC_WORD_DECIDE       (EC_GROUP_BATTLE << 9) | 0x3
#define EC_WORD_LET_ME_WIN   (EC_GROUP_BATTLE << 9) | 0x4
#define EC_WORD_WINS         (EC_GROUP_BATTLE << 9) | 0x5
#define EC_WORD_WIN          (EC_GROUP_BATTLE << 9) | 0x6
#define EC_WORD_WON          (EC_GROUP_BATTLE << 9) | 0x7
#define EC_WORD_IF_I_WIN     (EC_GROUP_BATTLE << 9) | 0x8
#define EC_WORD_WHEN_I_WIN   (EC_GROUP_BATTLE << 9) | 0x9
#define EC_WORD_CAN_T_WIN    (EC_GROUP_BATTLE << 9) | 0xa
#define EC_WORD_CAN_WIN      (EC_GROUP_BATTLE << 9) | 0xb
#define EC_WORD_NO_MATCH     (EC_GROUP_BATTLE << 9) | 0xc
#define EC_WORD_SPIRIT       (EC_GROUP_BATTLE << 9) | 0xd
#define EC_WORD_DECIDED      (EC_GROUP_BATTLE << 9) | 0xe
#define EC_WORD_TRUMP_CARD   (EC_GROUP_BATTLE << 9) | 0xf
#define EC_WORD_TAKE_THAT    (EC_GROUP_BATTLE << 9) | 0x10
#define EC_WORD_COME_ON      (EC_GROUP_BATTLE << 9) | 0x11
#define EC_WORD_ATTACK       (EC_GROUP_BATTLE << 9) | 0x12
#define EC_WORD_SURRENDER    (EC_GROUP_BATTLE << 9) | 0x13
#define EC_WORD_GUTSY        (EC_GROUP_BATTLE << 9) | 0x14
#define EC_WORD_TALENT       (EC_GROUP_BATTLE << 9) | 0x15
#define EC_WORD_STRATEGY     (EC_GROUP_BATTLE << 9) | 0x16
#define EC_WORD_SMITE        (EC_GROUP_BATTLE << 9) | 0x17
#define EC_WORD_MATCH        (EC_GROUP_BATTLE << 9) | 0x18
#define EC_WORD_VICTORY      (EC_GROUP_BATTLE << 9) | 0x19
#define EC_WORD_OFFENSIVE    (EC_GROUP_BATTLE << 9) | 0x1a
#define EC_WORD_SENSE        (EC_GROUP_BATTLE << 9) | 0x1b
#define EC_WORD_VERSUS       (EC_GROUP_BATTLE << 9) | 0x1c
#define EC_WORD_FIGHTS       (EC_GROUP_BATTLE << 9) | 0x1d
#define EC_WORD_POWER        (EC_GROUP_BATTLE << 9) | 0x1e
#define EC_WORD_CHALLENGE    (EC_GROUP_BATTLE << 9) | 0x1f
#define EC_WORD_STRONG       (EC_GROUP_BATTLE << 9) | 0x20
#define EC_WORD_TOO_STRONG   (EC_GROUP_BATTLE << 9) | 0x21
#define EC_WORD_GO_EASY      (EC_GROUP_BATTLE << 9) | 0x22
#define EC_WORD_FOE          (EC_GROUP_BATTLE << 9) | 0x23
#define EC_WORD_GENIUS       (EC_GROUP_BATTLE << 9) | 0x24
#define EC_WORD_LEGEND       (EC_GROUP_BATTLE << 9) | 0x25
#define EC_WORD_ESCAPE       (EC_GROUP_BATTLE << 9) | 0x26
#define EC_WORD_AIM          (EC_GROUP_BATTLE << 9) | 0x27
#define EC_WORD_BATTLE       (EC_GROUP_BATTLE << 9) | 0x28
#define EC_WORD_FIGHT        (EC_GROUP_BATTLE << 9) | 0x29
#define EC_WORD_RESUSCITATE  (EC_GROUP_BATTLE << 9) | 0x2a
#define EC_WORD_POINTS       (EC_GROUP_BATTLE << 9) | 0x2b
#define EC_WORD_SERIOUS      (EC_GROUP_BATTLE << 9) | 0x2c
#define EC_WORD_GIVE_UP      (EC_GROUP_BATTLE << 9) | 0x2d
#define EC_WORD_LOSS         (EC_GROUP_BATTLE << 9) | 0x2e
#define EC_WORD_IF_I_LOSE    (EC_GROUP_BATTLE << 9) | 0x2f
#define EC_WORD_LOST         (EC_GROUP_BATTLE << 9) | 0x30
#define EC_WORD_LOSE         (EC_GROUP_BATTLE << 9) | 0x31
#define EC_WORD_GUARD        (EC_GROUP_BATTLE << 9) | 0x32
#define EC_WORD_PARTNER      (EC_GROUP_BATTLE << 9) | 0x33
#define EC_WORD_REJECT       (EC_GROUP_BATTLE << 9) | 0x34
#define EC_WORD_ACCEPT       (EC_GROUP_BATTLE << 9) | 0x35
#define EC_WORD_INVINCIBLE   (EC_GROUP_BATTLE << 9) | 0x36
#define EC_WORD_RECEIVED     (EC_GROUP_BATTLE << 9) | 0x37
#define EC_WORD_EASY         (EC_GROUP_BATTLE << 9) | 0x38
#define EC_WORD_WEAK         (EC_GROUP_BATTLE << 9) | 0x39
#define EC_WORD_TOO_WEAK     (EC_GROUP_BATTLE << 9) | 0x3a
#define EC_WORD_PUSHOVER     (EC_GROUP_BATTLE << 9) | 0x3b
#define EC_WORD_LEADER       (EC_GROUP_BATTLE << 9) | 0x3c
#define EC_WORD_RULE         (EC_GROUP_BATTLE << 9) | 0x3d
#define EC_WORD_MOVE         (EC_GROUP_BATTLE << 9) | 0x3e

// GREETINGS
#define EC_WORD_THANKS          (EC_GROUP_GREETINGS << 9) | 0x0
#define EC_WORD_YES             (EC_GROUP_GREETINGS << 9) | 0x1
#define EC_WORD_HERE_GOES       (EC_GROUP_GREETINGS << 9) | 0x2
#define EC_WORD_HERE_I_COME     (EC_GROUP_GREETINGS << 9) | 0x3
#define EC_WORD_HERE_IT_IS      (EC_GROUP_GREETINGS << 9) | 0x4
#define EC_WORD_YEAH            (EC_GROUP_GREETINGS << 9) | 0x5
#define EC_WORD_WELCOME         (EC_GROUP_GREETINGS << 9) | 0x6
#define EC_WORD_OI              (EC_GROUP_GREETINGS << 9) | 0x7
#define EC_WORD_HOW_DO          (EC_GROUP_GREETINGS << 9) | 0x8
#define EC_WORD_CONGRATS        (EC_GROUP_GREETINGS << 9) | 0x9
#define EC_WORD_GIVE_ME         (EC_GROUP_GREETINGS << 9) | 0xa
#define EC_WORD_SORRY           (EC_GROUP_GREETINGS << 9) | 0xb
#define EC_WORD_APOLOGIZE       (EC_GROUP_GREETINGS << 9) | 0xc
#define EC_WORD_FORGIVE         (EC_GROUP_GREETINGS << 9) | 0xd
#define EC_WORD_HEY_THERE       (EC_GROUP_GREETINGS << 9) | 0xe
#define EC_WORD_HELLO           (EC_GROUP_GREETINGS << 9) | 0xf
#define EC_WORD_GOOD_BYE        (EC_GROUP_GREETINGS << 9) | 0x10
#define EC_WORD_THANK_YOU       (EC_GROUP_GREETINGS << 9) | 0x11
#define EC_WORD_I_VE_ARRIVED    (EC_GROUP_GREETINGS << 9) | 0x12
#define EC_WORD_PARDON          (EC_GROUP_GREETINGS << 9) | 0x13
#define EC_WORD_EXCUSE          (EC_GROUP_GREETINGS << 9) | 0x14
#define EC_WORD_SEE_YA          (EC_GROUP_GREETINGS << 9) | 0x15
#define EC_WORD_EXCUSE_ME       (EC_GROUP_GREETINGS << 9) | 0x16
#define EC_WORD_WELL_THEN       (EC_GROUP_GREETINGS << 9) | 0x17
#define EC_WORD_GO_AHEAD        (EC_GROUP_GREETINGS << 9) | 0x18
#define EC_WORD_APPRECIATE      (EC_GROUP_GREETINGS << 9) | 0x19
#define EC_WORD_HEY_QUES        (EC_GROUP_GREETINGS << 9) | 0x1a
#define EC_WORD_WHAT_S_UP_QUES  (EC_GROUP_GREETINGS << 9) | 0x1b
#define EC_WORD_HUH_QUES        (EC_GROUP_GREETINGS << 9) | 0x1c
#define EC_WORD_NO              (EC_GROUP_GREETINGS << 9) | 0x1d
#define EC_WORD_HI              (EC_GROUP_GREETINGS << 9) | 0x1e
#define EC_WORD_YEAH_YEAH       (EC_GROUP_GREETINGS << 9) | 0x1f
#define EC_WORD_BYE_BYE         (EC_GROUP_GREETINGS << 9) | 0x20
#define EC_WORD_MEET_YOU        (EC_GROUP_GREETINGS << 9) | 0x21
#define EC_WORD_HEY             (EC_GROUP_GREETINGS << 9) | 0x22
#define EC_WORD_SMELL           (EC_GROUP_GREETINGS << 9) | 0x23
#define EC_WORD_LISTENING       (EC_GROUP_GREETINGS << 9) | 0x24
#define EC_WORD_HOO_HAH         (EC_GROUP_GREETINGS << 9) | 0x25
#define EC_WORD_YAHOO           (EC_GROUP_GREETINGS << 9) | 0x26
#define EC_WORD_YO              (EC_GROUP_GREETINGS << 9) | 0x27
#define EC_WORD_COME_OVER       (EC_GROUP_GREETINGS << 9) | 0x28
#define EC_WORD_COUNT_ON        (EC_GROUP_GREETINGS << 9) | 0x29

// PEOPLE
#define EC_WORD_OPPONENT     (EC_GROUP_PEOPLE << 9) | 0x0
#define EC_WORD_I            (EC_GROUP_PEOPLE << 9) | 0x1
#define EC_WORD_YOU          (EC_GROUP_PEOPLE << 9) | 0x2
#define EC_WORD_YOURS        (EC_GROUP_PEOPLE << 9) | 0x3
#define EC_WORD_SON          (EC_GROUP_PEOPLE << 9) | 0x4
#define EC_WORD_YOUR         (EC_GROUP_PEOPLE << 9) | 0x5
#define EC_WORD_YOU_RE       (EC_GROUP_PEOPLE << 9) | 0x6
#define EC_WORD_YOU_VE       (EC_GROUP_PEOPLE << 9) | 0x7
#define EC_WORD_MOTHER       (EC_GROUP_PEOPLE << 9) | 0x8
#define EC_WORD_GRANDFATHER  (EC_GROUP_PEOPLE << 9) | 0x9
#define EC_WORD_UNCLE        (EC_GROUP_PEOPLE << 9) | 0xa
#define EC_WORD_FATHER       (EC_GROUP_PEOPLE << 9) | 0xb
#define EC_WORD_BOY          (EC_GROUP_PEOPLE << 9) | 0xc
#define EC_WORD_ADULT        (EC_GROUP_PEOPLE << 9) | 0xd
#define EC_WORD_BROTHER      (EC_GROUP_PEOPLE << 9) | 0xe
#define EC_WORD_SISTER       (EC_GROUP_PEOPLE << 9) | 0xf
#define EC_WORD_GRANDMOTHER  (EC_GROUP_PEOPLE << 9) | 0x10
#define EC_WORD_AUNT         (EC_GROUP_PEOPLE << 9) | 0x11
#define EC_WORD_PARENT       (EC_GROUP_PEOPLE << 9) | 0x12
#define EC_WORD_MAN          (EC_GROUP_PEOPLE << 9) | 0x13
#define EC_WORD_ME           (EC_GROUP_PEOPLE << 9) | 0x14
#define EC_WORD_GIRL         (EC_GROUP_PEOPLE << 9) | 0x15
#define EC_WORD_BABE         (EC_GROUP_PEOPLE << 9) | 0x16
#define EC_WORD_FAMILY       (EC_GROUP_PEOPLE << 9) | 0x17
#define EC_WORD_HER          (EC_GROUP_PEOPLE << 9) | 0x18
#define EC_WORD_HIM          (EC_GROUP_PEOPLE << 9) | 0x19
#define EC_WORD_HE           (EC_GROUP_PEOPLE << 9) | 0x1a
#define EC_WORD_PLACE        (EC_GROUP_PEOPLE << 9) | 0x1b
#define EC_WORD_DAUGHTER     (EC_GROUP_PEOPLE << 9) | 0x1c
#define EC_WORD_HIS          (EC_GROUP_PEOPLE << 9) | 0x1d
#define EC_WORD_HE_S         (EC_GROUP_PEOPLE << 9) | 0x1e
#define EC_WORD_AREN_T       (EC_GROUP_PEOPLE << 9) | 0x1f
#define EC_WORD_SIBLINGS     (EC_GROUP_PEOPLE << 9) | 0x20
#define EC_WORD_KID          (EC_GROUP_PEOPLE << 9) | 0x21
#define EC_WORD_CHILDREN     (EC_GROUP_PEOPLE << 9) | 0x22
#define EC_WORD_MR           (EC_GROUP_PEOPLE << 9) | 0x23
#define EC_WORD_MRS          (EC_GROUP_PEOPLE << 9) | 0x24
#define EC_WORD_MYSELF       (EC_GROUP_PEOPLE << 9) | 0x25
#define EC_WORD_I_WAS        (EC_GROUP_PEOPLE << 9) | 0x26
#define EC_WORD_TO_ME        (EC_GROUP_PEOPLE << 9) | 0x27
#define EC_WORD_MY           (EC_GROUP_PEOPLE << 9) | 0x28
#define EC_WORD_I_AM         (EC_GROUP_PEOPLE << 9) | 0x29
#define EC_WORD_I_VE         (EC_GROUP_PEOPLE << 9) | 0x2a
#define EC_WORD_WHO          (EC_GROUP_PEOPLE << 9) | 0x2b
#define EC_WORD_SOMEONE      (EC_GROUP_PEOPLE << 9) | 0x2c
#define EC_WORD_WHO_WAS      (EC_GROUP_PEOPLE << 9) | 0x2d
#define EC_WORD_TO_WHOM      (EC_GROUP_PEOPLE << 9) | 0x2e
#define EC_WORD_WHOSE        (EC_GROUP_PEOPLE << 9) | 0x2f
#define EC_WORD_WHO_IS       (EC_GROUP_PEOPLE << 9) | 0x30
#define EC_WORD_IT_S         (EC_GROUP_PEOPLE << 9) | 0x31
#define EC_WORD_LADY         (EC_GROUP_PEOPLE << 9) | 0x32
#define EC_WORD_FRIEND       (EC_GROUP_PEOPLE << 9) | 0x33
#define EC_WORD_ALLY         (EC_GROUP_PEOPLE << 9) | 0x34
#define EC_WORD_PERSON       (EC_GROUP_PEOPLE << 9) | 0x35
#define EC_WORD_DUDE         (EC_GROUP_PEOPLE << 9) | 0x36
#define EC_WORD_THEY         (EC_GROUP_PEOPLE << 9) | 0x37
#define EC_WORD_THEY_WERE    (EC_GROUP_PEOPLE << 9) | 0x38
#define EC_WORD_TO_THEM      (EC_GROUP_PEOPLE << 9) | 0x39
#define EC_WORD_THEIR        (EC_GROUP_PEOPLE << 9) | 0x3a
#define EC_WORD_THEY_RE      (EC_GROUP_PEOPLE << 9) | 0x3b
#define EC_WORD_THEY_VE      (EC_GROUP_PEOPLE << 9) | 0x3c
#define EC_WORD_WE           (EC_GROUP_PEOPLE << 9) | 0x3d
#define EC_WORD_BEEN         (EC_GROUP_PEOPLE << 9) | 0x3e
#define EC_WORD_TO_US        (EC_GROUP_PEOPLE << 9) | 0x3f
#define EC_WORD_OUR          (EC_GROUP_PEOPLE << 9) | 0x40
#define EC_WORD_WE_RE        (EC_GROUP_PEOPLE << 9) | 0x41
#define EC_WORD_RIVAL        (EC_GROUP_PEOPLE << 9) | 0x42
#define EC_WORD_WE_VE        (EC_GROUP_PEOPLE << 9) | 0x43
#define EC_WORD_WOMAN        (EC_GROUP_PEOPLE << 9) | 0x44
#define EC_WORD_SHE          (EC_GROUP_PEOPLE << 9) | 0x45
#define EC_WORD_SHE_WAS      (EC_GROUP_PEOPLE << 9) | 0x46
#define EC_WORD_TO_HER       (EC_GROUP_PEOPLE << 9) | 0x47
#define EC_WORD_HERS         (EC_GROUP_PEOPLE << 9) | 0x48
#define EC_WORD_SHE_IS       (EC_GROUP_PEOPLE << 9) | 0x49
#define EC_WORD_SOME         (EC_GROUP_PEOPLE << 9) | 0x4a

// VOICES
#define EC_WORD_EXCL                        (EC_GROUP_VOICES << 9) | 0x0
#define EC_WORD_EXCL_EXCL                   (EC_GROUP_VOICES << 9) | 0x1
#define EC_WORD_QUES_EXCL                   (EC_GROUP_VOICES << 9) | 0x2
#define EC_WORD_QUES                        (EC_GROUP_VOICES << 9) | 0x3
#define EC_WORD_ELLIPSIS                    (EC_GROUP_VOICES << 9) | 0x4
#define EC_WORD_ELLIPSIS_EXCL               (EC_GROUP_VOICES << 9) | 0x5
#define EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS  (EC_GROUP_VOICES << 9) | 0x6
#define EC_WORD_DASH                        (EC_GROUP_VOICES << 9) | 0x7
#define EC_WORD_DASH_DASH_DASH              (EC_GROUP_VOICES << 9) | 0x8
#define EC_WORD_UH_OH                       (EC_GROUP_VOICES << 9) | 0x9
#define EC_WORD_WAAAH                       (EC_GROUP_VOICES << 9) | 0xa
#define EC_WORD_AHAHA                       (EC_GROUP_VOICES << 9) | 0xb
#define EC_WORD_OH_QUES                     (EC_GROUP_VOICES << 9) | 0xc
#define EC_WORD_NOPE                        (EC_GROUP_VOICES << 9) | 0xd
#define EC_WORD_URGH                        (EC_GROUP_VOICES << 9) | 0xe
#define EC_WORD_HMM                         (EC_GROUP_VOICES << 9) | 0xf
#define EC_WORD_WHOAH                       (EC_GROUP_VOICES << 9) | 0x10
#define EC_WORD_WROOOAAR_EXCL               (EC_GROUP_VOICES << 9) | 0x11
#define EC_WORD_WOW                         (EC_GROUP_VOICES << 9) | 0x12
#define EC_WORD_GIGGLE                      (EC_GROUP_VOICES << 9) | 0x13
#define EC_WORD_SIGH                        (EC_GROUP_VOICES << 9) | 0x14
#define EC_WORD_UNBELIEVABLE                (EC_GROUP_VOICES << 9) | 0x15
#define EC_WORD_CRIES                       (EC_GROUP_VOICES << 9) | 0x16
#define EC_WORD_AGREE                       (EC_GROUP_VOICES << 9) | 0x17
#define EC_WORD_EH_QUES                     (EC_GROUP_VOICES << 9) | 0x18
#define EC_WORD_CRY                         (EC_GROUP_VOICES << 9) | 0x19
#define EC_WORD_EHEHE                       (EC_GROUP_VOICES << 9) | 0x1a
#define EC_WORD_OI_OI_OI                    (EC_GROUP_VOICES << 9) | 0x1b
#define EC_WORD_OH_YEAH                     (EC_GROUP_VOICES << 9) | 0x1c
#define EC_WORD_OH                          (EC_GROUP_VOICES << 9) | 0x1d
#define EC_WORD_OOPS                        (EC_GROUP_VOICES << 9) | 0x1e
#define EC_WORD_SHOCKED                     (EC_GROUP_VOICES << 9) | 0x1f
#define EC_WORD_EEK                         (EC_GROUP_VOICES << 9) | 0x20
#define EC_WORD_GRAAAH                      (EC_GROUP_VOICES << 9) | 0x21
#define EC_WORD_GWAHAHAHA                   (EC_GROUP_VOICES << 9) | 0x22
#define EC_WORD_WAY                         (EC_GROUP_VOICES << 9) | 0x23
#define EC_WORD_TCH                         (EC_GROUP_VOICES << 9) | 0x24
#define EC_WORD_HEHE                        (EC_GROUP_VOICES << 9) | 0x25
#define EC_WORD_HAH                         (EC_GROUP_VOICES << 9) | 0x26
#define EC_WORD_YUP                         (EC_GROUP_VOICES << 9) | 0x27
#define EC_WORD_HAHAHA                      (EC_GROUP_VOICES << 9) | 0x28
#define EC_WORD_AIYEEH                      (EC_GROUP_VOICES << 9) | 0x29
#define EC_WORD_HIYAH                       (EC_GROUP_VOICES << 9) | 0x2a
#define EC_WORD_FUFUFU                      (EC_GROUP_VOICES << 9) | 0x2b
#define EC_WORD_LOL                         (EC_GROUP_VOICES << 9) | 0x2c
#define EC_WORD_SNORT                       (EC_GROUP_VOICES << 9) | 0x2d
#define EC_WORD_HUMPH                       (EC_GROUP_VOICES << 9) | 0x2e
#define EC_WORD_HEHEHE                      (EC_GROUP_VOICES << 9) | 0x2f
#define EC_WORD_HEH                         (EC_GROUP_VOICES << 9) | 0x30
#define EC_WORD_HOHOHO                      (EC_GROUP_VOICES << 9) | 0x31
#define EC_WORD_UH_HUH                      (EC_GROUP_VOICES << 9) | 0x32
#define EC_WORD_OH_DEAR                     (EC_GROUP_VOICES << 9) | 0x33
#define EC_WORD_ARRGH                       (EC_GROUP_VOICES << 9) | 0x34
#define EC_WORD_MUFUFU                      (EC_GROUP_VOICES << 9) | 0x35
#define EC_WORD_MMM                         (EC_GROUP_VOICES << 9) | 0x36
#define EC_WORD_OH_KAY                      (EC_GROUP_VOICES << 9) | 0x37
#define EC_WORD_OKAY                        (EC_GROUP_VOICES << 9) | 0x38
#define EC_WORD_LALALA                      (EC_GROUP_VOICES << 9) | 0x39
#define EC_WORD_YAY                         (EC_GROUP_VOICES << 9) | 0x3a
#define EC_WORD_AWW                         (EC_GROUP_VOICES << 9) | 0x3b
#define EC_WORD_WOWEE                       (EC_GROUP_VOICES << 9) | 0x3c
#define EC_WORD_GWAH                        (EC_GROUP_VOICES << 9) | 0x3d
#define EC_WORD_WAHAHAHA                    (EC_GROUP_VOICES << 9) | 0x3e

// SPEECH
#define EC_WORD_LISTEN      (EC_GROUP_SPEECH << 9) | 0x0
#define EC_WORD_NOT_VERY    (EC_GROUP_SPEECH << 9) | 0x1
#define EC_WORD_MEAN        (EC_GROUP_SPEECH << 9) | 0x2
#define EC_WORD_LIE         (EC_GROUP_SPEECH << 9) | 0x3
#define EC_WORD_LAY         (EC_GROUP_SPEECH << 9) | 0x4
#define EC_WORD_RECOMMEND   (EC_GROUP_SPEECH << 9) | 0x5
#define EC_WORD_NITWIT      (EC_GROUP_SPEECH << 9) | 0x6
#define EC_WORD_QUITE       (EC_GROUP_SPEECH << 9) | 0x7
#define EC_WORD_FROM        (EC_GROUP_SPEECH << 9) | 0x8
#define EC_WORD_FEELING     (EC_GROUP_SPEECH << 9) | 0x9
#define EC_WORD_BUT         (EC_GROUP_SPEECH << 9) | 0xa
#define EC_WORD_HOWEVER     (EC_GROUP_SPEECH << 9) | 0xb
#define EC_WORD_CASE        (EC_GROUP_SPEECH << 9) | 0xc
#define EC_WORD_THE         (EC_GROUP_SPEECH << 9) | 0xd
#define EC_WORD_MISS        (EC_GROUP_SPEECH << 9) | 0xe
#define EC_WORD_HOW         (EC_GROUP_SPEECH << 9) | 0xf
#define EC_WORD_HIT         (EC_GROUP_SPEECH << 9) | 0x10
#define EC_WORD_ENOUGH      (EC_GROUP_SPEECH << 9) | 0x11
#define EC_WORD_A_LOT       (EC_GROUP_SPEECH << 9) | 0x12
#define EC_WORD_A_LITTLE    (EC_GROUP_SPEECH << 9) | 0x13
#define EC_WORD_ABSOLUTELY  (EC_GROUP_SPEECH << 9) | 0x14
#define EC_WORD_AND         (EC_GROUP_SPEECH << 9) | 0x15
#define EC_WORD_ONLY        (EC_GROUP_SPEECH << 9) | 0x16
#define EC_WORD_AROUND      (EC_GROUP_SPEECH << 9) | 0x17
#define EC_WORD_PROBABLY    (EC_GROUP_SPEECH << 9) | 0x18
#define EC_WORD_IF          (EC_GROUP_SPEECH << 9) | 0x19
#define EC_WORD_VERY        (EC_GROUP_SPEECH << 9) | 0x1a
#define EC_WORD_A_TINY_BIT  (EC_GROUP_SPEECH << 9) | 0x1b
#define EC_WORD_WILD        (EC_GROUP_SPEECH << 9) | 0x1c
#define EC_WORD_THAT_S      (EC_GROUP_SPEECH << 9) | 0x1d
#define EC_WORD_JUST        (EC_GROUP_SPEECH << 9) | 0x1e
#define EC_WORD_EVEN_SO     (EC_GROUP_SPEECH << 9) | 0x1f
#define EC_WORD_MUST_BE     (EC_GROUP_SPEECH << 9) | 0x20
#define EC_WORD_NATURALLY   (EC_GROUP_SPEECH << 9) | 0x21
#define EC_WORD_FOR_NOW     (EC_GROUP_SPEECH << 9) | 0x22
#define EC_WORD_UNDERSTOOD  (EC_GROUP_SPEECH << 9) | 0x23
#define EC_WORD_JOKING      (EC_GROUP_SPEECH << 9) | 0x24
#define EC_WORD_READY       (EC_GROUP_SPEECH << 9) | 0x25
#define EC_WORD_SOMETHING   (EC_GROUP_SPEECH << 9) | 0x26
#define EC_WORD_SOMEHOW     (EC_GROUP_SPEECH << 9) | 0x27
#define EC_WORD_ALTHOUGH    (EC_GROUP_SPEECH << 9) | 0x28
#define EC_WORD_ALSO        (EC_GROUP_SPEECH << 9) | 0x29
#define EC_WORD_PERFECT     (EC_GROUP_SPEECH << 9) | 0x2a
#define EC_WORD_AS_MUCH_AS  (EC_GROUP_SPEECH << 9) | 0x2b
#define EC_WORD_REALLY      (EC_GROUP_SPEECH << 9) | 0x2c
#define EC_WORD_TRULY       (EC_GROUP_SPEECH << 9) | 0x2d
#define EC_WORD_SERIOUSLY   (EC_GROUP_SPEECH << 9) | 0x2e
#define EC_WORD_TOTALLY     (EC_GROUP_SPEECH << 9) | 0x2f
#define EC_WORD_UNTIL       (EC_GROUP_SPEECH << 9) | 0x30
#define EC_WORD_AS_IF       (EC_GROUP_SPEECH << 9) | 0x31
#define EC_WORD_MOOD        (EC_GROUP_SPEECH << 9) | 0x32
#define EC_WORD_RATHER      (EC_GROUP_SPEECH << 9) | 0x33
#define EC_WORD_AWFULLY     (EC_GROUP_SPEECH << 9) | 0x34
#define EC_WORD_MODE        (EC_GROUP_SPEECH << 9) | 0x35
#define EC_WORD_MORE        (EC_GROUP_SPEECH << 9) | 0x36
#define EC_WORD_TOO_LATE    (EC_GROUP_SPEECH << 9) | 0x37
#define EC_WORD_FINALLY     (EC_GROUP_SPEECH << 9) | 0x38
#define EC_WORD_ANY         (EC_GROUP_SPEECH << 9) | 0x39
#define EC_WORD_INSTEAD     (EC_GROUP_SPEECH << 9) | 0x3a
#define EC_WORD_FANTASTIC   (EC_GROUP_SPEECH << 9) | 0x3b

// ENDINGS
#define EC_WORD_WILL           (EC_GROUP_ENDINGS << 9) | 0x0
#define EC_WORD_WILL_BE_HERE   (EC_GROUP_ENDINGS << 9) | 0x1
#define EC_WORD_OR             (EC_GROUP_ENDINGS << 9) | 0x2
#define EC_WORD_TIMES          (EC_GROUP_ENDINGS << 9) | 0x3
#define EC_WORD_WONDER         (EC_GROUP_ENDINGS << 9) | 0x4
#define EC_WORD_IS_IT_QUES     (EC_GROUP_ENDINGS << 9) | 0x5
#define EC_WORD_BE             (EC_GROUP_ENDINGS << 9) | 0x6
#define EC_WORD_GIMME          (EC_GROUP_ENDINGS << 9) | 0x7
#define EC_WORD_COULD          (EC_GROUP_ENDINGS << 9) | 0x8
#define EC_WORD_LIKELY_TO      (EC_GROUP_ENDINGS << 9) | 0x9
#define EC_WORD_WOULD          (EC_GROUP_ENDINGS << 9) | 0xa
#define EC_WORD_IS             (EC_GROUP_ENDINGS << 9) | 0xb
#define EC_WORD_ISN_T_IT_QUES  (EC_GROUP_ENDINGS << 9) | 0xc
#define EC_WORD_LET_S          (EC_GROUP_ENDINGS << 9) | 0xd
#define EC_WORD_OTHER          (EC_GROUP_ENDINGS << 9) | 0xe
#define EC_WORD_ARE            (EC_GROUP_ENDINGS << 9) | 0xf
#define EC_WORD_WAS            (EC_GROUP_ENDINGS << 9) | 0x10
#define EC_WORD_WERE           (EC_GROUP_ENDINGS << 9) | 0x11
#define EC_WORD_THOSE          (EC_GROUP_ENDINGS << 9) | 0x12
#define EC_WORD_ISN_T          (EC_GROUP_ENDINGS << 9) | 0x13
#define EC_WORD_WON_T          (EC_GROUP_ENDINGS << 9) | 0x14
#define EC_WORD_CAN_T          (EC_GROUP_ENDINGS << 9) | 0x15
#define EC_WORD_CAN            (EC_GROUP_ENDINGS << 9) | 0x16
#define EC_WORD_DON_T          (EC_GROUP_ENDINGS << 9) | 0x17
#define EC_WORD_DO             (EC_GROUP_ENDINGS << 9) | 0x18
#define EC_WORD_DOES           (EC_GROUP_ENDINGS << 9) | 0x19
#define EC_WORD_WHOM           (EC_GROUP_ENDINGS << 9) | 0x1a
#define EC_WORD_WHICH          (EC_GROUP_ENDINGS << 9) | 0x1b
#define EC_WORD_WASN_T         (EC_GROUP_ENDINGS << 9) | 0x1c
#define EC_WORD_WEREN_T        (EC_GROUP_ENDINGS << 9) | 0x1d
#define EC_WORD_HAVE           (EC_GROUP_ENDINGS << 9) | 0x1e
#define EC_WORD_HAVEN_T        (EC_GROUP_ENDINGS << 9) | 0x1f
#define EC_WORD_A              (EC_GROUP_ENDINGS << 9) | 0x20
#define EC_WORD_AN             (EC_GROUP_ENDINGS << 9) | 0x21
#define EC_WORD_NOT            (EC_GROUP_ENDINGS << 9) | 0x22
#define EC_WORD_THERE          (EC_GROUP_ENDINGS << 9) | 0x23
#define EC_WORD_OK_QUES        (EC_GROUP_ENDINGS << 9) | 0x24
#define EC_WORD_SO             (EC_GROUP_ENDINGS << 9) | 0x25
#define EC_WORD_MAYBE          (EC_GROUP_ENDINGS << 9) | 0x26
#define EC_WORD_ABOUT          (EC_GROUP_ENDINGS << 9) | 0x27
#define EC_WORD_OVER           (EC_GROUP_ENDINGS << 9) | 0x28
#define EC_WORD_IT             (EC_GROUP_ENDINGS << 9) | 0x29
#define EC_WORD_ALL            (EC_GROUP_ENDINGS << 9) | 0x2a
#define EC_WORD_FOR            (EC_GROUP_ENDINGS << 9) | 0x2b
#define EC_WORD_ON             (EC_GROUP_ENDINGS << 9) | 0x2c
#define EC_WORD_OFF            (EC_GROUP_ENDINGS << 9) | 0x2d
#define EC_WORD_AS             (EC_GROUP_ENDINGS << 9) | 0x2e
#define EC_WORD_TO             (EC_GROUP_ENDINGS << 9) | 0x2f
#define EC_WORD_WITH           (EC_GROUP_ENDINGS << 9) | 0x30
#define EC_WORD_BETTER         (EC_GROUP_ENDINGS << 9) | 0x31
#define EC_WORD_EVER           (EC_GROUP_ENDINGS << 9) | 0x32
#define EC_WORD_SINCE          (EC_GROUP_ENDINGS << 9) | 0x33
#define EC_WORD_OF             (EC_GROUP_ENDINGS << 9) | 0x34
#define EC_WORD_BELONGS_TO     (EC_GROUP_ENDINGS << 9) | 0x35
#define EC_WORD_AT             (EC_GROUP_ENDINGS << 9) | 0x36
#define EC_WORD_IN             (EC_GROUP_ENDINGS << 9) | 0x37
#define EC_WORD_OUT            (EC_GROUP_ENDINGS << 9) | 0x38
#define EC_WORD_TOO            (EC_GROUP_ENDINGS << 9) | 0x39
#define EC_WORD_LIKE           (EC_GROUP_ENDINGS << 9) | 0x3a
#define EC_WORD_DID            (EC_GROUP_ENDINGS << 9) | 0x3b
#define EC_WORD_DIDN_T         (EC_GROUP_ENDINGS << 9) | 0x3c
#define EC_WORD_DOESN_T        (EC_GROUP_ENDINGS << 9) | 0x3d
#define EC_WORD_WITHOUT        (EC_GROUP_ENDINGS << 9) | 0x3e
#define EC_WORD_AFTER          (EC_GROUP_ENDINGS << 9) | 0x3f
#define EC_WORD_BEFORE         (EC_GROUP_ENDINGS << 9) | 0x40
#define EC_WORD_WHILE          (EC_GROUP_ENDINGS << 9) | 0x41
#define EC_WORD_THAN           (EC_GROUP_ENDINGS << 9) | 0x42
#define EC_WORD_ONCE           (EC_GROUP_ENDINGS << 9) | 0x43
#define EC_WORD_ANYWHERE       (EC_GROUP_ENDINGS << 9) | 0x44

// FEELINGS
#define EC_WORD_MEET          (EC_GROUP_FEELINGS << 9) | 0x0
#define EC_WORD_PLAY          (EC_GROUP_FEELINGS << 9) | 0x1
#define EC_WORD_HURRIED       (EC_GROUP_FEELINGS << 9) | 0x2
#define EC_WORD_GOES          (EC_GROUP_FEELINGS << 9) | 0x3
#define EC_WORD_GIDDY         (EC_GROUP_FEELINGS << 9) | 0x4
#define EC_WORD_HAPPY         (EC_GROUP_FEELINGS << 9) | 0x5
#define EC_WORD_HAPPINESS     (EC_GROUP_FEELINGS << 9) | 0x6
#define EC_WORD_EXCITE        (EC_GROUP_FEELINGS << 9) | 0x7
#define EC_WORD_IMPORTANT     (EC_GROUP_FEELINGS << 9) | 0x8
#define EC_WORD_FUNNY         (EC_GROUP_FEELINGS << 9) | 0x9
#define EC_WORD_GOT           (EC_GROUP_FEELINGS << 9) | 0xa
#define EC_WORD_GO_HOME       (EC_GROUP_FEELINGS << 9) | 0xb
#define EC_WORD_DISAPPOINTED  (EC_GROUP_FEELINGS << 9) | 0xc
#define EC_WORD_DISAPPOINTS   (EC_GROUP_FEELINGS << 9) | 0xd
#define EC_WORD_SAD           (EC_GROUP_FEELINGS << 9) | 0xe
#define EC_WORD_TRY           (EC_GROUP_FEELINGS << 9) | 0xf
#define EC_WORD_TRIES         (EC_GROUP_FEELINGS << 9) | 0x10
#define EC_WORD_HEARS         (EC_GROUP_FEELINGS << 9) | 0x11
#define EC_WORD_THINK         (EC_GROUP_FEELINGS << 9) | 0x12
#define EC_WORD_HEAR          (EC_GROUP_FEELINGS << 9) | 0x13
#define EC_WORD_WANTS         (EC_GROUP_FEELINGS << 9) | 0x14
#define EC_WORD_MISHEARD      (EC_GROUP_FEELINGS << 9) | 0x15
#define EC_WORD_DISLIKE       (EC_GROUP_FEELINGS << 9) | 0x16
#define EC_WORD_ANGRY         (EC_GROUP_FEELINGS << 9) | 0x17
#define EC_WORD_ANGER         (EC_GROUP_FEELINGS << 9) | 0x18
#define EC_WORD_SCARY         (EC_GROUP_FEELINGS << 9) | 0x19
#define EC_WORD_LONESOME      (EC_GROUP_FEELINGS << 9) | 0x1a
#define EC_WORD_DISAPPOINT    (EC_GROUP_FEELINGS << 9) | 0x1b
#define EC_WORD_JOY           (EC_GROUP_FEELINGS << 9) | 0x1c
#define EC_WORD_GETS          (EC_GROUP_FEELINGS << 9) | 0x1d
#define EC_WORD_NEVER         (EC_GROUP_FEELINGS << 9) | 0x1e
#define EC_WORD_DARN          (EC_GROUP_FEELINGS << 9) | 0x1f
#define EC_WORD_DOWNCAST      (EC_GROUP_FEELINGS << 9) | 0x20
#define EC_WORD_INCREDIBLE    (EC_GROUP_FEELINGS << 9) | 0x21
#define EC_WORD_LIKES         (EC_GROUP_FEELINGS << 9) | 0x22
#define EC_WORD_DISLIKES      (EC_GROUP_FEELINGS << 9) | 0x23
#define EC_WORD_BORING        (EC_GROUP_FEELINGS << 9) | 0x24
#define EC_WORD_CARE          (EC_GROUP_FEELINGS << 9) | 0x25
#define EC_WORD_CARES         (EC_GROUP_FEELINGS << 9) | 0x26
#define EC_WORD_ALL_RIGHT     (EC_GROUP_FEELINGS << 9) | 0x27
#define EC_WORD_ADORE         (EC_GROUP_FEELINGS << 9) | 0x28
#define EC_WORD_DISASTER      (EC_GROUP_FEELINGS << 9) | 0x29
#define EC_WORD_ENJOY         (EC_GROUP_FEELINGS << 9) | 0x2a
#define EC_WORD_ENJOYS        (EC_GROUP_FEELINGS << 9) | 0x2b
#define EC_WORD_EAT           (EC_GROUP_FEELINGS << 9) | 0x2c
#define EC_WORD_LACKING       (EC_GROUP_FEELINGS << 9) | 0x2d
#define EC_WORD_BAD           (EC_GROUP_FEELINGS << 9) | 0x2e
#define EC_WORD_HARD          (EC_GROUP_FEELINGS << 9) | 0x2f
#define EC_WORD_TERRIBLE      (EC_GROUP_FEELINGS << 9) | 0x30
#define EC_WORD_SHOULD        (EC_GROUP_FEELINGS << 9) | 0x31
#define EC_WORD_NICE          (EC_GROUP_FEELINGS << 9) | 0x32
#define EC_WORD_DRINK         (EC_GROUP_FEELINGS << 9) | 0x33
#define EC_WORD_SURPRISE      (EC_GROUP_FEELINGS << 9) | 0x34
#define EC_WORD_FEAR          (EC_GROUP_FEELINGS << 9) | 0x35
#define EC_WORD_WANT          (EC_GROUP_FEELINGS << 9) | 0x36
#define EC_WORD_WAIT          (EC_GROUP_FEELINGS << 9) | 0x37
#define EC_WORD_SATISFIED     (EC_GROUP_FEELINGS << 9) | 0x38
#define EC_WORD_SEE           (EC_GROUP_FEELINGS << 9) | 0x39
#define EC_WORD_RARE          (EC_GROUP_FEELINGS << 9) | 0x3a
#define EC_WORD_NEGATIVE      (EC_GROUP_FEELINGS << 9) | 0x3b
#define EC_WORD_DONE          (EC_GROUP_FEELINGS << 9) | 0x3c
#define EC_WORD_DANGER        (EC_GROUP_FEELINGS << 9) | 0x3d
#define EC_WORD_DEFEATED      (EC_GROUP_FEELINGS << 9) | 0x3e
#define EC_WORD_BEAT          (EC_GROUP_FEELINGS << 9) | 0x3f
#define EC_WORD_GREAT         (EC_GROUP_FEELINGS << 9) | 0x40
#define EC_WORD_ROMANTIC      (EC_GROUP_FEELINGS << 9) | 0x41
#define EC_WORD_QUESTION      (EC_GROUP_FEELINGS << 9) | 0x42
#define EC_WORD_UNDERSTAND    (EC_GROUP_FEELINGS << 9) | 0x43
#define EC_WORD_UNDERSTANDS   (EC_GROUP_FEELINGS << 9) | 0x44

// CONDITIONS
#define EC_WORD_HOT           (EC_GROUP_CONDITIONS << 9) | 0x0
#define EC_WORD_EXISTS        (EC_GROUP_CONDITIONS << 9) | 0x1
#define EC_WORD_EXCESS        (EC_GROUP_CONDITIONS << 9) | 0x2
#define EC_WORD_APPROVED      (EC_GROUP_CONDITIONS << 9) | 0x3
#define EC_WORD_HAS           (EC_GROUP_CONDITIONS << 9) | 0x4
#define EC_WORD_GOOD          (EC_GROUP_CONDITIONS << 9) | 0x5
#define EC_WORD_LESS          (EC_GROUP_CONDITIONS << 9) | 0x6
#define EC_WORD_MOMENTUM      (EC_GROUP_CONDITIONS << 9) | 0x7
#define EC_WORD_GOING         (EC_GROUP_CONDITIONS << 9) | 0x8
#define EC_WORD_WEIRD         (EC_GROUP_CONDITIONS << 9) | 0x9
#define EC_WORD_BUSY          (EC_GROUP_CONDITIONS << 9) | 0xa
#define EC_WORD_TOGETHER      (EC_GROUP_CONDITIONS << 9) | 0xb
#define EC_WORD_FULL          (EC_GROUP_CONDITIONS << 9) | 0xc
#define EC_WORD_ABSENT        (EC_GROUP_CONDITIONS << 9) | 0xd
#define EC_WORD_BEING         (EC_GROUP_CONDITIONS << 9) | 0xe
#define EC_WORD_NEED          (EC_GROUP_CONDITIONS << 9) | 0xf
#define EC_WORD_TASTY         (EC_GROUP_CONDITIONS << 9) | 0x10
#define EC_WORD_SKILLED       (EC_GROUP_CONDITIONS << 9) | 0x11
#define EC_WORD_NOISY         (EC_GROUP_CONDITIONS << 9) | 0x12
#define EC_WORD_BIG           (EC_GROUP_CONDITIONS << 9) | 0x13
#define EC_WORD_LATE          (EC_GROUP_CONDITIONS << 9) | 0x14
#define EC_WORD_CLOSE         (EC_GROUP_CONDITIONS << 9) | 0x15
#define EC_WORD_DOCILE        (EC_GROUP_CONDITIONS << 9) | 0x16
#define EC_WORD_AMUSING       (EC_GROUP_CONDITIONS << 9) | 0x17
#define EC_WORD_ENTERTAINING  (EC_GROUP_CONDITIONS << 9) | 0x18
#define EC_WORD_PERFECTION    (EC_GROUP_CONDITIONS << 9) | 0x19
#define EC_WORD_PRETTY        (EC_GROUP_CONDITIONS << 9) | 0x1a
#define EC_WORD_HEALTHY       (EC_GROUP_CONDITIONS << 9) | 0x1b
#define EC_WORD_EXCELLENT     (EC_GROUP_CONDITIONS << 9) | 0x1c
#define EC_WORD_UPSIDE_DOWN   (EC_GROUP_CONDITIONS << 9) | 0x1d
#define EC_WORD_COLD          (EC_GROUP_CONDITIONS << 9) | 0x1e
#define EC_WORD_REFRESHING    (EC_GROUP_CONDITIONS << 9) | 0x1f
#define EC_WORD_UNAVOIDABLE   (EC_GROUP_CONDITIONS << 9) | 0x20
#define EC_WORD_MUCH          (EC_GROUP_CONDITIONS << 9) | 0x21
#define EC_WORD_OVERWHELMING  (EC_GROUP_CONDITIONS << 9) | 0x22
#define EC_WORD_FABULOUS      (EC_GROUP_CONDITIONS << 9) | 0x23
#define EC_WORD_ELSE          (EC_GROUP_CONDITIONS << 9) | 0x24
#define EC_WORD_EXPENSIVE     (EC_GROUP_CONDITIONS << 9) | 0x25
#define EC_WORD_CORRECT       (EC_GROUP_CONDITIONS << 9) | 0x26
#define EC_WORD_IMPOSSIBLE    (EC_GROUP_CONDITIONS << 9) | 0x27
#define EC_WORD_SMALL         (EC_GROUP_CONDITIONS << 9) | 0x28
#define EC_WORD_DIFFERENT     (EC_GROUP_CONDITIONS << 9) | 0x29
#define EC_WORD_TIRED         (EC_GROUP_CONDITIONS << 9) | 0x2a
#define EC_WORD_SKILL         (EC_GROUP_CONDITIONS << 9) | 0x2b
#define EC_WORD_TOP           (EC_GROUP_CONDITIONS << 9) | 0x2c
#define EC_WORD_NON_STOP      (EC_GROUP_CONDITIONS << 9) | 0x2d
#define EC_WORD_PREPOSTEROUS  (EC_GROUP_CONDITIONS << 9) | 0x2e
#define EC_WORD_NONE          (EC_GROUP_CONDITIONS << 9) | 0x2f
#define EC_WORD_NOTHING       (EC_GROUP_CONDITIONS << 9) | 0x30
#define EC_WORD_NATURAL       (EC_GROUP_CONDITIONS << 9) | 0x31
#define EC_WORD_BECOMES       (EC_GROUP_CONDITIONS << 9) | 0x32
#define EC_WORD_LUKEWARM      (EC_GROUP_CONDITIONS << 9) | 0x33
#define EC_WORD_FAST          (EC_GROUP_CONDITIONS << 9) | 0x34
#define EC_WORD_LOW           (EC_GROUP_CONDITIONS << 9) | 0x35
#define EC_WORD_AWFUL         (EC_GROUP_CONDITIONS << 9) | 0x36
#define EC_WORD_ALONE         (EC_GROUP_CONDITIONS << 9) | 0x37
#define EC_WORD_BORED         (EC_GROUP_CONDITIONS << 9) | 0x38
#define EC_WORD_SECRET        (EC_GROUP_CONDITIONS << 9) | 0x39
#define EC_WORD_MYSTERY       (EC_GROUP_CONDITIONS << 9) | 0x3a
#define EC_WORD_LACKS         (EC_GROUP_CONDITIONS << 9) | 0x3b
#define EC_WORD_BEST          (EC_GROUP_CONDITIONS << 9) | 0x3c
#define EC_WORD_LOUSY         (EC_GROUP_CONDITIONS << 9) | 0x3d
#define EC_WORD_MISTAKE       (EC_GROUP_CONDITIONS << 9) | 0x3e
#define EC_WORD_KIND          (EC_GROUP_CONDITIONS << 9) | 0x3f
#define EC_WORD_WELL          (EC_GROUP_CONDITIONS << 9) | 0x40
#define EC_WORD_WEAKENED      (EC_GROUP_CONDITIONS << 9) | 0x41
#define EC_WORD_SIMPLE        (EC_GROUP_CONDITIONS << 9) | 0x42
#define EC_WORD_SEEMS         (EC_GROUP_CONDITIONS << 9) | 0x43
#define EC_WORD_BADLY         (EC_GROUP_CONDITIONS << 9) | 0x44

// ACTIONS
#define EC_WORD_MEETS      (EC_GROUP_ACTIONS << 9) | 0x0
#define EC_WORD_CONCEDE    (EC_GROUP_ACTIONS << 9) | 0x1
#define EC_WORD_GIVE       (EC_GROUP_ACTIONS << 9) | 0x2
#define EC_WORD_GIVES      (EC_GROUP_ACTIONS << 9) | 0x3
#define EC_WORD_PLAYED     (EC_GROUP_ACTIONS << 9) | 0x4
#define EC_WORD_PLAYS      (EC_GROUP_ACTIONS << 9) | 0x5
#define EC_WORD_COLLECT    (EC_GROUP_ACTIONS << 9) | 0x6
#define EC_WORD_WALKING    (EC_GROUP_ACTIONS << 9) | 0x7
#define EC_WORD_WALKS      (EC_GROUP_ACTIONS << 9) | 0x8
#define EC_WORD_SAYS       (EC_GROUP_ACTIONS << 9) | 0x9
#define EC_WORD_WENT       (EC_GROUP_ACTIONS << 9) | 0xa
#define EC_WORD_SAID       (EC_GROUP_ACTIONS << 9) | 0xb
#define EC_WORD_WAKE_UP    (EC_GROUP_ACTIONS << 9) | 0xc
#define EC_WORD_WAKES_UP   (EC_GROUP_ACTIONS << 9) | 0xd
#define EC_WORD_ANGERS     (EC_GROUP_ACTIONS << 9) | 0xe
#define EC_WORD_TEACH      (EC_GROUP_ACTIONS << 9) | 0xf
#define EC_WORD_TEACHES    (EC_GROUP_ACTIONS << 9) | 0x10
#define EC_WORD_PLEASE     (EC_GROUP_ACTIONS << 9) | 0x11
#define EC_WORD_LEARN      (EC_GROUP_ACTIONS << 9) | 0x12
#define EC_WORD_CHANGE     (EC_GROUP_ACTIONS << 9) | 0x13
#define EC_WORD_STORY      (EC_GROUP_ACTIONS << 9) | 0x14
#define EC_WORD_TRUST      (EC_GROUP_ACTIONS << 9) | 0x15
#define EC_WORD_LAVISH     (EC_GROUP_ACTIONS << 9) | 0x16
#define EC_WORD_LISTENS    (EC_GROUP_ACTIONS << 9) | 0x17
#define EC_WORD_HEARING    (EC_GROUP_ACTIONS << 9) | 0x18
#define EC_WORD_TRAINS     (EC_GROUP_ACTIONS << 9) | 0x19
#define EC_WORD_CHOOSE     (EC_GROUP_ACTIONS << 9) | 0x1a
#define EC_WORD_COME       (EC_GROUP_ACTIONS << 9) | 0x1b
#define EC_WORD_CAME       (EC_GROUP_ACTIONS << 9) | 0x1c
#define EC_WORD_SEARCH     (EC_GROUP_ACTIONS << 9) | 0x1d
#define EC_WORD_MAKE       (EC_GROUP_ACTIONS << 9) | 0x1e
#define EC_WORD_CAUSE      (EC_GROUP_ACTIONS << 9) | 0x1f
#define EC_WORD_KNOW       (EC_GROUP_ACTIONS << 9) | 0x20
#define EC_WORD_KNOWS      (EC_GROUP_ACTIONS << 9) | 0x21
#define EC_WORD_REFUSE     (EC_GROUP_ACTIONS << 9) | 0x22
#define EC_WORD_STORES     (EC_GROUP_ACTIONS << 9) | 0x23
#define EC_WORD_BRAG       (EC_GROUP_ACTIONS << 9) | 0x24
#define EC_WORD_IGNORANT   (EC_GROUP_ACTIONS << 9) | 0x25
#define EC_WORD_THINKS     (EC_GROUP_ACTIONS << 9) | 0x26
#define EC_WORD_BELIEVE    (EC_GROUP_ACTIONS << 9) | 0x27
#define EC_WORD_SLIDE      (EC_GROUP_ACTIONS << 9) | 0x28
#define EC_WORD_EATS       (EC_GROUP_ACTIONS << 9) | 0x29
#define EC_WORD_USE        (EC_GROUP_ACTIONS << 9) | 0x2a
#define EC_WORD_USES       (EC_GROUP_ACTIONS << 9) | 0x2b
#define EC_WORD_USING      (EC_GROUP_ACTIONS << 9) | 0x2c
#define EC_WORD_COULDN_T   (EC_GROUP_ACTIONS << 9) | 0x2d
#define EC_WORD_CAPABLE    (EC_GROUP_ACTIONS << 9) | 0x2e
#define EC_WORD_DISAPPEAR  (EC_GROUP_ACTIONS << 9) | 0x2f
#define EC_WORD_APPEAR     (EC_GROUP_ACTIONS << 9) | 0x30
#define EC_WORD_THROW      (EC_GROUP_ACTIONS << 9) | 0x31
#define EC_WORD_WORRY      (EC_GROUP_ACTIONS << 9) | 0x32
#define EC_WORD_SLEPT      (EC_GROUP_ACTIONS << 9) | 0x33
#define EC_WORD_SLEEP      (EC_GROUP_ACTIONS << 9) | 0x34
#define EC_WORD_RELEASE    (EC_GROUP_ACTIONS << 9) | 0x35
#define EC_WORD_DRINKS     (EC_GROUP_ACTIONS << 9) | 0x36
#define EC_WORD_RUNS       (EC_GROUP_ACTIONS << 9) | 0x37
#define EC_WORD_RUN        (EC_GROUP_ACTIONS << 9) | 0x38
#define EC_WORD_WORKS      (EC_GROUP_ACTIONS << 9) | 0x39
#define EC_WORD_WORKING    (EC_GROUP_ACTIONS << 9) | 0x3a
#define EC_WORD_TALKING    (EC_GROUP_ACTIONS << 9) | 0x3b
#define EC_WORD_TALK       (EC_GROUP_ACTIONS << 9) | 0x3c
#define EC_WORD_SINK       (EC_GROUP_ACTIONS << 9) | 0x3d
#define EC_WORD_SMACK      (EC_GROUP_ACTIONS << 9) | 0x3e
#define EC_WORD_PRETEND    (EC_GROUP_ACTIONS << 9) | 0x3f
#define EC_WORD_PRAISE     (EC_GROUP_ACTIONS << 9) | 0x40
#define EC_WORD_OVERDO     (EC_GROUP_ACTIONS << 9) | 0x41
#define EC_WORD_SHOW       (EC_GROUP_ACTIONS << 9) | 0x42
#define EC_WORD_LOOKS      (EC_GROUP_ACTIONS << 9) | 0x43
#define EC_WORD_SEES       (EC_GROUP_ACTIONS << 9) | 0x44
#define EC_WORD_SEEK       (EC_GROUP_ACTIONS << 9) | 0x45
#define EC_WORD_OWN        (EC_GROUP_ACTIONS << 9) | 0x46
#define EC_WORD_TAKE       (EC_GROUP_ACTIONS << 9) | 0x47
#define EC_WORD_ALLOW      (EC_GROUP_ACTIONS << 9) | 0x48
#define EC_WORD_FORGET     (EC_GROUP_ACTIONS << 9) | 0x49
#define EC_WORD_FORGETS    (EC_GROUP_ACTIONS << 9) | 0x4a
#define EC_WORD_APPEARS    (EC_GROUP_ACTIONS << 9) | 0x4b
#define EC_WORD_FAINT      (EC_GROUP_ACTIONS << 9) | 0x4c
#define EC_WORD_FAINTED    (EC_GROUP_ACTIONS << 9) | 0x4d

// LIFESTYLE
#define EC_WORD_CHORES        (EC_GROUP_LIFESTYLE << 9) | 0x0
#define EC_WORD_HOME          (EC_GROUP_LIFESTYLE << 9) | 0x1
#define EC_WORD_MONEY         (EC_GROUP_LIFESTYLE << 9) | 0x2
#define EC_WORD_ALLOWANCE     (EC_GROUP_LIFESTYLE << 9) | 0x3
#define EC_WORD_BATH          (EC_GROUP_LIFESTYLE << 9) | 0x4
#define EC_WORD_CONVERSATION  (EC_GROUP_LIFESTYLE << 9) | 0x5
#define EC_WORD_SCHOOL        (EC_GROUP_LIFESTYLE << 9) | 0x6
#define EC_WORD_COMMEMORATE   (EC_GROUP_LIFESTYLE << 9) | 0x7
#define EC_WORD_HABIT         (EC_GROUP_LIFESTYLE << 9) | 0x8
#define EC_WORD_GROUP         (EC_GROUP_LIFESTYLE << 9) | 0x9
#define EC_WORD_WORD          (EC_GROUP_LIFESTYLE << 9) | 0xa
#define EC_WORD_STORE         (EC_GROUP_LIFESTYLE << 9) | 0xb
#define EC_WORD_SERVICE       (EC_GROUP_LIFESTYLE << 9) | 0xc
#define EC_WORD_WORK          (EC_GROUP_LIFESTYLE << 9) | 0xd
#define EC_WORD_SYSTEM        (EC_GROUP_LIFESTYLE << 9) | 0xe
#define EC_WORD_TRAIN         (EC_GROUP_LIFESTYLE << 9) | 0xf
#define EC_WORD_CLASS         (EC_GROUP_LIFESTYLE << 9) | 0x10
#define EC_WORD_LESSONS       (EC_GROUP_LIFESTYLE << 9) | 0x11
#define EC_WORD_INFORMATION   (EC_GROUP_LIFESTYLE << 9) | 0x12
#define EC_WORD_LIVING        (EC_GROUP_LIFESTYLE << 9) | 0x13
#define EC_WORD_TEACHER       (EC_GROUP_LIFESTYLE << 9) | 0x14
#define EC_WORD_TOURNAMENT    (EC_GROUP_LIFESTYLE << 9) | 0x15
#define EC_WORD_LETTER        (EC_GROUP_LIFESTYLE << 9) | 0x16
#define EC_WORD_EVENT         (EC_GROUP_LIFESTYLE << 9) | 0x17
#define EC_WORD_DIGITAL       (EC_GROUP_LIFESTYLE << 9) | 0x18
#define EC_WORD_TEST          (EC_GROUP_LIFESTYLE << 9) | 0x19
#define EC_WORD_DEPT_STORE    (EC_GROUP_LIFESTYLE << 9) | 0x1a
#define EC_WORD_TELEVISION    (EC_GROUP_LIFESTYLE << 9) | 0x1b
#define EC_WORD_PHONE         (EC_GROUP_LIFESTYLE << 9) | 0x1c
#define EC_WORD_ITEM          (EC_GROUP_LIFESTYLE << 9) | 0x1d
#define EC_WORD_NAME          (EC_GROUP_LIFESTYLE << 9) | 0x1e
#define EC_WORD_NEWS          (EC_GROUP_LIFESTYLE << 9) | 0x1f
#define EC_WORD_POPULAR       (EC_GROUP_LIFESTYLE << 9) | 0x20
#define EC_WORD_PARTY         (EC_GROUP_LIFESTYLE << 9) | 0x21
#define EC_WORD_STUDY         (EC_GROUP_LIFESTYLE << 9) | 0x22
#define EC_WORD_MACHINE       (EC_GROUP_LIFESTYLE << 9) | 0x23
#define EC_WORD_MAIL          (EC_GROUP_LIFESTYLE << 9) | 0x24
#define EC_WORD_MESSAGE       (EC_GROUP_LIFESTYLE << 9) | 0x25
#define EC_WORD_PROMISE       (EC_GROUP_LIFESTYLE << 9) | 0x26
#define EC_WORD_DREAM         (EC_GROUP_LIFESTYLE << 9) | 0x27
#define EC_WORD_KINDERGARTEN  (EC_GROUP_LIFESTYLE << 9) | 0x28
#define EC_WORD_LIFE          (EC_GROUP_LIFESTYLE << 9) | 0x29
#define EC_WORD_RADIO         (EC_GROUP_LIFESTYLE << 9) | 0x2a
#define EC_WORD_RENTAL        (EC_GROUP_LIFESTYLE << 9) | 0x2b
#define EC_WORD_WORLD         (EC_GROUP_LIFESTYLE << 9) | 0x2c

// HOBBIES
#define EC_WORD_IDOL          (EC_GROUP_HOBBIES << 9) | 0x0
#define EC_WORD_ANIME         (EC_GROUP_HOBBIES << 9) | 0x1
#define EC_WORD_SONG          (EC_GROUP_HOBBIES << 9) | 0x2
#define EC_WORD_MOVIE         (EC_GROUP_HOBBIES << 9) | 0x3
#define EC_WORD_SWEETS        (EC_GROUP_HOBBIES << 9) | 0x4
#define EC_WORD_CHAT          (EC_GROUP_HOBBIES << 9) | 0x5
#define EC_WORD_CHILD_S_PLAY  (EC_GROUP_HOBBIES << 9) | 0x6
#define EC_WORD_TOYS          (EC_GROUP_HOBBIES << 9) | 0x7
#define EC_WORD_MUSIC         (EC_GROUP_HOBBIES << 9) | 0x8
#define EC_WORD_CARDS         (EC_GROUP_HOBBIES << 9) | 0x9
#define EC_WORD_SHOPPING      (EC_GROUP_HOBBIES << 9) | 0xa
#define EC_WORD_CAMERA        (EC_GROUP_HOBBIES << 9) | 0xb
#define EC_WORD_VIEWING       (EC_GROUP_HOBBIES << 9) | 0xc
#define EC_WORD_SPECTATOR     (EC_GROUP_HOBBIES << 9) | 0xd
#define EC_WORD_GOURMET       (EC_GROUP_HOBBIES << 9) | 0xe
#define EC_WORD_GAME          (EC_GROUP_HOBBIES << 9) | 0xf
#define EC_WORD_RPG           (EC_GROUP_HOBBIES << 9) | 0x10
#define EC_WORD_COLLECTION    (EC_GROUP_HOBBIES << 9) | 0x11
#define EC_WORD_COMPLETE      (EC_GROUP_HOBBIES << 9) | 0x12
#define EC_WORD_MAGAZINE      (EC_GROUP_HOBBIES << 9) | 0x13
#define EC_WORD_WALK          (EC_GROUP_HOBBIES << 9) | 0x14
#define EC_WORD_BIKE          (EC_GROUP_HOBBIES << 9) | 0x15
#define EC_WORD_HOBBY         (EC_GROUP_HOBBIES << 9) | 0x16
#define EC_WORD_SPORTS        (EC_GROUP_HOBBIES << 9) | 0x17
#define EC_WORD_SOFTWARE      (EC_GROUP_HOBBIES << 9) | 0x18
#define EC_WORD_SONGS         (EC_GROUP_HOBBIES << 9) | 0x19
#define EC_WORD_DIET          (EC_GROUP_HOBBIES << 9) | 0x1a
#define EC_WORD_TREASURE      (EC_GROUP_HOBBIES << 9) | 0x1b
#define EC_WORD_TRAVEL        (EC_GROUP_HOBBIES << 9) | 0x1c
#define EC_WORD_DANCE         (EC_GROUP_HOBBIES << 9) | 0x1d
#define EC_WORD_CHANNEL       (EC_GROUP_HOBBIES << 9) | 0x1e
#define EC_WORD_MAKING        (EC_GROUP_HOBBIES << 9) | 0x1f
#define EC_WORD_FISHING       (EC_GROUP_HOBBIES << 9) | 0x20
#define EC_WORD_DATE          (EC_GROUP_HOBBIES << 9) | 0x21
#define EC_WORD_DESIGN        (EC_GROUP_HOBBIES << 9) | 0x22
#define EC_WORD_LOCOMOTIVE    (EC_GROUP_HOBBIES << 9) | 0x23
#define EC_WORD_PLUSH_DOLL    (EC_GROUP_HOBBIES << 9) | 0x24
#define EC_WORD_PC            (EC_GROUP_HOBBIES << 9) | 0x25
#define EC_WORD_FLOWERS       (EC_GROUP_HOBBIES << 9) | 0x26
#define EC_WORD_HERO          (EC_GROUP_HOBBIES << 9) | 0x27
#define EC_WORD_NAP           (EC_GROUP_HOBBIES << 9) | 0x28
#define EC_WORD_HEROINE       (EC_GROUP_HOBBIES << 9) | 0x29
#define EC_WORD_FASHION       (EC_GROUP_HOBBIES << 9) | 0x2a
#define EC_WORD_ADVENTURE     (EC_GROUP_HOBBIES << 9) | 0x2b
#define EC_WORD_BOARD         (EC_GROUP_HOBBIES << 9) | 0x2c
#define EC_WORD_BALL          (EC_GROUP_HOBBIES << 9) | 0x2d
#define EC_WORD_BOOK          (EC_GROUP_HOBBIES << 9) | 0x2e
#define EC_WORD_FESTIVAL      (EC_GROUP_HOBBIES << 9) | 0x2f
#define EC_WORD_COMICS        (EC_GROUP_HOBBIES << 9) | 0x30
#define EC_WORD_HOLIDAY       (EC_GROUP_HOBBIES << 9) | 0x31
#define EC_WORD_PLANS         (EC_GROUP_HOBBIES << 9) | 0x32
#define EC_WORD_TRENDY        (EC_GROUP_HOBBIES << 9) | 0x33
#define EC_WORD_VACATION      (EC_GROUP_HOBBIES << 9) | 0x34
#define EC_WORD_LOOK          (EC_GROUP_HOBBIES << 9) | 0x35

// TIME
#define EC_WORD_FALL       (EC_GROUP_TIME << 9) | 0x0
#define EC_WORD_MORNING    (EC_GROUP_TIME << 9) | 0x1
#define EC_WORD_TOMORROW   (EC_GROUP_TIME << 9) | 0x2
#define EC_WORD_LAST       (EC_GROUP_TIME << 9) | 0x3
#define EC_WORD_DAY        (EC_GROUP_TIME << 9) | 0x4
#define EC_WORD_SOMETIME   (EC_GROUP_TIME << 9) | 0x5
#define EC_WORD_ALWAYS     (EC_GROUP_TIME << 9) | 0x6
#define EC_WORD_CURRENT    (EC_GROUP_TIME << 9) | 0x7
#define EC_WORD_FOREVER    (EC_GROUP_TIME << 9) | 0x8
#define EC_WORD_DAYS       (EC_GROUP_TIME << 9) | 0x9
#define EC_WORD_END        (EC_GROUP_TIME << 9) | 0xa
#define EC_WORD_TUESDAY    (EC_GROUP_TIME << 9) | 0xb
#define EC_WORD_YESTERDAY  (EC_GROUP_TIME << 9) | 0xc
#define EC_WORD_TODAY      (EC_GROUP_TIME << 9) | 0xd
#define EC_WORD_FRIDAY     (EC_GROUP_TIME << 9) | 0xe
#define EC_WORD_MONDAY     (EC_GROUP_TIME << 9) | 0xf
#define EC_WORD_LATER      (EC_GROUP_TIME << 9) | 0x10
#define EC_WORD_EARLIER    (EC_GROUP_TIME << 9) | 0x11
#define EC_WORD_ANOTHER    (EC_GROUP_TIME << 9) | 0x12
#define EC_WORD_TIME       (EC_GROUP_TIME << 9) | 0x13
#define EC_WORD_FINISH     (EC_GROUP_TIME << 9) | 0x14
#define EC_WORD_WEDNESDAY  (EC_GROUP_TIME << 9) | 0x15
#define EC_WORD_SOON       (EC_GROUP_TIME << 9) | 0x16
#define EC_WORD_START      (EC_GROUP_TIME << 9) | 0x17
#define EC_WORD_MONTH      (EC_GROUP_TIME << 9) | 0x18
#define EC_WORD_STOP       (EC_GROUP_TIME << 9) | 0x19
#define EC_WORD_NOW        (EC_GROUP_TIME << 9) | 0x1a
#define EC_WORD_FINAL      (EC_GROUP_TIME << 9) | 0x1b
#define EC_WORD_NEXT       (EC_GROUP_TIME << 9) | 0x1c
#define EC_WORD_AGE        (EC_GROUP_TIME << 9) | 0x1d
#define EC_WORD_SATURDAY   (EC_GROUP_TIME << 9) | 0x1e
#define EC_WORD_SUMMER     (EC_GROUP_TIME << 9) | 0x1f
#define EC_WORD_SUNDAY     (EC_GROUP_TIME << 9) | 0x20
#define EC_WORD_BEGINNING  (EC_GROUP_TIME << 9) | 0x21
#define EC_WORD_SPRING     (EC_GROUP_TIME << 9) | 0x22
#define EC_WORD_DAYTIME    (EC_GROUP_TIME << 9) | 0x23
#define EC_WORD_WINTER     (EC_GROUP_TIME << 9) | 0x24
#define EC_WORD_DAILY      (EC_GROUP_TIME << 9) | 0x25
#define EC_WORD_OLDEN      (EC_GROUP_TIME << 9) | 0x26
#define EC_WORD_ALMOST     (EC_GROUP_TIME << 9) | 0x27
#define EC_WORD_NEARLY     (EC_GROUP_TIME << 9) | 0x28
#define EC_WORD_THURSDAY   (EC_GROUP_TIME << 9) | 0x29
#define EC_WORD_NIGHTTIME  (EC_GROUP_TIME << 9) | 0x2a
#define EC_WORD_NIGHT      (EC_GROUP_TIME << 9) | 0x2b
#define EC_WORD_WEEK       (EC_GROUP_TIME << 9) | 0x2c

// MISC
#define EC_WORD_HIGHS            (EC_GROUP_MISC << 9) | 0x0
#define EC_WORD_LOWS             (EC_GROUP_MISC << 9) | 0x1
#define EC_WORD_UM               (EC_GROUP_MISC << 9) | 0x2
#define EC_WORD_REAR             (EC_GROUP_MISC << 9) | 0x3
#define EC_WORD_THINGS           (EC_GROUP_MISC << 9) | 0x4
#define EC_WORD_THING            (EC_GROUP_MISC << 9) | 0x5
#define EC_WORD_BELOW            (EC_GROUP_MISC << 9) | 0x6
#define EC_WORD_ABOVE            (EC_GROUP_MISC << 9) | 0x7
#define EC_WORD_BACK             (EC_GROUP_MISC << 9) | 0x8
#define EC_WORD_HIGH             (EC_GROUP_MISC << 9) | 0x9
#define EC_WORD_HERE             (EC_GROUP_MISC << 9) | 0xa
#define EC_WORD_INSIDE           (EC_GROUP_MISC << 9) | 0xb
#define EC_WORD_OUTSIDE          (EC_GROUP_MISC << 9) | 0xc
#define EC_WORD_BESIDE           (EC_GROUP_MISC << 9) | 0xd
#define EC_WORD_THIS_IS_IT_EXCL  (EC_GROUP_MISC << 9) | 0xe
#define EC_WORD_THIS             (EC_GROUP_MISC << 9) | 0xf
#define EC_WORD_EVERY            (EC_GROUP_MISC << 9) | 0x10
#define EC_WORD_THESE            (EC_GROUP_MISC << 9) | 0x11
#define EC_WORD_THESE_WERE       (EC_GROUP_MISC << 9) | 0x12
#define EC_WORD_DOWN             (EC_GROUP_MISC << 9) | 0x13
#define EC_WORD_THAT             (EC_GROUP_MISC << 9) | 0x14
#define EC_WORD_THOSE_ARE        (EC_GROUP_MISC << 9) | 0x15
#define EC_WORD_THOSE_WERE       (EC_GROUP_MISC << 9) | 0x16
#define EC_WORD_THAT_S_IT_EXCL   (EC_GROUP_MISC << 9) | 0x17
#define EC_WORD_AM               (EC_GROUP_MISC << 9) | 0x18
#define EC_WORD_THAT_WAS         (EC_GROUP_MISC << 9) | 0x19
#define EC_WORD_FRONT            (EC_GROUP_MISC << 9) | 0x1a
#define EC_WORD_UP               (EC_GROUP_MISC << 9) | 0x1b
#define EC_WORD_CHOICE           (EC_GROUP_MISC << 9) | 0x1c
#define EC_WORD_FAR              (EC_GROUP_MISC << 9) | 0x1d
#define EC_WORD_AWAY             (EC_GROUP_MISC << 9) | 0x1e
#define EC_WORD_NEAR             (EC_GROUP_MISC << 9) | 0x1f
#define EC_WORD_WHERE            (EC_GROUP_MISC << 9) | 0x20
#define EC_WORD_WHEN             (EC_GROUP_MISC << 9) | 0x21
#define EC_WORD_WHAT             (EC_GROUP_MISC << 9) | 0x22
#define EC_WORD_DEEP             (EC_GROUP_MISC << 9) | 0x23
#define EC_WORD_SHALLOW          (EC_GROUP_MISC << 9) | 0x24
#define EC_WORD_WHY              (EC_GROUP_MISC << 9) | 0x25
#define EC_WORD_CONFUSED         (EC_GROUP_MISC << 9) | 0x26
#define EC_WORD_OPPOSITE         (EC_GROUP_MISC << 9) | 0x27
#define EC_WORD_LEFT             (EC_GROUP_MISC << 9) | 0x28
#define EC_WORD_RIGHT            (EC_GROUP_MISC << 9) | 0x29

// ADJECTIVES
#define EC_WORD_WANDERING     (EC_GROUP_ADJECTIVES << 9) | 0x0
#define EC_WORD_RICKETY       (EC_GROUP_ADJECTIVES << 9) | 0x1
#define EC_WORD_ROCK_SOLID    (EC_GROUP_ADJECTIVES << 9) | 0x2
#define EC_WORD_HUNGRY        (EC_GROUP_ADJECTIVES << 9) | 0x3
#define EC_WORD_TIGHT         (EC_GROUP_ADJECTIVES << 9) | 0x4
#define EC_WORD_TICKLISH      (EC_GROUP_ADJECTIVES << 9) | 0x5
#define EC_WORD_TWIRLING      (EC_GROUP_ADJECTIVES << 9) | 0x6
#define EC_WORD_SPIRALING     (EC_GROUP_ADJECTIVES << 9) | 0x7
#define EC_WORD_THIRSTY       (EC_GROUP_ADJECTIVES << 9) | 0x8
#define EC_WORD_LOLLING       (EC_GROUP_ADJECTIVES << 9) | 0x9
#define EC_WORD_SILKY         (EC_GROUP_ADJECTIVES << 9) | 0xa
#define EC_WORD_SADLY         (EC_GROUP_ADJECTIVES << 9) | 0xb
#define EC_WORD_HOPELESS      (EC_GROUP_ADJECTIVES << 9) | 0xc
#define EC_WORD_USELESS       (EC_GROUP_ADJECTIVES << 9) | 0xd
#define EC_WORD_DROOLING      (EC_GROUP_ADJECTIVES << 9) | 0xe
#define EC_WORD_EXCITING      (EC_GROUP_ADJECTIVES << 9) | 0xf
#define EC_WORD_THICK         (EC_GROUP_ADJECTIVES << 9) | 0x10
#define EC_WORD_SMOOTH        (EC_GROUP_ADJECTIVES << 9) | 0x11
#define EC_WORD_SLIMY         (EC_GROUP_ADJECTIVES << 9) | 0x12
#define EC_WORD_THIN          (EC_GROUP_ADJECTIVES << 9) | 0x13
#define EC_WORD_BREAK         (EC_GROUP_ADJECTIVES << 9) | 0x14
#define EC_WORD_VORACIOUS     (EC_GROUP_ADJECTIVES << 9) | 0x15
#define EC_WORD_SCATTER       (EC_GROUP_ADJECTIVES << 9) | 0x16
#define EC_WORD_AWESOME       (EC_GROUP_ADJECTIVES << 9) | 0x17
#define EC_WORD_WIMPY         (EC_GROUP_ADJECTIVES << 9) | 0x18
#define EC_WORD_WOBBLY        (EC_GROUP_ADJECTIVES << 9) | 0x19
#define EC_WORD_SHAKY         (EC_GROUP_ADJECTIVES << 9) | 0x1a
#define EC_WORD_RIPPED        (EC_GROUP_ADJECTIVES << 9) | 0x1b
#define EC_WORD_SHREDDED      (EC_GROUP_ADJECTIVES << 9) | 0x1c
#define EC_WORD_INCREASING    (EC_GROUP_ADJECTIVES << 9) | 0x1d
#define EC_WORD_YET           (EC_GROUP_ADJECTIVES << 9) | 0x1e
#define EC_WORD_DESTROYED     (EC_GROUP_ADJECTIVES << 9) | 0x1f
#define EC_WORD_FIERY         (EC_GROUP_ADJECTIVES << 9) | 0x20
#define EC_WORD_LOVEY_DOVEY   (EC_GROUP_ADJECTIVES << 9) | 0x21
#define EC_WORD_HAPPILY       (EC_GROUP_ADJECTIVES << 9) | 0x22
#define EC_WORD_ANTICIPATION  (EC_GROUP_ADJECTIVES << 9) | 0x23

// EVENTS
#define EC_WORD_APPEAL        (EC_GROUP_EVENTS << 9) | 0x0
#define EC_WORD_EVENTS        (EC_GROUP_EVENTS << 9) | 0x1
#define EC_WORD_STAY_AT_HOME  (EC_GROUP_EVENTS << 9) | 0x2
#define EC_WORD_BERRY         (EC_GROUP_EVENTS << 9) | 0x3
#define EC_WORD_CONTEST       (EC_GROUP_EVENTS << 9) | 0x4
#define EC_WORD_MC            (EC_GROUP_EVENTS << 9) | 0x5
#define EC_WORD_JUDGE         (EC_GROUP_EVENTS << 9) | 0x6
#define EC_WORD_SUPER         (EC_GROUP_EVENTS << 9) | 0x7
#define EC_WORD_STAGE         (EC_GROUP_EVENTS << 9) | 0x8
#define EC_WORD_HALL_OF_FAME  (EC_GROUP_EVENTS << 9) | 0x9
#define EC_WORD_EVOLUTION     (EC_GROUP_EVENTS << 9) | 0xa
#define EC_WORD_HYPER         (EC_GROUP_EVENTS << 9) | 0xb
#define EC_WORD_BATTLE_TOWER  (EC_GROUP_EVENTS << 9) | 0xc
#define EC_WORD_LEADERS       (EC_GROUP_EVENTS << 9) | 0xd
#define EC_WORD_BATTLE_ROOM   (EC_GROUP_EVENTS << 9) | 0xe
#define EC_WORD_HIDDEN        (EC_GROUP_EVENTS << 9) | 0xf
#define EC_WORD_SECRET_BASE   (EC_GROUP_EVENTS << 9) | 0x10
#define EC_WORD_BLEND         (EC_GROUP_EVENTS << 9) | 0x11
#define EC_WORD_POKEBLOCK     (EC_GROUP_EVENTS << 9) | 0x12
#define EC_WORD_MASTER        (EC_GROUP_EVENTS << 9) | 0x13
#define EC_WORD_RANK          (EC_GROUP_EVENTS << 9) | 0x14
#define EC_WORD_RIBBON        (EC_GROUP_EVENTS << 9) | 0x15
#define EC_WORD_CRUSH         (EC_GROUP_EVENTS << 9) | 0x16
#define EC_WORD_DIRECT        (EC_GROUP_EVENTS << 9) | 0x17
#define EC_WORD_TOWER         (EC_GROUP_EVENTS << 9) | 0x18
#define EC_WORD_UNION         (EC_GROUP_EVENTS << 9) | 0x19
#define EC_WORD_ROOM          (EC_GROUP_EVENTS << 9) | 0x1a
#define EC_WORD_WIRELESS      (EC_GROUP_EVENTS << 9) | 0x1b
#define EC_WORD_FRONTIER      (EC_GROUP_EVENTS << 9) | 0x1c

// TRENDY_SAYING
#define EC_WORD_KTHX_BYE       (EC_GROUP_TRENDY_SAYING << 9) | 0x0
#define EC_WORD_YES_SIR_EXCL   (EC_GROUP_TRENDY_SAYING << 9) | 0x1
#define EC_WORD_AVANT_GARDE    (EC_GROUP_TRENDY_SAYING << 9) | 0x2
#define EC_WORD_COUPLE         (EC_GROUP_TRENDY_SAYING << 9) | 0x3
#define EC_WORD_MUCH_OBLIGED   (EC_GROUP_TRENDY_SAYING << 9) | 0x4
#define EC_WORD_YEEHAW_EXCL    (EC_GROUP_TRENDY_SAYING << 9) | 0x5
#define EC_WORD_MEGA           (EC_GROUP_TRENDY_SAYING << 9) | 0x6
#define EC_WORD_1_HIT_KO_EXCL  (EC_GROUP_TRENDY_SAYING << 9) | 0x7
#define EC_WORD_DESTINY        (EC_GROUP_TRENDY_SAYING << 9) | 0x8
#define EC_WORD_CANCEL         (EC_GROUP_TRENDY_SAYING << 9) | 0x9
#define EC_WORD_NEW            (EC_GROUP_TRENDY_SAYING << 9) | 0xa
#define EC_WORD_FLATTEN        (EC_GROUP_TRENDY_SAYING << 9) | 0xb
#define EC_WORD_KIDDING        (EC_GROUP_TRENDY_SAYING << 9) | 0xc
#define EC_WORD_LOSER          (EC_GROUP_TRENDY_SAYING << 9) | 0xd
#define EC_WORD_LOSING         (EC_GROUP_TRENDY_SAYING << 9) | 0xe
#define EC_WORD_HAPPENING      (EC_GROUP_TRENDY_SAYING << 9) | 0xf
#define EC_WORD_HIP_AND        (EC_GROUP_TRENDY_SAYING << 9) | 0x10
#define EC_WORD_SHAKE          (EC_GROUP_TRENDY_SAYING << 9) | 0x11
#define EC_WORD_SHADY          (EC_GROUP_TRENDY_SAYING << 9) | 0x12
#define EC_WORD_UPBEAT         (EC_GROUP_TRENDY_SAYING << 9) | 0x13
#define EC_WORD_MODERN         (EC_GROUP_TRENDY_SAYING << 9) | 0x14
#define EC_WORD_SMELL_YA       (EC_GROUP_TRENDY_SAYING << 9) | 0x15
#define EC_WORD_BANG           (EC_GROUP_TRENDY_SAYING << 9) | 0x16
#define EC_WORD_KNOCKOUT       (EC_GROUP_TRENDY_SAYING << 9) | 0x17
#define EC_WORD_HASSLE         (EC_GROUP_TRENDY_SAYING << 9) | 0x18
#define EC_WORD_WINNER         (EC_GROUP_TRENDY_SAYING << 9) | 0x19
#define EC_WORD_FEVER          (EC_GROUP_TRENDY_SAYING << 9) | 0x1a
#define EC_WORD_WANNABE        (EC_GROUP_TRENDY_SAYING << 9) | 0x1b
#define EC_WORD_BABY           (EC_GROUP_TRENDY_SAYING << 9) | 0x1c
#define EC_WORD_HEART          (EC_GROUP_TRENDY_SAYING << 9) | 0x1d
#define EC_WORD_OLD            (EC_GROUP_TRENDY_SAYING << 9) | 0x1e
#define EC_WORD_YOUNG          (EC_GROUP_TRENDY_SAYING << 9) | 0x1f
#define EC_WORD_UGLY           (EC_GROUP_TRENDY_SAYING << 9) | 0x20
#define NUM_ADDITIONAL_PHRASES  33

// Special Berry Masters Wife phrases
#define NOT_SPECIAL_PHRASE          0
#define PHRASE_GREAT_BATTLE         1
#define PHRASE_CHALLENGE_CONTEST    2
#define PHRASE_OVERWHELMING_LATIAS  3
#define PHRASE_COOL_LATIOS          4
#define PHRASE_SUPER_HUSTLE         5

#define EC_NUM_ALPHABET_GROUPS 27 // 26 (1 for each letter) + 1 (Others)

#define EC_MAX_WORDS_IN_GROUP 270 // The closest is words by letter S, at 262

#define EC_MASK_GROUP 0x7F
#define EC_MASK_INDEX 0x1FF

#define EC_POKEMON(mon) ((EC_GROUP_POKEMON << 9) | SPECIES_##mon)
#define EC_MOVE(move) ((EC_GROUP_MOVE_1 << 9) | MOVE_##move)
#define EC_MOVE2(move) ((EC_GROUP_MOVE_2 << 9) | MOVE_##move)

#define EC_GROUP(word) ((word) >> 9)
#define EC_INDEX(word) ((word) & EC_MASK_INDEX)
#define EC_WORD(group, index) ((((group) & EC_MASK_GROUP) << 9) | ((index) & EC_MASK_INDEX))

#define EC_EMPTY_WORD 0xFFFF

#endif  // GUARD_CONSTANTS_EASY_CHAT_H
