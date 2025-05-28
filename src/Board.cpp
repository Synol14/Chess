#include "Board.hpp"
#include "ANSI.h"

Board::Board() {
    for (int x = 0; x < 8; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            this->pieces[x][y] = nullptr;
        }
    }
}

/* Getters */
Piece * Board::getPiece(int x, int y)
{
    return this->pieces[x][y];
}

/* Setters */

/* Methods */
void Board::init()
{
}

std::string Board::toString()
{
    std::string output = "        A     B     C     D     E     F     G     H\n\n";

    for (int y = 0; y < 8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (x == 0) 
            {
                output += "      ";
            }
            if (x % 2 == y % 2)
            {
                output += ANSI_BG_GREEN;
            }
            else
            {
                output += ANSI_BG_BLUE;
            }
            output += "      ";
            if (x == 7) 
            {
                output += ANSI_RESET "\n";
            }
        }
        for (int x = 0; x < 8; x++)
        {
            if (x == 0) 
            {
                output += "  ";
                output += std::to_string(y+1);
                output += "   ";
            }
            if (x % 2 == y % 2)
            {
                output += ANSI_BG_GREEN;
            }
            else
            {
                output += ANSI_BG_BLUE;
            }
            if (this->pieces[x][y])
            {
                if (this->pieces[x][y]->getColor() == WHITE)
                {
                    output += ANSI_WHITE;
                }
                else
                {
                    output += ANSI_BLACK;
                }
                output += "  ";
                output += this->pieces[x][y]->getEmoji();
                output += "   ";
            }
            else
            {
                output += "      ";
            }
            if (x == 7) 
            {
                output += ANSI_RESET "   ";
                output += std::to_string(y+1);
                output += "\n";
            }
        }
        for (int x = 0; x < 8; x++)
        {
            if (x == 0) 
            {
                output += "      ";
            }
            if (x % 2 == y % 2)
            {
                output += ANSI_BG_GREEN;
            }
            else
            {
                output += ANSI_BG_BLUE;
            }
            output += "      ";
            if (x == 7) 
            {
                output += ANSI_RESET "\n";
            }
        }
    }
    output += "\n        A     B     C     D     E     F     G     H\n";

    return output;
}