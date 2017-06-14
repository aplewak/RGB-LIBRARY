#ifndef RGB_H
#define RGB_H

class RGB{

	private:
		int r,g,b;
		int rp,gp,bp;
	public:
		void red();
		void green();
		void blue();
		void customColor(int,int,int);
		void setPins(int,int,int);
		void getPins();
};
#endif
