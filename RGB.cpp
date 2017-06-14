#include "Arduino.h"
#include "RGB.h"

//#define red_pin  11
//#define green_pin 10
//#define blue_pin 9
#define red_pin  6
#define green_pin 5
#define blue_pin 3

// define a function that lets you set the pins to the 
void RGD::setPins(int red, int green, int blue){
	
	r= red;
	b= blue;
	g= green;
}
// define a function that lets you know what pins are currently set
void RGD::getPins(){
	
	Serial.println(r);
	Serial.print(',');
	Serial.print(g);
	Serial.print(',');
	Serial.println(g);
	
}


void RGB::customColor(int red,int green, int blue){
	r = red;
	g = green;
	b =blue;
	
	analogWrite(red_pin, r);
	analogWrite(green_pin, g);
	analogWrite(blue_pin, b);
}

void RGB::red(){
	analogWrite(red_pin, 0);
	analogWrite(green_pin, 255);
	analogWrite(blue_pin, 255);

}

void RGB::green(){
	analogWrite(red_pin, 255);
	analogWrite(green_pin, 255);
	analogWrite(blue_pin, 0);
}

void RGB::blue(){
	analogWrite(red_pin, 255);
	analogWrite(green_pin, 0);
	analogWrite(blue_pin, 255);

}
