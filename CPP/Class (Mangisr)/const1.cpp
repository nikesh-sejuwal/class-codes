#include <iostream>
using namespace std;
int main()
{
  const float PI = 3.14159;
  float radius;
  cout << "Enter radius" << endl;
  cin >> radius;
  cout << "Area " << PI * radius * radius << endl;
}