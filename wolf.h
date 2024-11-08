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
    Wolf* clone() const override;
    void setName(std::string newName) override;
    std::string getName() override;
    int getCount() override { return totalWolfs; };

    void speak(std::ostream& out) const;

    // friend insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Wolf& a);
};

#endif