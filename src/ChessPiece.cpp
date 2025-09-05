#include "ChessPiece.hpp"

ChessPiece::ChessPiece(Color color)
    : color{color}
{
};

Color ChessPiece::getColor() const
{
    return color;
}