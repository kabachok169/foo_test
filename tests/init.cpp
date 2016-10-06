#include "../include/foo.h"
#include <catch.hpp>

SCENARIO("foo: test", "[testing]") {
	int a = 5;
	REQUIRE(foo(a) = 50);
	REQUIRE(foo(2) = 20)
}
