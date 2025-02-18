// Static member function, Static method of displying count.
#include <iostream>
using namespace std;
class student
{
private:
  int roll;
  char name[20];
  static int count;

public:
  void getdata()
  {
    cout << "Enter name and roll number: " << endl;
    cin >> name >> roll;
    count++;
  }
  static void displaycount()
  {
    cout << "Count: " << count << endl;
  }
};
int student ::count = 0;
int main()
{
  student s1, s2, s3;
  student::displaycount();
  s1.getdata();
  s2.getdata();
  s3.getdata();
  student::displaycount();
}