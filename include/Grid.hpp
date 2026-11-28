#ifndef GRID_HPP
#define GRID_HPP

#include <vector>
#include "Tile.hpp"
#include "Enum.hpp"

class Grid
{
public:
    explicit Grid(int size = 4);

    void display() const;
    bool canMove();
    void move(Direction direction);
    bool spawnTile();
    bool checkGridSpace();

private:
    int size_;
    std::vector<std::vector<Tile>> tiles_;
    void mergeTiles(Tile& t1, Tile& t2);
};

#endif
