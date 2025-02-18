#include <iostream>
 
using namespace std;
 
int main()
{
 
    // Initializing the floating values
    double n1 = 10.14564676;
    double n2 = 20.0;
 
    cout.precision(5);
 
    // Using noshowpoint()
    cout << "noshowpoint flag: "
         << noshowpoint
         << n1 << endl
         << n2 << endl;
 
    return 0;
}