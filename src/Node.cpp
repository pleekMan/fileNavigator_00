//
//  Node.cpp
//  fileNavigator
//
//  Created by Wanda on 22/01/14.
//
//

#include "Node.h"

Node::Node(){
}

Node::Node(ofVec2f _pos, ofVec2f _size, string _absolutePath){
    
    pos = _pos;
    nodeSize = _size;
    fullPath = _absolutePath;
    
}

bool Node::isHoveringOver(float _x, float _y){
    
    if (_x > pos.x && _x < (pos.x + nodeSize.x) && _y > pos.y && _y < (pos.y + nodeSize.y)) {
        return true;
    } else {
        return false;
    }
}

void Node::draw(){
    ofSetColor(25);
    ofFill();
    ofRect(pos.x, pos.y, nodeSize.x, nodeSize.y);
    ofSetColor(255, 255,0);
    ofDrawBitmapString(fullPath, pos.x, pos.y + nodeSize.y - 2);
    
}

