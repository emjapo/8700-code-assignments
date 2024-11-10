// Author: Emily Port
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "zoo.h"

/*
This program encapsulates most of the logic in the singleton class, Zoo. Animal is the abstract interface that the other animal classes inherit from.
The Zoo class has a Factory function that allows for animals to be created. These animals are added to a vector in the zoo since in real life you would
have to be in the zoo to see the animals. If there are more than one of the animals of a type needed, the rest of the animals of that type are cloned
using the clone function for that class. Then to get all of the info from the animals, the zoo does a roll call using the overloaded << operator to print
the information about each animal.
*/

int main() {
    // create vector of animal names that can be used to put in to animal constructors
    std::vector<std::string> animalNames = {"Paul", "Zoe", "Siri", "Kurtis", "Ziggy", "Jessie", "Noah", "Ellie", "Stripey", "Bigby", "Hank", "Honey", "Joey", "Callie", "Boots", "Shamu", "Clemmy", "Gray", "Aidan", "Molly", "Lizzy", "Margret", "Anna", "Lauren", "Nala", "Simba", "Etsy", "Belle", "Minnie", "Kelsey", "Emil", "Benny"};

    Zoo* myZoo = Zoo::Instance();

    std::cout << myZoo->getName() << " is the name of the zoo\n";

    std::string line;
    // Read each line from the standard input
    while (std::getline(std::cin, line)) {
        std::istringstream lineStream(line);  // Create a string stream for the line
        std::string animalType;
        std::string numberString;
        int number;

        // Process each word in the line
        lineStream >> animalType;
        lineStream >> numberString;
        // convert the string to an int
        number = std::stoi(numberString);

        // use the factory to create an animal and add it to the zoo
        myZoo->animalFactory(animalType, animalNames.back());
        animalNames.pop_back();

        // clone the other animals we need
        for (int i = 1; number > i; i++) {
            try {
                // get the last animal
                Animal& animalRef = myZoo->lastAnimal();
                // clone the animal
                Animal* clonedAnimal = animalRef.clone(animalNames.back());
                // convert raw pointer to unique pointer
                std::unique_ptr<Animal> uniqueAnimal(clonedAnimal);
                // add the animal to the zoo
                myZoo->addAnimal(std::move(uniqueAnimal));
                animalNames.pop_back();
            } catch (const std::out_of_range& e) {
                std::cerr << e.what() << std::endl;
            }
        }
    }

    // get the animals to tell everything about themselves
    myZoo->rollCall();

    return 0;
}