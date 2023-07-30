//
#ifndef PHASE
#define PHASE
#include "die.h"
#include "roll.h"

enum RollOutcome : string
{
    Natural,
    Craps,
    Point,
    Seven_Out,
    NoPoint
};

class Phase {
public:
    virtual ~Phase() = default;
    virtual RollOutcome get_outcome(const Roll& roll) const = 0;
};



#endif