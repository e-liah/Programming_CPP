#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float a, b, c, C, cosine;
  int num=2;

  cout<<"Enter the value of side a: ";
  cin>>a;

  cout<<"Enter the value of side b: ";
  cin>>b;

  cout<<"Enter the value of angle C: ";
  cin>>C;

  c = sqrt(pow(a,2) + pow(b,2) - (num*a - num*b) * cos(C));

  cout<<"The value of side c is "<<c;

  return 0;
}