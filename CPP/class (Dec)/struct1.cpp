#include <iostream>
using namespace std;

struct employee
{
  int id;
  float salary;
} e1;
int main()
{
  struct employee *p;
  struct employee e1 = {100, 40000.00};
  p = &e1;

  cout << "ID: " << p->id << endl;
  cout << "salary: " << p->salary << endl;
}
