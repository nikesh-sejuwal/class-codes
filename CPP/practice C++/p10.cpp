#include <iostream>
using namespace std;
class base
{
public:
  virtual void getdata()
  {
    cout << "Display base";
  }
};
class derived : public base
{
public:
  void getdata()
  {
    cout << "Display derived";
  }
};
int main()
{
  derived *bptr = new derived;
  bptr->getdata();
}