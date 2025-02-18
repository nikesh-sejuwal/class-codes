#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
int main()
{
  int i, l, m[5];
  char sub[5][20] = {"Maths", "Science", "G.K", "Grammer", "Computer"};
  float total = 0.0, per;
  cout << "Enter the marks of each subject:" << endl;
  for (i = 0; i < 5; i++)
  {
    cin >> m[i];
  }
  cout << "\t"
       << "Subject" << setw(18) << "Marks" << endl;
  cout << "\t"
       << "<------------------------<" << endl;
  for (i = 0; i < 5; i++)
  {
    total += m[i];
    l = strlen(sub[i]);
    cout << "\t" << sub[i] << setw(25 - l) << m[i] << endl;
  }
  per = total / 5;
  cout << "\t"
       << "<-----------------------<" << endl;
  cout << "\t"
       << "Total" << setw(20) << total << endl;
  cout << "\t"
       << "percentage" << setw(15) << per << "%" << endl;
}