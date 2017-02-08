
#ifndef GESTIONMOTORS_H
#define GESTIONMOTORS_H

#include "..\services\battery\motor.h"


// ====================================
//				Defines
// ====================================	
#define enMotorA 1
#define enMotorB 2
#define enMotorC 3
#define enMotorD 4
#define pinMotorA 5
#define pinMotorB 6
#define pinMotorC 7
#define pinMotorD 8

#define PMotorA 1.0
#define PMotorB 1.0
#define PMotorC 1.0
#define PMotorD 1.0



// ====================================
//				Classes
// ====================================	
class GestionMotors{
	private:
		int test;
	
	public:
		GestionMotors(void) : Motor motorA, Motor motorB, Motor motorC, Motor motorD, PID pidA, PID pidB, PID pidC, PID pidD;				
		~GestionMotors(void);

		void init(void);

		void setSpeed(uint8_t speedA, uint8_t speedB, uint8_t speedC, uint8_t speedD);

		void updateSpeed(void);
		
		void rising(void);
 
		void falling(void);
};		


#endif
