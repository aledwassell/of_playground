#include "ofApp.h"

int shapeCount;
bool trackRight = true;
bool trackDown = true;
int x = 0;
int y = 0;
int speed = 20;

//--------------------------------------------------------------
void ofApp::setup(){
    shapeCount = 1;
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    video.load("PXL_20210702_053448815.mp4");
    video.setVolume(0.3);
    video.play();
    video.setLoopState(OF_LOOP_NORMAL);
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
    video.setSpeed(2);
    if (trackRight) {
        x = x + speed;
    } else {
        x = x - speed;
    }
    if (x < 0) {
        trackRight = true;
    } else if (x >= ofGetWidth()) {
        shapeCount++;
        trackRight = false;
    }
    if (trackDown) {
        y = y + speed;
    } else {
        y = y - speed;
    }
    if (y < 0) {
        trackDown = true;
    } else if (y >= ofGetHeight()) {
        shapeCount++;
        trackDown = false;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    video.draw(0, 0, ofGetWidth(), ofGetHeight());
    for (int i = 0; i < shapeCount; i++) {
        ofDrawCircle(x + (i * 20), y + (i * 10), 64);
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
    ofDrawCircle(x, y, 70);
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
