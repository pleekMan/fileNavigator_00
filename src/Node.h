#ifndef NODE
#define NODE


#pragma once

#include "ofMain.h"


class Node{
    
public:
    
    Node();
    Node(ofVec2f _pos, ofVec2f _size, string _absolutePath);
    
    ofVec2f pos, nodeSize;
    string fullPath, relativePath;
    
    void draw();
    bool isHoveringOver(float _x, float _y);
    
};
#endif