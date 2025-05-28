#pragma once

#include "Board.hpp"

class Pawn : public Piece
{
public:
    /* Constructors */
    Pawn(PieceColor color, Board * board);
    ~Pawn() = default;

    /* Methods */
    bool canMove(int x, int y, int new_x, int new_y) override;
    bool canEat(int x, int y, int other_x, int other_y) override;
    std::vector<std::pair<int, int>> whereCanMove(int x, int y) override;
};