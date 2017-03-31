#include "Dragon.h"
#include <iostream>

Dragon::Dragon(): Enemy{150, 20, 20} {}

void Dragon::print() {
    cout << "D" << endl;
}