//
#include "die.h"
#include "roll.h"
#include "phase.h"

class Phase
{
    public:
    virtual RollOutcome(Roll*roll) get_outcome;
};
