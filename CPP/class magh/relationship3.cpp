// Demonstration of Composition
#include <iostream>
using namespace std;
// class option(){};
class Option

{
  int id;
  string desc;

public:
  Option(int idd, string n)
  {
    id = idd;
    desc = n;
  }
  string getDescription()
  {
    return desc;
  }
  int getId()
  {
    return id;
  }
};

class Question
{
  int id;
  string desc;
  Option *op1, *op2, *op3, *op4;

public:
  Question(int idd, string n, Option *o1, Option *o2, Option *o3, Option *o4)
  {
    id = idd;
    desc = n;
    op1 = o1;
    op2 = o2;
    op3 = o3;
    op4 = o4;
  }
  void display()
  {
    cout << id << ". " << desc << "\n"
         << op1->getId() << ")" << op1->getDescription() << endl;
    cout << op2->getId() << ")" << op2->getDescription() << endl;
    cout << op3->getId() << ")" << op3->getDescription() << endl;
    cout << op4->getId() << ")" << op4->getDescription() << endl;
  }
};
int main()
{
  Option *o1 = new Option(1, "Pokhara"), *o2 = new Option(2, "Kathmandu"), *o3 = new Option(3, "Mustang"), *o4 = new Option(4, "Biratnagar");
  Question d(1, "What is the Capital of Nepal?\n", o1, o2, o3, o4);
  d.display();
}