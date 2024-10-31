#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal {
   private:
    // static int totalAnimals;
    std::string name;

   public:
    // Animal() { totalAnimals++; };
    // ~Animal() { totalAnimals--; };
    virtual Animal* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    // static int getAnimalCount() { return totalAnimals; };

    // friend insertion operator
    // not sure this will need to stay since this is kinda an abstract class
    // friend std::ostream& operator<<(std::ostream& out, const Animal& a) {
    //     out << "There are " << totalAnimals << " in the zoo.\n";
    //     return out;
    // };
};

// define the static count
// int Animal::totalAnimals = 0;

#endif