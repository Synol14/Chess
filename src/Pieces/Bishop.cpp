#include "Pieces/Bishop.hpp"

/* Constructors */
Bishop::Bishop(PieceColor color, Board * board) : Piece("♝", color, board) {};

/* Methods */
bool Bishop::canMove(int x, int y, int new_x, int new_y)
{
    return false;
}

bool Bishop::canEat(int x, int y, int other_x, int other_y)
{
    return false;
}

std::vector<std::pair<int, int>> Bishop::whereCanMove(int x, int y)
{
    return {};
}
