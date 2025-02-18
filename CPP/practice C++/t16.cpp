#include <iostream>
using namespace std;
int main()
{
  float a, b, c;
  cout << "Enter 2 numbers for division" << endl;
  cin >> a >> b;
  try
  {
    if (b == 0)
    {
      throw b;
    }
    else
    {
      c = a / b;
      cout << "Result: " << c << endl;
    }
  }
  catch (float i)
  {
    cout << "Exception occurs b= " << i << endl;
  }
  cout << "Thank you" << endl;
}