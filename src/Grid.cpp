#include "Grid.hpp"
#include <vector>
#include "Enum.hpp"
#include "Tile.hpp"
#include <iostream>

Grid::Grid(int size) : size_(size)
{
    for (int i = 0; i < size; i++)
    {
        std::vector<Tile> tempTiles;
        for (int j = 0; j < size; j++)
        {
            Tile tile;
            tempTiles.push_back(tile);
        }
        tiles_.push_back(tempTiles);
    }
}

void Grid::display() const
{
    for (const auto& row : tiles_)
    {
        for (const auto& tile : row)
        {
            std::cout << tile.getValue() << ' ';
        }
        std::cout << '\n';
    }
}
