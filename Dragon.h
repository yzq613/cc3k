#ifndef CC3K_DRAGON_H
#define CC3K_DRAGON_H
#include "enemy.h"

class Item;
class Dragon: public Enemy {
    Item *dhoard;
public:
    Dragon();
    ~Dragon();
    int getgold();
    Item* getdhoard();
    void print() override;
};

#endif
