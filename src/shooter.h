//header

#include "roll.h"
#include<vector>
#include<iostream>

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter: public Roll
{

public: 

    
    Shooter(Die& a, Die& b): Roll(a,b){};
    
    Roll* throw_die(Die& a, Die& b);
  

    ~Shooter();
    

    friend std::ostream& operator<<(std::ostream& out,const Shooter& shooter);



private:
    std::vector<Roll*> rolls;


};

#endif