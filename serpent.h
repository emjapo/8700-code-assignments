#ifndef SERPENT_H
#define SERPENT_H

#include "animal.h"

class Serpent : public Animal {
   private:
    static int totalSerpents;
    std::string name;

   public:
    Serpent();
    Serpent(std::string name);
    ~Serpent();
    Serpent* clone() const override;
    void setName(std::string newName) override;
    std::string getName() override;
    int getCount() override { return totalSerpents; };

    void speak( std::ostream& out) const override;

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Serpent& a);
};
#endif