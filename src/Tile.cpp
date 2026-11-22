#include "Tile.hpp"

Tile::Tile(int value) : value_(value), isMerged_(false)
{
}

int Tile::getValue() const
{
    return value_;
}

void Tile::setValue(int value)
{
    value_ = value;
}

bool Tile::getIsMerged() const
{
    return isMerged_;
}

void Tile::setIsMerged(bool merged)
{
    isMerged_ = merged;
}

bool Tile::isEmpty() const
{
    if (value_ == 0) {
        return true;
    } else {
        return false;
    }
}
