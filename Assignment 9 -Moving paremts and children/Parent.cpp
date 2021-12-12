#include <iostream>
#include "Parent.h"

Parent::Parent(std::string name) {
    this->name = name;
    std::string childName = "ChildOf" + name;
    this->child = new Child(childName);
}

Parent::Parent(const Parent& other) {
    std::cout << "Parent cctor" << std::endl;
    this->name = other.name;
    this->child = new Child(*other.child);
}

Parent::~Parent() {
    std::cout << "Parent dtor : " << this->name << std::endl;
    delete this->child;
}

Parent& Parent::operator=(const Parent& other) {
    std::cout << "Parent assignment" << std::endl;

    if (this == &other) return *this;

    this->name = other.name;
    delete this->child;
    this->child = new Child(*other.child);

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Parent& parent) {
    os << "parent name: " << parent.name << "," << *parent.child;
    return os;
}

Parent::Parent(Parent&& other) noexcept {
    std::cout << "MCTOR from Block '" << other.name << "' @" << &other << " to Block @" << this << std::endl;
    name = std::move(other.name);
    child = other.child;

    // 'reset' 't originele object
    other.name = "(nodata: has been moved)";
    other.child = nullptr;
}

Parent& Parent::operator=(Parent&& other){
    if (this != &other)
    {
        delete[] child;

        name = other.name;

        other.name = "(nodata: has been moved)";
        other.child = nullptr;
    }
    return *this;
}