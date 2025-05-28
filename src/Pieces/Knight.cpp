#include "Pieces/Knight.hpp"

/* Constructors */
Knight::Knight(PieceColor color, Board * board) : Piece("♞", color, board) {};

/* Methods */
bool Knight::canMove(int x, int y, int new_x, int new_y)
{
    if (this->board->getPiece(new_x, new_y) != nullptr)
    {
        return false;
    }
    return (std::abs(new_x - x) == 1 && std::abs(new_y - y) == 2) || (std::abs(new_x - x) == 2 && std::abs(new_y - y) == 1);
}

bool Knight::canEat(int x, int y, int other_x, int other_y)
{
    Piece * p = this->board->getPiece(other_x, other_y);
    if (p == nullptr) return false;
    if (p->getColor() == this->color) return false;

    return (std::abs(other_x - x) == 1 && std::abs(other_y - y) == 2) || (std::abs(other_x - x) == 2 && std::abs(other_y - y) == 1);
}

std::vector<std::pair<int, int>> Knight::whereCanMove(int x, int y)
{
    return {};
}
