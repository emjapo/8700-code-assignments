#include "tiger.h"
#include <iostream>

// define the static count
int Tiger::totalTigers = 0;

std::ostream& operator<<(std::ostream& out, const Tiger& a) {
    out << "There are " << a.totalTigers << " in the zoo.\n";
    return out;
};

// Tiger::Tiger(/* args */) {
// }

// Tiger::~Tiger() {
// }