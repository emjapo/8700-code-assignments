#include "wolf.h"
#include <iostream>

// define the static count
int Wolf::totalWolfs = 0;

std::ostream& operator<<(std::ostream& out, const Wolf& a) {
    out << "There are " << a.totalWolfs << " in the zoo.\n";
    return out;
};

// Wolf::Wolf(/* args */) {
// }

// Wolf::~Wolf() {
// }