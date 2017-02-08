
#include "gestionMotors.h"



#define PID_MOT_RATIO 1.0 //MUDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARRRRRRRRRRRRRRRRRR 


// ====================================
//		    Initialisation
// ====================================	
Motor motorA(enMotorA, pinMotorA);
Motor motorB(enMotorB, pinMotorB);
Motor motorC(enMotorC, pinMotorC);
Motor motorD(enMotorD, pinMotorD);

PID pidA(PMotorA);
PID pidA(PMotorB);
PID pidA(PMotorC);
PID pidA(PMotorD);



// ====================================
//				Methods
// ====================================

void GestionMotors::GestionMotors() : Motor motorA, Motor motorB, Motor motorC, Motor motorD, PID pidA, PID pidB, PID pidC, PID pidD{}

void GestionMotors::init(void){
	motorA.start();
	motorB.start();
	motorC.start();
	motorD.start();
	
	motorA.escCalibrate();
	motorB.escCalibrate();
	motorC.escCalibrate();
	motorD.escCalibrate();
	
}

void GestionMotors::setSpeed(uint8_t speedA, uint8_t speedB, uint8_t speedC, uint8_t speedD){
	motorA.setSpeed(speedA);
	motorB.setSpeed(speedB);
	motorC.setSpeed(speedC);
	motorD.setSpeed(speedD);
}

void GestionMotors::updateSpeed(void){
	float speedA = pidA.updatePID();
	float speedB = pidB.updatePID();
	float speedC = pidC.updatePID();
	float speedD = pidD.updatePID();
	
}

void GestionMotors::rising(void){
}

void GestionMotors::falling(void){
}

