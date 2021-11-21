//
// Created by Wridzer on 21/11/2021.
//

#include "ShamanDecorator.h"

ShamanDecorator::ShamanDecorator(NPC *npc) : Decorator(npc){}

void ShamanDecorator::Render() {
    Decorator::Render();
    std::cout << " My occupation is shaman" << std::endl;
}

ShamanDecorator::~ShamanDecorator() {}