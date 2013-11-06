/*
 *  ofxTransparentWindow.h
 *
 *  Created by Akira on 10/10/07.
 *  Copyright 2010 yesMAYBEno. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"

class ofxTransparentWindow {

public:
	static const int SCREENSAVER = 0;
	static const int DESKTOPBG = 1;
	static const int NORMAL = 2;	
	
	void afterMainSetup(int transparentType = 2);
	void update();
	
};