/*
This program takes an input of feet from the user and returns
the value in metres.
*/

#include <iostream>
using namespace std;

int main()
{
    double feet; // declare variables
    cout << "Feet: " ;
    cin >> feet; // take input

    cout << feet << " feet " << "is " << feet / 3.28 << " metres."; // do calculation and return

    return 0;
}