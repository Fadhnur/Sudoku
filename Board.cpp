#include "Board.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void Board::setValue(int row, int col, int val){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        cell[row][col].setValue(val);
    }
}

int Board::getValue(int row, int col){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        return cell[row][col].getValue();
    }
    return 0; // Return 0 if coordinates are out of bounds
}

void Board::setFixed(int row, int col, bool fix){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        cell[row][col].setFixed(fix);
    }
}

bool Board::isFixed(int row, int col){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        return cell[row][col].isFixed();
    }
    return false; // Return false if coordinates are out of bounds
}

bool Board::isFull(){
    for (int i = 0; i < 9; ++i){
        for (int j = 0; j < 9; ++j){
            if (cell[i][j].getValue() == 0){
                return false;
            }
        }
    }
    return true;
}

void Board::reset(){
    for (int i = 0; i < 9; ++i){
        for (int j = 0; j < 9; ++j){
            cell[i][j].setValue(0);
            cell[i][j].setFixed(false);
        }
    }
}

std::vector<std::vector<Cell>> Board::getBoard() {
    return cell;
}

