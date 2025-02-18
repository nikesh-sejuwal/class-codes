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
  cout << setw(1) << "Subject" << setw(60) << right << "Marks" << endl

       << setw(1) << "Maths" << setw(59) << right << "60" << endl

       << setw(1) << "English" << setw(57) << right << "50" << endl

       << setw(1) << "C-Program" << setw(55) << right << "70" << endl

       << setw(1) << "Statistic" << setw(55) << right << "75" << endl

       << setw(1) << "Sociology" << setw(55) << right << "55" << endl

       << setw(56) << left << "............................................................................\n"
       << endl

       << setw(1) << right << "Total" << setw(59) << right << "310" << endl

       << setw(1) << right << "Percentage" << setw(54) << right << "62%" << endl;

  return 0;
}
