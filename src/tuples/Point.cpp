#include <Point.hpp>

Point::Point(void) : Tuple() {
    this->w = 1;
}

Point::Point(float x, float y, float z) : Tuple(x, y, z, 1) {}
