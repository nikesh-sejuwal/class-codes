// Constant memeber function

#include <iostream>
using namespace std;
class SI
{
  const float r;
  float p, t;

public:
  SI(float pr, float ti) : r(13)
  {
    p = pr;
    t = ti;
  }
  float compute()
  {
    return (p * t * r) / 100;
  }

  void display() const
  {
    cout << "Interest: " << (p * t * r) / 100.0 << endl;
  }
};

int main()
{
  SI s(9000000.0, 1);
  cout << "Simple interest = " << s.compute() << endl;
  s.display();
}