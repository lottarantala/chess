#pragma once

#include "ChessPiece.hpp"

class Knight : ChessPiece
{
    bool isLegalMove(Position startPosition, Position endPosition) const override;
};