#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout<<setw(100)<<"ball\n"; 
  cout<<setw(10)<<left<<"ball";  //by defult it has right nmanupulator
  return 0;
}