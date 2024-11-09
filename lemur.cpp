#include "lemur.h"

#include <iostream>

// define the static count
int Lemur::totalLemurs = 0;

std::ostream& operator<<(std::ostream& out, const Lemur& a) {
    out << "There are " << a.totalLemurs << " in the zoo.\n";
    return out;
};

Lemur::Lemur(/* args */) {
    totalLemurs++;
    // totalAnimals++;
}

Lemur::Lemur(std::string name) : name(name) {
    totalLemurs++;
    // totalAnimals++;
}

Lemur::~Lemur() {
    totalLemurs--;
    // totalAnimals--;
}

Animal* Lemur::clone(std::string newName) const {
    std::cout << "Lemur "<<name <<" was cloned, and his clone is named "<< newName <<".\n";
    return new Lemur(newName);
};

void Lemur::setName(std::string newName) {
    name = newName;
};

std::string Lemur::getName() {
    return name;
}

void Lemur::speak(std::ostream& out) const {
    out << "Hi, I am a lemur, my name is " << name << ", I click, and I eat fruit.\n";
}