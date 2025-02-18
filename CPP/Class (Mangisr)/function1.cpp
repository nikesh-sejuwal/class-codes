#include <iostream>
using namespace std;
float sum(float a, float b);
int main()
{
  float x;
  x = sum(2.8, 3.5);
  cout << x << endl;
}
float sum(float a, float b)
{
  float res;
  res = a + b;
  return res;
}