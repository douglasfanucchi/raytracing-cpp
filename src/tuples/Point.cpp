#include <Point.hpp>

Point::Point(void) : Tuple() {
    this->w = 1;
}

Point::Point(float x, float y, float z) : Tuple(x, y, z, 1) {}

Vector Point::operator-(const Point &p) const {
    Vector result;

    result.x = this->x - p.x;
    result.y = this->y - p.y;
    result.z = this->z - p.z;

    return result;
}