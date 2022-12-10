//header
#include "die.h"

#ifndef ROLL_H
#define ROLL_H

class Roll: public Die
{

public:
    //with initializer list:initialize die1 and die2 (the Roll class variables)
    Roll(Die& a,Die& b): die1(a), die2(b) {};


    void roll_die();

    //return value
    int roll_value() const{return value;};

private:

    //Die references
    Die& die1;
    Die& die2;

    bool rolled = false;

    int value = die1.rolled_value() + die2.rolled_value();


};


#endif