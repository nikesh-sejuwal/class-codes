#include <iostream>
using namespace std;
int main()
{
  int n[5], i, sum = 0;
  cout << "Enter 5 numbers:" << endl;
  for (i = 0; i < 5; i++)
  {
    cin >> n[i];
  }
  for (i = 0; i < 5; i++)
  {
    sum = sum + n[i];
  }
  cout << sum << endl;
  return 0;
}
