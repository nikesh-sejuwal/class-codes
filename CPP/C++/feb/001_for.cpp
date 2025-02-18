// #include <iostream>
// using namespace std;

// int main()
// {
//   int num;
//   int res;
//   cout << "Enter the number whose all integer to be calculated in single digit: " << endl;
//   cin >> num;
//   if (num)
//   {
//     res = num % 9 == 0 ? 9 : num % 9;
//   }
//   cout << res;
// }

#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {12, 24, 30, 54, 63, 7, 7, 8, 9, 10};
  int i;
  for (i = 0; i < 10; i++)
  {
    if ((arr[i]) % 6 == 0)
    {
      continue;
    }
    cout << arr[i] << " ";
  }
}