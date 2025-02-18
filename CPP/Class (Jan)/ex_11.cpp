// Multilevel inheritance
#include <iostream>
using namespace std;
class Student
{
  int roll;
  char name[20];

public:
  void getStudent()
  {
    cout << "Enter name and rollno of the student: " << endl;
    cin >> name >> roll;
  }
  void displayStudent()
  {
    cout << "Name: " << name << endl
         << "Rollno: " << roll << endl;
  }
};

class Marks : public Student
{
  int Maths, OOP, DS, MP;

public:
  void getMarks()
  {
    cout << "Enter the marks in Maths,OOP,DS and MP subjects: " << endl;
    cin >> Maths >> OOP >> DS >> MP;
  }
  void displayMarks()
  {
    cout << "Maths: " << Maths << endl;
    cout << "OOP: " << OOP << endl;
    cout << "DS: " << DS << endl;
    cout << "MP: " << MP << endl;
  }
  int findTotalMarks()
  {
    return (Maths + OOP + DS + MP);
  }
};
class Result : public Marks
{
  float total, percentage;

public:
  void getdata()
  {
    getStudent();
    getMarks();
  }
  void displaydata()
  {
    displayStudent();
    displayMarks();
    total = findTotalMarks();
    percentage = total / 4;
    cout << "Total marks: " << total << endl
         << "Percentage: " << percentage << endl;
  }
};
int main()
{
  Result r;
  r.getdata();
  cout << "<------------Result------------->" << endl;
  cout << "<----------------------------------->" << endl;
  r.displaydata();
}