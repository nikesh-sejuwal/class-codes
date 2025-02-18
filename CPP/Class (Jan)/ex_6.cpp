// Function with default arguments.
#include <iostream>
using namespace std;
int multiply(int x, int y = 5)
{
  int r = x * y;
  return r;
}
int main()
{
  cout << "The result is: " << multiply(5) << endl;
  cout << "The result is: " << multiply(5, 4) << endl;
}