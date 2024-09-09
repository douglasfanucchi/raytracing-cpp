#ifndef POINT_H
#define POINT_H

#include <Tuple.hpp>
#include <Vector.hpp>

class Point : public Tuple {
    public:
        Point(void);
        Point(float, float, float);
        Vector operator-(const Point&) const;
};

#endif
