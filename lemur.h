#ifndef LEMUR_H
#define LEMUR_H

#include "animal.h"

class Lemur : public Animal {
   private:
    static int totalLemurs;
    std::string name;

   public:
    Lemur();
    Lemur(std::string name);
    ~Lemur();
    Lemur* clone() const override;
    void setName(std::string newName) override;
    std::string getName() override;
    int getCount() override { return totalLemurs; };

    void speak( std::ostream& out) const override;

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Lemur& a);
};

#endif