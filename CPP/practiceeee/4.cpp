#include <iostream>
using namespace std;
const int MAX = 100;
class employee
{
  int id;
  float salary;

public:
  void getdata()
  {
    cout << "Enter the id and salary of a person: " << endl;
    cin >> id >> salary;
  }
  void display()
  {
    cout << "Salary: " << salary << "   Id: " << id << endl;
  }
};
int main()
{
  employee e[MAX];
  int n = 0;
  char ans;
  do
  {
    cout << "Enter the employee number: " << n + 1 << endl;
    e[n++].getdata();
    cout << "Enter another employee detail (y/n): ";
    cin >> ans;
  } while (ans != 'n');
  for (int i = 0; i < n; i++)
  {
    cout << "Employe num is: " << i + 1 << " ";
    e[i].display();
  }
}