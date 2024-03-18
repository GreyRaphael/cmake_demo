#include <calc/basic.h>
#include <spdlog/spdlog.h>

int main(int argc, char const *argv[]) {
    spdlog::debug("MyAdd, {}", myadd(100, 200));
    spdlog::info("MySub, {}", mysub(100, 200));
    spdlog::warn("MyMul, {}", mymul(100, 200));
    spdlog::error("MyDiv, {}", mydiv(100, 200));

    return 0;
}