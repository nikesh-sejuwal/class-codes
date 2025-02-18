//endl used as cout<<"Hello"<<endl; it is used to format the given code.
// Manupulator in C++ is used to format the output on the screen.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int a=15;
  cout<<a<<endl;
  cout<<hex<<a<<endl;
  cout<<hex<<showbase<<a<<endl<<endl;

  int b=16;
  cout<<b<<endl;
  cout<<dec<<b<<endl;
  cout<<dec<<showbase<<b<<endl<<endl;
  return 0;
}