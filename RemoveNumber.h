#pragma once
#include "Command.h"
class RemoveNumber : public Command {
private:
	Board* challenge = NULL;
	int rowNumber = 0;
	int colNumber = 0;
	char value = '0';

public:
	RemoveNumber();
	void undo();
	void execute();
};

