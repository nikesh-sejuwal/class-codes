#include <iostream>
using namespace std;
int main()
{
  int age;
  cout << "Enter your age" << endl;
  cin >> age;
  if (age > 13)
  {
    if (age <= 19)
    {
      cout << "Teenager" << endl;
    }
    else
    {
      cout << "You are Lakka jawan" << endl;
    }
  }
  else
  {
    cout << "Chotti bachhi ho kya, samaj nahi aata" << endl;
  }
  cout << "Byeee" << endl;
  return 0;
}