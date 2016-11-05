#include <iostream>
using namespace std;

int multiplication (int a, int b)
{
  int r;
  r=a*b;
  return r;
}

int main ()
{
  int z;
  z = multiplication (5,3);
  cout << "The result is " << z;
}
