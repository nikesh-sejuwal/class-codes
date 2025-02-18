// #include <iostream>
// using namespace std;
// void sum(int a = 3, int b = 4);
// int main()
// {
//   sum(4, 8);
//   sum(4);
//   return 0;
// }
// void sum(int a, int b)
// {
//   cout << endl
//        << "sum: " << (a + b) << endl;
// }

#include <iostream>
using namespace std;
// void sum(int a, int b);
void sum(int a = 2, int b = 5)
{
  cout << "sum: " << (a + b) << endl;
}
int main()
{
  sum(4, 8);
  sum(4);
  sum(0);
  sum();
  return 0;
}
