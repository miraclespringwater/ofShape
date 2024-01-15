#include "ofApp.h"
#include "ofGraphics.h"
#include <iostream>
#include <ostream>

//--------------------------------------------------------------
void ofApp::setup() {
}

//--------------------------------------------------------------
void ofApp::update() {
	// int myInt = 22;

	float testFloat = PI;
	cout << testFloat << endl;

	bool testB = false;
	cout << testB << endl;

	string text = "Hello World!";

	cout << text << endl;

	// myInt = ofGetMouseX();

	// cout << myInt << endl;
}

//--------------------------------------------------------------
void ofApp::draw() {
	// ofSetColor(255, 0, 0);
	// ofDrawCircle(250, 300, 150);

	// ofSetColor(0, 0, 255);
}

//--------------------------------------------------------------
void ofApp::exit() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
