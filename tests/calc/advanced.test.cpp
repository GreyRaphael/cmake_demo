#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <calc/advanced.h>
#include <doctest/doctest.h>

TEST_CASE("testing the myadd function") {
    // CHECK(mysin(3.1415926) == doctest::Approx(0).epsilon(0.01));
    CHECK(mysin(3.1415926) == doctest::Approx(-1).epsilon(0.01));
}

TEST_CASE("testing the mysub function") {
    REQUIRE(mycos(3.1415926) == doctest::Approx(-1).epsilon(0.01));  // allow for a 1% error
}
