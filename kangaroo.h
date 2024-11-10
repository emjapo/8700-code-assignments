// Author: Emily Port
#ifndef KANGAROO_H
#define KANGAROO_H

#include "animal.h"

class Kangaroo : public Animal {
   private:
    static int totalKangaroos;
    std::string name;

   public:
    Kangaroo();
    Kangaroo(std::string name);
    ~Kangaroo();
    Animal* clone(std::string newName) const override;
    void setName(std::string newName) override;
    std::string getName() override;
    int getCount() override { return totalKangaroos; };
    std::string getType() override;

    void speak( std::ostream& out) const override;

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Kangaroo& a);
};

#endif