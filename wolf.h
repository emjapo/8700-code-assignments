#ifndef WOLF_H
#define WOLF_H

#include "animal.h"

class Wolf : public Animal {
   private:
    static int totalWolfs;
    std::string name;

   public:
    Wolf() { totalWolfs++; };
    ~Wolf() { totalWolfs--; };
    virtual Wolf* clone() const = 0;
    virtual void setName(std::string newName) = 0;
    static int getCount() { return totalWolfs; };

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Wolf& a);
};

#endif