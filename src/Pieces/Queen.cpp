#include "Pieces/Queen.hpp"

/* Constructors */
Queen::Queen(PieceColor color, Board * board) : Piece("♛", color, board) {};

/* Methods */
bool Queen::canMove(int x, int y, int new_x, int new_y)
{
    return false;
}

bool Queen::canEat(int x, int y, int other_x, int other_y)
{
    return false;
}

std::vector<std::pair<int, int>> Queen::whereCanMove(int x, int y)
{
    return {};
}
