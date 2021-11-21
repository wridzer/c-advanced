//
// Created by Wridzer on 21/11/2021.
//

#include "Decorator.h"

Decorator::Decorator(NPC* npc) {
    theNPC = npc;
}

void Decorator::Render(){
    theNPC->Render();
}

Decorator::~Decorator() {
    if(theNPC) delete theNPC;
}