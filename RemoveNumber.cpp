#include "RemoveNumber.h"
RemoveNumber::RemoveNumber() {
	std::cout << "Object is created from Remove Number" << std::endl;
}

RemoveNumber::RemoveNumber(int row, int col, char val, Board* chlg) {
	challenge = chlg;
	rowNumber = row;
	colNumber = col;
	value = val;
}

void RemoveNumber::undo() {
	std::cout << "Undo is called from Remove Number" << std::endl;
}

void RemoveNumber::execute() {
	std::cout << "Redo is called from Remove Number" << std::endl;
}

