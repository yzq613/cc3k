#ifndef _ORC_H_
#define _ORC_H_

#include "Enemy.h"

class Orc: public Enemy{
public:
    orc();
    ~orc();
    void print() override;
};

#endif
