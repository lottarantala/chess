#pragma once

#include "ChessPiece.hpp"

class King : ChessPiece
{
    bool isLegalMove(Position startPosition, Position endPosition) const override;
};