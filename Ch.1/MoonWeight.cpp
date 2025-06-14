// Outputs a table from 1 - 100 pounds of earth weight to moon weight
// every 25 pounds, the table will print a new line

#include <iostream>
using namespace std;

int main() {
    double earthWeight;
    double moonWeight;

    for (earthWeight = 1; earthWeight <= 100; earthWeight += 1) {
        moonWeight = earthWeight * 0.17;
        cout << "Earth weight: " << earthWeight << " pounds, Moon weight: " << moonWeight << " pounds\n";

        if (static_cast<int>(earthWeight) % 25 == 0) { // casts to an integer so we can use the modulo operator
            cout << "\n";
        }
    }
    return 0;
}