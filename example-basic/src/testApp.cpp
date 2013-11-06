#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetWindowPosition(ofGetScreenWidth()-ofGetWidth()-100, ofGetScreenHeight()-ofGetHeight()-300);
	
	font.loadFont("fonts/Pigiarniq Heavy.ttf", 120);

	transparent.afterMainSetup(ofxTransparentWindow::NORMAL);
	
	ofSetFullscreen(true);
}

//--------------------------------------------------------------
void testApp::update(){
	
	transparent.update();
}

//--------------------------------------------------------------
void testApp::draw(){
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

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
