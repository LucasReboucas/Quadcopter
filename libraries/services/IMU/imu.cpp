
#include "imu.h"


// ====================================
//				Methods
// ====================================

void IMU::IMU() {
	this.actived = true;
}

void IMU::init() {
	this.actived = true;
}

void IMU::stop(void){
}

void IMU::updatePosition(void){
}
		
float IMU::getX(void){
	return IMU.x;
}
	
float IMU::getY(void){
	return IMU.y;
}
	
float IMU::getZ(void){
	return IMU.z;
}

float getPitch(void){
	return IMU.pitch;
}

float getRoll(void){
	return IMU.roll;
}

float getYaw(void){
	return IMU.yaw;
}
