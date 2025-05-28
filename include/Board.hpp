#pragma once

#include <string>
#include <vector>

typedef enum {
    WHITE,
    BLACK
} PieceColor;

class Board;

class Piece
{
protected:
    std::string emoji;
    PieceColor color;
    Board * board;

public:
    /* Contructors */
    Piece(std::string emoji, PieceColor color, Board * board) : emoji(emoji), color(color), board(board) {};
    virtual ~Piece() = default;

    /* Getters */
    std::string getEmoji() { return this->emoji; };
    PieceColor getColor() { return this->color; };

    /* Setters */

    /* Methods */
    virtual bool canMove(int x, int y, int new_x, int new_y) = 0;
    virtual bool canEat(int x, int y, int other_x, int other_y) = 0;    
    virtual std::vector<std::pair<int, int>> whereCanMove(int x, int y) = 0;
};

class Board
{
private:
    Piece * pieces[8][8];    

public:
    /* Contructors */
    Board();
    ~Board() = default;

    /* Getters */
    Piece * getPiece(int x, int y);

    /* Setters */

    /* Methods */
    void init();
    std::string toString();
};