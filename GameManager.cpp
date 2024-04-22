#include "GameManager.h"

GameManager::GameManager(std::string lvl, Player plyr){
	ChallengeFactory challengeFactory;
	level = lvl;
	player = plyr;
	challenge = challengeFactory.getChallenge(level)->loadChallenge();
}

void GameManager::setLevel(std::string lvl){
	ChallengeFactory challengeFactory;
	challenge = challengeFactory.getChallenge(level)->loadChallenge();
}

void GameManager::setPlayer(Player plyr){
	player = plyr;
}

Board GameManager::getBoard(){
	return challenge;
}

Player GameManager::getPlayer(){
	return player;
}

std::string GameManager::getLevel(){
	return level;
}

void GameManager::insertNumber(int rowNumber, int colNumber, char value){
		challenge.setValue(rowNumber, colNumber, value);
}

void GameManager::removeNumber(int rowNumber, int colNumber){
		challenge.setValue(rowNumber, colNumber, '0');
}

bool GameManager::isWin(){
	if (challenge.isFull() == true)
		return true;
	else
		return false;
}
