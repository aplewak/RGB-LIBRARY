#ifndef RGB_H
#define RGB_H


class RGB {

	private:
		int rp,gp,bp;
	public:
	
		void setPins(int,int,int);
		void getPins();
		void blue();
		void red();
		void green();
		void customColor(int,int,int);




};
#endif
