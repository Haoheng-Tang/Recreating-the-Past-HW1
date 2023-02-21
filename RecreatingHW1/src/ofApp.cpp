#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);
	ofSetColor(0);

	ofSetRectMode(OF_RECTMODE_CENTER);

	ofSetLineWidth(1);
	ofNoFill();

	ofSeedRandom(mouseY);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			float x = ofMap(i, 0, 2, 300, 700);
			float y = ofMap(j, 0, 2, 300, 700);

			for (int k = 0; k < 10; k++) {
				float xvibrate = ofRandom(-1, 1);
				float yvibrate = ofRandom(-0.18, 0.18);
				ofDrawRectangle(x + (x-450)*0.34*xvibrate, y + (y-450)*xvibrate*yvibrate, 200, 200);
			}
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
