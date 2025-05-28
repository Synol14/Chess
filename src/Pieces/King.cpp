#include "Pieces/King.hpp"

/* Constructors */
King::King(PieceColor color, Board * board) : Piece("♚", color, board) {};

/* Methods */
bool King::canMove(int x, int y, int new_x, int new_y)
{
    if (this->board->getPiece(new_x, new_y))
    {
        return false;
    }
    int dx = new_x - x;
    int dy = new_y - y;
    return (dx >= -1 && dx <= 1 && dy >= -1 && dy <= 1);
}

bool King::canEat(int x, int y, int other_x, int other_y)
{
    Piece * p = this->board->getPiece(other_x, other_y);
    if (p == nullptr) return false;
    if (p->getColor() == this->color) return false;

    int dx = other_x - x;
    int dy = other_y - y;
    return (dx >= -1 && dx <= 1 && dy >= -1 && dy <= 1);
}

std::vector<std::pair<int, int>> King::whereCanMove(int x, int y)
{
    return {};
}
