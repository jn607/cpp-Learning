/*
Interactive program that computes the area of a triangle
*/

#include <iostream>
using namespace std;

int main()
{
    double base, height;
    
    cout << "Enter base length: ";
    cin >> base; // Takes input

    cout << "Enter height: ";
    cin >> height; //Takes input

    cout << "The triangle's area is: " << (base * height) / 2; //Outputs result

    return 0;
}