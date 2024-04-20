#include "GameManager.h"

GameManager::GameManager(std::string lvl, Player plyr){
	ChallengeFactory challengeFactory;
	level = lvl;
	player = plyr;
	challenge = challengeFactory.getChallenge(level)->loadChallenge();
	challenge.printBoard();
}