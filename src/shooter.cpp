//shooter.cpp
#include "shooter.h"


Roll* Shooter::throw_die(Die& a,Die& b)
    {
        Roll* rolledShot = new Roll(a,b);

        rolledShot->roll_die();

        rolls.push_back(rolledShot);

        return rolledShot;

    }
    
Shooter::~Shooter() {
  for (Roll* roll : rolls) {
    delete roll;
  }
}

std::ostream& operator<<(std::ostream& out,const Shooter& shooter) {
  for (Roll* roll : shooter.rolls) {
    out << roll->rolled_value() << "\n";
  }
  return out;
}
//: Roll.roll_die() ;//new Roll.Roll(Die& a,Die& b);