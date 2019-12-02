#ifndef KARAKTERS_H
#define KARAKTERS_H
#include <iostream>
#include <string>

using namespace std;

class karakters
{
public:
    karakters(){string name; health = 0;  strength = 0; speed = 0;} //constructor
    ~karakters(); //destructor


    string get_name() {return name;} // member Function
    int get_health() {return health;}
    int get_strenght() {return strength;}
    int get_speed() {return speed;}

    protected:
    string name;        // Member variable
    int health = 0;
    int strength = 0;
    int speed = 0;
};

#endif // KARAKTERS_H
