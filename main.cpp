// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"
#include "Player.h"
#include "Easy.h"
#include "ChallengeLoader.h"

int main(){
 /*   Player p;
    GameManager newGame("easy", p);
    newGame.getBoard().printBoard();
    std::cout << "Hello World!\n";
    */
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distribution(1, 3);
	int randomNumber = distribution(gen);

	std::cout << randomNumber << std::endl;

	std::string challenge = std::to_string(randomNumber);
	std::string path = "E:/Repositories/Sudoku/Challenge/Easy/" + challenge + ".txt";

	ChallengeLoader a;
	a.readFileToBoard(path).printBoard();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
