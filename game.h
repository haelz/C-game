#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
#include <personages.h>
#include <playerperson.h>
#include <enemy.h>

class Game
{
public:
    friend class playerperson;
    Game();                                             //default constructor

    void playgame()                                 //memberfunction
    {

        playerperson p(100,1,1,1);

        std::cout<<"What is your fighters name?\n";
        std::cin>>playername;
        p.setstats(playername,playerspeed,playerstrength,playerstamina); //put in player stats

        p.playstats();                                                  // print stats

        std::cout<<"Are you ready to fight?"<<std::endl;
        std::cout<<"your competitor = .."<<std::endl;




        //
       // Enemy * target = new ninja;
    }




private:
std::string playername;
int totaal = 100;

int playerspeed = 0;
int playerstrength =0;
int playerstamina =0;

};

#endif // GAME_H
