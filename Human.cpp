#include "Human.h"
#include <iostream>

Human::Human(): Enemy{140, 20, 20}{}

Human::~Human() {
}

void Human::print() {
    cout << "H" << endl;
}