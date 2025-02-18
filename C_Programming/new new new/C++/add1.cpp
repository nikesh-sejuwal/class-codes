#include <iostream>
using namespace std;
int &function(int &k)
{
  k = k + 10;
  return k;
}
int main()
{
  int a = 90;
  function(a) = 80;
  cout << "The value of a after function application is: " << a << endl;
}