#include "lemur.h"
#include <iostream>

// define the static count
int Lemur::totalLemurs = 0;

std::ostream& operator<<(std::ostream& out, const Lemur& a) {
    out << "There are " << a.totalLemurs << " in the zoo.\n";
    return out;
};

// Lemur::Lemur(/* args */) {
// }

// Lemur::~Lemur() {
// }