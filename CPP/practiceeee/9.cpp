#include <iostream>
using namespace std;
int main()
{
  int choice;
  cout << "Enter your choice: " << endl;
  cin >> choice;
  try
  {
    if (choice == 0)
    {
      cout << "Hello Hello" << endl;
    }
    else if (choice == 1)
    {
      throw(100);
    }
    else if (choice == 2)
    {
      throw('x');
    }
    else
      cout << "Okey byee" << endl;
  }
  catch (int x)
  {
    cout << "Integer exception occurs" << endl;
  }
  catch (char y)
  {
    cout << "Character exception occurs" << endl;
  }
}