//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_DECORATOR_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_DECORATOR_H

#include "NPC.h"

class Decorator : public NPC{
private:
    NPC* theNPC;
public:
    Decorator(NPC* npc);
    virtual ~Decorator();
    virtual void Render();
};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_DECORATOR_H
