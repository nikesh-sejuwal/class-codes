// wAP in C++ that uses appropriate stream manupulators to display following
/*
     Subject                   marks
       Maths                    60
       English                  50
       C program                70
       Statistics               75
       Sociology                55
       ......................................
       Total                    310
        percentage              62%  */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << setw(1) << "Subject";
  cout << setw(60) << right << "Marks" << endl;
  cout << setw(1) << "Maths";
  cout << setw(59) << right << "60" << endl;
  cout << setw(1) << "English";
  cout << setw(57) << right << "50" << endl;
  cout << setw(1) << "C-Program";
  cout << setw(55) << right << "70" << endl;
  cout << setw(1) << "Statistic";
  cout << setw(55) << right << "75" << endl;
  cout << setw(1) << "Sociology";
  cout << setw(55) << right << "55" << endl;
  cout << setw(56) << left << "............................................................................\n";
  cout << setw(1) << right << "Total";
  cout << setw(59) << right << "310" << endl;
  cout << setw(1) << right << "Percentage";
  cout << setw(54) << right << "62%";

  return 0;
}
