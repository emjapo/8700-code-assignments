// Author: Emily Port
#include "wolf.h"

#include <iostream>

// define the static count
int Wolf::totalWolfs = 0;

std::ostream& operator<<(std::ostream& out, const Wolf& a) {
    out << "There are " << a.totalWolfs << " in the zoo.\n";
    return out;
};

Wolf::Wolf(/* args */) {
    totalWolfs++;
    // totalAnimals++;
}

Wolf::Wolf(std::string name) : name(name) {
    totalWolfs++;
    // totalAnimals++;
}

Wolf::~Wolf() {
    totalWolfs--;
    // totalAnimals--;
}

Animal* Wolf::clone(std::string newName) const {
    std::cout << "Wolf "<<name <<" was cloned, and their clone is named "<< newName <<".\n";
    return new Wolf(newName);
};

void Wolf::setName(std::string newName) {
    name = newName;
};

std::string Wolf::getName() {
    return name;
}

std::string Wolf::getType() {
    return "wolf";
}

void Wolf::speak(std::ostream& out) const {
    out << "Hi, I am a wolf, my name is " << name << ", I howl, and I eat meat\n";
}