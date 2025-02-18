// #include <iostream>
// using namespace std;
// class complex
// {
//   int real, img;

// public:
//   complex() {}
//   complex(int r, int i)
//   {
//     real = r;
//     img = i;
//   }
//   complex operator+(complex c)
//   {
//     complex temp;
//     temp.real = real + c.real;
//     temp.img = img + c.img;
//     return temp;
//   }
//   void display()
//   {
//     cout << "sum: " << real << "+" << img << " i" << endl;
//   }
// };
// int main()
// {
//   complex c1(5, 6);
//   // c1.getdata(5, 6);
//   c1.display();
// }
// Basic type to class or user  defined type:
// #include <iostream>
// using namespace std;
// class time
// {
//   int year, month;

// public:
//   time(int a, int b)
//   {
//     year = a;
//     month = b;
//   }
//   operator float()
//   {
//     float a = year + month / 12.0;
//     return a;
//   }
// };
// int main()
// {
//   time t(2, 6);
//   float x = float(t);
//   cout << "x: " << x;
// }

#include <iostream>
using namespace std;
class exchange
{
public:
  int rs;

  void show()
  {
    cout << "Money in rupees: " << rs << endl;
  }
};
class dollor
{
  int doll;

public:
  dollor(int x)
  {
    doll = x;
  }
  operator exchange()
  {
    exchange temp;
    temp.rs = doll * 100;
    return temp;
  }
  void display()
  {
    cout << "The money in dollor is: " << doll << endl;
  }
};
int main()
{
  dollor d(10);
  exchange e;
  e = d;
  e.show();
  d.display();
}