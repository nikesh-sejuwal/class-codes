// #include <iostream>
// using namespace std;
// class time
// {
//   int h, m;

// public:
//   time() {}
//   time(int hrs, int mins)
//   {
//     h = hrs;
//     m = mins;
//   }
//   void display()
//   {
//     cout << h << " Hrs"
//          << "And " << m << " Minutes" << endl;
//   }
//   time operator+(time t1)
//   {
//     time temp;
//     temp.h = h + t1.h;
//     temp.m = m + t1.m;
//     temp.m = temp.m % 60;
//     temp.h = temp.h + temp.m / 60;
//     return temp;
//   }
// };
// int main()
// {
//   time t1, t2, t3;
//   t1 = time(2, 35);
//   t2 = time(3, 35);
//   t3 = t1 + t2;
//   t1.display();
//   t2.display();
//   t3.display();
// }
#include <iostream>
using namespace std;
class time
{
  int year, month;

public:
  time(int y, int m)
  {
    year = y;
    month = m;
  }
  time(float a)
  {
    year = int(a);
    month = 12 * (a - year);
  }
  void display()
  {
    cout << "year= " << year << endl
         << "month: " << month;
  }
};
int main()
{
  float y = 4.5;
  // cout << "Enter the year";
  // cin >> y;
  time t = y;
  t.display();
}