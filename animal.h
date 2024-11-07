#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal {
   private:
    std::string name;

   public:
    // virtual ~Animal() { totalAnimals--; };
    virtual Animal* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    static int totalAnimals;
    // static int getAnimalCount();

    // friend insertion operator
    // not sure this will need to stay since this is kinda an abstract class
    // friend std::ostream& operator<<(std::ostream& out, const Animal& a) {
    //     out << "There are " << totalAnimals << " in the zoo.\n";
    //     return out;
    // };
};

#endif