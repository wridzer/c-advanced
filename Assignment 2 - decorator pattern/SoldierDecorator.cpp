//
// Created by Wridzer on 21/11/2021.
//

#include "SoldierDecorator.h"

SoldierDecorator::SoldierDecorator(NPC *npc) : Decorator(npc){}

void SoldierDecorator::Render() {
    Decorator::Render();
    std::cout << " My occupation is soldier" << std::endl;
}

SoldierDecorator::~SoldierDecorator() {}
