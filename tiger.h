#ifndef TIGER_H
#define TIGER_H

#include "animal.h"

class Tiger : public Animal {
   private:
    static int totalTigers;
    std::string name;

   public:
    Tiger();
    Tiger(std::string name);
    ~Tiger();
    Animal* clone(std::string newName) const override;
    void setName(std::string newName) override;
    std::string getName() override;
    int getCount() override { return totalTigers; };

    void speak( std::ostream& out) const override;

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Tiger& a);
};

#endif