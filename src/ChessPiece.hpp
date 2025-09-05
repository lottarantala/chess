#pragma once

#include <vector>

enum class Color
{
    white = 0,
    black
};

class ChessPiece
{
public:
    ChessPiece(Color color);
    Color getColor() const;

private:
    Color color;
};