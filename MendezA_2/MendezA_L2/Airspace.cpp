#include "Airspace.h"
#include "Point3D.h"



Airspace::Airspace() : R(0), H(0), center(0,0,0) {}

Airspace::Airspace(double R, double H,const Point3D& p)
    : R(R), H(H), center(p) {}

// Getters
double Airspace::getR() const{ return R; }

double Airspace::getH() const{ return H; }

Point3D Airspace::getP() const{ return center; }

// setters
Airspace& Airspace::setR(double R){ this->R = R; return *this; }

Airspace& Airspace::setH(double H){ this->H = H; return *this; }

Airspace& Airspace::setP(const Point3D& p){center = p; return *this; }

