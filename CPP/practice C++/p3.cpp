// // Binary operator in Complex and real number
// #include <iostream>
// using namespace std;
// class Complex
// {
//   int y, x;

// public:
//   Complex(){};
//   Complex(int re, int com)
//   {
//     x = re;
//     y = com;
//   }
//   void display()
//   {
//     cout << x << " + " << y << "i" << endl;
//   }
//   Complex operator+(Complex c)
//   {
//     Complex temp;
//     temp.x = x + c.x;
//     temp.y = y + c.y;
//     return temp;
//   }
// };
// int main()
// {
//   Complex C1, C2, C3;
//   C1 = Complex(8, 7);
//   C2 = Complex(5, 4);
//   C3 = C1 + C2;
//   C3.display();
// }

#include <iostream>
using namespace std;
class complex
{
  int x, y;

public:
  complex() {}
  complex(int a, int b)
  {
    x = a;
    y = b;
  }
  void display()
  {
    cout << x << "+" << y << "i" << endl;
  }
  complex operator+(complex c)
  {
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
  }
};
int main()
{
  complex c1, c2, c3;
  c1 = complex(2, 3);
  c2 = complex(4, 5);
  c3 = c1 + c2;
  cout << "C1: ";
  c1.display();
  cout << "C2: ";
  c2.display();
  cout << "C3: ";
  c3.display();
}