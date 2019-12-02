#ifndef ENEMY_H
#define ENEMY_H
#include "karakters.h"

class enemy : public karakters
{
public:
    enemy();

private:
    int kickdamage;
    int punchdamage;
    int slamdamage;
    int dropkickdamage;
};

#endif // ENEMY_H
