#include "Pieces/Knight.hpp"

/* Constructors */
Knight::Knight(PieceColor color, Board * board) : Piece("♞", color, board) {};

/* Methods */
bool Knight::canMove(int x, int y, int new_x, int new_y)
{
    return false;
}

bool Knight::canEat(int x, int y, int other_x, int other_y)
{
    return false;
}

std::vector<std::pair<int, int>> Knight::whereCanMove(int x, int y)
{
    return {};
}
