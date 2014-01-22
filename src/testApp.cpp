#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    //ofEnableAlphaBlending();
    //ofEnableSmoothing();
    //ofSetCircleResolution(32);
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    DirectoryUtils dirUtil;
    
    ofDirectory dir("");
    dir.allowExt("rtf");
    dir.listDir();
    
    dirUtil.list("", files, true, &pathFilter); // Default to "data" folder
    dirUtil.list(dir, files);
    
    cout << "oo----------oo" << endl;
    cout << "FileCount: " << files.size() << endl;
    
    for (int i = 0; i < files.size(); i++) {
        //ofSendMessage(ofMessage(files[i]));
        cout << files[i] << endl;
        
    }

}

//--------------------------------------------------------------
void testApp::update(){
 //
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    ofBackground(0);
    ofFill();
    
    int y = 14;
    
    for(int i = 0; i < files.size(); ++i)
    {
        ofSetColor(255);
        ofDrawBitmapString(files[i], 10, y);
        y += 14;
    }

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
