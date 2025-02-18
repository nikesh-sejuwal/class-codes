// // Multiple exception
// // Having one try statement with two or more catch statements:
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
      cout << "Hello Hello";
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
      cout << "Okey Byee";
  }
  catch (int a)
  {
    cout << "Integer exception occurs.";
  }
  catch (char b)
  {
    cout << "Character exception occurs.";
  }
  return 0;
}
// #include <iostream>
// using namespace std;
// class calculation
// {
//   int length, width;

// public:
//   void getdata()
//   {
//     cout << "Enter the length and width of rectangle:" << endl;
//     cin >> length >> width;
//   }
//   int area()
//   {
//     return length * width;
//   }
//   int perimeter()
//   {
//     return (2 * (length + width));
//   }
//   void display()
//   {
//     cout << "The length is: " << length << endl;
//     cout << "The width is: " << width << endl;
//     cout << "The area is: " << area() << endl;
//     cout << "The length is: " << perimeter() << endl;
//   }
// };
// int main()
// {
//   calculation calc;
//   calc.getdata();
//   calc.area();
//   calc.perimeter();
//   calc.display();
// }