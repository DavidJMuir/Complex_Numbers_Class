#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

#include <iostream>
#include <math.h>

#define PI 3.141592654

using namespace std;

class Complex_Number {
public:
  double x, y;
  Complex_Number(){};
  Complex_Number(double a, double b) : x(a), y(b){};

  Complex_Number operator + (const Complex_Number&);
  Complex_Number operator - (const Complex_Number&);
  Complex_Number operator * (const Complex_Number&);
  Complex_Number Complex_Conjugate();
  Complex_Number operator / (const Complex_Number&);

  double Magnitude() {return sqrt(pow(x, 2) + pow(y, 2));}
  double Argument(const char*);
  //Euler_Equation(){};

};
#endif
