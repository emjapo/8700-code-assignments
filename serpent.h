#ifndef SERPENT_H
#define SERPENT_H

#include "animal.h"

class Serpent : public Animal {
   private:
    static int totalSerpents;
    std::string name;

   public:
    Serpent() { totalSerpents++; };
    ~Serpent() { totalSerpents--; };
    virtual Serpent* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    static int getCount() { return totalSerpents; };

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Serpent& a);
};

#endif