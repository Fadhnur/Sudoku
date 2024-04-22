#include "RemoveNumber.h"
RemoveNumber::RemoveNumber() {
	std::cout << "Object is created from Remove Number" << std::endl;
}

void RemoveNumber::undo() {
	std::cout << "Undo is called from Remove Number" << std::endl;
}

void RemoveNumber::execute() {
	std::cout << "Redo is called from Remove Number" << std::endl;
}

