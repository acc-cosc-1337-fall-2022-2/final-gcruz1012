//header
#include <stdlib.h>

#ifndef DIE_H
#define DIE_H

class Die
{

public:

    // Randomly assign a value to roll_value in range of 1-6
    void roll();

    //Returns roll_value
    int rolled_value() const;

private:
    //stores random value (1-6)
    int roll_value;

    //Die sides, initialized to 6
    int sides{6};

};

#endif