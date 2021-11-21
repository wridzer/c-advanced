//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_ORC_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_ORC_H

#include "NPC.h"
#include <iostream>

class Orc : public NPC{
public:
    Orc();
    ~Orc();

    void Render();
};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_ORC_H
