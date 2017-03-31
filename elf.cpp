#include "elf.h"
#include "Enemy.h"
#include <iostream>

Elf::Elf(): Enemy{140, 30, 10} {}

Elf::~Elf() {}

void Elf::print() {
    cout << "E" << endl;
}
