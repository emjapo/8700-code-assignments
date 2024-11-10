// Author: Emily Port
#ifndef WOLF_H
#define WOLF_H

#include "animal.h"

class Wolf : public Animal {
   private:
    static int totalWolfs;
    std::string name;

   public:
    Wolf();
    Wolf(std::string name);
    ~Wolf();
    Animal* clone(std::string newName) const override;
    void setName(std::string newName) override;
    std::string getName() override;
    int getCount() override { return totalWolfs; };
    std::string getType() override;

    void speak( std::ostream& out) const override;

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Wolf& a);
};

#endif