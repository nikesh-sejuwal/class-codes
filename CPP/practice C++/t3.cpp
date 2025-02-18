// #include <iostream>
// using namespace std;
// template <class A, class B>
// void getdata(A x, B y)
// {
//   cout << "Value at A is : " << x << endl;
//   cout << "Value ar B is: " << y << endl;
// }

// int main()
// // {
//   int a = 12, b = 14;
//   getdata(a, b);
// }
#include <iostream>
using namespace std;
int main()
{
  int choice;
  cout << "Enter your choice:" << endl;
  cin >> choice;
  try
  {
    if (choice == 0)
    {
      cout << "Hello" << endl;
    }
    else if (choice == 1)
      throw 10;
    else if (choice == 2)
      throw 'x';
    else
      cout << "bye " << endl;
  }
  catch (int x)
  {
    cout << "Exceptional occurs " << endl;
  }
  catch (char y)
  {
    cout << "Alphabet error occurs: " << endl;
  }
}