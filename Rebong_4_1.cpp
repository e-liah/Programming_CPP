#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
  float A, B, C;

  cout<<"Enter the value of A: ";
  cin>>A;

  cout<<"Enter the value of B: ";
  cin>>B;

  C = sqrt(pow(A,2) + pow(B,2));

  cout<<"The value of the hypotenuse is "<<C;

  return 0;
}