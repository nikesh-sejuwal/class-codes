// Create a class author with attributes name and qualification. Also create a class publication with pname. From these classes derive a classes derive a class book having attributes title and price. Each of the three classes should have getdata() method to get their data from user. The classes should have putdata() method to display the data. Create instance of the class book in main.

#include <iostream>
using namespace std;
class author
{
public:
  string nauthor;
  string qualification;
  void getdata()
  {
    cout << "Enter the name of author and qualification: " << endl;
    cin >> nauthor >> qualification;
  }
};
class pname
{
public:
  string name;
  void getdata()
  {
    cout << "Enter the name of publication: " << endl;
    cin >> name;
  }
};
class book : public author, public pname
{
public:
  string title;
  float price;
  void getdata()
  {
    cout << "Enter the title and price of book:" << endl;
    cin >> title >> price;
  }
  void putdata()
  {
    cout << "<------------- BOOK INFO----------------->" << endl;
    cout << "Author name: " << nauthor << endl;
    cout << "QUalification: " << qualification << endl;
    cout << "Name of Publication: " << name << endl;
    cout << "Title of book: " << title << endl;
    cout << "Price of a book: " << price << endl;
  }
};
int main()
{
  book b;
  b.author::getdata();
  b.pname::getdata();
  b.book::getdata();
  b.putdata();
}