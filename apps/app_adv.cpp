#include <calc/advanced.h>
#include <fmt/core.h>

int main(int argc, char const *argv[]) {
    fmt::println("MySin, {}", mysin(3.1415926));
    fmt::println("MyCos, {}", mycos(3.1415926));
    return 0;
}