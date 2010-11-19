//
//  ToDoListAppDelegate.h
//  ToDoList
//
//  Created by Xiao G. Wu on 11/19/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ToDoListAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
