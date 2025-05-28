#pragma once

#include "Board.hpp"

class Queen : public Piece
{
public:
    /* Constructors */
    Queen(PieceColor color, Board * board);
    ~Queen() = default;

    /* Methods */
    bool canMove(int x, int y, int new_x, int new_y) override;
    bool canEat(int x, int y, int other_x, int other_y) override;
    std::vector<std::pair<int, int>> whereCanMove(int x, int y) override;
};