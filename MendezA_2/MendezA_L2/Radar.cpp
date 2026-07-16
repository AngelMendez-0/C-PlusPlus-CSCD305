#include "Radar.h"
#include <iostream>
#include <cmath>

Radar::Radar(const Point3D& position)
    : position(position) {}

void Radar::checkViolation(const Airspace& s) const {
  Point3D center = s.getP();

  // getters
  double dx = position.getX() - center.getX();

  double dy = position.getY() - center.getY();

  double dz = position.getZ() - center.getZ();


  double distance = std::sqrt(dx*dx + dy*dy + dz*dz);

  if (distance <= s.getR() && std::abs(dz) <= s.getH()) {
    std::cout << "Airspace violation" << std::endl;
  } else {
    std::cout << "No airspace violation." << std::endl;
  }
}