#include "InsertNumber.h"

InsertNumber::InsertNumber(){
	std::cout << "Object is created" << std::endl;
}

void InsertNumber::undo(){
	std::cout << "Undo is called" << std::endl;
}

void InsertNumber::execute(){
	std::cout << "Redo is called" << std::endl;
}
