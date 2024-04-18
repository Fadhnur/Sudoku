#pragma once
#include <vector>
#include "Cell.h"

class Board{
	private:
        std::vector < std::vector < Cell >> cell;

	public:
        void setValue(int row, int col, int val);
        int getValue(int row, int col);

        void setFixed(int row, int col, bool fix);
        bool isFixed(int row, int col);

        bool isFull();

        void reset();
        
        std::vector<std::vector<Cell>> getBoard();
};

