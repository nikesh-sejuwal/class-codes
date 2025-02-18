//First cpp to take a character from the user and show to the monitor
#include <iostream>
using namespace std;
int main()
{
  char c;
  cout<<"Enter a character: \n";
  c=cin.get();
  cout<<"You have entered: ";
  cout.put(c);
  return 0;
}