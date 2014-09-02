#include "Quaternion.hh"

int main()
{
  Quaternion Alpha(2, -5, 7, -8), Beta(2, 1, 7, -5), Answer;

  cout << "This is quaternion Alpha: " << Alpha.w << " + i(" << Alpha.x << ") + j(" << Alpha.y << ") + k(" << Alpha.z << ")." << endl;
  cout << "This is quaternion Beta: " << Beta.w << " + i(" << Beta.x << ") + j(" << Beta.y << ") + k(" << Beta.z << ")." << endl;

  Answer = Alpha + Beta;

  cout << "Alpha + Beta = " << Answer.w << " + i(" << Answer.x << ") + j(" << Answer.y << ") + k(" << Answer.z << ")." << endl;

  Answer = Alpha - Beta;

  cout << "Alpha - Beta = " << Answer.w << " + i(" << Answer.x << ") + j(" << Answer.y << ") + k(" << Answer.z << ")." << endl;

  Answer = Alpha.Complex_Conjugate();

  cout << "Complex conjugate of Alpha is " << Answer.w << " + i(" << Answer.x << ") + j(" << Answer.y << ") + k(" << Answer.z << ")." << endl;

  Answer = Beta.Complex_Conjugate();

  cout << "Complex conjugate of Beta is " << Answer.w << " + i(" << Answer.x << ") + j(" << Answer.y << ") + k(" << Answer.z << ")." << endl;

  Answer = Alpha*Beta;

  cout << "Alpha*Beta = " << Answer.w << " + i(" << Answer.x << ") + j(" << Answer.y << ") + k(" << Answer.z << ")." << endl;

  Answer = Alpha/Beta;

  cout << "Alpha/Beta = " << Answer.w << " + i(" << Answer.x << ") + j(" << Answer.y << ") + k(" << Answer.z << ")." << endl;

  double Magnitude = Alpha.Norm();

  cout << "The norm of quaterion Alpha is " << Magnitude << endl;

  return 0;
}
