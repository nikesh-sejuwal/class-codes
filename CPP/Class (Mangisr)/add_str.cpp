//By using only the string Cpp wouldnot display another line from spacebar.
//like"you are there" it gives "you".

#include <iostream>
using namespace std;
int main()
{
  string s;
  cout<<"ENter the text: \n";
  getline(cin,s);
  cout<<"You have entered: ";
  cout<<s;
  return 0;
}