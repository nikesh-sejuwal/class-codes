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
  void setRoll()
  {
    roll = count;
    count++;
  }
  // Static member function
};
int Student::count = 0;
int main()
{
  Student s1, s2, s3;
  s1.setRoll();
  s2.setRoll();
  s3.setRoll();
  cout << "Count: " << s1.count << endl;       //. is used in case of object
  cout << "Count: " << Student::count << endl; //:: is scope resolution which is used in case of class
  cout << "Roll of s1: " << s1.roll << endl;
  cout << "Roll of s2: " << s2.roll << endl;
  cout << "Roll of s3: " << s3.roll << endl;
  return 0;
}
