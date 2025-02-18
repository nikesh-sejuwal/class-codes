#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void speak()
  {
    cout << "Animal is speaking." << endl;
  }
};

class Dog : public Animal
{
public:
  void speak()
  {
    cout << "Woof!" << endl;
  }
};

class Cat : public Animal
{
public:
  void speak()
  {
    cout << "Meow!" << endl;
  }
};

int main()
{
  Animal *a;
  Dog d;
  Cat c;

  a = &d;
  a->speak(); // Output: Woof!

  a = &c;
  a->speak(); // Output: Meow!

  return 0;
}
