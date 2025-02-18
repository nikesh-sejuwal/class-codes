// Converting dollor into rupees
#include <iostream>
using namespace std;
class rupees
{
public:
  int rs;
  void display()
  {
    cout << "Money in Rupees: " << rs << endl;
  }
};

class dollor
{
private:
  int doll;

public:
  dollor(int x)
  {
    doll = x;
  }
  operator rupees()
  {
    rupees temp;
    temp.rs = doll * 100;
    return temp;
  }
  void display()
  {
    cout << "Amount of rupees in dollor: " << doll << endl;
  }
};
int main()
{
  dollor d(10);
  d.display();
  rupees r = d;
  r.display();
}