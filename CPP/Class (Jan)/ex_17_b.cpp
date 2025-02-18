// Type casting B
#include <iostream>
using namespace std;

class Base
{
public:
  virtual void display()
  {
    cout << "This is the Base class" << endl;
  }
};

class Derived : public Base
{
public:
  void display()
  {
    cout << "This is the Derived class" << endl;
  }
};

int main()
{
  Base *baseObj = new Derived;                            // create a Base pointer that points to a Derived object
  Derived *derivedObj = dynamic_cast<Derived *>(baseObj); // cast the Base pointer to a Derived pointer
  derivedObj->display();                                  // call the display() method of the Derived object
  return 0;
}
