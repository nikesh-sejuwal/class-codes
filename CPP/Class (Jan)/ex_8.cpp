// Demonstration of Aggression(Not Complete)
#include <iostream>
using namespace std;
class Teacher
{
  int id;
  string name;
  string subject;

public:
  Teacher(int idd, string n, string subject)
  {
    id = idd;
    name = n;
    this->subject = subject;
  }
  string getName()
  {
    return name;
  }
  string getSubject()
  {
    return subject;
  }
};
class Department
{
  int id;
  string name;
  Teacher *t;

public:
  Department(int idd, string n, Teacher *p)
  {
    id = idd;
    name = n;
    t = p;
  }
  void display()
  {
    cout << "Teacher: " << t->getName() << " is teaching subject: " << t->getSubject() << " in department: " << name << endl;
  }
};
int main()
{
  Teacher t(100, "Ram", "Physics");
  Department d(1, "Computer Science", &t);
  d.display();
}