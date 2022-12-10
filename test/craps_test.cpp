#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include <time.h>



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test Die roll returns value between 1 to 6")
{
	srand(time(NULL));
	Die rollTest;
	
	rollTest.roll();
	REQUIRE(rollTest.rolled_value() <= 6);
	REQUIRE(rollTest.rolled_value() >= 1);
	
	for(int i = 0; i < 10; i++)
	{
		rollTest.roll();
		REQUIRE(rollTest.rolled_value() <= 6);
		REQUIRE(rollTest.rolled_value() >= 1);
	}
}
TEST_CASE("Test Die Rolls return a value from 2 to 12")
{
	//Reseeds for true random
	srand(time(NULL));

	//Die instances 
	Die die1;
	Die die2;
	
	//Roll instance
	Roll Roll(die1,die2);

	//Roll dice(die1 and die 2)
	Roll.roll_die();
	
	//Check rolled value
	REQUIRE(Roll.roll_value()>=2);
	REQUIRE(Roll.roll_value()<=12);

	//loop 10 times: rolling and checking rolled values
	for(int i = 0; i<10;i++)
	{
		Roll.roll_die();
		REQUIRE(Roll.roll_value()>=2);
		REQUIRE(Roll.roll_value()<=12);
	}

}

