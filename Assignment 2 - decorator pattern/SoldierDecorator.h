//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_SOLDIERDECORATOR_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_SOLDIERDECORATOR_H

#include "Decorator.h"
#include <iostream>

class SoldierDecorator : public Decorator{
public:
    SoldierDecorator(NPC* npc);
    virtual ~SoldierDecorator();
    void Render();
};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_SOLDIERDECORATOR_H
