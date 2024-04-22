#include "InsertNumber.h"

InsertNumber::InsertNumber(){
	std::cout << "Object is created form Insert Number" << std::endl;
}

void InsertNumber::undo(){
	std::cout << "Undo is called from Insert Number" << std::endl;
}

void InsertNumber::execute(){
	std::cout << "Redo is called from Insert Number" << std::endl;
}
