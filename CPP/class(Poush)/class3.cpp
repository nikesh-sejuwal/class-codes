// Array in Object
#include <iostream>
using namespace std;
class employee
{
  int id;
  string name;
  float salary;

public:
  void setdata(string n, int i, float s)
  {
    id = i;
    name = n;
    salary = s;
  }
  void display()
  {
    cout << "Name: " << name << endl
         << "ID: " << id << endl
         << "Salary: " << endl;
  }
};
int main()
{
  employee e[20];
  string temp;
  int tid, ct;
  float tsalary;
  char abs;
  for (int i = 0; i < 20; i++)
  {
    cin >> tid >> temp >> tsalary;
    e[i].setdata(temp, tid, tsalary);
    cout << "Wahnna cont?(y/n)";
    cin >> abs;
    if (abs == 'y')
    {
      ct++;
      continue;
    }
    else
    {
      break;
    }
  }
  cout << ct << "gjgjhgjh";
  for (int i = 0; i < ct; i++)
  {
    e[i].display();
  }
}