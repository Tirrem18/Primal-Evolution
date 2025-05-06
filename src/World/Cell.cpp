#include "Cell.hpp"

char Cell::getBiomeSymbol() const {
    switch (biome) {
        case BiomeType::Grass:
        return food > 50 ? '#' : ',';
        case BiomeType::Desert: return '.';
        case BiomeType::Ocean: return '~';
        case BiomeType::River: return '=';
        case BiomeType::Rock: return 'O';
    default:
    return '?';//something went wrong
    }
};


char Cell::getSymbol() const {
    if (occupant) return 'C';
    return getBiomeSymbol();

}
