#include "Pieces/Pawn.hpp"

/* Constructors */
Pawn::Pawn(PieceColor color, Board * board) : Piece("♟", color, board) {};

/* Methods */
bool Pawn::canMove(int x, int y, int new_x, int new_y)
{
    if (x == new_x)
    {
        if (this->board->getPiece(new_x, new_y))
        {
            return false;
        }
        else if (y == 1 && new_y - y <= 2 && new_y - y > 0)
        {
            return true;
        }
        else if (y == 6 && y - new_y <= 2 && y - new_y > 0)
        {
            return true;
        }
    }
    return false;
}

bool Pawn::canEat(int x, int y, int other_x, int other_y)
{
    Piece * p = this->board->getPiece(other_x, other_y);
    if (p == nullptr) return false;
    if (p->getColor() == this->color) return false;

    if (std::abs(other_x - x) == 1)
    {
        if (y == 1 && other_y - y == 1)
        {
            return true;
        }
        else if (y == 6 && y - other_y == 1)
        {
            return true;
        }
    }
    return false;
}

std::vector<std::pair<int, int>> Pawn::whereCanMove(int x, int y)
{
    return {};
}
