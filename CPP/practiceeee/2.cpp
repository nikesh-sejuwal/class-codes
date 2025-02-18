// Returning object from function;
#include <iostream>
#include <iomanip>
using namespace std;
class complex
{
  int real, img;

public:
  void getdata()
  {
    cout << "Enter the real and img num: " << endl;
    cin >> real >> img;
  }
  void display()
  {
    cout << "Complex and real number of that number can be denoted as: " << setw(5) << real << " + " << img << "i" << endl;
  }
  complex sumComplex(complex C)
  {
    complex temp;
    temp.real = real + C.real;
    temp.img = img + C.img;
    return temp;
  }
};
int main()
{
  complex C1, C2, C3;
  C1.getdata();
  C2.getdata();
  C1.display();
  C2.display();
  C3 = C1.sumComplex(C2);
  cout << "Addition: " << endl;
  C3.display();
}