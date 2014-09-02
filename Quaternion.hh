#ifndef QUATERNION_H
#define QUATERNION_H

#include <iostream>
#include <math.h>

// #define PI 3.141592654

using namespace std;

class Quaternion {
public: 
  double w, x, y, z;
  Quaternion() {};
  Quaternion(double a, double b, double c, double d) : w(a), x(b), y(c), z(d){};

  Quaternion operator + (const Quaternion&);
  Quaternion operator - (const Quaternion&);
  Quaternion operator * (const Quaternion&);
  Quaternion Complex_Conjugate();
  Quaternion operator / (const Quaternion&);

  double Norm() {return sqrt(pow(w, 2) + pow(x, 2) + pow(y, 2) + pow(z, 2));}
};
#endif
