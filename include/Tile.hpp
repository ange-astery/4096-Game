#ifndef TILE_HPP
#define TILE_HPP

class Tile
{
    public:
        Tile(int value = 0);

        int getValue() const;
        void setValue(int value);

        bool getIsMerged() const;
        void setIsMerged(bool merged);

        bool isEmpty() const;

    private:
        int value_;
        bool isMerged_;
};

#endif