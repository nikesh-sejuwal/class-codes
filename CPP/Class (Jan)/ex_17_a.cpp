// Type casting A
#include <iostream>
using namespace std;

class MyClass
{
  int myInt;

public:
  MyClass(int num) { myInt = num; }
  int getInt() { return myInt; }
};

int main()
{
  MyClass obj(42);                                     // create a MyClass object
  int myPrimitiveInt = static_cast<int>(obj.getInt()); // cast the MyClass object to an int
  cout << myPrimitiveInt << endl;                      // prints 42
  return 0;
}
