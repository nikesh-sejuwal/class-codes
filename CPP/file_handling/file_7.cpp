// // random file access
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ofstream file("b.txt");
//   file << "C++ Programming";
//   file.seekp(3, ios::beg);
//   file << "a";
//   // file << "Java";
//   file.close();
// }

// // random file access
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   ofstream file("b.txt");
//   file << "C++ Programming";
//   file.seekp(0, ios::beg);
//   file << "A";
//   int pos = file.tellp();
//   cout << "Current postion " << pos << endl;
//   file.close();
// }

// random file access
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  char str[20];
  ifstream file("b.txt");
  file.seekg(-5, ios::end);
  file >> str;
  cout << str;
  file.close();
}