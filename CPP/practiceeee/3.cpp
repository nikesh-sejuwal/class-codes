#include <iostream>
using namespace std;
class student
{
  int roll;
  char name[20];
  static int count;

public:
  void getdata()
  {
    cout << "Enter the name and roll of student:  " << endl;
    cin >> name >> roll;
    count++;
  }
  static void display()
  {
    cout << "Count: " << count << endl;
  }
};
int student ::count = 0;
int main()
{
  student s1, s2, s3;
  student::display();
  s1.getdata();
  s2.getdata();
  s2.getdata();
  student::display();
}