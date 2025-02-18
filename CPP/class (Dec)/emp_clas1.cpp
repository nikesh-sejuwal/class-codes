#include <iostream>
using namespace std;
class Employee
{
  int emp_id;
  char emp_name[20];
  float emp_salary, emp_bonus, emp_tax, net_salary1;

public:
  void set_emp_inf();
  float find_net_salary(float salary, float bonus, float tax);
  void get_emp_inf();
};
void Employee ::set_emp_inf()
{
  cout << "Enter employer id: " << endl;
  cin >> emp_id;
  cout << "Enter employer name: " << endl;
  cin >> emp_name;
  cout << "Enter employer salary: " << endl;
  cin >> emp_salary;
  cout << "Enter employer bonus: " << endl;
  cin >> emp_bonus;
  cout << "Enter employer tax: " << endl;
  cin >> emp_tax;
}

float Employee::find_net_salary(float salary, float bonus, float tax)
{
  float net_salary1;
  net_salary1 = (salary + bonus) - tax;
  return net_salary1;
}

void Employee ::get_emp_inf()
{
  cout << "*******************************" << endl;
  cout << "   EMOLOYER DETAILS   OF       " << endl;
  cout << "             \b\b   \b\b\b\b  " << emp_name << endl;
  cout << "Employer id:                   " << emp_id << endl;
  cout << "Employer salary:               " << emp_salary << endl;
  cout << "Employer bonus:                " << emp_bonus << endl;
  cout << "Employer tax:                  " << emp_tax << endl;
  cout << "Net salary:                    " << find_net_salary(emp_salary, emp_bonus, emp_tax) << endl;
  cout << "..............................." << endl;
}

int main()
{
  Employee emp;
  emp.set_emp_inf();
  emp.get_emp_inf();
}