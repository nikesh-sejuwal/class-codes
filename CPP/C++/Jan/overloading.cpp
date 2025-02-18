// Operation Overloading (incase of unary operation)
#include <iostream>
using namespace std;
class Sample
{
  int x;

public:
  void display()
  {
    cout << "x: " << x << endl;
  }

  Sample(int k)
  {
    x = k;
  }
  Sample()
  {
    // x = 100;
  }
  Sample operator-()
  {
    Sample temp;
    temp.x = -x;
    return temp;
  }
};
int main()
{
  Sample s1(23), s2;
  s2 = -s1;
  s2.display();
  return 0;
}