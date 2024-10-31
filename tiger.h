#ifndef TIGER_H
#define TIGER_H

#include "animal.h"

class Tiger : public Animal {
   private:
    static int totalTigers;
    std::string name;

   public:
    Tiger() { totalTigers++; };
    ~Tiger() { totalTigers--; };
    virtual Tiger* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    static int getCount() { return totalTigers; };

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Tiger& a);
};

#endif