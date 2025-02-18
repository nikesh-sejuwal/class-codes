#include <iostream>
using namespace std;
namespace Mynamespace
{
  int var = 45;
  void functions()
  {
    std::cout << "Hello this is from my namespace." << std::endl;
  }
}
int main()
{
  using namespace Mynamespace;
  std::cout << "MY variable: " << var << std::endl;
  functions();
}