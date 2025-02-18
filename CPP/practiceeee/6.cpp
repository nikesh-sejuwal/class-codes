#include <iostream>
using namespace std;
template <class T>
class mypair
{
  T a, b;

public:
  mypair(T first, T second)
  {
    a = first;
    b = second;
  }
  T getmax()
  {
    T res;
    res = a > b ? a : b;
    return res;
  }
};
int main()
{
  mypair<int> object1(10, 14);
  mypair<float> object2(14.5, 15.5);
  cout << "Larger: " << object1.getmax() << endl;
  cout << "Larger: " << object2.getmax();
}