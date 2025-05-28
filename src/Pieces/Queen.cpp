#include "Pieces/Queen.hpp"

/* Constructors */
Queen::Queen(PieceColor color, Board * board) : Piece("♛", color, board) {};

/* Methods */
bool Queen::canMove(int x, int y, int new_x, int new_y)
{
    if (this->board->getPiece(new_x, new_y))
    {
        return false;
    }

    return std::abs(new_x - x) == std::abs(new_y - y) || (x == new_x || y == new_y);
}

bool Queen::canEat(int x, int y, int other_x, int other_y)
{
    Piece * p = this->board->getPiece(other_x, other_y);
    if (p == nullptr) return false;
    if (p->getColor() == this->color) return false;

    return std::abs(other_x - x) == std::abs(other_y - y) || (x == other_x || y == other_y);
}

std::vector<std::pair<int, int>> Queen::whereCanMove(int x, int y)
{
    return {};
}
