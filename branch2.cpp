#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
  int r;
  r=a-b;
  return r;
}

int main ()
{
  int z;
  z = subtraction (5,3);
  cout << "The result is " << z;
}
