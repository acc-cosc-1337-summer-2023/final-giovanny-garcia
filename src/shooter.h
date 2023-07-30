
#ifndef SHOOTER
#define SHOOTER

#include <vector>
#include "roll.h"

class Shooter
{
public:
    Roll* throw_die(Die& d1, Die& d2);
    ~Shooter();
    void clear();
private:
    std::vector<Roll*> rolls;
};

#endif
