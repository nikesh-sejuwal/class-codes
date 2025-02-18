// Dynamic constructor
#include <iostream>
using namespace std;
class number
{
  int size;
  int *p;

public:
  number(int s)
  {
    size = s;
    p = new int[size];
  }
  void input()
  {
    for (int i = 0; i < size; i++)
    {
      cin >> p[i];
    }
  }
  void output()
  {
    for (int i = 0; i < size; i++)
    {
      cout << p[i] << endl;
    }
  }
};
int main()
{
  int n;
  cout << "Enter the number of loop to be used: " << endl;
  cin >> n;
  number n1(n);
  cout << "Enter the input" << endl;
  n1.input();
  cout << "THe output are" << endl;
  n1.output();
}