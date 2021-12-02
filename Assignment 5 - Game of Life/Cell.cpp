//
// Created by wridz on 24/11/2021.
//

#include <iostream>
#include "Cell.h"

Cell::Cell()
: position(0, 0), isAlive(false)
{
}

Cell::~Cell() {

}

sf::RectangleShape Cell::Draw(int size) {
    sf::Vector2f cellSize(size, size);
    sf::RectangleShape shape(cellSize);
    Vector2 drawPosition = position * size;
    shape.setPosition(drawPosition.GetX(), drawPosition.GetY());
    shape.setFillColor(GetColour());
    return shape;
}

sf::Color Cell::GetColour() {
    if(isAlive){
        return sf::Color::Red;
    }else{
        return sf::Color::White;
    }
}
