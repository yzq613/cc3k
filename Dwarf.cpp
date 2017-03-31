
#include "Dwarf.h"
#include <iostream>

Dwarf::Dwarf(): Enemy{100, 20, 30}{}

Dwarf::~Dwarf() {}

void Dwarf::print() {
    cout << "D" << endl;
}