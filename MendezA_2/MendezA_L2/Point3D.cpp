#include "Point3D.h"
#include <cmath>

Point3D::Point3D() : X(0), Y(0), Z(0) {}
Point3D::Point3D(double x, double y, double z)
    : X(x), Y(y), Z(z) {}

Point3D& Point3D::addPoints(const Point3D& p) {
  X += p.X;
  Y += p.Y;
  Z += p.Z;
  return *this;

} // end of addPoints

Point3D& Point3D::subtractPoints(const Point3D& p) {
  X -= p.X;
  Y -= p.Y;
  Z -= p.Z;
  return *this;

} // end of subtractPoints

double Point3D::magnitude() const { return std::sqrt(X*X + Y*Y + Z*Z); } // end of magnitude

// getters
double Point3D::getX() const { return X; }

double Point3D::getY() const { return Y; }

double Point3D::getZ() const { return Z; }

//setters
Point3D& Point3D::setX(double x) { X = x; return *this; }

Point3D& Point3D::setY(double y) { Y = y; return *this; }

Point3D& Point3D::setZ(double z) { Z = z; return *this; }