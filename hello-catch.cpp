#define CATCH_CONFIG_MAIN
#include "catch.hpp" 

/*
#include <iostream>

int main(void) {
	std::cout << "hello again bitch! \n";
	system("pause");
	return 0;
}
*/

TEST_CASE("hello catch!", "[fail case!]") {
	REQUIRE(false);
}