#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
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
	
	for(int i = 0; i < 9; i++)
	{
		rollTest.roll();
		REQUIRE(rollTest.rolled_value() <= 6);
		REQUIRE(rollTest.rolled_value() >= 1);
	}
}
