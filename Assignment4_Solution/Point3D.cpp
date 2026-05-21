#include "Point3D.h"
#include <cmath>

Point3D::Point3D() : x(0), y(0), z(0) {}

Point3D::Point3D(float x, float y, float z) : x(x), y(y), z(z) {}

float Point3D::getX() const { return x; }
float Point3D::getY() const { return y; }
float Point3D::getZ() const { return z; }

float Point3D::distanceTo(const Point3D& other) const {
    float dx = x - other.x;
    float dy = y - other.y;
    float dz = z - other.z;
    return std::sqrt(dx*dx + dy*dy + dz*dz);

} // end of distanceTo
