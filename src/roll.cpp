//
#include "roll.h"
#include "die.h"
#include <cstdlib>
#include <ctime>

void Roll::roll_die()
{
    die1.roll();
    die2.roll();
    value = die1.rolled_value() + die2.rolled_value();
    rolled = true;
}

Roll::Roll(Die& d1, Die& d2): die1(d1), die2(d2)
{
    srand(time(nullptr));
    rolled = false;
}
