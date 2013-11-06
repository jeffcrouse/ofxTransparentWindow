/*
 *  ofxTransparentWindowUtil.cpp
 *
 *  Created by Akira on 10/10/07.
 *  Copyright 2010 yesMAYBEno. All rights reserved.
 *
 */

#include <Cocoa/Cocoa.h>
#include <AppKit/NSOpenGL.h>
#include <OpenGL/OpenGL.h>
#include "ofxTransparentWindowUtil.h"


void removeWindowBarAndTitle(int transparentType) {
	
	NSOpenGLContext * myContext = nil;
	NSView *myView = nil;
	NSWindow* window = nil;
	
	myContext = [ NSOpenGLContext currentContext ];
	myView = [ myContext view ];
	window = [ myView window ];
	
	GLint opacity = 0;
	[myContext setValues:&opacity forParameter:NSOpenGLCPSurfaceOpacity];
	
	[window setOpaque:NO];
	[window setBackgroundColor: [NSColor clearColor]];
	[window setHasShadow:NO];
	
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	[window setStyleMask:NSBorderlessWindowMask];
	[pool release];
	
//	- (BOOL)isKeyWindow;
//	- (BOOL)isMainWindow;
//	- (BOOL)canBecomeKeyWindow;
//	- (BOOL)canBecomeMainWindow;
//	- (void)makeKeyWindow;
//	- (void)makeMainWindow;
//	- (void)becomeKeyWindow;
//	- (void)resignKeyWindow;
//	- (void)becomeMainWindow;
//	- (void)resignMainWindow;
	

	
	if (transparentType == 0) {
		[window setLevel: kCGScreenSaverWindowLevel];
	}else if (transparentType == 1) {
		[window setLevel: kCGDesktopWindowLevel];
	}else if (transparentType == 2) {
		[window setLevel: kCGNormalWindowLevel];
	}else {
		[window setLevel: kCGNormalWindowLevel];
	}
			
}

void updateView() {
	
	NSOpenGLContext * myContext = nil;
	NSView *myView = nil;	
	myContext = [ NSOpenGLContext currentContext ];
	myView = [ myContext view ];
	
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	[[NSColor colorWithDeviceRed:0.0f green:0.0f blue:0.0f alpha:0.0f] set]; //*
	NSRectFill([myView bounds]);
	[pool release];

}
