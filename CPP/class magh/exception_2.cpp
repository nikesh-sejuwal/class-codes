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
  int a, b, r, i = 6;
  int list[3] = {45, 6, 8};
  cout << "Enter 2 numbers." << endl;
  cin >> a >> b;
  // Try block
  try
  {
    divide(a, b);
    if (i < 4)
      cout << list[i] << endl;
    else
      throw "array index of bounds exception";
  }
  catch (int i)
  {
    cout << "Division by zero exception occured!" << endl;
  }
  catch (const char *s)
  {
    cout << s << endl;
  }
  cout << "Bye Bye" << endl;
}