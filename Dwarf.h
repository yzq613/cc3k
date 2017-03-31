#ifndef _DWARF_H_
#define _DWARF_H_
#include "Enemy.h"

class Dwarf: public Enemy{
public:
    Dwarf();
    ~Dwarf();
    void print() override;
};


#endif
