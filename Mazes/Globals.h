//
//  Globals.h
//  iPad_Mazes
//
//  Created by Andre Muis on 1/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AppDelegate;
@class DataAccess;
@class Maze;
@class TopListsViewController;
@class GameViewController;
@class CreateViewController;
@class EditViewController;
@class Sounds;
@class Textures;

@interface Globals : NSObject 
{
    AppDelegate *appDelegate;

    Maze *MazeMain;
	Maze *MazeEdit;

	TopListsViewController *topListsViewController;
	GameViewController *gameViewController;
	
	CreateViewController *createViewController;
	EditViewController *editViewController;
	
	UIView *activityView;
}

@property (nonatomic, retain) AppDelegate *appDelegate;

@property (nonatomic, retain) Maze *mazeMain;
@property (nonatomic, retain) Maze *mazeEdit;

@property (nonatomic, retain) TopListsViewController *topListsViewController;
@property (nonatomic, retain) GameViewController *gameViewController;

@property (nonatomic, retain) CreateViewController *createViewController;
@property (nonatomic, retain) EditViewController *editViewController;

@property (nonatomic, retain) UIView *activityView;

+ (Globals *)instance;

@end
