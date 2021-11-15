#include <iostream>
#include "Bankrekening.h"

int main() {
    Bankrekening rekening = Bankrekening(1);

    rekening.AddTransaction("loon", 1500);
    rekening.AddTransaction("aardappels", -10);
    rekening.AddTransaction("huur", -600);
    rekening.AddTransaction("koffie", -300);
    rekening.AddTransaction("DUO", 300);

    std::cout << rekening << std::endl;
    return 0;
}
