#include <iostream>

using namespace std;

int main (){
  float sci, math, history, ave;

  cout<<"Enter grade in Science: ";
  cin>>sci;
  cout<<"Enter grade in Math: ";
  cin>>math;
  cout<<"Enter grade in History: ";
  cin>>history;

  ave = (sci + math + history)/3;

  if (ave >= 70)
    cout<<"Average grade: "<<ave<<" :)";
  else
    cout<<"Average grade: "<<ave<<" :(";

  return 0;
}