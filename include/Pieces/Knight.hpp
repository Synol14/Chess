#pragma once

#include "Board.hpp"

class Knight : public Piece
{
public:
    /* Constructors */
    Knight(PieceColor color, Board * board);
    ~Knight() = default;

    /* Methods */
    bool canMove(int x, int y, int new_x, int new_y) override;
    bool canEat(int x, int y, int other_x, int other_y) override;
    std::vector<std::pair<int, int>> whereCanMove(int x, int y) override;
};