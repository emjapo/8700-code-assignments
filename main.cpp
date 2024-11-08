#include "zoo.h"
#include <vector>
#include <iostream>


int main() {
    // create vector of animal names that can be used to put in to animal constructors
    std::vector<std::string> animalNames = {"Paul", "Zoe", "Siri", "Kurtis", "Ziggy", "Jessie", "Noah", "Ellie", "Stripey", "Bigby", "Hank", "Honey", "Joey", "Callie", "Boots", "Shamu", "Clemmy", "Gray", "Aidan", "Molly", "Lizzy", "Margret", "Anna","Lauren", "Nala", "Simba", "Etsy", "Belle", "Minnie", "Kelsey", "Emil", "Benny"};


    Zoo* myZoo = Zoo::Instance();

    std::cout << myZoo->getName() << " is the name of the zoo\n";

    myZoo->animalFactory("Kangaroo", animalNames.back());
    animalNames.pop_back();

    return 0;
}