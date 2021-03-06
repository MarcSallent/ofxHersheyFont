/*
*  ofxHersheyFont.h
*
*  Created by Tobias Zimmer, August 2016.
*  www.tobiaszimmer.net
*
*  Font originally developed by Dr. Allen V. Hershey in 1967.
*  Font vectors made available by Paul Bourke.
*  paulbourke.net/dataformats/hershey/
*
*  A simple single line font for machines like CNC, Lasercutter, ...
*  Available characters: ASCII codes 32 to 126.
*
*/

#include "ofMain.h"

class ofxHersheyFont {
	public:
		ofxHersheyFont();

		void draw(string stringValue, float x, float y, float scale);
		void draw(string stringValue, float x, float y, float scale, bool centered);
		void draw(string stringValue, float x, float y, float scale, bool centered, float angle);
		void draw(string stringValue, float x, float y, float scale, bool centered, float angle, float maxWdith);
		void setColor(ofColor c);
		void setStrokeWidth(float width) { strokeWidth = width; };
		float getWidth(string stringValue, float scale);
		float getHeight(float scale);
		ofPath getPath(string stringValue, float scale);
		ofPath getPath(string stringValue, float xPos, float yPos, float scale);

		ofColor color;
		float strokeWidth;

	private:
		void drawChar(int asciiValue);
};


