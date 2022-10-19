#include <iostream>

using namespace std;

int main(){
  float a, b, result;
  char op;

  cout<<"Enter two numbers: ";
  cin>>a>>b;

  cout<<"Enter the operator (+, -, *, /): ";
  cin>>op;

  switch(op){
    case '+': result = (a + b);
              break;
    case '-': result = (a - b);
              break;
    case '*': result = (a * b);
              break;
    case '/': result = (a / b);
              break;
  }

  cout<<"The result of the operation is : "<<result;

  return 0;
}