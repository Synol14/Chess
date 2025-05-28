#include "Pieces/King.hpp"

/* Constructors */
King::King(PieceColor color, Board * board) : Piece("♚", color, board) {};

/* Methods */
bool King::canMove(int x, int y, int new_x, int new_y)
{
    return false;
}

bool King::canEat(int x, int y, int other_x, int other_y)
{
    return false;
}

std::vector<std::pair<int, int>> King::whereCanMove(int x, int y)
{
    return {};
}
