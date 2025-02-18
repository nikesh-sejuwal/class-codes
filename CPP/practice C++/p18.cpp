// // Friend function
#include <iostream>
using namespace std;
class A
{
  int a, b;

public:
  void getdata()
  {
    cout << "Enter the 2 numbers: " << endl;
    cin >> a >> b;
  }
  friend void add(A obj);
};
void add(A obj)
{
  int c = obj.a + obj.b;
  cout << "Sum: " << c;
}
int main()
{
  A oo;
  oo.getdata();
  add(oo);
}

// #include <iostream>
// using namespace std;
// int add(int a = 5, int b = 2)
// {
//   cout << "Sum= " << a + b << endl;
// }
// int main()
// {
//   int p = 10, q = 20;
//   add(p, q);
//   add(p);
//   add();
// }