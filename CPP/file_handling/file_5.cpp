// Object in the file
// wrong
#include <iostream>
#include <fstream>
class Student
{
  int id;
  string name;

public:
  void getstu()
  {
    cout << "Enter id and name" << endl;
    cin >> id >> name;
  }
  void putstu()
  {
    cout << "ID: " << id << "\n Name: " << name << endl;
  }
};
int main()
{
  stu s;
  ifstream file("a.txt", ios::in);
  file.read((char *)&s, sizeof(s));
  cout << "ID: \t Name\n";
  cout < "---------------\n";
  while (!file.eof())
  {
    s.putstu();
    file.read((char *)&s, sizeof(s));
  };
  file.close();
}