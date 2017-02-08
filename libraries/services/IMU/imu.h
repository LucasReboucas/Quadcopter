
#ifndef IMU_H
#define IMU_H


// ====================================
//				Classes
// ====================================	

class IMU{
	private:
		bool actived = false;
		float x, y, z, pitch, roll, yaw;
		int pin;
	
	public:
		IMU(void){}				
		~IMU(void){}
		
		void init(void);

		void stop(void);

		float updatePosition(void);
		
		float getX(void);
		
		float getY(void);
		
		float getZ(void);
		
		float getPitch(void);
		
		float getRoll(void);
		
		float getYaw(void);
};		

#endif
