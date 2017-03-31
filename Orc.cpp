#include "Orc.h"
#include <iostream>

Orc::Orc(): Enemy{180, 30, 25}{}

Orc::~Orc() {}

void Orc::print() {
    cout << "O" << endl;
}