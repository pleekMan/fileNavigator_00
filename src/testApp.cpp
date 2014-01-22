#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    cout << "-------------------oo" << endl;
    cout << "-------------------oo" << endl;
    
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    //ofEnableAlphaBlending();
    //ofEnableSmoothing();
    //ofSetCircleResolution(32);
    ofBackground(0);
    ofSetBackgroundAuto(true);
    
    //DirectoryUtils dirUtil;
    
    ofDirectory dir("");

    dir.listDir();
    

    cout << "FileCount: " << dir.numFiles() << endl;
    cout << "FilePath: " << dir.getPath(0) << endl;
    cout << "FilePath: " << dir.getAbsolutePath() << endl;
    cout << " " << endl;
    
    ofVec2f nodePos(10,50);
    ofVec2f nodeSize(200,17);
    
    for (int i = 0; i < dir.numFiles(); i++) {
        string filePath = dir.getAbsolutePath() + "/" + dir.getPath(i);
        files.push_back(filePath);
        cout << files[i] << endl;
        
        nodes.push_back(Node(nodePos, nodeSize, filePath));
        nodePos += ofVec2f(0,20);
        
    }

}

//--------------------------------------------------------------
void testApp::update(){
 //
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    ofBackground(0);
    
    /*
    int y = 14;
    
    for(int i = 0; i < files.size(); ++i)
    {
        ofSetColor(255);
        ofDrawBitmapString(files.at(i), 10, y);
        y += 14;
        
    }
     */
    
    for (int i = 0; i < nodes.size(); i++) {
        nodes[i].draw();
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
