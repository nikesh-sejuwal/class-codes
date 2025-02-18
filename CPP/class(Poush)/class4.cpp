// Passing objects as argument to function
//  1. pass/call by value
//  2. pass call by references
//  3. pass call by address

// call by value
#include <iostream>
using namespace std;

class complex
{
public:
  int r, i;

  void setdata(int a, int b)
  {
    r = a;
    i = b;
  }
  void display()
  {
    string sign;
    if (i < 0)
    {
      sign = "";
    }
    else
    {
      sign = " + ";
    }
    cout << r << sign << i << "i" << endl;
  }
  complex add(complex c1, complex c2)
  {
    complex c;
    c.r = c1.r + c2.r;
    c.i = c1.i + c2.i;
    return c;
  }
};
int main()
{
  complex c1, c2, c3;
  c1.setdata(3, -7);
  c2.setdata(4, -1);
  c1.display();
  c2.display();
  c3 = c1.add(c1, c2);
  c3.display();
  return 0;
}