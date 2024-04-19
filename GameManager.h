#pragma once
#include "Board.h"
#include "Player.h"
#include "ChallengeFactory.h"
class GameManager{
	private:
		Board challenge;
		Player player;
		std::string level;
	
	public:
		
		GameManager(std::string lvl, Player plyr);

		void setChallenge();
		void setPlayer(Player plyr);

		Board getBoard();
		Player getPlayer();
		std::string getLevel();

		void insertNumber(int rowNumber, int colNumber, int value);
		void removeNumber(int rowNumber, int colNumber);

		bool isWin();
		bool isAvailable(int rowNumber, int colNumber, char value);

		void play();

};

