#include <Tuple.hpp>

Tuple::Tuple(void) : x(0), y(0), z(0), w(0) {}

Tuple::Tuple(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

bool Tuple::operator==(const Tuple &tuple) const {
    float epsilon = 1E-12;

    return fabs(this->x - tuple.x) < epsilon &&
           fabs(this->y - tuple.y) < epsilon &&
           fabs(this->z - tuple.z) < epsilon &&
           fabs(this->w - tuple.w) < epsilon;
}

bool Tuple::operator!=(const Tuple &tuple) const {
    return !((*this) == tuple);
}

Tuple Tuple::operator+(const Tuple &tuple) const {
    Tuple result;

    result.x = tuple.x + this->x;
    result.y = tuple.y + this->y;
    result.z = tuple.z + this->z;
    result.w = tuple.w + this->w;
    return result;
}