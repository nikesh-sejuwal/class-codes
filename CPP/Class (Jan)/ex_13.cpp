// Read and write from file
#include <iostream>
#include <fstream>

using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  Person(string n = "", int a = 0) : name(n), age(a) {}

  void setName(string n)
  {
    name = n;
  }

  void setAge(int a)
  {
    age = a;
  }

  void display()
  {
    cout << "Name: " << name << ", Age: " << age << endl;
  }
};

int main()
{
  Person p1("Ram Shah", 30);
  Person p2("Shushant", 25);

  ofstream fout("people.txt");
  fout.write((char *)&p1, sizeof(Person));
  fout.write((char *)&p2, sizeof(Person));
  fout.close();
  cout << "Objects written to file successfully." << endl;

  ifstream fin("people.txt");
  Person p3, p4;
  fin.read((char *)&p3, sizeof(Person));
  fin.read((char *)&p4, sizeof(Person));
  fin.close();
  cout << "Objects read from file successfully." << endl;
  p3.display();
  p4.display();

  return 0;
}
