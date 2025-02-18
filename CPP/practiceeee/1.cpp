// Pass by value
#include <iostream>
using namespace std;
class time
{
  int hour, minute;

public:
  void setdata(int h, int m)
  {
    hour = h;
    minute = m;
  }
  void sumTime(time t1, time t2)
  {
    hour = t1.hour + t2.hour;
    minute = t1.minute + t2.minute;
    hour = hour + minute / 60;
    minute = minute % 60;
  }
  void display()
  {
    cout << "Hours: " << hour << " Minutes: " << minute << endl;
  }
};
int main()
{
  time t1, t2, t3;
  t1.setdata(2, 50);
  t2.setdata(3, 40);
  t3.sumTime(t1, t2);
  t1.display();
  t2.display();
  cout << "After sum " << endl;
  t3.display();
}