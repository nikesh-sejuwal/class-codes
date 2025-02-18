// multiple catch block
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
  int a, b, r, i = 4;
  int list[3] = {45, 6, 8};
  cout << "Enter 2 numbers." << endl;
  cin >> a >> b;
  // Try block
  try
  {
    divide(a, b);
    if (i < 3)
      cout << list[i] << endl;
    else
      throw "array index of bounds exception";
    throw 4.5;
  }
  catch (int i)
  {
    cout << "Division by zero exception occured!" << endl;
  }
  catch (const char *s)
  {
    cout << s << endl;
  }
  catch (...)
  {
    cout << "Unreported exception occured" << endl;
  }
  cout << "Bye Bye" << endl;
}