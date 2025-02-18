#include <iostream>
using namespace std;
int a = 20;
int main()
{
  int a = 50;
  cout << "a:" << a << endl;
  cout << "Global a: " << ::a;
  {

    {
      int a = 34;
      cout <<
    }
  }
}
