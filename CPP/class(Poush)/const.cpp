// constant memeber in Cpp

#include <iostream>
using namespace std;
class SI
{
  const float r;
  float p, t;

public:
  SI(float pr, float ti) : r(4.5)
  {
    p = pr;
    t = ti;
  }
  float compute()
  {
    return (p * t * r) / 100;
  }
};

int main()
{
  SI s(10000.0, 5);
  cout << "Simple interest = " << s.compute() << endl;
}