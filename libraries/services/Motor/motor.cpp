
#include "motor.h"


// ====================================
//				Methods
// ====================================


void Motor::Motor(int enablePin, int pin) {
	this.enablePin = enablePin;
	this.pin = pin;
	pinMode(this.enablePin, OUTPUT);
	pinMode(this.pin, OUTPUT);
}

void Motor::start(void) {
	this.actived = true;
	digitalWrite(this.pin, HIGH);
}

void Motor::escCalibrate(void) {
}

void Motor::stop(void) {
	this.actived = false;
	digitalWrite(this.pin, LOW);
}
		
uint8_t Motor::getSpeed(void){
	return this.speed;
}

void Motor::setSpeed(uint8_t speed){
	this.speed = speed;
	analogWrite(this.pin,speed);	
	
}

