// Reading one by one
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  char c;
  ifstream fin("b.txt");
  while (!fin.eof())
  {
    fin.get(c);
    cout << c << endl;
  }
  fin.close();
}