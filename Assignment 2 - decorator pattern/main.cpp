#include <iostream>

#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "FarmerDecorator.h"
#include "ShamanDecorator.h"
#include "SoldierDecorator.h"

int main() {
    NPC* baseElfNPC = new Elf();
    baseElfNPC->Render();
    NPC* baseOrcNPC = new Orc();
    baseOrcNPC->Render();

    NPC* NPCWithJob = new FarmerDecorator(new Elf);
    NPCWithJob->Render();

    NPC* NPCThatDoesEverythingForSomeReason = new SoldierDecorator(
            new ShamanDecorator(
                    new FarmerDecorator(
                            new Elf()
                            )
                    )
            );
    NPCThatDoesEverythingForSomeReason->Render();

    delete baseElfNPC;
    delete baseOrcNPC;
    delete NPCWithJob;
    delete NPCThatDoesEverythingForSomeReason;

    return 0;
}
