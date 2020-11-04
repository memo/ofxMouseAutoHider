#include "ofxMouseAutoHider.h"
#include "ofMain.h"

class ofApp : public ofBaseApp {
public:
	void setup() {
		ofSetWindowShape(300, 300);
		ofBackground(0);
		ofxMouseAutoHider::enable();
	}

	void draw() {
		ofSetColor(255);
		string tada = "";
		if (!ofxMouseAutoHider::mouseIsShowing()) {
			tada = "\n\nTADAAAA!\n";
		}
		ofDrawBitmapString("The mouse will disappear\nif you don't use it." + tada, 20, 30);
	}
};

int main() {
	ofSetupOpenGL(1024, 768, OF_WINDOW);			// <-------- setup the GL context
	ofRunApp(new ofApp());
}
