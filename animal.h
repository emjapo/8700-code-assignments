#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal {
   private:
    std::string name;
    virtual void speak( std::ostream& out) const = 0;

   public:
    // virtual ~Animal() { totalAnimals--; };
    virtual Animal* clone(std::string newName) const = 0;
    virtual void setName(std::string newName) = 0;
    virtual std::string getName() = 0;
    virtual int getCount() = 0;

    /// std stream interface
    friend std::ostream& operator<<( std::ostream& out, const Animal& b )
    {
        b.speak( out );
        return out;
    }
};

#endif