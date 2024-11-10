// Author: Emily Port
#include "zoo.h"

#include <bits/stdc++.h>

Zoo* Zoo::instance = 0;

// define the static count
int Zoo::animalCount = 0;

Zoo* Zoo::Instance() {
    if (instance == 0) {
        instance = new Zoo;
    }
    return instance;
}

Zoo::Zoo() {
    name = "Winyah Zoo";
}

int Zoo::totalAnimals() {
    return animalCount;
}

void Zoo::animalFactory(std::string type, std::string animalName) {
    // make the type lowercase so that way we can account forinput variations
    transform(type.begin(), type.end(), type.begin(), ::tolower);
    if (type.find("kangaroo") != std::string::npos) {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Kangaroo>(animalName));
        animalCount++;
    } else if (type.find("lemur") != std::string::npos) {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Lemur>(animalName));
        animalCount++;
    } else if (type.find("serpent") != std::string::npos) {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Serpent>(animalName));
        animalCount++;
    } else if (type.find("tiger") != std::string::npos) {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Tiger>(animalName));
        animalCount++;
    } else if (type.find("wolf") != std::string::npos) {
        // create the animal and add it to the list
        animals.push_back(std::make_unique<Wolf>(animalName));
        animalCount++;
    } else {
        std::cout << "The type of animal was not found so no animal was created\n";
    }
};

void Zoo::addAnimal(std::unique_ptr<Animal> newAnimal) {
    animals.push_back(std::move(newAnimal));
    animalCount++;
};

Animal& Zoo::lastAnimal() {
    if (animals.size() > 0) {
        return *(animals.back());  // Return a reference
    }

    throw std::out_of_range("No animals are in the zoo :(\n");
}

void Zoo::rollCall() {
    std::cout << "\nThere are " << animalCount << " animals in the zoo.\n";

    const std::type_info* currentType = nullptr;  // Initialize to nullptr

    if (animals.size() > 0) {
        currentType = &typeid(*animals[0]);
        std::cout << "\nThere are " << animals[0]->getCount() << " " << animals[0]->getType() << "(s).\n";
    }

    for (long unsigned int i = 0; i < animals.size(); i++) {
        if (currentType == nullptr || *currentType != typeid(*animals[i])) {
            currentType = &typeid(*animals[i]);
            std::cout << "\nThere are " << animals[i]->getCount() << " " << animals[i]->getType() << "(s).\n";
        }
        std::cout << *animals[i];
    }
};

std::string Zoo::getName() {
    return name;
};

void Zoo::setName(std::string newName) {
    name = newName;
};