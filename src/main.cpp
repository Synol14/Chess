#include <iostream>

#include "Board.hpp"

int main(int argc, char const *argv[])
{
    Board b;
    b.init();
    std::cout << b.toString() << std::endl;

    return 0;
}
