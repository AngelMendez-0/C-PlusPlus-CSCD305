#ifndef RADAR_H
#define RADAR_H

#include "Point3D.h"
#include "Airspace.h"

class Radar {
private:
    Point3D position;

public:
    Radar();
    Radar(const Point3D& position);

    void checkViolation(const Airspace& s) const;
};

#endif