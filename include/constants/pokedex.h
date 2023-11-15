#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokedex order.
// These constants are NOT disabled by P_GEN_X_POKEMON to keep pokedex_orders.h clean.
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_BULBASAUR,
    NATIONAL_DEX_IVYSAUR,
    NATIONAL_DEX_VENUSAUR,
    NATIONAL_DEX_CHARMANDER,
    NATIONAL_DEX_CHARMELEON,
    NATIONAL_DEX_CHARIZARD,
    NATIONAL_DEX_SQUIRTLE,
    NATIONAL_DEX_WARTORTLE,
    NATIONAL_DEX_BLASTOISE,
    NATIONAL_DEX_CATERPIE,
    NATIONAL_DEX_METAPOD,
    NATIONAL_DEX_BUTTERFREE,
    NATIONAL_DEX_WEEDLE,
    NATIONAL_DEX_KAKUNA,
    NATIONAL_DEX_BEEDRILL,
    NATIONAL_DEX_PIDGEY,
    NATIONAL_DEX_PIDGEOTTO,
    NATIONAL_DEX_PIDGEOT,
    NATIONAL_DEX_RATTATA,
    NATIONAL_DEX_RATICATE,
    NATIONAL_DEX_SPEAROW,
    NATIONAL_DEX_FEAROW,
    NATIONAL_DEX_EKANS,
    NATIONAL_DEX_ARBOK,
    NATIONAL_DEX_PIKACHU,
    NATIONAL_DEX_RAICHU,
    NATIONAL_DEX_SANDSHREW,
    NATIONAL_DEX_SANDSLASH,
    NATIONAL_DEX_NIDORAN_F,
    NATIONAL_DEX_NIDORINA,
    NATIONAL_DEX_NIDOQUEEN,
    NATIONAL_DEX_NIDORAN_M,
    NATIONAL_DEX_NIDORINO,
    NATIONAL_DEX_NIDOKING,
    NATIONAL_DEX_CLEFAIRY,
    NATIONAL_DEX_CLEFABLE,
    NATIONAL_DEX_VULPIX,
    NATIONAL_DEX_NINETALES,
    NATIONAL_DEX_JIGGLYPUFF,
    NATIONAL_DEX_WIGGLYTUFF,
    NATIONAL_DEX_ZUBAT,
    NATIONAL_DEX_GOLBAT,
    NATIONAL_DEX_ODDISH,
    NATIONAL_DEX_GLOOM,
    NATIONAL_DEX_VILEPLUME,
    NATIONAL_DEX_PARAS,
    NATIONAL_DEX_PARASECT,
    NATIONAL_DEX_VENONAT,
    NATIONAL_DEX_VENOMOTH,
    NATIONAL_DEX_DIGLETT,
    NATIONAL_DEX_DUGTRIO,
    NATIONAL_DEX_MEOWTH,
    NATIONAL_DEX_PERSIAN,
    NATIONAL_DEX_PSYDUCK,
    NATIONAL_DEX_GOLDUCK,
    NATIONAL_DEX_MANKEY,
    NATIONAL_DEX_PRIMEAPE,
    NATIONAL_DEX_GROWLITHE,
    NATIONAL_DEX_ARCANINE,
    NATIONAL_DEX_POLIWAG,
    NATIONAL_DEX_POLIWHIRL,
    NATIONAL_DEX_POLIWRATH,
    NATIONAL_DEX_ABRA,
    NATIONAL_DEX_KADABRA,
    NATIONAL_DEX_ALAKAZAM,
    NATIONAL_DEX_MACHOP,
    NATIONAL_DEX_MACHOKE,
    NATIONAL_DEX_MACHAMP,
    NATIONAL_DEX_BELLSPROUT,
    NATIONAL_DEX_WEEPINBELL,
    NATIONAL_DEX_VICTREEBEL,
    NATIONAL_DEX_TENTACOOL,
    NATIONAL_DEX_TENTACRUEL,
    NATIONAL_DEX_GEODUDE,
    NATIONAL_DEX_GRAVELER,
    NATIONAL_DEX_GOLEM,
    NATIONAL_DEX_PONYTA,
    NATIONAL_DEX_RAPIDASH,
    NATIONAL_DEX_SLOWPOKE,
    NATIONAL_DEX_SLOWBRO,
    NATIONAL_DEX_MAGNEMITE,
    NATIONAL_DEX_MAGNETON,
    NATIONAL_DEX_FARFETCHD,
    NATIONAL_DEX_DODUO,
    NATIONAL_DEX_DODRIO,
    NATIONAL_DEX_SEEL,
    NATIONAL_DEX_DEWGONG,
    NATIONAL_DEX_GRIMER,
    NATIONAL_DEX_MUK,
    NATIONAL_DEX_SHELLDER,
    NATIONAL_DEX_CLOYSTER,
    NATIONAL_DEX_GASTLY,
    NATIONAL_DEX_HAUNTER,
    NATIONAL_DEX_GENGAR,
    NATIONAL_DEX_ONIX,
    NATIONAL_DEX_DROWZEE,
    NATIONAL_DEX_HYPNO,
    NATIONAL_DEX_KRABBY,
    NATIONAL_DEX_KINGLER,
    NATIONAL_DEX_VOLTORB,
    NATIONAL_DEX_ELECTRODE,
    NATIONAL_DEX_EXEGGCUTE,
    NATIONAL_DEX_EXEGGUTOR,
    NATIONAL_DEX_CUBONE,
    NATIONAL_DEX_MAROWAK,
    NATIONAL_DEX_HITMONLEE,
    NATIONAL_DEX_HITMONCHAN,
    NATIONAL_DEX_LICKITUNG,
    NATIONAL_DEX_KOFFING,
    NATIONAL_DEX_WEEZING,
    NATIONAL_DEX_RHYHORN,
    NATIONAL_DEX_RHYDON,
    NATIONAL_DEX_CHANSEY,
    NATIONAL_DEX_TANGELA,
    NATIONAL_DEX_KANGASKHAN,
    NATIONAL_DEX_HORSEA,
    NATIONAL_DEX_SEADRA,
    NATIONAL_DEX_GOLDEEN,
    NATIONAL_DEX_SEAKING,
    NATIONAL_DEX_STARYU,
    NATIONAL_DEX_STARMIE,
    NATIONAL_DEX_MR_MIME,
    NATIONAL_DEX_SCYTHER,
    NATIONAL_DEX_JYNX,
    NATIONAL_DEX_ELECTABUZZ,
    NATIONAL_DEX_MAGMAR,
    NATIONAL_DEX_PINSIR,
    NATIONAL_DEX_TAUROS,
    NATIONAL_DEX_MAGIKARP,
    NATIONAL_DEX_GYARADOS,
    NATIONAL_DEX_LAPRAS,
    NATIONAL_DEX_DITTO,
    NATIONAL_DEX_EEVEE,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_PORYGON,
    NATIONAL_DEX_OMANYTE,
    NATIONAL_DEX_OMASTAR,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_AERODACTYL,
    NATIONAL_DEX_SNORLAX,
    NATIONAL_DEX_ARTICUNO,
    NATIONAL_DEX_ZAPDOS,
    NATIONAL_DEX_MOLTRES,
    NATIONAL_DEX_DRATINI,
    NATIONAL_DEX_DRAGONAIR,
    NATIONAL_DEX_DRAGONITE,
    NATIONAL_DEX_MEWTWO,
    NATIONAL_DEX_MEW,
    // Johto
    NATIONAL_DEX_CHIKORITA,
    NATIONAL_DEX_BAYLEEF,
    NATIONAL_DEX_MEGANIUM,
    NATIONAL_DEX_CYNDAQUIL,
    NATIONAL_DEX_QUILAVA,
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,
    // Hoenn
    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    // Sinnoh
    NATIONAL_DEX_TURTWIG,
    NATIONAL_DEX_GROTLE,
    NATIONAL_DEX_TORTERRA,
    NATIONAL_DEX_CHIMCHAR,
    NATIONAL_DEX_MONFERNO,
    NATIONAL_DEX_INFERNAPE,
    NATIONAL_DEX_PIPLUP,
    NATIONAL_DEX_PRINPLUP,
    NATIONAL_DEX_EMPOLEON,
    NATIONAL_DEX_STARLY,
    NATIONAL_DEX_STARAVIA,
    NATIONAL_DEX_STARAPTOR,
    NATIONAL_DEX_BIDOOF,
    NATIONAL_DEX_BIBAREL,
    NATIONAL_DEX_KRICKETOT,
    NATIONAL_DEX_KRICKETUNE,
    NATIONAL_DEX_SHINX,
    NATIONAL_DEX_LUXIO,
    NATIONAL_DEX_LUXRAY,
    NATIONAL_DEX_BUDEW,
    NATIONAL_DEX_ROSERADE,
    NATIONAL_DEX_CRANIDOS,
    NATIONAL_DEX_RAMPARDOS,
    NATIONAL_DEX_SHIELDON,
    NATIONAL_DEX_BASTIODON,
    NATIONAL_DEX_BURMY,
    NATIONAL_DEX_WORMADAM,
    NATIONAL_DEX_MOTHIM,
    NATIONAL_DEX_COMBEE,
    NATIONAL_DEX_VESPIQUEN,
    NATIONAL_DEX_PACHIRISU,
    NATIONAL_DEX_BUIZEL,
    NATIONAL_DEX_FLOATZEL,
    NATIONAL_DEX_CHERUBI,
    NATIONAL_DEX_CHERRIM,
    NATIONAL_DEX_SHELLOS,
    NATIONAL_DEX_GASTRODON,
    NATIONAL_DEX_AMBIPOM,
    NATIONAL_DEX_DRIFLOON,
    NATIONAL_DEX_DRIFBLIM,
    NATIONAL_DEX_BUNEARY,
    NATIONAL_DEX_LOPUNNY,
    NATIONAL_DEX_MISMAGIUS,
    NATIONAL_DEX_HONCHKROW,
    NATIONAL_DEX_GLAMEOW,
    NATIONAL_DEX_PURUGLY,
    NATIONAL_DEX_CHINGLING,
    NATIONAL_DEX_STUNKY,
    NATIONAL_DEX_SKUNTANK,
    NATIONAL_DEX_BRONZOR,
    NATIONAL_DEX_BRONZONG,
    NATIONAL_DEX_BONSLY,
    NATIONAL_DEX_MIME_JR,
    NATIONAL_DEX_HAPPINY,
    NATIONAL_DEX_CHATOT,
    NATIONAL_DEX_SPIRITOMB,
    NATIONAL_DEX_GIBLE,
    NATIONAL_DEX_GABITE,
    NATIONAL_DEX_GARCHOMP,
    NATIONAL_DEX_MUNCHLAX,
    NATIONAL_DEX_RIOLU,
    NATIONAL_DEX_LUCARIO,
    NATIONAL_DEX_HIPPOPOTAS,
    NATIONAL_DEX_HIPPOWDON,
    NATIONAL_DEX_SKORUPI,
    NATIONAL_DEX_DRAPION,
    NATIONAL_DEX_CROAGUNK,
    NATIONAL_DEX_TOXICROAK,
    NATIONAL_DEX_CARNIVINE,
    NATIONAL_DEX_FINNEON,
    NATIONAL_DEX_LUMINEON,
    NATIONAL_DEX_MANTYKE,
    NATIONAL_DEX_SNOVER,
    NATIONAL_DEX_ABOMASNOW,
    NATIONAL_DEX_WEAVILE,
    NATIONAL_DEX_MAGNEZONE,
    NATIONAL_DEX_LICKILICKY,
    NATIONAL_DEX_RHYPERIOR,
    NATIONAL_DEX_TANGROWTH,
    NATIONAL_DEX_ELECTIVIRE,
    NATIONAL_DEX_MAGMORTAR,
    NATIONAL_DEX_TOGEKISS,
    NATIONAL_DEX_YANMEGA,
    NATIONAL_DEX_LEAFEON,
    NATIONAL_DEX_GLACEON,
    NATIONAL_DEX_GLISCOR,
    NATIONAL_DEX_MAMOSWINE,
    NATIONAL_DEX_PORYGON_Z,
    NATIONAL_DEX_GALLADE,
    NATIONAL_DEX_PROBOPASS,
    NATIONAL_DEX_DUSKNOIR,
    NATIONAL_DEX_FROSLASS,
    NATIONAL_DEX_ROTOM,
    NATIONAL_DEX_UXIE,
    NATIONAL_DEX_MESPRIT,
    NATIONAL_DEX_AZELF,
    NATIONAL_DEX_DIALGA,
    NATIONAL_DEX_PALKIA,
    NATIONAL_DEX_HEATRAN,
    NATIONAL_DEX_REGIGIGAS,
    NATIONAL_DEX_GIRATINA,
    NATIONAL_DEX_CRESSELIA,
    NATIONAL_DEX_PHIONE,
    NATIONAL_DEX_MANAPHY,
    NATIONAL_DEX_DARKRAI,
    NATIONAL_DEX_SHAYMIN,
    NATIONAL_DEX_ARCEUS,
    // Unova
    NATIONAL_DEX_VICTINI,
    NATIONAL_DEX_SNIVY,
    NATIONAL_DEX_SERVINE,
    NATIONAL_DEX_SERPERIOR,
    NATIONAL_DEX_TEPIG,
    NATIONAL_DEX_PIGNITE,
    NATIONAL_DEX_EMBOAR,
    NATIONAL_DEX_OSHAWOTT,
    NATIONAL_DEX_DEWOTT,
    NATIONAL_DEX_SAMUROTT,
    NATIONAL_DEX_PATRAT,
    NATIONAL_DEX_WATCHOG,
    NATIONAL_DEX_LILLIPUP,
    NATIONAL_DEX_HERDIER,
    NATIONAL_DEX_STOUTLAND,
    NATIONAL_DEX_PURRLOIN,
    NATIONAL_DEX_LIEPARD,
    NATIONAL_DEX_PANSAGE,
    NATIONAL_DEX_SIMISAGE,
    NATIONAL_DEX_PANSEAR,
    NATIONAL_DEX_SIMISEAR,
    NATIONAL_DEX_PANPOUR,
    NATIONAL_DEX_SIMIPOUR,
    NATIONAL_DEX_MUNNA,
    NATIONAL_DEX_MUSHARNA,
    NATIONAL_DEX_PIDOVE,
    NATIONAL_DEX_TRANQUILL,
    NATIONAL_DEX_UNFEZANT,
    NATIONAL_DEX_BLITZLE,
    NATIONAL_DEX_ZEBSTRIKA,
    NATIONAL_DEX_ROGGENROLA,
    NATIONAL_DEX_BOLDORE,
    NATIONAL_DEX_GIGALITH,
    NATIONAL_DEX_WOOBAT,
    NATIONAL_DEX_SWOOBAT,
    NATIONAL_DEX_DRILBUR,
    NATIONAL_DEX_EXCADRILL,
    NATIONAL_DEX_AUDINO,
    NATIONAL_DEX_TIMBURR,
    NATIONAL_DEX_GURDURR,
    NATIONAL_DEX_CONKELDURR,
    NATIONAL_DEX_TYMPOLE,
    NATIONAL_DEX_PALPITOAD,
    NATIONAL_DEX_SEISMITOAD,
    NATIONAL_DEX_THROH,
    NATIONAL_DEX_SAWK,
    NATIONAL_DEX_SEWADDLE,
    NATIONAL_DEX_SWADLOON,
    NATIONAL_DEX_LEAVANNY,
    NATIONAL_DEX_VENIPEDE,
    NATIONAL_DEX_WHIRLIPEDE,
    NATIONAL_DEX_SCOLIPEDE,
    NATIONAL_DEX_COTTONEE,
    NATIONAL_DEX_WHIMSICOTT,
    NATIONAL_DEX_PETILIL,
    NATIONAL_DEX_LILLIGANT,
    NATIONAL_DEX_BASCULIN,
    NATIONAL_DEX_SANDILE,
    NATIONAL_DEX_KROKOROK,
    NATIONAL_DEX_KROOKODILE,
    NATIONAL_DEX_DARUMAKA,
    NATIONAL_DEX_DARMANITAN,
    NATIONAL_DEX_MARACTUS,
    NATIONAL_DEX_DWEBBLE,
    NATIONAL_DEX_CRUSTLE,
    NATIONAL_DEX_SCRAGGY,
    NATIONAL_DEX_SCRAFTY,
    NATIONAL_DEX_SIGILYPH,
    NATIONAL_DEX_YAMASK,
    NATIONAL_DEX_COFAGRIGUS,
    NATIONAL_DEX_TIRTOUGA,
    NATIONAL_DEX_CARRACOSTA,
    NATIONAL_DEX_ARCHEN,
    NATIONAL_DEX_ARCHEOPS,
    NATIONAL_DEX_TRUBBISH,
    NATIONAL_DEX_GARBODOR,
    NATIONAL_DEX_ZORUA,
    NATIONAL_DEX_ZOROARK,
    NATIONAL_DEX_MINCCINO,
    NATIONAL_DEX_CINCCINO,
    NATIONAL_DEX_GOTHITA,
    NATIONAL_DEX_GOTHORITA,
    NATIONAL_DEX_GOTHITELLE,
    NATIONAL_DEX_SOLOSIS,
    NATIONAL_DEX_DUOSION,
    NATIONAL_DEX_REUNICLUS,
    NATIONAL_DEX_DUCKLETT,
    NATIONAL_DEX_SWANNA,
    NATIONAL_DEX_VANILLITE,
    NATIONAL_DEX_VANILLISH,
    NATIONAL_DEX_VANILLUXE,
    NATIONAL_DEX_DEERLING,
    NATIONAL_DEX_SAWSBUCK,
    NATIONAL_DEX_EMOLGA,
    NATIONAL_DEX_KARRABLAST,
    NATIONAL_DEX_ESCAVALIER,
    NATIONAL_DEX_FOONGUS,
    NATIONAL_DEX_AMOONGUSS,
    NATIONAL_DEX_FRILLISH,
    NATIONAL_DEX_JELLICENT,
    NATIONAL_DEX_ALOMOMOLA,
    NATIONAL_DEX_JOLTIK,
    NATIONAL_DEX_GALVANTULA,
    NATIONAL_DEX_FERROSEED,
    NATIONAL_DEX_FERROTHORN,
    NATIONAL_DEX_KLINK,
    NATIONAL_DEX_KLANG,
    NATIONAL_DEX_KLINKLANG,
    NATIONAL_DEX_TYNAMO,
    NATIONAL_DEX_EELEKTRIK,
    NATIONAL_DEX_EELEKTROSS,
    NATIONAL_DEX_ELGYEM,
    NATIONAL_DEX_BEHEEYEM,
    NATIONAL_DEX_LITWICK,
    NATIONAL_DEX_LAMPENT,
    NATIONAL_DEX_CHANDELURE,
    NATIONAL_DEX_AXEW,
    NATIONAL_DEX_FRAXURE,
    NATIONAL_DEX_HAXORUS,
    NATIONAL_DEX_CUBCHOO,
    NATIONAL_DEX_BEARTIC,
    NATIONAL_DEX_CRYOGONAL,
    NATIONAL_DEX_SHELMET,
    NATIONAL_DEX_ACCELGOR,
    NATIONAL_DEX_STUNFISK,
    NATIONAL_DEX_MIENFOO,
    NATIONAL_DEX_MIENSHAO,
    NATIONAL_DEX_DRUDDIGON,
    NATIONAL_DEX_GOLETT,
    NATIONAL_DEX_GOLURK,
    NATIONAL_DEX_PAWNIARD,
    NATIONAL_DEX_BISHARP,
    NATIONAL_DEX_BOUFFALANT,
    NATIONAL_DEX_RUFFLET,
    NATIONAL_DEX_BRAVIARY,
    NATIONAL_DEX_VULLABY,
    NATIONAL_DEX_MANDIBUZZ,
    NATIONAL_DEX_HEATMOR,
    NATIONAL_DEX_DURANT,
    NATIONAL_DEX_DEINO,
    NATIONAL_DEX_ZWEILOUS,
    NATIONAL_DEX_HYDREIGON,
    NATIONAL_DEX_LARVESTA,
    NATIONAL_DEX_VOLCARONA,
    NATIONAL_DEX_COBALION,
    NATIONAL_DEX_TERRAKION,
    NATIONAL_DEX_VIRIZION,
    NATIONAL_DEX_TORNADUS,
    NATIONAL_DEX_THUNDURUS,
    NATIONAL_DEX_RESHIRAM,
    NATIONAL_DEX_ZEKROM,
    NATIONAL_DEX_LANDORUS,
    NATIONAL_DEX_KYUREM,
    NATIONAL_DEX_KELDEO,
    NATIONAL_DEX_MELOETTA,
    NATIONAL_DEX_GENESECT,
    // Kalos
    NATIONAL_DEX_CHESPIN,
    NATIONAL_DEX_QUILLADIN,
    NATIONAL_DEX_CHESNAUGHT,
    NATIONAL_DEX_FENNEKIN,
    NATIONAL_DEX_BRAIXEN,
    NATIONAL_DEX_DELPHOX,
    NATIONAL_DEX_FROAKIE,
    NATIONAL_DEX_FROGADIER,
    NATIONAL_DEX_GRENINJA,
    NATIONAL_DEX_BUNNELBY,
    NATIONAL_DEX_DIGGERSBY,
    NATIONAL_DEX_FLETCHLING,
    NATIONAL_DEX_FLETCHINDER,
    NATIONAL_DEX_TALONFLAME,
    NATIONAL_DEX_SCATTERBUG,
    NATIONAL_DEX_SPEWPA,
    NATIONAL_DEX_VIVILLON,
    NATIONAL_DEX_LITLEO,
    NATIONAL_DEX_PYROAR,
    NATIONAL_DEX_FLABEBE,
    NATIONAL_DEX_FLOETTE,
    NATIONAL_DEX_FLORGES,
    NATIONAL_DEX_SKIDDO,
    NATIONAL_DEX_GOGOAT,
    NATIONAL_DEX_PANCHAM,
    NATIONAL_DEX_PANGORO,
    NATIONAL_DEX_FURFROU,
    NATIONAL_DEX_ESPURR,
    NATIONAL_DEX_MEOWSTIC,
    NATIONAL_DEX_HONEDGE,
    NATIONAL_DEX_DOUBLADE,
    NATIONAL_DEX_AEGISLASH,
    NATIONAL_DEX_SPRITZEE,
    NATIONAL_DEX_AROMATISSE,
    NATIONAL_DEX_SWIRLIX,
    NATIONAL_DEX_SLURPUFF,
    NATIONAL_DEX_INKAY,
    NATIONAL_DEX_MALAMAR,
    NATIONAL_DEX_BINACLE,
    NATIONAL_DEX_BARBARACLE,
    NATIONAL_DEX_SKRELP,
    NATIONAL_DEX_DRAGALGE,
    NATIONAL_DEX_CLAUNCHER,
    NATIONAL_DEX_CLAWITZER,
    NATIONAL_DEX_HELIOPTILE,
    NATIONAL_DEX_HELIOLISK,
    NATIONAL_DEX_TYRUNT,
    NATIONAL_DEX_TYRANTRUM,
    NATIONAL_DEX_AMAURA,
    NATIONAL_DEX_AURORUS,
    NATIONAL_DEX_SYLVEON,
    NATIONAL_DEX_HAWLUCHA,
    NATIONAL_DEX_DEDENNE,
    NATIONAL_DEX_CARBINK,
    NATIONAL_DEX_GOOMY,
    NATIONAL_DEX_SLIGGOO,
    NATIONAL_DEX_GOODRA,
    NATIONAL_DEX_KLEFKI,
    NATIONAL_DEX_PHANTUMP,
    NATIONAL_DEX_TREVENANT,
    NATIONAL_DEX_PUMPKABOO,
    NATIONAL_DEX_GOURGEIST,
    NATIONAL_DEX_BERGMITE,
    NATIONAL_DEX_AVALUGG,
    NATIONAL_DEX_NOIBAT,
    NATIONAL_DEX_NOIVERN,
    NATIONAL_DEX_XERNEAS,
    NATIONAL_DEX_YVELTAL,
    NATIONAL_DEX_ZYGARDE,
    NATIONAL_DEX_DIANCIE,
    NATIONAL_DEX_HOOPA,
    NATIONAL_DEX_VOLCANION,
    // Alola
    NATIONAL_DEX_ROWLET,
    NATIONAL_DEX_DARTRIX,
    NATIONAL_DEX_DECIDUEYE,
    NATIONAL_DEX_LITTEN,
    NATIONAL_DEX_TORRACAT,
    NATIONAL_DEX_INCINEROAR,
    NATIONAL_DEX_POPPLIO,
    NATIONAL_DEX_BRIONNE,
    NATIONAL_DEX_PRIMARINA,
    NATIONAL_DEX_PIKIPEK,
    NATIONAL_DEX_TRUMBEAK,
    NATIONAL_DEX_TOUCANNON,
    NATIONAL_DEX_YUNGOOS,
    NATIONAL_DEX_GUMSHOOS,
    NATIONAL_DEX_GRUBBIN,
    NATIONAL_DEX_CHARJABUG,
    NATIONAL_DEX_VIKAVOLT,
    NATIONAL_DEX_CRABRAWLER,
    NATIONAL_DEX_CRABOMINABLE,
    NATIONAL_DEX_ORICORIO,
    NATIONAL_DEX_CUTIEFLY,
    NATIONAL_DEX_RIBOMBEE,
    NATIONAL_DEX_ROCKRUFF,
    NATIONAL_DEX_LYCANROC,
    NATIONAL_DEX_WISHIWASHI,
    NATIONAL_DEX_MAREANIE,
    NATIONAL_DEX_TOXAPEX,
    NATIONAL_DEX_MUDBRAY,
    NATIONAL_DEX_MUDSDALE,
    NATIONAL_DEX_DEWPIDER,
    NATIONAL_DEX_ARAQUANID,
    NATIONAL_DEX_FOMANTIS,
    NATIONAL_DEX_LURANTIS,
    NATIONAL_DEX_MORELULL,
    NATIONAL_DEX_SHIINOTIC,
    NATIONAL_DEX_SALANDIT,
    NATIONAL_DEX_SALAZZLE,
    NATIONAL_DEX_STUFFUL,
    NATIONAL_DEX_BEWEAR,
    NATIONAL_DEX_BOUNSWEET,
    NATIONAL_DEX_STEENEE,
    NATIONAL_DEX_TSAREENA,
    NATIONAL_DEX_COMFEY,
    NATIONAL_DEX_ORANGURU,
    NATIONAL_DEX_PASSIMIAN,
    NATIONAL_DEX_WIMPOD,
    NATIONAL_DEX_GOLISOPOD,
    NATIONAL_DEX_SANDYGAST,
    NATIONAL_DEX_PALOSSAND,
    NATIONAL_DEX_PYUKUMUKU,
    NATIONAL_DEX_TYPE_NULL,
    NATIONAL_DEX_SILVALLY,
    NATIONAL_DEX_MINIOR,
    NATIONAL_DEX_KOMALA,
    NATIONAL_DEX_TURTONATOR,
    NATIONAL_DEX_TOGEDEMARU,
    NATIONAL_DEX_MIMIKYU,
    NATIONAL_DEX_BRUXISH,
    NATIONAL_DEX_DRAMPA,
    NATIONAL_DEX_DHELMISE,
    NATIONAL_DEX_JANGMO_O,
    NATIONAL_DEX_HAKAMO_O,
    NATIONAL_DEX_KOMMO_O,
    NATIONAL_DEX_TAPU_KOKO,
    NATIONAL_DEX_TAPU_LELE,
    NATIONAL_DEX_TAPU_BULU,
    NATIONAL_DEX_TAPU_FINI,
    NATIONAL_DEX_COSMOG,
    NATIONAL_DEX_COSMOEM,
    NATIONAL_DEX_SOLGALEO,
    NATIONAL_DEX_LUNALA,
    NATIONAL_DEX_NIHILEGO,
    NATIONAL_DEX_BUZZWOLE,
    NATIONAL_DEX_PHEROMOSA,
    NATIONAL_DEX_XURKITREE,
    NATIONAL_DEX_CELESTEELA,
    NATIONAL_DEX_KARTANA,
    NATIONAL_DEX_GUZZLORD,
    NATIONAL_DEX_NECROZMA,
    NATIONAL_DEX_MAGEARNA,
    NATIONAL_DEX_MARSHADOW,
    NATIONAL_DEX_POIPOLE,
    NATIONAL_DEX_NAGANADEL,
    NATIONAL_DEX_STAKATAKA,
    NATIONAL_DEX_BLACEPHALON,
    NATIONAL_DEX_ZERAORA,
    // Unknown
    NATIONAL_DEX_MELTAN,
    NATIONAL_DEX_MELMETAL,
    // Galar
    NATIONAL_DEX_GROOKEY,
    NATIONAL_DEX_THWACKEY,
    NATIONAL_DEX_RILLABOOM,
    NATIONAL_DEX_SCORBUNNY,
    NATIONAL_DEX_RABOOT,
    NATIONAL_DEX_CINDERACE,
    NATIONAL_DEX_SOBBLE,
    NATIONAL_DEX_DRIZZILE,
    NATIONAL_DEX_INTELEON,
    NATIONAL_DEX_SKWOVET,
    NATIONAL_DEX_GREEDENT,
    NATIONAL_DEX_ROOKIDEE,
    NATIONAL_DEX_CORVISQUIRE,
    NATIONAL_DEX_CORVIKNIGHT,
    NATIONAL_DEX_BLIPBUG,
    NATIONAL_DEX_DOTTLER,
    NATIONAL_DEX_ORBEETLE,
    NATIONAL_DEX_NICKIT,
    NATIONAL_DEX_THIEVUL,
    NATIONAL_DEX_GOSSIFLEUR,
    NATIONAL_DEX_ELDEGOSS,
    NATIONAL_DEX_WOOLOO,
    NATIONAL_DEX_DUBWOOL,
    NATIONAL_DEX_CHEWTLE,
    NATIONAL_DEX_DREDNAW,
    NATIONAL_DEX_YAMPER,
    NATIONAL_DEX_BOLTUND,
    NATIONAL_DEX_ROLYCOLY,
    NATIONAL_DEX_CARKOL,
    NATIONAL_DEX_COALOSSAL,
    NATIONAL_DEX_APPLIN,
    NATIONAL_DEX_FLAPPLE,
    NATIONAL_DEX_APPLETUN,
    NATIONAL_DEX_SILICOBRA,
    NATIONAL_DEX_SANDACONDA,
    NATIONAL_DEX_CRAMORANT,
    NATIONAL_DEX_ARROKUDA,
    NATIONAL_DEX_BARRASKEWDA,
    NATIONAL_DEX_TOXEL,
    NATIONAL_DEX_TOXTRICITY,
    NATIONAL_DEX_SIZZLIPEDE,
    NATIONAL_DEX_CENTISKORCH,
    NATIONAL_DEX_CLOBBOPUS,
    NATIONAL_DEX_GRAPPLOCT,
    NATIONAL_DEX_SINISTEA,
    NATIONAL_DEX_POLTEAGEIST,
    NATIONAL_DEX_HATENNA,
    NATIONAL_DEX_HATTREM,
    NATIONAL_DEX_HATTERENE,
    NATIONAL_DEX_IMPIDIMP,
    NATIONAL_DEX_MORGREM,
    NATIONAL_DEX_GRIMMSNARL,
    NATIONAL_DEX_OBSTAGOON,
    NATIONAL_DEX_PERRSERKER,
    NATIONAL_DEX_CURSOLA,
    NATIONAL_DEX_SIRFETCHD,
    NATIONAL_DEX_MR_RIME,
    NATIONAL_DEX_RUNERIGUS,
    NATIONAL_DEX_MILCERY,
    NATIONAL_DEX_ALCREMIE,
    NATIONAL_DEX_FALINKS,
    NATIONAL_DEX_PINCURCHIN,
    NATIONAL_DEX_SNOM,
    NATIONAL_DEX_FROSMOTH,
    NATIONAL_DEX_STONJOURNER,
    NATIONAL_DEX_EISCUE,
    NATIONAL_DEX_INDEEDEE,
    NATIONAL_DEX_MORPEKO,
    NATIONAL_DEX_CUFANT,
    NATIONAL_DEX_COPPERAJAH,
    NATIONAL_DEX_DRACOZOLT,
    NATIONAL_DEX_ARCTOZOLT,
    NATIONAL_DEX_DRACOVISH,
    NATIONAL_DEX_ARCTOVISH,
    NATIONAL_DEX_DURALUDON,
    NATIONAL_DEX_DREEPY,
    NATIONAL_DEX_DRAKLOAK,
    NATIONAL_DEX_DRAGAPULT,
    NATIONAL_DEX_ZACIAN,
    NATIONAL_DEX_ZAMAZENTA,
    NATIONAL_DEX_ETERNATUS,
    NATIONAL_DEX_KUBFU,
    NATIONAL_DEX_URSHIFU,
    NATIONAL_DEX_ZARUDE,
    NATIONAL_DEX_REGIELEKI,
    NATIONAL_DEX_REGIDRAGO,
    NATIONAL_DEX_GLASTRIER,
    NATIONAL_DEX_SPECTRIER,
    NATIONAL_DEX_CALYREX,
    NATIONAL_DEX_WYRDEER,
    NATIONAL_DEX_KLEAVOR,
    NATIONAL_DEX_URSALUNA,
    NATIONAL_DEX_BASCULEGION,
    NATIONAL_DEX_SNEASLER,
    NATIONAL_DEX_OVERQWIL,
    NATIONAL_DEX_ENAMORUS,
    // Paldea
    NATIONAL_DEX_SPRIGATITO,
    NATIONAL_DEX_FLORAGATO,
    NATIONAL_DEX_MEOWSCARADA,
    NATIONAL_DEX_FUECOCO,
    NATIONAL_DEX_CROCALOR,
    NATIONAL_DEX_SKELEDIRGE,
    NATIONAL_DEX_QUAXLY,
    NATIONAL_DEX_QUAXWELL,
    NATIONAL_DEX_QUAQUAVAL,
    NATIONAL_DEX_LECHONK,
    NATIONAL_DEX_OINKOLOGNE,
    NATIONAL_DEX_TAROUNTULA,
    NATIONAL_DEX_SPIDOPS,
    NATIONAL_DEX_NYMBLE,
    NATIONAL_DEX_LOKIX,
    NATIONAL_DEX_PAWMI,
    NATIONAL_DEX_PAWMO,
    NATIONAL_DEX_PAWMOT,
    NATIONAL_DEX_TANDEMAUS,
    NATIONAL_DEX_MAUSHOLD,
    NATIONAL_DEX_FIDOUGH,
    NATIONAL_DEX_DACHSBUN,
    NATIONAL_DEX_SMOLIV,
    NATIONAL_DEX_DOLLIV,
    NATIONAL_DEX_ARBOLIVA,
    NATIONAL_DEX_SQUAWKABILLY,
    NATIONAL_DEX_NACLI,
    NATIONAL_DEX_NACLSTACK,
    NATIONAL_DEX_GARGANACL,
    NATIONAL_DEX_CHARCADET,
    NATIONAL_DEX_ARMAROUGE,
    NATIONAL_DEX_CERULEDGE,
    NATIONAL_DEX_TADBULB,
    NATIONAL_DEX_BELLIBOLT,
    NATIONAL_DEX_WATTREL,
    NATIONAL_DEX_KILOWATTREL,
    NATIONAL_DEX_MASCHIFF,
    NATIONAL_DEX_MABOSSTIFF,
    NATIONAL_DEX_SHROODLE,
    NATIONAL_DEX_GRAFAIAI,
    NATIONAL_DEX_BRAMBLIN,
    NATIONAL_DEX_BRAMBLEGHAST,
    NATIONAL_DEX_TOEDSCOOL,
    NATIONAL_DEX_TOEDSCRUEL,
    NATIONAL_DEX_KLAWF,
    NATIONAL_DEX_CAPSAKID,
    NATIONAL_DEX_SCOVILLAIN,
    NATIONAL_DEX_RELLOR,
    NATIONAL_DEX_RABSCA,
    NATIONAL_DEX_FLITTLE,
    NATIONAL_DEX_ESPATHRA,
    NATIONAL_DEX_TINKATINK,
    NATIONAL_DEX_TINKATUFF,
    NATIONAL_DEX_TINKATON,
    NATIONAL_DEX_WIGLETT,
    NATIONAL_DEX_WUGTRIO,
    NATIONAL_DEX_BOMBIRDIER,
    NATIONAL_DEX_FINIZEN,
    NATIONAL_DEX_PALAFIN,
    NATIONAL_DEX_VAROOM,
    NATIONAL_DEX_REVAVROOM,
    NATIONAL_DEX_CYCLIZAR,
    NATIONAL_DEX_ORTHWORM,
    NATIONAL_DEX_GLIMMET,
    NATIONAL_DEX_GLIMMORA,
    NATIONAL_DEX_GREAVARD,
    NATIONAL_DEX_HOUNDSTONE,
    NATIONAL_DEX_FLAMIGO,
    NATIONAL_DEX_CETODDLE,
    NATIONAL_DEX_CETITAN,
    NATIONAL_DEX_VELUZA,
    NATIONAL_DEX_DONDOZO,
    NATIONAL_DEX_TATSUGIRI,
    NATIONAL_DEX_ANNIHILAPE,
    NATIONAL_DEX_CLODSIRE,
    NATIONAL_DEX_FARIGIRAF,
    NATIONAL_DEX_DUDUNSPARCE,
    NATIONAL_DEX_KINGAMBIT,
    NATIONAL_DEX_GREAT_TUSK,
    NATIONAL_DEX_SCREAM_TAIL,
    NATIONAL_DEX_BRUTE_BONNET,
    NATIONAL_DEX_FLUTTER_MANE,
    NATIONAL_DEX_SLITHER_WING,
    NATIONAL_DEX_SANDY_SHOCKS,
    NATIONAL_DEX_IRON_TREADS,
    NATIONAL_DEX_IRON_BUNDLE,
    NATIONAL_DEX_IRON_HANDS,
    NATIONAL_DEX_IRON_JUGULIS,
    NATIONAL_DEX_IRON_MOTH,
    NATIONAL_DEX_IRON_THORNS,
    NATIONAL_DEX_FRIGIBAX,
    NATIONAL_DEX_ARCTIBAX,
    NATIONAL_DEX_BAXCALIBUR,
    NATIONAL_DEX_GIMMIGHOUL,
    NATIONAL_DEX_GHOLDENGO,
    NATIONAL_DEX_WO_CHIEN,
    NATIONAL_DEX_CHIEN_PAO,
    NATIONAL_DEX_TING_LU,
    NATIONAL_DEX_CHI_YU,
    NATIONAL_DEX_ROARING_MOON,
    NATIONAL_DEX_IRON_VALIANT,
    NATIONAL_DEX_KORAIDON,
    NATIONAL_DEX_MIRAIDON,
    NATIONAL_DEX_WALKING_WAKE,
    NATIONAL_DEX_IRON_LEAVES,
    NATIONAL_DEX_DIPPLIN,
    NATIONAL_DEX_POLTCHAGEIST,
    NATIONAL_DEX_SINISTCHA,
    NATIONAL_DEX_OKIDOGI,
    NATIONAL_DEX_MUNKIDORI,
    NATIONAL_DEX_FEZANDIPITI,
    NATIONAL_DEX_OGERPON,
};

#define KANTO_DEX_COUNT     NATIONAL_DEX_MEW
#define JOHTO_DEX_COUNT     NATIONAL_DEX_CELEBI

#if P_GEN_9_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_OGERPON
#elif P_GEN_8_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_ENAMORUS
#elif P_GEN_7_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_MELMETAL
#elif P_GEN_6_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_VOLCANION
#elif P_GEN_5_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_GENESECT
#elif P_GEN_4_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_ARCEUS
#else
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_DEOXYS
#endif

#define POKEMON_SLOTS_NUMBER (NATIONAL_DEX_COUNT + 1)

// Hoenn Pokedex order
enum {
    HOENN_DEX_CHIKORITA,
    HOENN_DEX_BAYLEEF,
    HOENN_DEX_MEGANIUM,
    HOENN_DEX_SQUIRTLE,
    HOENN_DEX_WARTORTLE,
    HOENN_DEX_BLASTOISE,
    HOENN_DEX_TEPIG,
    HOENN_DEX_PIGNITE,
    HOENN_DEX_EMBOAR,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_SANDYGAST,
    HOENN_DEX_PALOSSAND,
    HOENN_DEX_EXEGGCUTE,
    HOENN_DEX_EXEGGUTOR,
    HOENN_DEX_LILLIPUP,
    HOENN_DEX_HERDIER,
    HOENN_DEX_STOUTLAND,
    HOENN_DEX_RATTATA,
    HOENN_DEX_RATICATE,
    HOENN_DEX_SPINARAK,
    HOENN_DEX_ARIADOS,
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_SCRAGGY,
    HOENN_DEX_SCRAFTY,
    HOENN_DEX_GASTLY,
    HOENN_DEX_HAUNTER,
    HOENN_DEX_GENGAR,
    HOENN_DEX_MEOWTH,
    HOENN_DEX_PERSIAN,
    HOENN_DEX_GLAMEOW,
    HOENN_DEX_PURUGLY,
    HOENN_DEX_PIDGEY,
    HOENN_DEX_PIDGEOTTO,
    HOENN_DEX_PIDGEOT,
    HOENN_DEX_HOOTHOOT,
    HOENN_DEX_NOCTOWL,
    HOENN_DEX_BONSLY,
    HOENN_DEX_SUDOWOODO,
    HOENN_DEX_ABRA,
    HOENN_DEX_KADABRA,
    HOENN_DEX_ALAKAZAM,
    HOENN_DEX_HAPPINY,
    HOENN_DEX_CHANSEY,
    HOENN_DEX_BLISSEY,
    HOENN_DEX_FLABEBE,
    HOENN_DEX_FLOETTE,
    HOENN_DEX_FLORGES,
    HOENN_DEX_ORICORIO,
    HOENN_DEX_HEATMOR,
    HOENN_DEX_DURANT,
    HOENN_DEX_YANMA,
    HOENN_DEX_YANMEGA,
    HOENN_DEX_APPLIN,
    HOENN_DEX_FLAPPLE,
    HOENN_DEX_APPLETUN,
    HOENN_DEX_BLIPBUG,
    HOENN_DEX_DOTTLER,
    HOENN_DEX_ORBEETLE,
    HOENN_DEX_KRICKETOT,
    HOENN_DEX_KRICKETUNE,
    HOENN_DEX_MANTYKE,
    HOENN_DEX_MANTINE,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_SKRELP,
    HOENN_DEX_DRAGALGE,
    HOENN_DEX_DHELMISE,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_WAILMER,
    HOENN_DEX_WAILORD,
    HOENN_DEX_CARVANHA,
    HOENN_DEX_SHARPEDO,
    HOENN_DEX_DELIBIRD,
    HOENN_DEX_ALOMOMOLA,
    HOENN_DEX_TENTACOOL,
    HOENN_DEX_TENTACRUEL,
    HOENN_DEX_EISCUE,
    HOENN_DEX_BERGMITE,
    HOENN_DEX_AVALUGG,
    HOENN_DEX_PATRAT,
    HOENN_DEX_WATCHOG,
    HOENN_DEX_YUNGOOS,
    HOENN_DEX_GUMSHOOS,
    HOENN_DEX_TIMBURR,
    HOENN_DEX_GURDURR,
    HOENN_DEX_CONKELDURR,
    HOENN_DEX_GRIMER,
    HOENN_DEX_MUK,
    HOENN_DEX_KLINK,
    HOENN_DEX_KLANG,
    HOENN_DEX_KLINKLANG,
    HOENN_DEX_MAGNEMITE,
    HOENN_DEX_MAGNETON,
    HOENN_DEX_MAGNEZONE,
    HOENN_DEX_VOLTORB,
    HOENN_DEX_ELECTRODE,
    HOENN_DEX_KOFFING,
    HOENN_DEX_WEEZING,
    HOENN_DEX_GRUBBIN,
    HOENN_DEX_CHARJABUG,
    HOENN_DEX_VIKAVOLT,
    HOENN_DEX_SLUGMA,
    HOENN_DEX_MAGCARGO,
    HOENN_DEX_VAROOM,
    HOENN_DEX_REVAROOM,
    HOENN_DEX_ROTOM,
    HOENN_DEX_BELDUM,
    HOENN_DEX_METANG,
    HOENN_DEX_METAGROSS,
    HOENN_DEX_MELTAN,
    HOENN_DEX_MELMETAL,
    HOENN_DEX_SNIVY,
    HOENN_DEX_SERVINE,
    HOENN_DEX_SERPERIOR,
    HOENN_DEX_LITTEN,
    HOENN_DEX_TORRACAT,
    HOENN_DEX_INCINEROAR,
    HOENN_DEX_PIPLUP,
    HOENN_DEX_PRINPLUP,
    HOENN_DEX_EMPOLEON,
    HOENN_DEX_ROOKIDEE,
    HOENN_DEX_CORVISQUIRE,
    HOENN_DEX_CORVIKNIGHT,
    HOENN_DEX_SKITTY,
    HOENN_DEX_DELCATTY,
    HOENN_DEX_SNUBBULL,
    HOENN_DEX_GRANBULL,
    HOENN_DEX_EEVEE,
    HOENN_DEX_VAPOREON,
    HOENN_DEX_JOLTEON,
    HOENN_DEX_FLAREON,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_LEAFEON,
    HOENN_DEX_GLACEON,
    HOENN_DEX_SYLVEON,
    HOENN_DEX_HATENNA,
    HOENN_DEX_HATTREM,
    HOENN_DEX_HATTERENE,
    HOENN_DEX_NINCADA,
    HOENN_DEX_NINJASK,
    HOENN_DEX_SHEDINJA,
    HOENN_DEX_JOLTIK,
    HOENN_DEX_GALVANTULA,
    HOENN_DEX_SUNKERN,
    HOENN_DEX_SUNFLORA,
    HOENN_DEX_LITWICK,
    HOENN_DEX_LAMPENT,
    HOENN_DEX_CHANDELURE,
    HOENN_DEX_TYROGUE,
    HOENN_DEX_HITMONLEE,
    HOENN_DEX_HITMONCHAN,
    HOENN_DEX_HITMONTOP,
    HOENN_DEX_CORSOLA,
    HOENN_DEX_CURSOLA,
    HOENN_DEX_BINACLE,
    HOENN_DEX_BARBARACLE,
    HOENN_DEX_FRILLISH,
    HOENN_DEX_JELLICENT,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_REMORAID,
    HOENN_DEX_OCTILLERY,
    HOENN_DEX_BRUXISH,
    HOENN_DEX_SHELLDER,
    HOENN_DEX_CLOYSTER,
    HOENN_DEX_STARYU,
    HOENN_DEX_STARMIE,
    HOENN_DEX_FINIZEN,
    HOENN_DEX_PALAFIN,
    HOENN_DEX_MAREANIE,
    HOENN_DEX_TOXAPEX,
    HOENN_DEX_KANGASKHAN,
    HOENN_DEX_SKIDDO,
    HOENN_DEX_GOGOAT,
    HOENN_DEX_MILTANK,
    HOENN_DEX_TAUROS,
    HOENN_DEX_YAMPER,
    HOENN_DEX_BOLTUND,
    HOENN_DEX_MAREEP,
    HOENN_DEX_FLAAFFY,
    HOENN_DEX_AMPHAROS,
    HOENN_DEX_PUMPKABOO,
    HOENN_DEX_GOURGEIST,
    HOENN_DEX_MUDBRAY,
    HOENN_DEX_MUDSDALE,
    HOENN_DEX_CACNEA,
    HOENN_DEX_CACTURNE,
    HOENN_DEX_MARACTUS,
    HOENN_DEX_CAPSAKID,
    HOENN_DEX_SCOVILLAIN,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_SILICOBRA,
    HOENN_DEX_SANDACONDA,
    HOENN_DEX_BUNNELBY,
    HOENN_DEX_DIGGERSBY,
    HOENN_DEX_MINIOR,
    HOENN_DEX_PAWMI,
    HOENN_DEX_PAWMO,
    HOENN_DEX_PAWMOT,
    HOENN_DEX_SANDILE,
    HOENN_DEX_KROKOROK,
    HOENN_DEX_KROOKODILE,
    HOENN_DEX_BALTOY,
    HOENN_DEX_CLAYDOL,
    HOENN_DEX_ZIGZAGOON,
    HOENN_DEX_LINOONE,
    HOENN_DEX_OBSTAGOON,
    HOENN_DEX_FLITTLE,
    HOENN_DEX_ESPATHRA,
    HOENN_DEX_ROLYCOLY,
    HOENN_DEX_CARKOL,
    HOENN_DEX_COALOSSAL,
    HOENN_DEX_ARON,
    HOENN_DEX_LAIRON,
    HOENN_DEX_AGGRON,
    HOENN_DEX_ROCKRUFF,
    HOENN_DEX_LYCANROC,
    HOENN_DEX_TURTONATOR,
    HOENN_DEX_GROWLITHE,
    HOENN_DEX_ARCANINE,
    HOENN_DEX_SALANDIT,
    HOENN_DEX_SALAZZLE,
    HOENN_DEX_HELIOPTILE,
    HOENN_DEX_HELIOLISK,
    HOENN_DEX_ANORITH,
    HOENN_DEX_ARMALDO,
    HOENN_DEX_AMAURA,
    HOENN_DEX_AURORUS,
    HOENN_DEX_CRANIDOS,
    HOENN_DEX_RAMPARDOS,
    HOENN_DEX_GIBLE,
    HOENN_DEX_GABITE,
    HOENN_DEX_GARCHOMP,
    HOENN_DEX_DEINO,
    HOENN_DEX_ZWEILOUS,
    HOENN_DEX_HYDREIGON,
    HOENN_DEX_CUTIEFLY,
    HOENN_DEX_RIBOMBEE,
    HOENN_DEX_COTTONEE,
    HOENN_DEX_WHIMSICOTT,
    HOENN_DEX_HOPPIP,
    HOENN_DEX_SKIPLOOM,
    HOENN_DEX_JUMPLUFF,
    HOENN_DEX_COBALION,
    HOENN_DEX_TERRAKION,
    HOENN_DEX_VIRIZION,
    HOENN_DEX_KELDEO,
    HOENN_DEX_SPRIGATITO,
    HOENN_DEX_FLORAGATO,
    HOENN_DEX_MEOWSCARADA,
    HOENN_DEX_SCORBUNNY,
    HOENN_DEX_RABOOT,
    HOENN_DEX_CINDERACE,
    HOENN_DEX_MUDKIP,
    HOENN_DEX_MARSHTOMP,
    HOENN_DEX_SWAMPERT,
    HOENN_DEX_PIDOVE,
    HOENN_DEX_TRANQUILL,
    HOENN_DEX_UNFEZANT,
    HOENN_DEX_MURKROW,
    HOENN_DEX_HONCHKROW,
    HOENN_DEX_EMOLGA,
    HOENN_DEX_KOMALA,
    HOENN_DEX_DITTO,
    HOENN_DEX_CASTFORM,
    HOENN_DEX_SHROOMISH,
    HOENN_DEX_BRELOOM,
    HOENN_DEX_SCATTERBUG,
    HOENN_DEX_SPEWPA,
    HOENN_DEX_VIVILLON,
    HOENN_DEX_GOSSIFLEUR,
    HOENN_DEX_ELDEGOSS,
    HOENN_DEX_ODDISH,
    HOENN_DEX_GLOOM,
    HOENN_DEX_VILEPLUME,
    HOENN_DEX_BELLOSSOM,
    HOENN_DEX_COMBEE,
    HOENN_DEX_VESPIQUEN,
    HOENN_DEX_SEWADDLE,
    HOENN_DEX_SWADLOON,
    HOENN_DEX_LEAVANNY,
    HOENN_DEX_ESPURR,
    HOENN_DEX_MEOWSTIC,
    HOENN_DEX_GOTHITA,
    HOENN_DEX_GOTHORITA,
    HOENN_DEX_GOTHITELLE,
    HOENN_DEX_MACHOP,
    HOENN_DEX_MACHOKE,
    HOENN_DEX_MACHAMP,
    HOENN_DEX_TRUBBISH,
    HOENN_DEX_GARBODOR,
    HOENN_DEX_PORYGON,
    HOENN_DEX_PORYGON2,
    HOENN_DEX_PORYGON,
    HOENN_DEX_HONEDGE,
    HOENN_DEX_DOUBLADE,
    HOENN_DEX_AEGISLASH,
    HOENN_DEX_KLEFKI,
    HOENN_DEX_MUNNA,
    HOENN_DEX_MUSHARNA,
    HOENN_DEX_TANDEMAUS,
    HOENN_DEX_MAUSHOLD,
    HOENN_DEX_ZUBAT,
    HOENN_DEX_GOLBAT,
    HOENN_DEX_CROBAT,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_JIGGLYPUFF,
    HOENN_DEX_WIGGLYTUFF,
    HOENN_DEX_SOLOSIS,
    HOENN_DEX_DUOSION,
    HOENN_DEX_REUNICLUS,
    HOENN_DEX_SMEARGLE,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_GALLADE,
    HOENN_DEX_SINISTEA,
    HOENN_DEX_POLTEAGEIST,
    HOENN_DEX_PASSIMIAN,
    HOENN_DEX_CRYOGONAL,
    HOENN_DEX_VANILLITE,
    HOENN_DEX_VANILLISH,
    HOENN_DEX_VANILLUXE,
    HOENN_DEX_DRIFLOON,
    HOENN_DEX_DRIFBLIM,
    HOENN_DEX_WISHIWASHI,
    HOENN_DEX_FINNEON,
    HOENN_DEX_LUMINEON,
    HOENN_DEX_CLAUNCHER,
    HOENN_DEX_CLAWITZER,
    HOENN_DEX_INKAY,
    HOENN_DEX_MALAMAR,
    HOENN_DEX_SLOWPOKE,
    HOENN_DEX_SLOWBRO,
    HOENN_DEX_SLOWKING,
    HOENN_DEX_DUCKLETT,
    HOENN_DEX_SWANNA,
    HOENN_DEX_FOONGUS,
    HOENN_DEX_AMOONGUSS,
    HOENN_DEX_CROAGUNK,
    HOENN_DEX_TOXICROAK,
    HOENN_DEX_TYMPOLE,
    HOENN_DEX_PALPITOAD,
    HOENN_DEX_SEISMITOAD,
    HOENN_DEX_SHELLOS,
    HOENN_DEX_GASTRODON,
    HOENN_DEX_TATSUGIRI,
    HOENN_DEX_GOOMY,
    HOENN_DEX_SLIGGOO,
    HOENN_DEX_GOODRA,
    HOENN_DEX_SEVIPER,
    HOENN_DEX_CATERPIE,
    HOENN_DEX_METAPOD,
    HOENN_DEX_BUTTERFREE,
    HOENN_DEX_DRAMPA,
    HOENN_DEX_TRAPINCH,
    HOENN_DEX_VIBRAVA,
    HOENN_DEX_FLYGON,
    HOENN_DEX_GLIGAR,
    HOENN_DEX_GLISCOR,
    HOENN_DEX_MIENFOO,
    HOENN_DEX_MIENSHAO,
    HOENN_DEX_GOLETT,
    HOENN_DEX_GOLURK,
    HOENN_DEX_MAGBY,
    HOENN_DEX_MAGMAR,
    HOENN_DEX_MAGMORTAR,
    HOENN_DEX_ONIX,
    HOENN_DEX_STEELIX,
    HOENN_DEX_HOUNDOUR,
    HOENN_DEX_HOUNDOOM,
    HOENN_DEX_NOIBAT,
    HOENN_DEX_NOIVERN,
    HOENN_DEX_VULPIX,
    HOENN_DEX_NINETALES,
    HOENN_DEX_DRUDDIGON,
    HOENN_DEX_UNOWN,
    HOENN_DEX_ZERAORA,
    HOENN_DEX_GENESECT,
    HOENN_DEX_VOLCANION,
    HOENN_DEX_ZYGARDE,
};

#define HOENN_DEX_COUNT (HOENN_DEX_DEOXYS + 1)

#endif // GUARD_CONSTANTS_POKEDEX_H
