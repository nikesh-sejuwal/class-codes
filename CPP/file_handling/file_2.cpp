// Write in the file
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  ofstream file("b.txt");
  file << "C++ is Love but the next is";
  file.close();
}