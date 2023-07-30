#ifndef ROLL
#define ROLL
#include "die.h"

class Roll
{
public:
    Roll(Die& d1, Die& d2);
    void roll_die();
    int roll_value() const{return value;}
private:
    bool rolled = false;//initialize to false
    int value;
    Die& die1;
    Die& die2;
};
#endif