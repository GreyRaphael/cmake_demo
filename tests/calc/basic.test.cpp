#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <calc/basic.h>
#include <doctest/doctest.h>

TEST_CASE("testing the myadd function") {
    CHECK(myadd(10, 20) == 30);
}

TEST_CASE("testing the mysub function") {
    CHECK(mysub(10, 20) == -10);
}

TEST_CASE("testing the mymul function") {
    CHECK(mymul(10, 20) == 200);
}

TEST_CASE("testing the mydiv function") {
    CHECK(mydiv(10, 20) == 0.5);
}
