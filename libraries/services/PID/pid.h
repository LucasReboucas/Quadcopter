
#ifndef PID_H
#define PID_H

#define US_TO_S 1.0e-6

// ====================================
//				Classes
// ====================================	

class PID{
	private:
		float reference;
		float P, I=0, D=0;
		float periodUS = 0;
		float previousError, sumError=0;
		
	public:
		PID(float P);
		PID(float P, float I=0);
		PID(float P, float I=0, float D=0, float period);				
		~PID();

		float updateP(float feedback);
		
		float updatePI(float feedback);
		
		float updatePID(float feedback);

};		

#endif
