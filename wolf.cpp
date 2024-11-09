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

Wolf* Wolf::clone() const {
    std::cout << "needs to be implemented\n";
    return new Wolf;
};

void Wolf::setName(std::string newName) {
    name = newName;
};

std::string Wolf::getName() {
    return name;
}

void Wolf::speak(std::ostream& out) const {
    out << "Hi, I am a wolf, my name is " << name << ", I howl, and I eat meat\n";
}