// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"
#include "Player.h"
#include "Command.h"
#include "InsertNumber.h"
#include "RemoveNumber.h"

int main(){
	Player a;
	Board* b;
	GameManager newGame("medium", a);
	Command *c = new InsertNumber;
	c->undo();
	c->execute();

	Command* d = new RemoveNumber;
	d->undo();
	d->execute();

	/*newGame.getBoard().printBoard();
	newGame.insertNumber(0,0,'9');
	std::cout << std::endl << std::endl;
	newGame.getBoard().printBoard();
	std::cout << std::endl << std::endl;
	newGame.removeNumber(0,0);
	newGame.getBoard().printBoard();*/
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
