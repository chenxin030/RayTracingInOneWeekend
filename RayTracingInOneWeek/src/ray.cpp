#include "ray.h"
#include "hittable.h"

ray::ray()
{
}

ray::ray(const vec3& origin, const vec3& direction, double time)
    :m_origin(origin), m_direction(direction), m_time(time)
{
}
