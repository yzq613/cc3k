#ifndef _HUMAN_H_
#define _HUMAN_H_
#include <iostream>
#include "Enemy.h"

class Human: public Enemy{
public:
    Human();
    ~Human();
    void print() override;
};

#endif
