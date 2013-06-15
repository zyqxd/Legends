//
//  BattleLayer.h
//  Legends
//
//  Created by David Zhang on 2013-01-29.
//
//

// Auto includes
#import <SFS2XAPIIOS/SmartFox2XClient.h>
#import "cocos2d.h"
#import "Defines.h"
#import "AppDelegate.h"
#import "UserSingleton.h"
// Layers
#import "SetupLayer.h"
// Others
#import "Minotaur.h"
#import "Tile.h"
#import "BattleBrain.h"
#import "UnitDisplay.h"

@interface BattleLayer : CCLayer <BattleBrainDelegate, UnitDelegate>
{
    // Turn variables
    int currentAction;
    int costOfAction;
    bool isMenuOpen;
    bool isMyTurn;
    CGPoint confirming;
    NSMutableArray *usedTiles;

    // Camera variables
    BOOL scrolled;
    
    // Others
    AppDelegate *appDelegate;
    SmartFox2XClient *smartFox;
}

@property (nonatomic, strong) CCTMXTiledMap *map;
@property (nonatomic, strong) CCTMXLayer *tmxLayer;
@property (nonatomic, strong) CCLayer *gameLayer;
@property (nonatomic, strong) CCLayer *hudLayer;

@property (nonatomic, strong) Tile *selection;

@property (nonatomic, strong) CCMenu *menu;
@property (nonatomic, strong) UnitDisplay *display;

+ (CCScene *) scene;
@end