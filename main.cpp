#include "zoo.h"
#include <vector>
#include <iostream>
#include <sstream>
#include <string>


int main() {
    // create vector of animal names that can be used to put in to animal constructors
    std::vector<std::string> animalNames = {"Paul", "Zoe", "Siri", "Kurtis", "Ziggy", "Jessie", "Noah", "Ellie", "Stripey", "Bigby", "Hank", "Honey", "Joey", "Callie", "Boots", "Shamu", "Clemmy", "Gray", "Aidan", "Molly", "Lizzy", "Margret", "Anna","Lauren", "Nala", "Simba", "Etsy", "Belle", "Minnie", "Kelsey", "Emil", "Benny"};

    Zoo* myZoo = Zoo::Instance();

    std::cout << myZoo->getName() << " is the name of the zoo\n";


    std::string line;
    // Read each line from the standard input
    while (std::getline(std::cin, line)) {
        std::istringstream lineStream(line); // Create a string stream for the line
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
        if (number > 1) {
            
        }

        std::cout << animalType << ": " << number << "\n";

    }

    // get the animals to tell everything about themselves
    myZoo->rollCall();

    return 0;
}