#ifndef KARAKTERS_H
#define KARAKTERS_H
#include <iostream>
#include <string>

//using namespace std;

class karakters
{
public:
    karakters(); //constructor
    ~karakters(){} //destructor

    //setter
    void setname(std::string na){name = na;} //change variable
    void sethealth(int he){health = he;}
    void setstrength(int st){strength = st;}
    void setspeed(int sp){speed = sp;}
    virtual int pakslaag() = 0;
    //getter
    std::string getname(){return name;}
    int gethealth(){return health;}
    int getstrengt(){return strength;}
    int getspeed(){return speed;}

private:
    std :: string name;        // Member variable
    int health = 0;
    int strength = 0;
    int speed = 0;

};

#endif // KARAKTERS_H
