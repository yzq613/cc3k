#ifndef CC3K_MERCHANT_H
#define CC3K_MERCHANT_H
#include "Enemy.h"
#include <iostream>

class Merchant : public Enemy {
        bool state;
    public:
        Merchant();
        ~Merchant();
        bool getState() const;
        void print() override ;
};


#endif