#ifndef NINJA_H
#define NINJA_H
#include "enemy.h"

class Ninja : public Enemy
{
public:
    Ninja();
    void attack(int force);

    int fight(int forcea =0 , int forceb= 10)               //default values in function definition
    {
        int result =0;
        result = forcea -rand()%60 +40;
        std::cout<<"I have trained a loth, im strong, my power is "<<forcea<<std::endl;
        result = forcea - forceb;
        return result;
    }

    //int setslap(int setslap){slap = setslap;}
    //int setskick(int setkick){kick = setkick;}
    int setninjaforce(int setninjaforce){this->ninjaforce = setninjaforce;}
    ~Ninja(){std::cout<<"i lost"<<std::endl;}                                   //destructor
protected:
   int slap;
   int kick;
   int ninjaforce;

};

#endif // NINJA_H
