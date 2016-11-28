#include "Arduino.h"
#include "RGB.h"

//#define red_pin  11
//#define green_pin 10
//#define blue_pin 9
#define red_pin  6
#define green_pin 5
#define blue_pin 3


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