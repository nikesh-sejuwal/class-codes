#include <iostream>
using namespace std;
class check
{
public:
  static void printmesg()
  {
    cout << "Hello checking from static" << endl;
  }
};
int main()
{
  check::printmesg();
}