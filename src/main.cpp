#include <string>
#include <fmt/core.h>

int main(int argc, const char **argv) {
    std::string example = "World";
    fmt::print("Hello {}!\n", example);
    
    return 0;
}
