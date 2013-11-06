/*
 *  ofxTransparentWindow.cpp
 *
 *  Created by Akira on 10/10/07.
 *  Copyright 2010 yesMAYBEno. All rights reserved.
 *
 */

#include "ofxTransparentWindow.h"

//extern "C" {
#include "ofxTransparentWindowUtil.h"
//}

void ofxTransparentWindow::afterMainSetup(int transparentType) {
	
	ofSetBackgroundAuto(false);	
	removeWindowBarAndTitle(transparentType);	
	
}

void ofxTransparentWindow::update() {
	
	glEnable(GL_MULTISAMPLE);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	updateView();

}

