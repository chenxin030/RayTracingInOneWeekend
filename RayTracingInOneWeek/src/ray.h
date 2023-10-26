#ifndef RAY_H
#define RAY_H

#include "vector.h"

class ray {

public:
    ray();

    ray(const vec3& origin, const vec3& direction, double time = 0.0);

    vec3 origin() const { return m_origin; }
    vec3 direction() const { return m_direction; }
    double time() const { return m_time; }

    vec3 at(double t) const {
        return m_origin + t * m_direction;
    }

private:
    vec3 m_origin;
    vec3 m_direction;

    double m_time;
};



#endif