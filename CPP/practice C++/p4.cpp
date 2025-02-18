// #include <iostream>
// using namespace std;
// class distanc
// {
//   int feet, inch;

// public:
//   distanc(int f, int i)
//   {
//     feet = f;
//     inch = i;
//   }
//   distanc(float m)
//   {
//     feet = int(m);
//     inch = 12 * (m - feet);
//   }
//   void display()
//   {
//     cout << "Feet: " << feet << " Inch: " << inch << endl;
//   }
// };
// int main()
// {
//   float f = 2.5;
//   distanc d = f;
//   d.display();
// }

#include <iostream>
using namespace std;
class time
{
  int hours, minutes;

public:
  time(int h, int m)
  {
    hours = h;
    minutes = m;
  }
  operator int()
  {
    int a = hours * 60 + minutes;
    return a;
  }
};
int main()
{
  time t(3, 6);
  int x = (int)t;
  cout << "x: " << x;
}