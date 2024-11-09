#include "tiger.h"

#include <iostream>

// define the static count
int Tiger::totalTigers = 0;

std::ostream& operator<<(std::ostream& out, const Tiger& a) {
    out << "There are " << a.totalTigers << " in the zoo.\n";
    return out;
};

Tiger::Tiger(/* args */) {
    totalTigers++;
    // totalAnimals++;
}

Tiger::Tiger(std::string name) : name(name) {
    totalTigers++;
    // totalAnimals++;
}

Tiger::~Tiger() {
    totalTigers--;
    // totalAnimals--;
}

Animal* Tiger::clone(std::string newName) const {
    std::cout << "Tiger "<<name <<" was cloned, and his clone is named "<< newName <<".\n";
    return new Tiger(newName);
};

void Tiger::setName(std::string newName) {
    name = newName;
};

std::string Tiger::getName() {
    return name;
}

void Tiger::speak(std::ostream& out) const {
    out << "Hi, I am a tiger, my name is " << name << ", I roar, and I eat meat.\n";
}