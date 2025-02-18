#include <iostream>
using namespace std;
class Sample
{
  int x;

public:
  Sample(int k)
  {
    x = k;
  }
  Sample() {}
  void display()
  {
    cout << "x: " << x << endl;
  }
  operator int()
  {
    return x;
  }
};

int main()
{
  int a = 10;
  Sample s(55);
  a = s;
  s.display();
}