// CLASS AND OBJECT IN CPP

#include <iostream>
using namespace std;
class Rectangle
{
  int leng, breadth;

public:
  void setData(int l, int b)
  {
    leng = l;
    breadth = b;
  }
  void display()
  {
    cout << "Length: " << leng << endl
         << "breadth: " << breadth << endl;
  }

  void area()
  {
    cout << "Area= " << leng * breadth << "m^2" << endl;
  }
};

int main()
{
  Rectangle r1, r2, r3;
  r1.setData(2, 4);
  r2.setData(3, 7);
  r3.setData(8, 9);

  r1.display();
  r1.area();
}