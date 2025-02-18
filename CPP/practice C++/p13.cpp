/**
 * @author Suresh Chand (sureshchand12a@gmail.com)
 * @brief https://hamrocsit.com/question/3733/
 * @version 0.1
 * @date 2022-04-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;
#define SIZE 5

class Account
{

public:
  string acc_no;
  int balance;

  // static data member
  static int min_balance;

  // read the data
  void readData()
  {
    cout << "\nEnter Account No: ";
    cin >> acc_no;

    cout << "Enter balance: ";
    cin >> balance;
  }

  // print data
  void displayData()
  {
    cout << "Account No: " << acc_no << endl;
    cout << "Balance: " << balance << endl;
  }

  // read minimum balance
  static void readMinBalance()
  {
    cout << "\nEnter Minimum Balance: ";
    cin >> min_balance;
  }

  // static function to print static member
  static void dispMinBalance()
  {
    cout << "Minimum Balance: " << min_balance << endl
         << endl;
  }
};

// Initialize static data member
int Account::min_balance = 0;

int main()
{

  Account acc[SIZE];
  int i = 0;

  // Read the account data
  Account::readMinBalance();

  cout << "\n=======Enter Account Data=======" << endl;
  for (i = 0; i < SIZE; i++)
  {
    acc[i].readData();
  }

  // print the account data
  cout << "\n=======Account Details=======\n"
       << endl;
  for (i = 0; i < SIZE; i++)
  {
    acc[i].displayData();
    acc[i].dispMinBalance();
  }

  return 0;
}