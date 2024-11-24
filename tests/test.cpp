#include <catch2/catch_test_macros.hpp>
#include <string>

#include "functions.h"

TEST_CASE( "Addition", "[add]" ) {
    REQUIRE(add<int>(0,0) == 0);
    REQUIRE(add<double>(1.5, 2.5)== 4);
    REQUIRE(add<double>(0.5, 1) == 1.5);
    REQUIRE(add<short>(1,4) == 5);
    REQUIRE(add<std::string>("Bernard", "Longho") == "BernardLongho");
}

TEST_CASE( "Subtraction", "[subtract]" ) {
    REQUIRE(subtract(1,3) == -2);
}