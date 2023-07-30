//
#include "shooter.h"
#include "roll.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Roll* Shooter::throw_die()
{
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;

    Roll* roll = new Roll(die1, die2, total);

    rolls.push_back(roll);

    return roll;
}

void Shooter::clear()
{
    for(Roll* roll : rolls)
    {
        delete roll;
    }
    rolls.clear;
}