#ifndef PLAYERPERSON_H
#define PLAYERPERSON_H
#include "personages.h"
#include <iostream>

class playerperson : public Personages
{
    friend class game;

protected:
    int totaal =100;
    int playerspeed=totaal-playerspeed;
    int playerstrength = totaal-playerstrength;
    int playerstamina = totaal - playerstamina;

public:
    playerperson(int pllife,int plspeed, int plstrength, int plstamina);   //specifc constructor

    void setplayerspeed(int setplayerspeed){playerspeed = setplayerspeed;}
    int getplayerspeed(){return playerspeed;}

    void settotaal(int settotaal){settotaal= this->totaal;}

    //int getplayerspeed(){this->playerspeed;}

    void setstats(std::string playername, int statsspeed, int statsstrength, int statsstamina)
    {
        statsspeed = playerspeed;
        statsstrength = playerstrength;
        statsstamina = playerstamina;

        std::cout<<playername<<"you have"<<totaal<<"to divide over your skills."<<std::endl;
        std::cout<<"speed:";
        std::cin>>this->playerspeed;
        std::cout<<"you have"<<totaal<<"skillpoints left"<<std::endl;

        std::cout<<"strength:";
        std::cin>>this->playerstrength;
        std::cout<<"you have"<<totaal<<"skillpoints left"<<std::endl;

        std::cout<<"stamina:";
        std::cin>>this->playerstamina;
        std::cout<<"you have"<<totaal<<"skillpoints left"<<std::endl;


    }


    void playstats()
    {
       std::cout<<"these are your stats"<<std::endl;
       std::cout<<"life:"<<getlife()<<std::endl;
       std::cout<<"speed:"<<this->playerspeed<<std::endl;
       std::cout<<"strenght:"<<this->playerstrength<<std::endl;
       std::cout<<this->playerstamina<<std::endl;
    }

};

#endif // PLAYERPERSON_H
