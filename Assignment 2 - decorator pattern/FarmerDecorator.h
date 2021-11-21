//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_FARMERDECORATOR_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_FARMERDECORATOR_H

#include "Decorator.h"
#include <iostream>

class FarmerDecorator : public Decorator{
public:
    FarmerDecorator(NPC* npc);
    virtual ~FarmerDecorator();
    void Render();
};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_FARMERDECORATOR_H
