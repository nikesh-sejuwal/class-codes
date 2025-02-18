// order of call and execution is bottom to top in destructor.

#include <iostream>
using namespace std;
class A
{
public:
  ~A() { cout << "Constructor of a Class A" << endl; }
};
class B : public A
{
public:
  ~B() { cout << "Constructor of a class B" << endl; }
};
class C : public B
{
public:
  ~C() { cout << "Constructor of a class C" << endl; }
};
int main()
{
  C cob;
}