// #include <iostream>
// using namespace std;
// class A
// {
//   int a;

// public:
//   int b;
//   void get_ab()
//   {
//     cout << "Enter values of a and b: ";
//     cin >> a >> b;
//   }
//   int get_a()
//   {
//     return a;
//   }
//   void show_a()
//   {
//     cout << "a= " << a << "\n";
//   }
// };
// class B : public A
// {
//   int c;

// public:
//   void mul()
//   {
//     get_a();
//     c = b * get_a();
//   }
//   void display()
//   {
//     cout << "a= " << get_a() << "\n";
//     cout << "b= " << b << endl;
//     cout << "c= " << c << endl;
//   }
// }

// ;
// int main()
// {
//   B b1;
//   b1.get_ab();
//   b1.mul();
//   b1.show_a();
//   b1.display();
//   b1.b = 20;
//   b1.mul();
//   b1.display();
// }

// make class student and another foreign student and name the student of the that class from foreign country
// single inheritance
#include <iostream>
using namespace std;
class student
{
  int age;
  string name;

public:
  student(string n, int a)
  {
    name = n;
    age = a;
  }

  string getName()
  {
    return name;
  }
  void display()
  {
    cout << "Name: " << name << endl
         << "Age: " << age << endl;
  }
};
class foreignstudent : public student
{
  string country;

public:
  foreignstudent(string n, int a, string c) : student(n, a)
  {
    country = c;
  }
  void displayforeign()
  {
    display();
    cout << "Country: " << country << endl;
  }
};

int main()
{
  foreignstudent f("Nikesh", 21, "Nepal");
  f.displayforeign();
  return 0;
}