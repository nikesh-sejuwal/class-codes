// Create a class Account with data members acc no, balance, and min_balance(static)
// -Include methods for reading and displaying values of objects
// – Define static member function to display min_balance
// -Create array of objects to store data of 5 accounts and read and display values of each object

#include <iostream>
using namespace std;
#define Size 5
class Account
{
public:
  int acc_no;
  int balance;
  static int min_balance;
  void readData()
  {
    cout << "Enter the account number: " << endl;
    cin >> acc_no;
    cout << "Enter the balance of person: " << endl;
    cin >> balance;
  }
  void displayData()
  {
    cout << "Acc no: " << acc_no << endl;
    cout << "Balance: " << balance << endl;
  }
  static void readMinBlc()
  {
    cout << "Enter the minimum balance: " << endl;
    cin >> min_balance;
  }
  static void displayMinBlc()
  {
    cout << "Min-Balance: " << min_balance << endl;
  }
};
// initilize the minimum balance:
int Account::min_balance = 0;
int main()
{
  Account Acc[Size];
  int i = 0;
  cout << "<-------------Read Data---------------->" << endl;
  Account::readMinBlc();
  for (i = 0; i < Size; i++)
  {
    Acc[i].readData();
  }
  cout << "<---------------Display Data--------------->" << endl;
  for (i = 0; i < Size; i++)
  {
    Acc[i].displayData();
    Account::displayMinBlc();
  }
}