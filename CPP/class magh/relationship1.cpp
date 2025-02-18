// Demonstration of association
#include <iostream>
using namespace std;

class Patient
{
  int id;
  string name;

public:
  Patient(int idd, string n)
  {
    id = idd;
    name = n;
  }
  string getName()
  {
    return name;
  }
};

class Doctor
{
  int id;
  string name;

public:
  Doctor(int idd, string n)
  {
    id = idd;
    name = n;
  }
  void check(Patient &p)
  {
    cout << "Doctor: " << name << " is checking patient: " << p.getName() << endl;
  }
};

int main()
{
  Patient p1(100, "Ram");
  Patient p2(102, "Shyam");
  Patient p3(103, "Gita");
  Patient p4(104, "Sita");
  Doctor d1(1, "Hari");
  Doctor d2(2, "Tom");
  d1.check(p1);
  d1.check(p2);
  d2.check(p3);
  d2.check(p4);
}