#include <iostream>
using namespace std;
struct employee
{
  int id;
  char name[20];
  float salary;
  char position[30];
};
int main()
{
  struct employee e = {101, "Nikesh", 200000, "Project manager"};
  struct employee *p;
  p = &e;
  cout << "Name: " << p->name << endl;
  cout << "ID number " << e.id << endl;
  cout << "Salary of this person is: " << e.salary << endl;
  cout << "Position of this person in the job is: " << e.position << endl;
}