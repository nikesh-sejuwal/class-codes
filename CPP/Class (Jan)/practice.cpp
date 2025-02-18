// // Pass by Value
// #include <iostream>
// using namespace std;
// class Time
// {
// private:
//   int mins, hrs;

// public:
//   void setdata(int h, int m)
//   {
//     hrs = h;
//     mins = m;
//   }
//   void addTime(Time t1, Time t2)
//   {
//     mins = t1.mins + t2.mins;
//     hrs = mins / 60;
//     mins = mins % 60;
//     hrs = hrs + t1.hrs + t2.hrs;
//   }
//   void display()
//   {
//     cout << "Hours= " << hrs << " Minutes= " << mins << endl;
//   }
// };
// int main()
// {
//   Time t1, t2, t3;
//   t1.setdata(3, 45);
//   t2.setdata(4, 40);
//   t3.addTime(t1, t2);
//   t1.display();
//   t2.display();
//   t3.display();
// }
#include <iostream>
using namespace std;
class Complex
{
private:
  int real, img;

public:
  void getdata()
  {
    cout << "Enter the real and imaginary numbers: " << endl;
    cin >> real >> img;
  }
  Complex Addcomplex(Complex C)
  {
    Complex temp;
    temp.real = real + C.real;
    temp.img = img + C.img;
    return temp;
  }
  void display()
  {
    cout << "(" << real << "+" << img << "i"
         << ")" << endl;
  }
};
int main()
{
  Complex c1, c2, c3;
  c1.getdata();
  c2.getdata();
  c3 = c2.Addcomplex(c1);
  cout << "Addition" << endl;
  c3.display();
}
