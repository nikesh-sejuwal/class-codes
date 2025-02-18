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
};

int main()
{
  int a = 10;
  Sample s;
  s = a;
  s.display();
}