#include <iostream>
#include "Enum.hpp"
#include "Tile.hpp"
#include "Grid.hpp"
#include <vector>
#include <string>

#include "../include/Grid.hpp"

int main()
{
    std::cout << "No error" << std::endl;
    Grid grid(4);
    grid.display();
    return 0;
}
