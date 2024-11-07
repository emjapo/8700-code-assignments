#include "zoo.h"
#include "animal.h"
#include "kangaroo.h"
#include "lemur.h"
#include "serpent.h"
#include "tiger.h"
#include "wolf.h"
#include <vector>
#include <iostream>


int main() {
    // create vector of animal names that can be used to put in to animal constructors
    std::vector<std::string> animalNames = {"Paul", "Zoe", "Siri", "Kurtis", "Ziggy", "Jessie", "Noah", "Ellie", "Stripey", "Bigby", "Hank", "Honey", "Joey", "Callie", "Boots", "Shamu", "Clemmy", "Gray", "Aidan", "Molly", "Lizzy", "Margret", "Anna","Lauren", "Nala", "Simba", "Etsy", "Belle", "Minnie", "Kelsey", "Emil", "Benny"};

    Kangaroo newKangaroo;

    std::cout << "Kangaroo has " << newKangaroo.getCount() << std::endl;

    std::cout << newKangaroo;


    return 0;
}