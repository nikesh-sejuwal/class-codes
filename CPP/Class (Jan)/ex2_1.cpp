// Passing object to function
#include <iostream>
using namespace std;
class time
{
private:
  int hours, minutes;

public:
  void setdata(int h, int m)
  {
    hours = h;
    minutes = m;
  }
  void sumtime(time t1, time t2)
  {
    hours = t1.hours + t2.hours;
    minutes = t1.minutes + t2.minutes;
    hours = hours + minutes / 60;
    minutes = minutes % 60;
  }
  void display()
  {
    cout << "Hours= " << hours << " and Minutes= " << minutes << endl;
  }
};
int main()
{
  time t1, t2, t3;
  t1.setdata(2, 40);
  t2.setdata(3, 50);
  t3.sumtime(t1, t2);
  t1.display();
  t2.display();
  t3.display();
}