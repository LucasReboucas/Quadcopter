
#ifndef BATTERY_H
#define BATTERY_H


// ====================================
//				Classes
// ====================================	

class Battery{
	private:
		bool actived = false;
		float voltageLevel = 0;
		int pin;
	
	public:
		Battery(){}				
		~Battery(){}
		
		void Init();

		void Stop();

		float GetLevel();
		
		int GetPin();
		
		void SetPin(int PinAux);
};		

#endif
