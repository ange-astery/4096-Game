#include <iostream>
#include "Enum.hpp"
#include "Tile.hpp"

int main()
{
    Tile t1;
    Tile t2(2);

    std::cout << "t1 vide ? " << t1.isEmpty() << " | val: " << t1.getValue() << "\n";
    std::cout << "t2 vide ? " << t2.isEmpty() << " | val: " << t2.getValue() << "\n";

    t2.setValue(4);
    t2.setIsMerged(true);

    std::cout << "t2 apres fusion -> val: " << t2.getValue() << " | merged: " << t2.getIsMerged() << "\n";

    return 0;
}
