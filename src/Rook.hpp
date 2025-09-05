#pragma once

#include "ChessPiece.hpp"

class Rook : ChessPiece
{
    bool isLegalMove(Position startPosition, Position endPosition) const override;
};