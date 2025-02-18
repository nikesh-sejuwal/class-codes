// Passing Array of objects.
#include <iostream>
using namespace std;
const int MAX = 100;
class Employee
{
private:
  float salary;
  int id;

public:
  void getdata()
  {
    cout << "Enter the ID: ";
    cin >> id;
    cout << "Enter the salary: ";
    cin >> salary;
  }
  void putdata()
  {
    cout << "   ID: " << id << "   Salary: " << salary << endl;
  }
};
int main()
{
  Employee e[MAX];
  int n = 0;
  char ans;
  do
  {
    cout << "Enter the Employee Number: " << n + 1 << endl;
    e[n++].getdata();
    cout << "Enter another(y/n)?:";
    cin >> ans;
  } while (ans != 'n');
  cout << endl
       << "<--------------------Employee Detail------------------->" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "  Employee Number is: " << i + 1;
    e[i].putdata();
  }
}