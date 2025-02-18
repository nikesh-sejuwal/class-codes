#include <iostream>
using namespace std;
int main()
{
  int day;
  cout << "enter the day from 1 - 7 " << endl;
  cin >> day;
  switch (day)
  {
  case 1:
    cout << "Sunday morning love you" << endl;
    break;
  case 2:
    cout << "Monday morning love you " << endl;
    break;
  case 3:
    cout << "Tuesday morning love you" << endl;
    break;
  case 4:
    cout << "Wednesday morning love you" << endl;
    break;
  case 5:
    cout << "thursday morning love you" << endl;
    break;
  case 6:
    cout << "Friday morning love you" << endl;
    break;
  case 7:
    cout << "Saturday morning love you" << endl;
    break;
  default:
    cout << "I wanna lovve you everyday" << endl;
  }
}