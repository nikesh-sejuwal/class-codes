// demo of name collison avoding using namespace

#include <iostream>
using namespace std;
namespace digit
{
  int count;
}
namespace letter
{
  int count;
}
int main()
{
  char word[] = "Soch College 369";
  int i = 0;
  while (word[i] != '\0')
  {
    if (isdigit(word[i]))
      digit::count++;
    if (isalpha(word[i]))
      letter::count++;
    i++;
  }
  cout << "Total digits: " << digit::count << endl
       << "Total letters: " << letter::count;

  namespace ans = letter;

  cout << endl
       << ans::count << endl;
}