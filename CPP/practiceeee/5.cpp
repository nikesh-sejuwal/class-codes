#include <iostream>
using namespace std;
class Animal
{
public:
  void move()
  {
    cout << "Animals" << endl;
  }
};
class Mammal : public Animal
{
public:
  void eat()
  {
    cout << "Mammals" << endl;
  }
};
class Bird : public Animal
{
public:
  void fly()
  {
    cout << "Birds" << endl;
  }
};
class Bat : public Mammal, public Bird
{
public:
  void both()
  {
    cout << "Bat" << endl;
  }
};
int main()
{
  Bat bat;
  bat.both();
  bat.eat();
}