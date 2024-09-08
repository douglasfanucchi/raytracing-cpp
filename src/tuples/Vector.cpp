#include <Vector.hpp>

Vector::Vector(void) : Tuple() {}

Vector::Vector(float x, float y, float z) : Tuple(x, y, z, 0) {}

Vector Vector::operator+(const Vector &v) const {
    Vector result;

    result.x = this->x + v.x;
    result.y = this->y + v.y;
    result.z = this->z + v.z;

    return result;
}
