#include "World.hpp"
#include <iostream> 


World::World(int width, int height) 
    : width(width),height(height){
    bool usePreset = chooseWorldType();
    generate(usePreset);
};

bool World::chooseWorldType() {
    std::cout << "Use Preset World? (y/n)";
    char choice = '?';
    while (choice != 'y' && choice != 'n'){
        std::cin >> choice;
        choice = std::tolower(choice);

    }
    return (choice == 'y');
};