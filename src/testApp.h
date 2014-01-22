#pragma once

#include "ofMain.h"
#include "ofxIO.h"

using namespace ofx::IO;

// a custom hidden path filter
class CustomPathFilter: public AbstractPathFilter
{
public:
    CustomPathFilter()
    {
    }
    
    virtual ~CustomPathFilter()
    {
    }
    
    bool accept(const Poco::Path& path) const
    {
        // don't return hidden files or files with names containing "FilterMeOut
        return !Poco::File(path).isHidden() &&
        !ofIsStringInString(path.toString(), "FilterMeOut");
    }
};


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    CustomPathFilter pathFilter;
    std::deque<std::string> messages;
    vector<string> files;
                      
};


