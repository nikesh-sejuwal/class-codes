// Create a class Account with data members acc no, balance, and min_balance(static)
// -Include methods for reading and displaying values of objects
// – Define static member function to display min_balance
// -Create array of objects to store data of 5 accounts and read and display values of each object
#include <iostream>
using namespace std;
#define size 5
class Account
{
public:
  int acc_no, balance;
  static int min_blc;
  void read()
  {
    cout << "Enter the acc no: " << endl;
    cin >> acc_no;

    cout << "Enter the balance: " << endl;
    cin >> balance;
  }
  void display()
  {
    cout << "acc no: " << acc_no << endl;
    cout << "balance: " << balance << endl;
  }
  static void readstatic()
  {
    cout << "Enter min-blc: " << endl;
    cin >> min_blc;
  }
  static void displaystatic()
  {
    cout << "min-blc: " << min_blc << endl;
  }
};
int Account::min_blc = 0;
int main()
{
  int i = 0;
  Account A[size];
  cout << "<-----------Read";
  Account::readstatic();
  for (i = 0; i < size; i++)
  {
    A[i].read();
  }
  cout << "<-----------Write";
  for (i = 0; i < size; i++)
  {
    A[i].display();
    Account::displaystatic();
  }
}