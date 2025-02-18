/*This keyword   (pointer to Object)
  "this" keyword refers tp a pointer to object.
  It refers to a pointer to caller object
  this is a pointer to caller object that is available inside all instance memebr function of a given caller object by caller default
  this keyword is used to resolve name collision between name and class memeber name inside a constructuror of a class*/
#include <iostream>
using namespace std;
class Student
{
  int roll;
  string name;

public:
  Student()
  {
    roll = 100;
    name = "Ram";
  }

  int getRoll() { return roll; }
  string getName() { return name; }
  void setRoll(int r) { roll = r; }
};
int main()
{
  Student s1;
  s1.setRoll(20);
  s1.getRoll();
  cout << ": " << s1.getRoll() << endl;
}