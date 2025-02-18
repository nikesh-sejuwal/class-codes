#include <iostream>
using namespace std;
class Base
{
public:
  void set()
  {
    cout << "Base class" << endl;
  }
};
class Derived : public Base
{
public:
  void set()
  {
    cout << "derived class" << endl;
  }
};

int main()
{
  Base b1;
  Derived d1;
  b1.set();
  d1.set();
}