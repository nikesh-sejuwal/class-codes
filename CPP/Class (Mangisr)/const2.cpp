#include <iostream>
using namespace std;
int main()
{
  enum Days
  {
    Sunday = 1,
    monday = 3,
    tuesday,
    wednesday,
    thursday,
    firday,
    saturday
  };
  enum Days today = monday;
  switch (today)
  {
  case 3:
    cout << "its Monday";
    break;
  default:
    cout << "It's not monday";
  }
  return 0;
}