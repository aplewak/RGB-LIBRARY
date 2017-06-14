#include "RGB.h"
#include "Arduino.h"
//TODO : DEFINE A FUNCTION TO DYNAMICALLY SET THE PWM PINS FOR THE RGB LED
void RGB::setPins(int redP,int greenP,int blueP){
	rp = redP;
	gp = greenP;
	bp = blueP;
	
}

//TODO : DEFINE A FUNCTION THAT DISPLAYS WHICH PINS ARE CURRENTLY SET FOR USE
void RGB::getPins(){

	Serial.println(rp);
	Serial.print(gp);
	Serial.print(bp);
}

//TODO : DEFINE A FUNCTION FOR THE COLOR RED
void RGB::red(){
	analogWrite(rp, 0);
	analogWrite(gp, 255);
	analogWrite(bp, 255);

}
//TODO : DEFINE A FUNCTION FOR THE COLOR GREEN
void RGB::green(){
	analogWrite(rp, 255);
	analogWrite(gp, 255);
	analogWrite(bp, 0);
}
//TODO : DEFINE A FUNCTION FOR THE COLOR BLUE
void RGB::blue(){
	analogWrite(rp, 255);
	analogWrite(gp, 0);
	analogWrite(bp, 255);

}
//TODO : DEFINE A FUNCTION THAT DEFINES A CUSTOM COLOR FOR CUSTOM R,G,B INPUTS
void RGB::customColor(int red,int green,int blue){
	analogWrite(rp, red);
	analogWrite(gp, green);
	analogWrite(bp, blue);
	
}
