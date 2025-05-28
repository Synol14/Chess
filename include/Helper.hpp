#pragma once

#include <iostream>

#include "ANSI.h"

#define ANSI_BG_COLOR1 ANSI_BG_GREEN
#define ANSI_BG_COLOR2 ANSI_BG_BLUE

void displayChessBoars()
{
    std::cout << std::endl << std::endl;
    std::cout << "       A     B     C     D     E     F     G     H" << std::endl << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 1   " ANSI_BLACK ANSI_BG_COLOR2 "  ♜   " ANSI_BG_COLOR1 "  ♞   " ANSI_BG_COLOR2 "  ♝   " ANSI_BG_COLOR1 "  ♛   " ANSI_BG_COLOR2 "  ♚   " ANSI_BG_COLOR1 "  ♝   " ANSI_BG_COLOR2 "  ♞   " ANSI_BG_COLOR1 "  ♜   " ANSI_RESET "   1 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 2   " ANSI_BLACK ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_RESET "   2 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 3   " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "   3 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 4   " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "   4 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 5   " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "   5 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 6   " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "   6 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 7   " ANSI_WHITE ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_BG_COLOR2 "  ♟   " ANSI_BG_COLOR1 "  ♟   " ANSI_RESET "   7 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_RESET "     " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << " 8   " ANSI_WHITE ANSI_BG_COLOR1 "  ♜   " ANSI_BG_COLOR2 "  ♞   " ANSI_BG_COLOR1 "  ♝   " ANSI_BG_COLOR2 "  ♛   " ANSI_BG_COLOR1 "  ♚   " ANSI_BG_COLOR2 "  ♝   " ANSI_BG_COLOR1 "  ♞   " ANSI_BG_COLOR2 "  ♜   " ANSI_RESET "   8 " << std::endl;
    std::cout << "     " ANSI_RESET ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_BG_COLOR1 "      " ANSI_BG_COLOR2 "      " ANSI_RESET "     " << std::endl;
    std::cout << std::endl << "       A     B     C     D     E     F     G     H" << std::endl;
    std::cout << std::endl << std::endl;
}