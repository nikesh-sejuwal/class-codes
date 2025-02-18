// Nested exception handlling
#include <iostream>
using namespace std;
int main()
{
  try
  {
    try
    {
      throw 3;
    }
    catch (int a)
    {
      cout << "exception occured in inner try-catch" << endl;
      throw a;
    }
  }
  catch (int x)

  {
    cout << "exception occured by outer try-catch" << endl;
  }
}