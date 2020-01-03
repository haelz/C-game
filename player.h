#ifndef PLAYER_H
#define PLAYER_H
#include "karakters.h"

class Player : public karakters
{
public:
    Player();
private:
    int life = 0;
};

#endif // PLAYER_H
