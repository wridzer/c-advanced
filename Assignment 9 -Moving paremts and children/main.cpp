#include <iostream>
#include "Parent.h"

int main() {
    auto p1 = new Parent("Parent1");
    std::cout << "p1:" << *p1 << std::endl;

    auto p2 = new Parent(*p1); // roept de copy constructor aan
    std::cout << "p2:" << *p2 << std::endl;

    auto p3 = new Parent("Parent3");
    std::cout << "p3:" << *p3 << std::endl;

    *p3 = *p1; // roept de assignment operator aan
    std::cout << "p1:" << *p3 << std::endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}