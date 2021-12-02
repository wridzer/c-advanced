//
// Created by wridz on 24/11/2021.
//

#ifndef ASSIGNMENT_5___GAME_OF_LIFE_CELL_H
#define ASSIGNMENT_5___GAME_OF_LIFE_CELL_H

#include "Vector2.h"
#include <SFML/Graphics.hpp>

class Cell {
public:
    Cell();
    ~Cell();
    sf::RectangleShape Draw(int size);
    Vector2 position;
    sf::Color GetColour();
    bool isAlive;

private:
};


#endif //ASSIGNMENT_5___GAME_OF_LIFE_CELL_H
