#ifndef _ELF_H_
#define _ELF_H_
#include "Enemy.h"

class Elf: public Enemy{
    public:
        Elf();
        ~Elf();
    void print() override;
};


#endif
