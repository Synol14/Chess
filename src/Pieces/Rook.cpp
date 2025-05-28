#include "Pieces/Rook.hpp"

/* Constructors */
Rook::Rook(PieceColor color, Board * board) : Piece("♜", color, board) {};

/* Methods */
bool Rook::canMove(int x, int y, int new_x, int new_y)
{
    if (this->board->getPiece(new_x, new_y) != nullptr)
    {
        return false;
    }
    return x == new_x || y == new_y;
}

bool Rook::canEat(int x, int y, int other_x, int other_y)
{
    Piece * p = this->board->getPiece(other_x, other_y);
    if (p == nullptr) return false;
    if (p->getColor() == this->color) return false;
    
    return x == other_x || y == other_y;
}

std::vector<std::pair<int, int>> Rook::whereCanMove(int x, int y)
{
    return {};
}
