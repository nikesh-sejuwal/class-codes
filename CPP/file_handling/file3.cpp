// Reading multiple files
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  char str[50];
  ifstream file("b.txt");
  while (!file.eof())
  {
    file.getline(str, 50);
    cout << str << endl;
  }
  file.close();
}