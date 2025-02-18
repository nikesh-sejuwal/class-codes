// Pointer to object

#include <iostream>
using namespace std;
class A
{
public:
  int x = 99;
  void display()
  {
    cout << "x: " << x << endl;
  }
};
int main()
{
  A aobj;
  aobj.display(); // aobj is a caller object used in this2.cpp
  A *p;
  aobj.x = 20;
  cout << "a: " << aobj.x << endl;
  p = &aobj;
  p->x = 69;
  cout << "a: " << aobj.x << endl;
}