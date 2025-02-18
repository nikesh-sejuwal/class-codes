// Object in the file
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
  ofstream file("a.txt");
  // file.read(char *, sizeof(s));
  char op;
  do
  {
    s.gutstu();
    file.write((char *)&s, sizeof(s));
    cout << "One student stored, Do you want to store next student?\n"
         << endl;
    cin >> op;
  }; while (op == 'y' || op = "Y");
  file.close();
}