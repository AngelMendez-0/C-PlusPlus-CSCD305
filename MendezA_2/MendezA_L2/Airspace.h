#ifndef AIRSPACE_H
#define AIRSPACE_H

#include "Point3D.h"

class Airspace {
private:
    double R;
    double H;
    Point3D center;

public:
    Airspace();
    Airspace(double r, double h, const Point3D& c);

    // getters
    double getR() const;
    double getH() const;
    Point3D getP() const;

    // setters
    Airspace& setR(double r);
    Airspace& setH(double h);
    Airspace& setP(const Point3D& c);
};

#endif