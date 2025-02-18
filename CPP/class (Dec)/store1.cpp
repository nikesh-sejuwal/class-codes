#include <iostream>
using namespace std;
int apple()
{
  static int y = 1;
  y += 1;
  cout << "y: " << y << endl;
  return y;
}
int main()
{

  apple();
  apple();
  apple();
}