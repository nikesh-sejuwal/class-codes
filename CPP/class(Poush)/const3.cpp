#include <iostream>
using namespace std;
class Sample
{
  int a, b, c;

public:
  Sample(int x = 10, int y = 20, int z = 30)
  {
    a = x;
    b = y;
    c = z;
  }

  Sample(int x = 2, int y = 5)
  {
    a = x;
    b = y;
  }
  Sample(int x = 100)
  {
    a = x;
    // b = y;
    // c = z;
  }
};
int main()
{
  Sample s1(6, 4, 12);
  Sample s2(5, 4);
  Sample s3(7);
  Sample s4();
}