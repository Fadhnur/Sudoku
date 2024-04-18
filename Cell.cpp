#include "Cell.h"

Cell::Cell() {
    value = 0;
    fixed = false;
}

int Cell::getValue()
{
    return value;
}

void Cell::setValue(int val){
    value = val;
}

bool Cell::isFixed(){
    return fixed;
}

void Cell::setFixed(bool fix){
    fixed = fix;
}
