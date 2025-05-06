#pragma once
#include "BiomeType.hpp" // defined the enum here


class Creature;

class Cell{
    public:
        char getBiomeSymbol() const; // const = doesn't modify class state
        char Cell::getSymbol() const;

    private:
        int food;
        int water;
        BiomeType biome;
        Creature* occupant;

};