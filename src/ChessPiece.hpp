#pragma once

#include <cstdint>
#include <vector>

struct Position
{
    uint8_t x;
    uint8_t y;
};

enum class Color
{
    white = 0,
    black
};

class ChessPiece
{
public:
    ChessPiece(Color color);
    virtual bool isLegalMove(Position startPosition, Position endPosition) const = 0;
    Color getColor() const;

private:
    Color color;
};