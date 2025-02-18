#include <iostream>
using namespace std;
void divide(int a, int b)
{
  if (b == 0)
  {
    throw b;
  }
  else
  {
    cout << "Result: " << a / b << endl;
  }
}
int main()
{
  int a, b, r;
  cout << "Enter 2 numbers." << endl;
  cin >> a >> b;
  // Try block
  try
  {
    if (b == 0)
    {
      throw b;
    }
    r = a / b;
    cout << "The result of the division is: " << r << endl;
  }
  catch (int i)
  {
    cout << "Division by zero exception occured!" << endl;
  }
  cout << "Bye Bye" << endl;
}