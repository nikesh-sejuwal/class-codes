// friend class

#include <iostream>
using namespace std;
class A
{
private:
  int x;

public:
  friend class B;
};

class B
{
public:
  int m()
  {
    A a;
    a.x = 3;
    return a.x;
  }
};
int main()
{
  B b;
  b.m();
  cout << "a: " << b.m() << endl;
}