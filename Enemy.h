
#ifndef _ENEMY_H_
#define _ENEMY_H_
#include <string>
#include <iostream>
#include "enemy.h"
#include "Character.h"

using namespace std;


class Enemy :public Character{
    int hp,
    int atk,
    int def,
    int x,
    int y,
    public:
        Enemy(int hp, int atk, int def):Character(hp, atk, def){}
        ~Enemy();
        void attack();
        int getX();
        int getY();
        int setX(int x);
        int setY(int y);
    };
};


#endif

