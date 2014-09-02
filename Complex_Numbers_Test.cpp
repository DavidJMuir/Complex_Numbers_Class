#include "Complex_Numbers.hh"

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
  double Angle = A.Argument("Radians");
  cout << "The argument of the complex number A is " << Angle << " radians." << endl; 
  Angle = A.Argument("Degrees");
  cout << "The argument of the complex number A is " << Angle << " degrees." << endl;
  return 0;
}
