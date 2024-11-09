#include "zoo.h"

#include <bits/stdc++.h>

Zoo* Zoo::instance = 0;

Zoo* Zoo::Instance() {
    if (instance == 0) {
        instance = new Zoo;
    }
    return instance;
}

Zoo::Zoo() {
    name = "Winyah Zoo";
}

void Zoo::animalFactory(std::string type, std::string animalName) {
    // make the type lowercase so that way we can account forinput variations
    transform(type.begin(), type.end(), type.begin(), ::tolower);
    if (type == "kangaroo") {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Kangaroo>(animalName));

    } else if (type == "lemur") {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Lemur>(animalName));

    } else if (type == "serpent") {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Serpent>(animalName));

    } else if (type == "tiger") {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Tiger>(animalName));

    } else if (type == "wolf") {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Wolf>(animalName));

    } else {
        std::cout << "The type of animal was not found so no animal was created\n";
    }
};

void Zoo::addAnimal(std::unique_ptr<Animal> newAnimal) {

    animals.push_back(std::move(newAnimal));
};

Animal& Zoo::lastAnimal() {
    if (animals.size() > 0) {
        return *(animals.back());  // Return a reference
    }

    throw std::out_of_range("No animals are in the zoo :(\n");
}

void Zoo::rollCall() {
    for (int i = 0; i < animals.size(); i++) {
        std::cout << *animals[i];
    }
};

std::string Zoo::getName() {
    return name;
};

void Zoo::setName(std::string newName) {
    name = newName;
};