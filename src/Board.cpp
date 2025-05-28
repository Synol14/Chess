#include "Board.hpp"
#include "Pieces/Pieces.hpp"
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
    // Pawns placements
    for (int x = 0; x < 8; x++)
    {
        this->pieces[x][1] = new Pawn(BLACK, this);
        this->pieces[x][6] = new Pawn(WHITE, this);
        if (x == 0 || x == 7)
        {
            this->pieces[x][0] = new Rook(BLACK, this);
            this->pieces[x][7] = new Rook(WHITE, this);
        }
        if (x == 1 || x == 6)
        {
            this->pieces[x][0] = new Knight(BLACK, this);
            this->pieces[x][7] = new Knight(WHITE, this);
        }
        if (x == 2 || x == 5)
        {
            this->pieces[x][0] = new Bishop(BLACK, this);
            this->pieces[x][7] = new Bishop(WHITE, this);
        }
    }
    this->pieces[3][0] = new Queen(BLACK, this);
    this->pieces[3][7] = new Queen(WHITE, this);
    this->pieces[4][0] = new King(BLACK, this);
    this->pieces[4][7] = new King(WHITE, this);
}

std::string Board::toString()
{
    std::string output = "\n        A     B     C     D     E     F     G     H\n\n";

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