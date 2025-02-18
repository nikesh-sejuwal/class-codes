// Dynamic  memory alocation in C++ using new and delete
#include <iostream>
using namespace std;
int main()
{
  int *arr = new int[5];
  for (int i = 0; i < 5; i++)
  {
    arr[i] = i * i;
  }
  cout << "The Values of the arrays are: ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  delete[] arr;
  return 0;
}