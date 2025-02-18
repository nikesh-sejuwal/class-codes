#include <iostream>
using namespace std;
class Animal
{
public:
  virtual void speak()
  {
    cout << "Animal speaking" << endl;
  }
};
class dog : public Animal
{
public:
  void speak()
  {
    cout << "Whow Whow" << endl;
  }
};
class cat : public Animal
{
public:
  void speak()
  {
    cout << "meow meow" << endl;
  }
};
int main()
{
  Animal *a;
  cat c;
  dog d;
  a = &c;
  a->speak();
  a = &d;
  a->speak();
}