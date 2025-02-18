#include <iostream>
using namespace std;
int main()
{
  int a=2;
  int b=a;
  cout<<"a: "<<a<<"\t"<<"b: "<<b<<endl;
  b=b+10;
  cout<<"a: "<<a<<"\t"<<"b: "<<b;


fflush(stdin)

  int x=2;
  int &y=a;
  cout<<"x: "<<x<<"\t"<<"y: "<<y<<endl;
  b=b+10;
  cout<<"x: "<<x<<"\t"<<"y: "<<y;
  return 0;
}