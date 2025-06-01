#pragma once
#include <vector>
#include "Cell.hpp"

class World {

    public:
        World(int width, int height);
        bool chooseWorldType(); // asks the user: preset or random
        void generate(bool usePreset); // creates the world accordingly
    private:
        std::vector<std::vector<Cell>> grid;
        int width, height;

};