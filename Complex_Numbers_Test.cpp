#include "Complex_Numbers.hh"

Complex_Number Complex_Number::operator + (const Complex_Number& Parameter){
  Complex_Number Resultant;
  Resultant.x = x + Parameter.x;
  Resultant.y = y + Parameter.y;
  return Resultant;
}
Complex_Number Complex_Number::operator - (const Complex_Number& Parameter){
  Complex_Number Resultant;
  Resultant.x = x - Parameter.x;
  Resultant.y = y - Parameter.y;
  return Resultant;
} 

Complex_Number Complex_Number::operator * (const Complex_Number& Parameter){
  Complex_Number Resultant;
  Resultant.x = x*Parameter.x - y*Parameter.y;
  Resultant.y = x*Parameter.y + y*Parameter.x;
  return Resultant;
}

Complex_Number Complex_Number::Complex_Conjugate(){
  Complex_Number Resultant;
  Resultant.x = x;
  Resultant.y = -1*y;
  return Resultant;
}

Complex_Number Complex_Number::operator / (const Complex_Number& Parameter){
  Complex_Number z, z_2, Parameter_Conjugate, Numerator, Denominator, Resultant;
  z.x = x;
  z.y = y;
  z_2.x = Parameter.x;
  z_2.y = Parameter.y;
  Parameter_Conjugate = z_2.Complex_Conjugate();
  Numerator = z*Parameter_Conjugate;
  Denominator = z_2*Parameter_Conjugate;

  if ((Denominator.x == 0) &&
      (Denominator.y == 0))
    {
      cout << "ERROR: The denominator is equal to zero - division by zero is undefined." << endl;
    }
  Resultant.x = Numerator.x/Denominator.x;
  Resultant.y = Numerator.y/Denominator.x;
  return Resultant;
} 



double Complex_Number::Argument(const char* Units) {
  double Theta = 0;
  if ((Units == "degrees") ||
      (Units == "Degrees") ||
      (Units == "DEGREES"))
    {
      Theta = atan(y/x)*180/PI;
    }
  else if ((Units == "radians") ||
	   (Units == "Radians") ||
	   (Units == "RADIANS"))
    {
      Theta = atan(y/x);
    }
  else
    {
      cout << "ERROR: The 'units' input argument is not valid. This argument must be either degrees or radians." << endl;
	return -1;
    }
  return Theta;
}

int main()
{
  Complex_Number A(-2,9), B(3,-8);
  Complex_Number Answer;
  cout << "A = " << A.x << " + i(" << A.y << ")" << endl;
  cout << "B = " << B.x << " + i(" << B.y << ")" << endl;
  Answer = A + B;
  cout << "A + B is " << Answer.x << " + i(" << Answer.y << ")" << endl;
  Answer = A - B;
  cout << "A - B is " << Answer.x << " + i(" << Answer.y << ")" << endl;
  Answer = A.Complex_Conjugate();
  cout << "The complex conjugate of A is z = " << Answer.x << " + i(" << Answer.y << ")" << endl;
  Answer = B.Complex_Conjugate();
  cout << "The complex conjugate of B is z = " << Answer.x << " + i(" << Answer.y << ")" << endl; 
  Answer = A*B;
  cout << "A*B is " << Answer.x << " + i(" << Answer.y << ")" << endl;
  Answer = A/B;
  cout << "A/B is " << Answer.x << " + i(" << Answer.y << ")" << endl;
  cout << "The magnitude of A is " << A.Magnitude() << endl;
  cout << "The argument of the complex number A is " << A.Argument("Radians") << " radians = " << A.Argument("Degrees") << " degrees." << endl;

  return 0;
}
