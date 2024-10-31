#ifndef LEMUR_H
#define LEMUR_H

#include "animal.h"

class Lemur : public Animal {
   private:
    static int totalLemurs;
    std::string name;

   public:
    Lemur() { totalLemurs++; };
    ~Lemur() { totalLemurs--; };
    virtual Lemur* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    static int getCount() { return totalLemurs; };

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Lemur& a);
};


#endif