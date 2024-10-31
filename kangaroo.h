#ifndef KANGAROO_H
#define KANGAROO_H

#include "animal.h"

class Kangaroo : public Animal {
   private:
    static int totalKangaroos;
    std::string name;

   public:
    Kangaroo() { totalKangaroos++; };
    ~Kangaroo() { totalKangaroos--; };
    virtual Kangaroo* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    static int getCount() { return totalKangaroos; };

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Kangaroo& a);
};

#endif