//
// Created by Wridzer on 21/11/2021.
//

#include "FarmerDecorator.h"

FarmerDecorator::FarmerDecorator(NPC *npc) : Decorator(npc){}

void FarmerDecorator::Render() {
    Decorator::Render();
    std::cout << " My occupation is farmer" << std::endl;
}

FarmerDecorator::~FarmerDecorator() {}