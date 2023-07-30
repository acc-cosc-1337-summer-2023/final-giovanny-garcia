//
#include "point_phase.h"
#include "phase.h"

RollOutcome get_outcome(Roll*roll)
{
    if(roll->roll_value() == point)
    {
        return RollOutcome::Point;
    }
    else if (roll->roll_value() == 7)
    {
        return RollOutcome::Seven_Out;
    }
    else
    {
        return RollOutcome::NoPoint
    }
}