#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
  int roll;         // Instance member variable
  static int count; // Static member variable
  int getRoll()     // Instance member function
  {
    return roll;
  }
  void setRoll(int r)
  {
    roll = r;
    count++;
  }
  static int getCount() // Static member function
  {
    return count;
  }
};
int Student::count = 0;
int main()
{
  Student s1, s2;
  s1.setRoll(100);
  s2.setRoll(200);
  cout << "Count: " << s1.count << endl;       //. is used in case of object
  cout << "Count: " << Student::count << endl; //:: is scope resolution which is used in case of class
  cout << "Roll of s1: " << s1.roll << endl;
  cout << "Roll of s2: " << s2.roll << endl;
  cout << "Count: " << s2.getCount() << endl;
  return 0;
}
