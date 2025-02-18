#include <iostream>
using namespace std;
class A
{
public:
  int x;
  static int y;
  void k()
  {
  }
  static void m()
  {
  }
};

A aibf()
{
  A aw;
  int y = 45;
  aw.y = y;
  cout << "Value of y is: " << y << endl;
  return aw;
};
int A::y = 0;
A out;
int main()
{
  A bt;

  out = aibf();
  cout << out.y << A ::y << bt.y << endl;
}