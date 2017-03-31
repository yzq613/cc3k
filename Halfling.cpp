#include "Halfling.h"
#include <iostream>

Halfling::Halfling(): Enemy{100, 15, 20}{}

Halfling::~Halfling() {}

void Halfling::print() {
    cout << "L" << endl;
}