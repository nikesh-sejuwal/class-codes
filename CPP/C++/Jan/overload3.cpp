// Operation Overloading (incase of friend operation)
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
  friend Sample operator+(Sample &s1, Sample &s2);
};
Sample operator+(Sample &s1, Sample &s2)
{
  Sample temp;
  temp.x = s1.x + s2.x;
  return temp;
}
int main()
{
  Sample s1(23), s2;
  s2 = -s1;
  s2.display();
  Sample s3 = s1 + s2;
  s3.display();
  return 0;
}