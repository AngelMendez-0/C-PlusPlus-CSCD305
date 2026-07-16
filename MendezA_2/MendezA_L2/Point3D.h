#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double X, Y, Z;

public:
    Point3D();
    Point3D(double x, double y, double z);

    Point3D& addPoints(const Point3D& p);
    Point3D& subtractPoints(const Point3D& p);
    double magnitude() const;

    // getters
    double getX() const;
    double getY() const;
    double getZ() const;

    // setters
    Point3D& setX(double x);
    Point3D& setY(double y);
    Point3D& setZ(double z);
};

#endif