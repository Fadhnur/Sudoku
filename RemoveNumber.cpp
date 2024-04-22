#include "RemoveNumber.h"
RemoveNumber::RemoveNumber() {
	std::cout << "Object is created" << std::endl;
}

void RemoveNumber::undo() {
	std::cout << "Undo is called" << std::endl;
}

void RemoveNumber::execute() {
	std::cout << "Redo is called" << std::endl;
}

