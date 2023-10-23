#ifndef SPHERE_H
#define SPHERE_H

#include "hittable.h"

class sphere : public hittable {
public:
    sphere() {}
    sphere(vec3 center, double radius, std::shared_ptr<material> mat_ptr) 
        : m_center(center), m_radius(radius), m_mat_ptr(mat_ptr) {};

    virtual bool hit(const ray& r, double tmin, double tmax, hit_record& rec) const;

public:
    vec3 m_center;
    double m_radius;
    std::shared_ptr<material> m_mat_ptr;
};

#endif