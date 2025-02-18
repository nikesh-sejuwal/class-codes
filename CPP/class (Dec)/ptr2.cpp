// Function call , Call by address

#include <iostream>
using namespace std;
void swap(int *, int *);
int main()
{
  int a = 4, b = 7;
  cout << "a: " << a << endl
       << "b: " << b << endl;
  swap(&a, &b);
  cout << "a: " << a << endl
       << "b: " << b << endl;
  return 0;
}
void swap(int *x, int *y)
{
  int z;
  z = *x;
  *x = *y;
  *y = z;
}