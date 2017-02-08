
#ifndef MOTOR_H
#define MOTOR_H


// ====================================
//				Classes
// ====================================	

class Motor{
	private:
		bool actived = false;
		uint8_t speed = 0;
		int enablePin, pin;
	
	public:
		Motor(int enablePin, int pin);				
		~Motor();

		void start(void);
		
		void escCalibrate(void);

		void stop(void);

		void setSpeed(uint8_t speed);
		
		uint8_t getSpeed(void);
};		

#endif
