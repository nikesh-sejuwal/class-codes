// #include <iostream>
// using namespace std;
// class Time
// {
//   int hour, minutes;

// public:
//   void settime(int h, int m)
//   {
//     hour = h;
//     minutes = m;
//   }
//   void addtime(Time t1, Time t2)
//   {
//     minutes = t1.minutes + t2.minutes;
//     hour = minutes / 60;
//     minutes = minutes % 60;
//     hour = hour + t1.hour + t2.hour;
//   }
//   void display()
//   {
//     cout << "Hours= " << hour << "minutes= " << minutes << endl;
//   }
// };
// int main()
// {
//   Time t1, t2, t3;
//   t1.settime(2, 50);
//   t2.settime(5, 40);
//   t3.addtime(t1, t2);
//   t1.display();
//   t2.display();
//   t3.display();
// }

// Return by value
#include <iostream>
using namespace std;
class Complex
{
private:
  int real, complex;

public:
  void getdata()
  {
    cout << "Enter the value of real and complex numbers." << endl;
    cin >> real >> complex;
  }
  void display()
  {
    cout << "(" << real << "+" << complex << "i"
         << ")" << endl;
  }
  Complex Addcomplex(Complex C)
  {
    Complex temp;
    temp.real = real + C.real;
    temp.complex = complex + C.complex;
    return temp;
  }
};
int main()
{
  Complex c1, c2, c3;
  c1.getdata();
  c2.getdata();
  c3 = c2.Addcomplex(c1);
  cout << "Addition: " << endl;
  c3.display();
}