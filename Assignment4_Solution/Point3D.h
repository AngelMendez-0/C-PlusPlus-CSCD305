#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
public:
    Point3D();
    Point3D(float x, float y, float z);

    float getX() const;
    float getY() const;
    float getZ() const;

    float distanceTo(const Point3D& other) const;

private:
    float x, y, z;
}; // end

#endif
