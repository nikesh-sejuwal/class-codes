// Nested exception handlling
#include <iostream>
using namespace std;
class myexception : public exception
{
public:
  const char *what()
  {
    return "my own exception!!";
  }
};
int main()
{
  try
  {
    myexception e;
    throw e;
    catch (myexception int e1)
    {
      cout << e1.what();
    }
  }
}