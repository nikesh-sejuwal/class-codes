#include <iostream>
using namespace std;
#define print cout
inline int sum(int a, int b)
{
  int x;
  x = a + b;
  return x;
}
int main()
{
  int res;
  res = sum(4, 5);
  print << res << endl;
}