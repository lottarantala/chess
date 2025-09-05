#pragma once

#include "ChessPiece.hpp"

class Pawn : ChessPiece
{
    bool isLegalMove(Position startPosition, Position endPosition) const override;
};