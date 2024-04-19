#pragma once
#include <string>

class Player{

	private:
		std::string username;
		int winCount;

	public:
		void setUsername(std::string name);
		void setWinCount();

		std::string getUsername();
		int getWinCount();
};

