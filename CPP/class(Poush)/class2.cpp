
#include <iostream>
using namespace std;
class student
{
  int id, roll;
  string name; // string name;
public:
  void setdata(string n, int i, int r) // string n
  {
    name = n; // strcpy(name,n);  name=n;
    id = i;   // id=i
    roll = r;
  }
  void display()
  {
    cout << "Name: " << name << endl
         << "Id: " << id << endl
         << "Rollno: " << roll << endl;
  }
};
int main()
{
  student s1, s2, s3, s4;
  s1.setdata("Nikesh", 11, 11);
  s2.setdata("Kiran", 1, 010);        // 01 means octal 1 and 08 is octal 8 but octal only has 7
  s3.setdata("Suvash", 2, 010000000); // 8^2
  s4.setdata("Rimal", 3, 11);

  s3.display();
}