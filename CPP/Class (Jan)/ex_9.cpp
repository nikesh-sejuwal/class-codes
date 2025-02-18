// Diamond problem arises with multiple inharitance.
#include <iostream>
using namespace std;
class Animal
{
public:
  void move()
  {
    cout << "Animals can move" << endl;
  }
};
class Mammal : public Animal // Without virtual, it is diamond problem
{
public:
  void eat()
  {
    cout << "Mammals eats" << endl;
  }
};
class Bird : public Animal // Without virtual, it is diamond problem
{
public:
  void fly()
  {
    cout << "Birds fly" << endl;
  }
};
class Bat : public Mammal, public Bird
{
};
int main()
{
  Bat bat;
  bat.move();
  bat.eat();
  bat.fly();
}
