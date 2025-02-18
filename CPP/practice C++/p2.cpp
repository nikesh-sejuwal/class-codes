// #include <iostream>
// using namespace std;
// class rectangle
// {
// private:
//   int length, breadth;

// public:
//   void getdata(int a, int b)
//   {
//     length = a;
//     breadth = b;
//   }
//   void operator++()
//   {
//     ++length;
//     ++breadth;
//   }
//   void display()
//   {
//     cout << "length: " << length << endl
//          << "breadth: " << breadth << endl;
//   }
// };
// int main()
// {
//   rectangle r1;
//   r1.getdata(10, 5);
//   ++r1;
//   r1.display();
// }

#include <iostream>
using namespace std;
class rect
{
  int length, breadth;

public:
  void getdata(int a, int b)
  {
    length = a;
    breadth = b;
  }
  void display()
  {
    cout << "Length: " << length << endl
         << "Breadth: " << breadth;
  }
  friend void operator--(rect &);
};
void operator--(rect &r)
{
  --r.length;
  --r.breadth;
}
int main()
{
  rect r1;
  r1.getdata(2, 3);
  --r1;
  r1.display();
}