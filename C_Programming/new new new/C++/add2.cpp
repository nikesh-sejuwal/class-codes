#include <iostream>
using namespace std;
int &f(int &k)
{
  k = k + 2;
  return k;
}
int main()
{
  int a = 48;
  f(a) = 60;
  cout << "a: " << a << endl;
}