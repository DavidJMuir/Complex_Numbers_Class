#include "Quaternion.hh"

Quaternion Quaternion::operator + (const Quaternion& Parameter){
  Quaternion Resultant;
  Resultant.w = w + Parameter.w;
  Resultant.x = x + Parameter.x;
  Resultant.y = y + Parameter.y;
  Resultant.z = z + Parameter.z;
  return Resultant;
}
Quaternion Quaternion::operator - (const Quaternion& Parameter){
  Quaternion Resultant;
  Resultant.w = w - Parameter.w;
  Resultant.x = x - Parameter.x;
  Resultant.y = y - Parameter.y;
  Resultant.z = z - Parameter.z;
  return Resultant;
} 

Quaternion Quaternion::operator * (const Quaternion& Parameter){
  Quaternion Resultant;
  Resultant.w = w*Parameter.w - x*Parameter.x - y*Parameter.y - z*Parameter.z;
  Resultant.x = w*Parameter.x + x*Parameter.w + y*Parameter.z - z*Parameter.y;
  Resultant.y = w*Parameter.y - x*Parameter.z + y*Parameter.w + z*Parameter.x;
  Resultant.z = w*Parameter.z + x*Parameter.y - y*Parameter.x + z*Parameter.w;
  return Resultant;
}

Quaternion Quaternion::Complex_Conjugate(){
  Quaternion Resultant;
  Resultant.w = w;
  Resultant.x = -1.0*x;
  Resultant.y = -1.0*y;
  Resultant.z = -1.0*z;
  return Resultant;
}

Quaternion Quaternion::operator / (const Quaternion& Parameter){
  Quaternion A, B, Parameter_Conjugate, Numerator, Denominator, Resultant;
  A.w = w;
  A.x = x;
  A.y = y;
  A.z = z;
  B.w = Parameter.w;
  B.x = Parameter.x;
  B.y = Parameter.y;
  B.z = Parameter.z;
  Parameter_Conjugate = B.Complex_Conjugate();
  Numerator = A*Parameter_Conjugate;
  Denominator = B*Parameter_Conjugate;

  if ((Denominator.w == 0) &&
      (Denominator.x == 0) &&
      (Denominator.y == 0) &&
      (Denominator.z == 0))
    {
      cout << "ERROR: The denominator is equal to zero - division by zero is undefined." << endl;
    }
  if (Denominator.w != 0)
    {
      Resultant.w = Numerator.w/Denominator.w;
      Resultant.x = Numerator.x/Denominator.w;
      Resultant.y = Numerator.y/Denominator.w;
      Resultant.z = Numerator.z/Denominator.w;
    }
  return Resultant;
} 
