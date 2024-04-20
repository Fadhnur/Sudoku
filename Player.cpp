#include "Player.h"

void Player::setUsername(std::string name){
	username = name;
}

void Player::setWinCount(){
	winCount++;
}

std::string Player::getUsername(){
	return username;
}

int Player::getWinCount(){
	return winCount;
}
