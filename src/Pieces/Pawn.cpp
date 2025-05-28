#include "Pieces/Pawn.hpp"

/* Constructors */
Pawn::Pawn(PieceColor color, Board * board) : Piece("♟", color, board) {};

/* Methods */
bool Pawn::canMove(int x, int y, int new_x, int new_y)
{
    return false;
}

bool Pawn::canEat(int x, int y, int other_x, int other_y)
{
    return false;
}

std::vector<std::pair<int, int>> Pawn::whereCanMove(int x, int y)
{
    return {};
}
