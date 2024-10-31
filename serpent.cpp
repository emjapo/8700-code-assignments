#include "serpent.h"
#include <iostream>

// define the static count
int Serpent::totalSerpents = 0;

std::ostream& operator<<(std::ostream& out, const Serpent& a) {
    out << "There are " << a.totalSerpents << " in the zoo.\n";
    return out;
};

// Serpent::Serpent(/* args */) {
// }

// Serpent::~Serpent() {
// }