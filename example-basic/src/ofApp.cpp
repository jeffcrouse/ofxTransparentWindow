#include "ofApp.h"

void ofApp::setup()
{
    ofSetWindowPosition(ofGetScreenWidth()-ofGetWidth()-100, ofGetScreenHeight()-ofGetHeight()-300);
	
	font.loadFont("fonts/Pigiarniq Heavy.ttf", 120);
    
	transparent.afterMainSetup(ofxTransparentWindow::NORMAL);
	
	ofSetFullscreen(true);
}

void ofApp::update()
{
    transparent.update();
}

void ofApp::draw()
{
	transparent.update();
	
	ofSetColor(0, 0, 0);
	ofPushMatrix();
	ofTranslate(65, 400, 0);
	ofRotate(-30, 0, 0, 1);
	font.drawString("This is", 0, 0);
	font.drawString("oF APP", 160, 150);
	ofPopMatrix();
	
	ofSetColor(255, 255, 255, 0);
}

void ofApp::keyPressed(int key){}
void ofApp::keyReleased(int key){}
void ofApp::mouseMoved(int x, int y){}
void ofApp::mouseDragged(int x, int y, int button){}
void ofApp::mousePressed(int x, int y, int button){}
void ofApp::mouseReleased(int x, int y, int button){}
void ofApp::windowResized(int w, int h){}
void ofApp::gotMessage(ofMessage msg){}
void ofApp::dragEvent(ofDragInfo dragInfo){}