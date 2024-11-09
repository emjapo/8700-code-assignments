#include "serpent.h"

#include <iostream>

// define the static count
int Serpent::totalSerpents = 0;

std::ostream& operator<<(std::ostream& out, const Serpent& a) {
    out << "There are " << a.totalSerpents << " in the zoo.\n";
    return out;
};

Serpent::Serpent(/* args */) {
    totalSerpents++;
    // totalAnimals++;
}

Serpent::Serpent(std::string name) : name(name) {
    totalSerpents++;
    // totalAnimals++;
}

Serpent::~Serpent() {
    totalSerpents--;
    // totalAnimals--;
}

Serpent* Serpent::clone() const {
    std::cout << "needs to be implemented\n";
    return new Serpent;
};

void Serpent::setName(std::string newName) {
    name = newName;
};

std::string Serpent::getName() {
    return name;
}

void Serpent::speak(std::ostream& out) const {
    out << "Hi, I am a serpent, my name is " << name << ", I hiss, and I eat rodents.\n";;
}