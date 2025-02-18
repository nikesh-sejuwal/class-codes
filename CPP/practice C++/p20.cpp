// Manipulators are the operators which uses insertion operator(<<) to modify or manipulate the way the data is displayed
// Endl, setprecision, setw()
#include <iostream>
using namespace std;
class time
{
  int hr, mins;

public:
  void getdata(int h, int m)
  {
    hr = h;
    mins = m;
  }
  int operator<(time t)
  {
    int ft, st;
    ft = hr * 60 + mins;
    st = t.hr * 60 + t.mins;
    if (ft < st)
    {
      return 1;
    }
    else
      return 0;
  }
};
int main()
{
  time t1, t2;
  t1.getdata(3, 50);
  t2.getdata(2, 45);
  if (t1 < t2)
  {
    cout << "t1 is lesser then t2";
  }
  // else if (t1 = t2)
  // {
  //   cout << "t1 is equal to t2";
  // }
  else
    cout << "t1 is greater than t2";
}