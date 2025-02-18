// role of constructor and disconstructor in C++
// Constructor's order of execution is top to bottom, but the order of call is bottom to top.
#include <iostream>
using namespace std;
class A
{
public:
  A() { cout << "Constructor of a Class A" << endl; }
};
class B : public A
{
public:
  B() { cout << "Constructor of a class B" << endl; }
};
class C : public B
{
public:
  C() { cout << "Constructor of a class C" << endl; }
};
int main()
{
  C cob;
}