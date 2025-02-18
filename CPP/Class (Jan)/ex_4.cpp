#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int b = a;
  cout << "Normal variable \na=" << a << " b=" << b << endl;
  b = b + 5;
  cout << "a=" << a << " b=" << b << endl;
  // In Reference variable
  int p = 10;
  int &q = p;
  cout << "\nReference variable \np=" << p << " q=" << q << endl;
  q = q + 5;
  cout << "p=" << p << " q=" << q << endl;
}