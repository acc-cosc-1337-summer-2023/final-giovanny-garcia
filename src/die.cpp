//
#include "die.h"
#include <ctime>

void Die::roll()
{
    srand((unsigned int) time(NULL));
    roll_value = (rand() % sides + 1);
}
