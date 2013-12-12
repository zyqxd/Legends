//
//  Constants.h
//  Legends
//
//  Created by David Zhang on 2013-11-13.
//
//

#ifndef Legends_Constants_h
#define Legends_Constants_h

#define GAMETILEWIDTH 64
#define GAMETILEHEIGHT 32
#define GAMETILEOFFSETX 353
#define GAMETILEOFFSETY 14

#define GAMEMAPWIDTH 11
#define GAMEMAPHEIGHT 11
#define LASTMAPWIDTH GAMEMAPWIDTH-1
#define LASTMAPHEIGHT GAMEMAPHEIGHT-1

#define CGPointFlag CGPointMake(-1337,0)

typedef enum {
    ALPHA = 0,
    BLUE = 1,
    GREEN = 2,
    RED = 3
} PIXELS;

typedef enum {
    NE,
    SE,
    SW,
    NW,
}Direction;

typedef enum Rarity {
    Vagrant,
    Common,
    Uncommon,
    Rare,
    Epic,
    LAST_RARITY = Epic,
}Rarity;

typedef enum {
    Strength,
    Agility,
    Intellect,
    Spirit,
    Health
}Attribute;

typedef enum {
    UnitTypeNone,
    UnitTypePriest,
}UnitType;

/* Keep this in alternating on/off */
typedef enum {
    HighlightModeRange,
    HighlightModeRangeOff,
    HighlightModeEffect,
    HighlightModeEffectOff,
}HighlightMode;

typedef enum {
    TurnStateA,
    TurnStateB,
    TurnStateC,
    TurnStateD,
    TurnStateX,
}TurnState;

typedef enum {
    ActionUnknown,
    ActionIdle,
    ActionSkillOne,
    ActionSkillTwo,
    ActionSkillThree,
    ActionMove,
    ActionTeleport,
    ActionStop,
    /*  Other  */
    ActionEndTurn,
}Action;

typedef enum Heart {
    VoidHeart,       // nothing
    
    IronHeart,       // +str -agi        [done]
    MuscleHeart,     // +str -int        [done]
    VindictiveHeart, // +str -spr        [done]
    BraveHeart,      // +str -hp         [done]
    
    NimbleHeart,     // +agi -str        [done]
    JesterHeart,     // +agi -int        [done]
    SilentHeart,     // +agi -spr
    SavageHeart,     // +agi -hp         [done]
    
    CunningHeart,    // +int -str
    SageHeart,       // +int -agility
    LogicalHeart,    // +int -spr        [done]
    GiftedHeart,     // +int -hp
    
    DevoutHeart,     // +spr -str
    SaintlyHeart,    // +spr -agi
    FaithfulHeart,   // +spr -int        [done]
    HolyHeart,       // +spr -hp         [done]
    
    RoyalHeart,      // +hp  -str        [done]
    TitanHeart,      // +hp  -agi        [done]
    ThickHeart,      // +hp  -int        [done]
    UnholyHeart,     // +hp  -spr        [done]
}Heart;



#pragma mark - Unit Constants
#define UNIT_MAXAUGMENTATION_COUNT 20

#endif
