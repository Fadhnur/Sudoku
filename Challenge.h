#pragma once
#include "Board.h"
#include <string>
class Challenge{
	public:
		virtual Board loadChallenge(std::string filename);
};

