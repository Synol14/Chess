#pragma once

#include "Board.hpp"

class Rook : public Piece
{
public:
    /* Constructors */
    Rook(PieceColor color, Board * board);
    ~Rook() = default;

    /* Methods */
    bool canMove(int x, int y, int new_x, int new_y) override;
    bool canEat(int x, int y, int other_x, int other_y) override;
    std::vector<std::pair<int, int>> whereCanMove(int x, int y) override;
};