#pragma once
#include <vector>
#include "Cell.h"
#include <iostream>

class Board{
	private:
        std::vector < std::vector < Cell >> cell;

	public:
        Board();
        void setValue(int row, int col, char val);
        char getValue(int row, int col);

        void setFixed(int row, int col, bool fix);
        bool isFixed(int row, int col);

        bool isFull();

        void reset();
        void printBoard();

        bool checkVertical(int colNumber, char value);
        bool checkHorizontal(int rowNumber, char value);
        bool checkRegional(int rowNumber, int colNumber, char value);
        
        std::vector<std::vector<Cell>> getBoard();
};

