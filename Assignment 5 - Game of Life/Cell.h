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
    sf::Shape Draw(int size);
    Vector2 position = Vector2(0, 0);

private:
};


#endif //ASSIGNMENT_5___GAME_OF_LIFE_CELL_H
