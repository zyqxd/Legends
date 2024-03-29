//
//  UserSingleton.h
//  LegendsReborn
//
//  Created by David Zhang on 2013-04-17.
//
//

#import <Foundation/Foundation.h>
#import <SFS2XAPIIOS/SmartFox2XClient.h>
#import "Defines.h"
#import "UICKeyChainStore.h"

// Temp
#import "UnitObject.h"
#import "MatchObject.h"

@interface UserSingleton : NSObject
// Inventory
@property (nonatomic, strong, readonly) NSMutableArray *units;
@property (nonatomic, strong, readonly) NSMutableArray *consummables;
@property (nonatomic, strong, readonly) NSMutableArray *misc;

// Preferences + settings
@property (nonatomic) BOOL isFirstLaunch;
@property (nonatomic) int playerLevel;

// Stat properties
@property (nonatomic) int ELO;
@property (nonatomic) int TELO;

// Setup properties
@property (nonatomic, strong) NSMutableArray *setupList;
@property (nonatomic, strong) NSMutableArray *unitList;
@property (nonatomic) int unitCount;
@property (nonatomic) int unitValue;

// Battle properties
@property (nonatomic, strong) MatchObject *obj;

@property (nonatomic) BOOL amIPlayerOne;
@property (nonatomic, strong) SFSArray *mySetup;
@property (nonatomic, strong) SFSArray *oppSetup;
@property (nonatomic, strong) SFSUser *me;
@property (nonatomic, strong) SFSUser *opp;

+ (UserSingleton *) get;
- (void) setDict:(NSMutableDictionary *)dict forType:(UnitType)type at:(CGPoint)position;


- (BOOL) saveOpp:(SFSUser *)user setup:(SFSArray *)array;
- (BOOL) saveSetup:(SFSArray *)array unitFood:(int)count unitValue:(int)value;

- (BOOL) downloadProfileFor:(NSString *)name;
- (BOOL) uploadProfile;
- (int) getKForMM;
- (int) getKForTMM;
@end

