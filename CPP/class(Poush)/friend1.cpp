#include <iostream>
using namespace std;
class A
{
private:
  int x;

public:
  friend int k(A, int);
};
int k(A doxt, int p)
{
  doxt.x = p;
  return doxt.x;
}
int main()
{
  A app;
  cout << "The value of x is : " << k(app, 10) << endl;
}