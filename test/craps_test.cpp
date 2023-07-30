#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify die rolls a value between 1-6")
{
	Die game;
	
	for(int i = 0; i < 10; i++)
	{
		game.roll();
		REQUIRE(game.rolled_value() >= 1);
		REQUIRE(game.rolled_value() <= 6);
	}
	
}

/*TEST_CASE("Die rolls return a value between 2 - 12")
{
	Die d1;
	Die d2;
	Roll::Roll(d1, d2) game;
	for(int i; i < 10; i++)
	{
		game.roll_die();
		REQUIRE(game.roll_value() >=2);
		REQUIRE(game.roll_value() <= 12);
	}
}*/
