#include <iostream>

namespace myNamespace
{
  int myVar = 42;

  void myFunction()
  {
    std::cout << "Hello from myFunction!" << std::endl;
  }
}

int main()
{
  using namespace myNamespace;

  std::cout << "The value of myVar is: " << myVar << std::endl;

  myFunction();

  return 0;
}
