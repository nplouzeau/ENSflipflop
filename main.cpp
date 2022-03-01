#include <iostream>
#include "flipflop.h"

int main() {
    std::cerr << "Hello, FlipFlop!" << std::endl;

    FlipFlop f;

    std::cerr << "Appel de toggle() trois fois" << std::endl;
    f.toggle();
    f.toggle();
    f.toggle();
    return 0;
}
