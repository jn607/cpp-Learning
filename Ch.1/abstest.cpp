/* 
Testing in built C++ functions
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int value;
    cout << "Insert a negative integer: ";
    cin >> value;

    cout << "The absolute value is " << abs(value);

}