#ifndef PERSONAGES_H
#define PERSONAGES_H
#include <string.h>
#include <iostream>

class Personages        // base class
{
public:
    Personages(int life,int speed, int strength, int stamina );     //specific constructor
    ~Personages(){}

    //virtual void fightpower() = 0; // makes it abstract base class + virtual function

    //-------setters-------------------------                       //getters and setters
    void setlife(int setlife){life = setlife;}
    void setspeed(int setspeed){speed= setspeed;}
    void setstrength(int setstrenght){strength = setstrenght;}
    void setstamina(int setstamina){stamina = setstamina;}

    //----getters-----------------------------
    int getlife(){return this->life;}
    int getspeed(){return this->speed;}
    int getstrength(){return this->strength;}
    int getstamina(){return this->stamina;}
    std:: string getname(){return this->name;}


    protected:
    int life = 100;
    int speed = 0;
    int strength = 0;
    int stamina = 0;
    std::string name;

};

#endif // PERSONAGES_H
