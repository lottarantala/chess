#pragma once

#include "ChessPiece.hpp"

class Bishop : ChessPiece
{
    bool isLegalMove(Position startPosition, Position endPosition) const override;
};