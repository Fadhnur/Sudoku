#include "Board.h"

Board::Board(){
    cells.resize(9, std::vector<Cell>(9));
}

void Board::setValue(int row, int col, char val){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        cells[row][col].setValue(val);
    }
}


char Board::getValue(int row, int col){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        return cells[row][col].getValue();
    }
    return 0; // Return 0 if coordinates are out of bounds
}

void Board::setFixed(int row, int col, bool fix){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        cells[row][col].setFixed(fix);
    }
}

void Board::printBoard(){
    for (int i = 0; i < 9; ++i){
        if (i % 3 == 0 && i != 0){
            std::cout << "---------------------" << std::endl;
        }

        for (int j = 0; j < 9; ++j){
            if (j % 3 == 0 && j != 0){
                std::cout << "| ";
            }
            if (cells[i][j].getValue() == '0'){
                std::cout << ". ";
            }
            else{
                std::cout << cells[i][j].getValue() << " ";
            }
        }
        std::cout << std::endl;
    }
}

bool Board::isFixed(int row, int col){
    if (row >= 0 && row < 9 && col >= 0 && col < 9){
        return cells[row][col].isFixed();
    }
    return false; // Return false if coordinates are out of bounds
}

bool Board::isFull(){
    for (int i = 0; i < 9; ++i){
        for (int j = 0; j < 9; ++j){
            if (cells[i][j].getValue() == '0'){
                return false;
            }
        }
    }
    return true;
}

void Board::reset(){
    for (int i = 0; i < 9; ++i){
        for (int j = 0; j < 9; ++j){
            cells[i][j].setValue(0);
            cells[i][j].setFixed(false);
        }
    }
}

bool Board::checkVertical(int colNumber, char value){
    for (int i = 0; i < 9; ++i){
        if (cells[i][colNumber].getValue() == value){
            return false;
        }
    }
    return true;
}

bool Board::checkHorizontal(int rowNumber, char value){
    for (int i = 0; i < 9; ++i) {
        if (cells[rowNumber][i].getValue() == value) {
            return false;
        }
    }
    return true;
}

bool Board::checkRegional(int rowNumber, int colNumber, char value){


    int startRow = rowNumber - rowNumber % 3;
    int startCol = colNumber - colNumber % 3;

    for (int i = startRow; i < startRow + 3; ++i){
        for (int j = startCol; j < startCol + 3; ++j){
            if (cells[i][j].getValue() == value){
                return false;
            }
        }
    }
}

std::vector<std::vector<Cell>> Board::getBoard() {
    return cells;
}

