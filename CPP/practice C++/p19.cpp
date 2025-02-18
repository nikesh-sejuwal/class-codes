// #include <iostream>
// using namespace std;
// int main()
// {
//   int *ptr;
//   ptr = new int[5];
//   cout << "Enter the number: " << endl;
//   for (int i = 0; i < 5; i++)
//   {
//     cin >> ptr[i];
//   }

//   cout << "The number is: " << endl;
//   for (int j = 0; j < 5; j++)
//   {
//     cout << " " << ptr[j] << endl;
//   }
//   delete[] ptr;
// }

#include <iostream>
#include <string>

using namespace std;

int main()
{
  char name[20];
  string city;

  // using get() function
  cout << "Enter your name: ";
  cin.get(name, 20); // reads input until '\n' or 19 characters are reached
  cout << "Hello, " << name << "!" << endl;
  cin.ignore(); // ignore the '\n' character left in the input buffer

  // using getline() function
  cout << "Enter your city: ";
  getline(cin, city); // reads input until '\n' or end of input buffer
  cout << "You live in " << city << "." << endl;

  return 0;
}
