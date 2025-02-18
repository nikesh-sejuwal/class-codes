// Class Templetes
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
    T retval;
    retval = a > b ? a : b;
    return retval;
  }
};
int main()
{
  mypair<int> object1(10, 5);
  cout << "Larger= " << object1.getmax() << endl;
  mypair<double> object2(5.4, 7);
  cout << "Larger= " << object2.getmax() << endl;
}