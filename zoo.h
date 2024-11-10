// Author: Emily Port
#ifndef ZOO_H
#define ZOO_H

#include <memory>
#include <vector>

#include "animal.h"
#include "kangaroo.h"
#include "lemur.h"
#include "serpent.h"
#include "tiger.h"
#include "wolf.h"

class Zoo {
   private:
    Zoo();
    static Zoo* instance;
    std::vector<std::unique_ptr<Animal>> animals;
    std::string name;
    static int animalCount;

   public:
    static Zoo* Instance();
    static int totalAnimals();

    void animalFactory(std::string type, std::string animalName);
    void addAnimal(std::unique_ptr<Animal> newAnimal);
    Animal& lastAnimal();
    void rollCall();
    std::string getName();
    void setName(std::string newName);
};

#endif