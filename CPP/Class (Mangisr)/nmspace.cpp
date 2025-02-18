//Demo namespace


#include <iostream>
using namespace std;
namespace mynamespace
{
  int x;
  void f()
  {
    cout<<"Inside mynamespace"<<endl;
    
  }
  class A
  {
    public:
    void m()
    {
      cout<<"inside class"<<endl;
    }
  };
}

int main()
{

  mynamespace::x=20;
  cout<<"The value of x is : "<<mynamespace::x<<endl;
  mynamespace::f();
  mynamespace::A aob;
}