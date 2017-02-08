
#include "pid.h"


// ====================================
//				Methods
// ====================================

void PID::PID(float P){
	this.P = P;
}

void PID::PID(float P, float I){
	this.P = P;
	this.I = I;
}

void PID::PID(float P, float I, float D, float periodUS){
	this.P = P;
	this.I = I;
	this.D = D;
}

float PID::updateP(float feedback){
	float error = this.reference - feedback;
	return this.P*error;
}

float PID::updatePI(float feedback){
	float error = this.reference - feedback;
	this.sumError += error;
	return this.P*error + this.I*this.sumError;
}

float PID::updatePID(float feedback){
	float error = this.reference - feedback;
	float diff = (error - previousError)/(this.periodUS*US_TO_S);
	this.sumError += error;
	return this.P*error + this.I*this.sumError + this.D*diff;
}
