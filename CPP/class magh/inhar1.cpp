// Example of single inheritance
#include <iostream>
using namespace std;

class student
{
  int id;
  string name;

public:
  void getdata()
  {
    cout << "Id: " << endl;
    cin >> id;
    cout << "Name: " << endl;
    cin >> name;
  }
  void putdata()
  {
    cout << "ID: " << id << "\t\tName: " << name << endl;
  }
};
class result : public student
{
  int m1, m2, m3;

public:
  void getmarks()
  {
    cout << "Enter the marks of 1st student: " << endl;
    cin >> m1;
    cout << "Enter the marks of 2nd student: " << endl;
    cin >> m2;
    cout << "Enter the marks of 3rd student: " << endl;
    cin >> m3;
  }
  void putmarks()
  {
    cout << "Marks of 1st student: " << m1 << endl;
    cout << "Marks of 2nd student: " << m2 << endl;
    cout << "Marks of 3rd student: " << m3 << endl;
  }
};
int main()
{
  result r;
  r.getdata();
  r.getmarks();
  r.putdata();
  r.putmarks();
}