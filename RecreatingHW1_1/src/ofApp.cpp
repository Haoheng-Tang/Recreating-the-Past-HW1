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
	ofSetLineWidth(2);

	float leftx[11] = { 100 };
	float lefty[11] = { 100 };
	float upx[11] = { 100 };
	float upy[11] = { 100 };

	for (int i = 0; i < 39; i++) {
		float y0 = ofMap(i, 0, 39, 100, 1200);
		ofSeedRandom(i);
		float x1 = 100+ ofRandom(-17,17);
		float x2;
		

		for (int j = 0; j < 10; j++) {

			ofSeedRandom(x1*y0+x1+y0+mouseX);
			float y1 = y0 + ofRandom(-14, 14);
			x2 = x1 + 60 - ofRandom(0, 16);
			ofSeedRandom(x1*y1 + x1 + y1+ mouseX);
			float y2 = y0 + ofRandom(-14, 14);
			
			if (ofRandom(0, 1) < 0.84 && i>0) {
				//Draw horizontal line
				ofSetColor(0);
				
				ofDrawLine(x1, y1, x2, y2);

				ofSetColor(220, 220, 220);
				ofDrawLine(x1+600, y1, x2+600, y2);

				//Draw vertical line
				if (j > 0) {
					ofSetColor(220, 220, 220);
					ofDrawLine(x1, y1, leftx[j], lefty[j]);
					ofSetColor(0);
					ofDrawLine(x1+600, y1, leftx[j]+600, lefty[j]);
				}
			}
			else if(i>0){
				//Draw horizontal line
				ofSetColor(0);
				ofDrawLine(upx[j], y1, x2, y2);

				ofSetColor(220, 220, 220);
				ofDrawLine(upx[j]+600, y1, x2+600, y2);

				//Draw vertical line
				if (j > 0) {
					ofSetColor(220, 220, 220);
					ofDrawLine(upx[j], y1, upx[j], upy[j]);

					ofSetColor(0);
					ofDrawLine(upx[j]+600, y1, upx[j]+600, upy[j]);
				}

			}

			if (j == 0 && i % 2 == 1) {
				ofSetColor(220, 220, 220);
				ofDrawLine(upx[j], y1, upx[j], upy[j]);

				ofSetColor(0);
				ofDrawLine(upx[j] + 600, y1, upx[j] + 600, upy[j]);
			}
			if (j == 9 && i % 2 == 1) {
				ofSetColor(220, 220, 220);
				ofDrawLine(upx[j+1], y1, upx[j+1], upy[j+1]);

				ofSetColor(0);
				ofDrawLine(upx[j+1] + 600, y1, upx[j+1] + 600, upy[j+1]);
			}



			leftx[j] = x1;
			leftx[j + 1] = x2;
			lefty[j] = y1;
			lefty[j + 1] = y2;

			x1 = x2;
		}

		for (int i = 0; i < 11; i++) {
			upx[i] = leftx[i];
			upy[i] = lefty[i];
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
