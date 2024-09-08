#ifndef VECTOR_H
#define VECTOR_H

#include <Tuple.hpp>

class Vector : public Tuple {
    public:
        Vector(void);
        Vector(float, float, float);
        Vector operator+(const Vector&) const;
};

#endif
