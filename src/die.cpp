//cpp
#include "die.h"



//public:

    // Randomly assign a value to roll_value in range of 1-6
    void Die::roll()
    {
        roll_value = rand() % sides + 1;
    }

    //Returns roll_value
    int Die::rolled_value()
    const {
        return roll_value;
    }






