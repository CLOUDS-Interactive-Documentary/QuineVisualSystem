//
// CLOUDS Interactive Documentary
//
// VISUAL SYSTEMS
//
// Welcome to the EMPTY CloudsVisualSystem
//
//
//

#pragma once

#include "CloudsVisualSystem.h"

//TODO: rename this to your own visual system
class QuineVisualSystem : public CloudsVisualSystem {
protected:
    
    //  Your Stuff
    //
    //When you update the code, set string s = "%s";
    // then copy all the text into a separate text editor
    // and find/replace the following pairs (in regex mode):
    // \\ -> \\\\
    // \n -> \\n
    // " -> \\"
    string s = "//\n// CLOUDS Interactive Documentary\n//\n// VISUAL SYSTEMS\n//\n// Welcome to the EMPTY CloudsVisualSystem\n//\n//\n//\n\n#pragma once\n\n#include \"CloudsVisualSystem.h\"\n\n//TODO: rename this to your own visual system\nclass QuineVisualSystem : public CloudsVisualSystem {\nprotected:\n    \n    //  Your Stuff\n    //\n    string s = \"%s\";\n    void myReplace(std::string& str, const std::string& oldStr, const std::string& newStr)\n    {\n        size_t pos = 0;\n        while((pos = str.find(oldStr, pos)) != std::string::npos)\n        {\n            str.replace(pos, oldStr.length(), newStr);\n            pos += newStr.length();\n        }\n    }\n    \n  public:\n    \n	//TODO: Change this to the name of your visual system\n	//This determines your data path so name it at first!\n	//ie getVisualSystemDataPath() uses this\n    string getSystemName(){\n		return \"QuineVisualSystem\";\n	}\n\n	//These methods let us add custom GUI parameters and respond to their events\n    void selfSetupGui(){}\n    void selfGuiEvent(ofxUIEventArgs &e){}\n\n    \n	//Use system gui for global or logical settings, for exmpl\n    void selfSetupSystemGui(){}\n    void guiSystemEvent(ofxUIEventArgs &e){}\n    \n	//use render gui for display settings, like changing colors\n    void selfSetupRenderGui(){}\n    void guiRenderEvent(ofxUIEventArgs &e){}\n\n	// selfSetup is called when the visual system is first instantiated\n	// This will be called during a \"loading\" screen, so any big images or\n	// geometry should be loaded here\n    void selfSetup(){\n        char buff[s.length()*3];\n        \n        string replaced = s;\n        myReplace(replaced, \"\\n\", \"\\\\n\");\n        std::sprintf(buff, s.c_str(), replaced.c_str());\n        s = buff;\n    }\n\n	// selfBegin is called when the system is ready to be shown\n	// this is a good time to prepare for transitions\n	// but try to keep it light weight as to not cause stuttering\n    void selfBegin(){}\n\n	// selfPresetLoaded is called whenever a new preset is triggered\n	// it'll be called right before selfBegin() and you may wish to\n	// refresh anything that a preset may offset, such as stored colors or particles\n	void selfPresetLoaded(string presetPath){}\n    \n	//do things like ofRotate/ofTranslate here\n	//any type of transformation that doesn't have to do with the camera\n    void selfSceneTransformation(){}\n	\n	//normal update call\n	void selfUpdate(){}\n\n	// selfDraw draws in 3D using the default ofEasyCamera\n	// you can change the camera by returning getCameraRef()\n    void selfDraw(){\n        ofSetDrawBitmapMode(OF_BITMAPMODE_MODEL);\n        ofDrawBitmapString(s, 0, 0);\n    }\n	\n    // draw any debug stuff here\n	void selfDrawDebug(){}\n\n	//draws through RGBD camera;\n//	void selfDrawRGBD();\n	\n	// or you can use selfDrawBackground to do 2D drawings that don't use the 3D camera\n	void selfDrawBackground(){}\n\n	// this is called when your system is no longer drawing.\n	// Right after this selfUpdate() and selfDraw() won't be called any more\n	void selfEnd(){}\n\n	// this is called when you should clear all the memory and delet anything you made in setup\n    void selfExit(){}\n\n	//events are called when the system is active\n	//Feel free to make things interactive for you, and for the user!\n    void selfKeyPressed(ofKeyEventArgs & args){}\n    void selfKeyReleased(ofKeyEventArgs & args){}\n    \n    void selfMouseDragged(ofMouseEventArgs& data){}\n    void selfMouseMoved(ofMouseEventArgs& data){}\n    void selfMousePressed(ofMouseEventArgs& data){}\n    void selfMouseReleased(ofMouseEventArgs& data){}\n	\n\n    // if you use a custom camera to fly through the scene\n	// you must implement this method for the transitions to work properly\n//	ofCamera& getCameraRef(){\n//		return myCustomCamera;\n//	}\n	\n\n};\n";
    void myReplace(std::string& str, const std::string& oldStr, const std::string& newStr)
    {
        size_t pos = 0;
        while((pos = str.find(oldStr, pos)) != std::string::npos)
        {
            str.replace(pos, oldStr.length(), newStr);
            pos += newStr.length();
        }
    }
    
  public:
    
	//TODO: Change this to the name of your visual system
	//This determines your data path so name it at first!
	//ie getVisualSystemDataPath() uses this
    string getSystemName(){
		return "QuineVisualSystem";
	}

	//These methods let us add custom GUI parameters and respond to their events
    void selfSetupGui(){}
    void selfGuiEvent(ofxUIEventArgs &e){}

    
	//Use system gui for global or logical settings, for exmpl
    void selfSetupSystemGui(){}
    void guiSystemEvent(ofxUIEventArgs &e){}
    
	//use render gui for display settings, like changing colors
    void selfSetupRenderGui(){}
    void guiRenderEvent(ofxUIEventArgs &e){}

	// selfSetup is called when the visual system is first instantiated
	// This will be called during a "loading" screen, so any big images or
	// geometry should be loaded here
    void selfSetup(){
        char buff[s.length()*3];
        
        string replaced = s;
        myReplace(replaced, "\n", "\\n");
        std::sprintf(buff, s.c_str(), replaced.c_str());
        s = buff;
    }

	// selfBegin is called when the system is ready to be shown
	// this is a good time to prepare for transitions
	// but try to keep it light weight as to not cause stuttering
    void selfBegin(){}

	// selfPresetLoaded is called whenever a new preset is triggered
	// it'll be called right before selfBegin() and you may wish to
	// refresh anything that a preset may offset, such as stored colors or particles
	void selfPresetLoaded(string presetPath){}
    
	//do things like ofRotate/ofTranslate here
	//any type of transformation that doesn't have to do with the camera
    void selfSceneTransformation(){}
	
	//normal update call
	void selfUpdate(){}

	// selfDraw draws in 3D using the default ofEasyCamera
	// you can change the camera by returning getCameraRef()
    void selfDraw(){
        ofSetDrawBitmapMode(OF_BITMAPMODE_MODEL);
        ofDrawBitmapString(s, 0, 0);
    }
	
    // draw any debug stuff here
	void selfDrawDebug(){}

	//draws through RGBD camera;
//	void selfDrawRGBD();
	
	// or you can use selfDrawBackground to do 2D drawings that don't use the 3D camera
	void selfDrawBackground(){}

	// this is called when your system is no longer drawing.
	// Right after this selfUpdate() and selfDraw() won't be called any more
	void selfEnd(){}

	// this is called when you should clear all the memory and delet anything you made in setup
    void selfExit(){}

	//events are called when the system is active
	//Feel free to make things interactive for you, and for the user!
    void selfKeyPressed(ofKeyEventArgs & args){}
    void selfKeyReleased(ofKeyEventArgs & args){}
    
    void selfMouseDragged(ofMouseEventArgs& data){}
    void selfMouseMoved(ofMouseEventArgs& data){}
    void selfMousePressed(ofMouseEventArgs& data){}
    void selfMouseReleased(ofMouseEventArgs& data){}
	

    // if you use a custom camera to fly through the scene
	// you must implement this method for the transitions to work properly
//	ofCamera& getCameraRef(){
//		return myCustomCamera;
//	}
	

};
