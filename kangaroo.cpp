#include "kangaroo.h"
#include <iostream>

// define the static count
int Kangaroo::totalKangaroos = 0;

std::ostream& operator<<(std::ostream& out, const Kangaroo& a) {
    out << "There are " << a.totalKangaroos << " in the zoo.\n";
    return out;
};


Kangaroo::Kangaroo(/* args */) {
    totalKangaroos++;
    // totalAnimals++;
}

Kangaroo::Kangaroo(std::string name) : name(name) {
    totalKangaroos++;
    // totalAnimals++;
}

Kangaroo::~Kangaroo() {
    totalKangaroos--;
    // totalAnimals--;
}

Kangaroo* Kangaroo::clone() const {
    std::cout << "needs to be implemented\n";
    return new Kangaroo;
};

void Kangaroo::setName(std::string newName){
    name = newName;
};

std::string Kangaroo::getName() {
    return name;
}

void Kangaroo::speak( std::ostream& out) const {
    std::cout << "need to implement\n";
};