//
//  QuineVisualSystem.cpp
//

#include "QuineVisualSystem.h"

//#include "CloudsRGBDVideoPlayer.h"
//#ifdef AVF_PLAYER
//#include "ofxAVFVideoPlayer.h"
//#endif

//These methods let us add custom GUI parameters and respond to their events
void QuineVisualSystem::selfSetupGui(){

	customGui = new ofxUISuperCanvas("CUSTOM", gui);
	customGui->copyCanvasStyle(gui);
	customGui->copyCanvasProperties(gui);
	customGui->setName("Custom");
	customGui->setWidgetFontSize(OFX_UI_FONT_SMALL);
	
	customGui->addSlider("Custom Float 1", 1, 1000, &customFloat1);
	customGui->addSlider("Custom Float 2", 1, 1000, &customFloat2);
	customGui->addButton("Custom Button", false);
	customGui->addToggle("Custom Toggle", &customToggle);
	
	ofAddListener(customGui->newGUIEvent, this, &QuineVisualSystem::selfGuiEvent);
	
	guis.push_back(customGui);
	guimap[customGui->getName()] = customGui;
}

void QuineVisualSystem::selfGuiEvent(ofxUIEventArgs &e){
	if(e.widget->getName() == "Custom Button"){
		cout << "Button pressed!" << endl;
	}
}

//Use system gui for global or logical settings, for exmpl
void QuineVisualSystem::selfSetupSystemGui(){
	
}

void QuineVisualSystem::guiSystemEvent(ofxUIEventArgs &e){
	
}
//use render gui for display settings, like changing colors
void QuineVisualSystem::selfSetupRenderGui(){

}

void QuineVisualSystem::guiRenderEvent(ofxUIEventArgs &e){
	
}

// selfSetup is called when the visual system is first instantiated
// This will be called during a "loading" screen, so any big images or
// geometry should be loaded here
void QuineVisualSystem::selfSetup(){

	loadTestVideo();
	
//	someImage.loadImage( getVisualSystemDataPath() + "images/someImage.png";
	
}

// selfPresetLoaded is called whenever a new preset is triggered
// it'll be called right before selfBegin() and you may wish to
// refresh anything that a preset may offset, such as stored colors or particles
void QuineVisualSystem::selfPresetLoaded(string presetPath){
	
}

// selfBegin is called when the system is ready to be shown
// this is a good time to prepare for transitions
// but try to keep it light weight as to not cause stuttering
void QuineVisualSystem::selfBegin(){
	
}

//do things like ofRotate/ofTranslate here
//any type of transformation that doesn't have to do with the camera
void QuineVisualSystem::selfSceneTransformation(){
	
}

//normal update call
void QuineVisualSystem::selfUpdate(){

}
// selfDraw draws in 3D using the default ofEasyCamera
// you can change the camera by returning getCameraRef()
void QuineVisualSystem::selfDraw(){
	
}

// draw any debug stuff here
void QuineVisualSystem::selfDrawDebug(){
	
}
// or you can use selfDrawBackground to do 2D drawings that don't use the 3D camera
void QuineVisualSystem::selfDrawBackground(){

	//turn the background refresh off
	//bClearBackground = false;
	
}
// this is called when your system is no longer drawing.
// Right after this selfUpdate() and selfDraw() won't be called any more
void QuineVisualSystem::selfEnd(){
	
}
// this is called when you should clear all the memory and delet anything you made in setup
void QuineVisualSystem::selfExit(){
	
}

//events are called when the system is active
//Feel free to make things interactive for you, and for the user!
void QuineVisualSystem::selfKeyPressed(ofKeyEventArgs & args){
	
}
void QuineVisualSystem::selfKeyReleased(ofKeyEventArgs & args){
	
}

void QuineVisualSystem::selfMouseDragged(ofMouseEventArgs& data){
	
}

void QuineVisualSystem::selfMouseMoved(ofMouseEventArgs& data){
	
}

void QuineVisualSystem::selfMousePressed(ofMouseEventArgs& data){
	
}

void QuineVisualSystem::selfMouseReleased(ofMouseEventArgs& data){
	
}