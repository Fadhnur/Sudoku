#pragma once
class Cell{
	private:
		char value;
		bool fixed;

	public:
		Cell();
		int getValue();
		void setValue(int val);
		bool isFixed();
		void setFixed(bool fix);

};

