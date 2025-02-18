#include <iostream>
#include <conio.h>
using namespace std;

class Option
{
private:
  int Id;
  string Description;

public:
  Option()
  {
    Id = 0;
    Description = "";
  }
  Option(int i, string d)
  {
    Id = i;
    Description = d;
  }
  int getId()
  {
    return Id;
  }
  string getDescription()
  {
    return Description;
  }
  void setId(int idd)
  {
    Id = idd;
  }
  void setDescription(string des)
  {
    Description = des;
  }
};