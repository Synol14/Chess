#include "Pieces/Rook.hpp"

/* Constructors */
Rook::Rook(PieceColor color, Board * board) : Piece("♜", color, board) {};

/* Methods */
bool Rook::canMove(int x, int y, int new_x, int new_y)
{
    return false;
}

bool Rook::canEat(int x, int y, int other_x, int other_y)
{
    return false;
}

std::vector<std::pair<int, int>> Rook::whereCanMove(int x, int y)
{
    return {};
}
