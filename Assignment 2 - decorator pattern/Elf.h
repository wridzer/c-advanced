//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_ELF_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_ELF_H

#include "NPC.h"
#include <iostream>

class Elf : public NPC{
public:
    Elf();
    ~Elf();

    void Render();
};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_ELF_H
