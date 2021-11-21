//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_SHAMANDECORATOR_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_SHAMANDECORATOR_H

#include "Decorator.h"
#include <iostream>

class ShamanDecorator : public Decorator{
public:
    ShamanDecorator(NPC* npc);
    virtual ~ShamanDecorator();
    void Render();
};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_SHAMANDECORATOR_H
