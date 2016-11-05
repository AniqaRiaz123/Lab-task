#include <iostream>
using namespace std;

int remainder (int a, int b)
{
  int r;
  r=a%b;
  return r;
}

int main ()
{
  int z;
  z = remainder (10,3);
  cout << "The result is " << z;
}
