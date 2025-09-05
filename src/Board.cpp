#include "Board.hpp"

Board::Board()
    : squares{}
{}

void Board::initBoard()
{
    for(uint8_t i = 0; i < 8; i++)
    {
        std::vector<Square> row(8);
        for(uint8_t j = 0; j < 8; j++)
        {
            row[j] = Square{};
        }
        squares.push_back(row);
    }
}