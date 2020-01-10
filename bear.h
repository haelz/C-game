#ifndef BEAR_H
#define BEAR_H
#include "enemy.h"

class bear : public Enemy

{
public:
    bear(int force);                                                //specific constructor


    int fight(int forcea, int forceb)
    {
        int result=0;
        result =forcea - rand() %50 +50;
        std::cout<<"Grrr my grawl is so powerfull, i feel strong. my power is "<<forcea<<std::endl;
        result =forcea - forceb;


        return result;
    }

    int setbite(int setbite){bite = setbite;}
    int setscratch(int setscratch){scratch = setscratch;}
    int setsupergrowl(int setsupergrowl){supergrowl = setsupergrowl;}
    int setbearforce(int setbearforce){this->bearforce = setbearforce;}

    ~bear(){std::cout<<"i lost"<<std::endl;}                                //destructor
protected:
    int bite;
    int scratch;
    int supergrowl;
    int bearforce;

};

#endif // BEAR_H
