// File Handling in C++
// reading on the file

#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  char str[50];
  ifstream file("b.txt");
  file.getline(str, 50);
  cout << str;
  file.close();
}