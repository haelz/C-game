#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include "personages.h"
#include "bear.h"


class Enemy : public Personages
{
public:
    Enemy(int force);                                   //specific constructor

     virtual int fight(int forcea,int forceb)=0;    //member function

//int getforce()const{return this->force;}
 //int force;

protected:
    int force;
};

#endif // ENEMY_H
