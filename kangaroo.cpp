#include "kangaroo.h"
#include <iostream>

// define the static count
int Kangaroo::totalKangaroos = 0;

std::ostream& operator<<(std::ostream& out, const Kangaroo& a) {
    out << "There are " << a.totalKangaroos << " in the zoo.\n";
    return out;
};

// Kangaroo::Kangaroo(/* args */) {
// }

// Kangaroo::~Kangaroo() {
// }