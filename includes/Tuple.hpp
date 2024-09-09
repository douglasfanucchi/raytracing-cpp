#ifndef TUPLE_H
#define TUPLE_H

#include <cmath>

class Tuple {
    public:
        double x, y, z, w;
        Tuple(void);
        Tuple(float, float, float, float);
        bool operator==(const Tuple&) const;
        bool operator!=(const Tuple&) const;
        Tuple operator+(const Tuple&) const;
        Tuple operator-(const Tuple&) const;
};

#endif
