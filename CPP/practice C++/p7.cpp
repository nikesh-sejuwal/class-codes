// // // Type casting:
// // // Basic type to class type

// // #include <iostream>
// // using namespace std;
// // class distanc
// // {
// //   int feet, inch;

// // public:
// //   distanc(int f, int i)
// //   {
// //     feet = f;
// //     inch = i;
// //   }
// //   distanc(float(m))
// //   {
// //     feet = int(m);
// //     inch = 12 * (m - feet);
// //   }
// //   void display()
// //   {
// //     cout << "Feet: " << feet << endl
// //          << "Inch: " << inch << endl;
// //   }
// // };

// // int main()
// // {
// //   float f = 2.5;
// //   distanc d1 = f;
// //   d1.display();
// // }
// // Class type to basic type
// #include <iostream>
// using namespace std;
// class time
// {
// private:
//   int year, month;

// public:
//   time(int y, int m)
//   {
//     year = y;
//     month = m;
//   }
//   operator float()
//   {
//     float a = year + month / 12.0;
//     return a;
//   }
// };
// int main()
// {
//   time t1(12, 6);
//   float x = (float)t1;
//   cout << "X: " << x;
// }

// CLass type to class type
#include <iostream>
using namespace std;
class rupees
{
public:
  int rs;
  void display()
  {
    cout << "Money in rupees: " << rs;
  }
};
class dollor
{
public:
  int doll;
  dollor(int x)
  {
    doll = x;
  }
  operator rupees()
  {
    rupees temp;
    temp.rs = doll * 100;
    return temp;
  }
  void display()
  {
    cout << "Money in dollor: " << doll;
  }
};
int main()
{
  dollor d1(10);
  rupees r1;
  r1 = d1; // CLass type conversion with operator overloading
  d1.display();
  r1.display();
}

// Class type to class type
#include <iostream>
using namespace std;
class Distance_1
{
public:
  int feet = 15;
  int inch = 20;
  void display()
  {
    cout << "Feet: " << feet << endl
         << "Inch: " << inch << endl;
  }
};
class Distance_2
{
public:
  float meter;
  float cm;

  void operator=(Distance_1 a)
  {
    meter = (1 / 3.3) * a.feet;
    cm = (1 / 0.4) * a.inch;
  }
  void display()
  {
    cout << "Meter: " << meter << endl
         << "Centimeter: " << cm << endl;
  }
};
int main()
{
  Distance_1 d1;
  Distance_2 d2;
  d2 = d1;
  d1.display();
  d2.display();
}