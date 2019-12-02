#ifndef KING_H
#define KING_H

#include "enemy.h"
#include <string>
#include <iostream>

class king : public enemy
{
    public:
    ~king();
    king()
    {
        this->setname("king");
        this->setspeed(100);
        this->sethealth(100);
        this->setstrength(100);
    }

    king(std::string na,int sp,int he, int st)
    {
        this->getname() = na
    }


};

#endif // KING_H
