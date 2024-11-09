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

Animal* Kangaroo::clone(std::string newName) const {
    std::cout << "Kangaroo "<<name <<" was cloned, and his clone is named "<< newName <<".\n";
    return new Kangaroo(newName);
};

void Kangaroo::setName(std::string newName) {
    name = newName;
};

std::string Kangaroo::getName() {
    return name;
}

std::string Kangaroo::getType() {
    return "kangaroo";
}

void Kangaroo::speak(std::ostream& out) const {
    out << "Hi, I am a kangaroo, my name is " << name << ", I grunt, and I eat grass.\n";
}