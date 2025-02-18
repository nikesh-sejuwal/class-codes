// // Class type to primitive integer type
#include <iostream>
using namespace std;
class Myclass
{
  int myInt;

public:
  Myclass(int i)
  {
    myInt = i;
  }
  int getnum()
  {
    return myInt;
  }
};
int main()
{
  int ram = 42;
  Myclass ob1 = Myclass(ram);
  // int ram = static_cast<int>(ob1.getnum());
  cout << ob1.getnum() << endl;
}
// #include <iostream>
// using namespace std;
// class ram
// {
// public:
//   virtual void display()
//   {
//     cout << "This is base class" << endl;
//   }
// };
// class sita : public ram
// {
// public:
//   void display()
//   {
//     cout << "This is derived class" << endl;
//   }
// };
// int main()
// {
//   ram *r1 = new sita;
//   sita *s1 = dynamic_cast<sita *>(r1);
//   s1->display();
// }