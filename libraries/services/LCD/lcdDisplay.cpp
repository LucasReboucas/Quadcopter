
#include "lcdDisplay.h"

// ====================================
//				 Constants
// ====================================

#define DISPLAY_LINES 2
#define DISPLAY_COLUMNS 16
#define DISPLAY_PINS 6



// ====================================
//				Methods
// ====================================


void LcdDisplay::Init() {
	this.actived = true;
	
	this.Pins[0] = pin0;
	this.Pins[1] = pin1;
	this.Pins[2] = pin2;
	this.Pins[3] = pin3;
	this.Pins[4] = pin4;
	this.Pins[5] = pin5;
	
	lcd.begin(DISPLAY_COLUMNS, DISPLAY_LINES);
	lcd.setCursor(0, 0);
}


void LcdDisplay::Stop() {
	this.actived = false;
}

void LcdDisplay::SetPins(int pin0, int pin1, int pin2, int pin3, int pin4, int pin5){
	this.Pins[0] = pin0;
	this.Pins[1] = pin1;
	this.Pins[2] = pin2;
	this.Pins[3] = pin3;
	this.Pins[4] = pin4;
	this.Pins[5] = pin5;
}


int LcdDisplay::GetPositionX() {
	return this.CursorPositionX;
}

int LcdDisplay::GetPositionY() {
	return this.CursorPositionY;
}


void LcdDisplay::SetPositionY(int PositionX = 0) {
	this.CursorPositionX = PositionX;
	lcd.setCursor ( this.CursorPositionX, this.CursorPositionY);
}


void LcdDisplay::SetPositionY(int PositionY = 0) {
	this.CursorPositionY = PositionY;
	lcd.setCursor ( this.CursorPositionX, this.CursorPositionY);
}

void LcdDisplay::SetPosition00() {
	this.CursorPositionX = 0;
	this.CursorPositionY = 0;
	lcd.setCursor ( this.CursorPositionX, this.CursorPositionY);
}

char* LcdDisplay::GetArrayLine1() {
	return this.String1;
}
	

char* LcdDisplay::GetArrayLine2() {
	return this.String2;
}


void LcdDisplay::SetArrayLine1(char* String1) {
	this.String1 = String1;
}


void LcdDisplay::SetArrayLine2(char* String2) {
	this.String2 = String2;
}


void LcdDisplay::SetColor(int color){}
