// Class to Class type
#include <iostream>
using namespace std;
class A
{
  int y;

public:
  void display()
  {
    cout << "y: " << y << endl;
  }
  A(int s)
  {
    y = s;
  }
  int getY()
  {
    return y;
  }
};
class Sample
{
  int x;

public:
  Sample(A k)
  {
    x = k.getY();
  }
  Sample() {}
  void display()
  {
    cout << "x: " << x << endl;
  }
};

int main()
{
  // Sample s;
  A aob(44);
  Sample s(55);
  s = aob;
  s.display();
  // cout << "s: " << s.dis << endl;
  // Sample s;
  // s = a;
  // s.display();
}