#include "zoo.h"

Zoo* Zoo::instance = 0;

Zoo* Zoo::Instance() {
    if (instance == 0) {
        instance = new Zoo;
    }
    return instance;
}
Zoo::Zoo(/* args */) {
}