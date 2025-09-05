#pragma once

#include "ChessPiece.hpp"

#include <cstdint>
#include <vector>

enum class SquareState
{
    Empty = 0,
    Occupied
};

struct Square
{
    SquareState state;
    ChessPiece* piece;
};

class Board
{
public:
    Board();

private:
    void initBoard();
    std::vector<std::vector<Square>> squares;
};