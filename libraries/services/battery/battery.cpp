
#include "battery.h"


// ====================================
//				Methods
// ====================================

void Battery::Init() {
	this.actived = true;
}

void Battery::Stop() {
	this.actived = true;
}

float Battery::GetLevel() {
	return this.voltageLevel = analogRead(this.pin);
	return this.voltageLevel;
}

int Battery::GetPin() {
	return this.pin;
}
		
void Battery::SetPin(int Pin) {
	this.pin = Pin;
}	

