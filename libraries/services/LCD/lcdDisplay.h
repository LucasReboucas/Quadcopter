
#ifndef LCDDISPLAY_H
#define LCDDISPLAY_H



// ====================================
//				 Constants
// ====================================

#define DISPLAY_PINS 2
#define DISPLAY_STRING1_ 16
#define DISPLAY_STRING2_ 6


// ====================================
//				Variables
// ====================================



// ====================================
//				 Structs
// ====================================
class LcdDisplay{
	private:
		bool actived = false;
		int Pins[6];
		int CursorPositionX, CursorPositionY;
		char String1[16];
		char String2[16];
		
		LiquidCrystal lcd(int pin0, int pin1, int pin2, int pin3, int pin4, int pin5);
		
	public:
		LcdDisplay(){}				
		~LcdDisplay(){}
		
		int Init ();

		int Stop ();
		
		void SetPins(int pin0, int pin1, int pin2, int pin3, int pin4, int pin5);
		
		void GetPositionX ();
		
		void GetPositionY ();
		
		void SetPosition00 ();
		
		void SetPositionY (int PositionX, int PositionY);
		
		char* GetArrayLine1 ();
		
		char* GetArrayLine2 ();
		
		void SetArrayLine1 (char* Array);
		
		void SetArrayLine2 (char* Array);
		
		void SetColor (int color); 	
};

#endif
