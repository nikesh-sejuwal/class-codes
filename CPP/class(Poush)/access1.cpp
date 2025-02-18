//Wrong 
#include <iostream>
using namespace std;

class A
{
private:
protected:
  int y;

public:
  int x;
  void setX(int s)
  {
    x = s;
  }
  int getX()
  {
    return x;
  }
};

class B : public A
{
public:
  void setY(int a)
  {
    y = a;
  }
  int getX()
  {
    return y;
  }
};
int main()
{
  A a;
  a.setX(100);
  cout << a.x;
  B b;
  b.setY(101);
  cout << b.y;
}
