// Typecasting C
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
  int myPrimitiveInt = 42;               // create an integer variable
  MyClass obj = MyClass(myPrimitiveInt); // cast the integer to a MyClass object using the constructor
  cout << obj.getInt() << endl;          // prints 42
  return 0;
}
