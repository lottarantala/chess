#pragma once

#include "ChessPiece.hpp"

class Queen : ChessPiece
{
    bool isLegalMove(Position startPosition, Position endPosition) const override;
};