#include <iostream>
// This program shows the difference between short int and int
using namespace std;


int main()
{
    short int i; // 2 bytes. A signed short integer. -32768 to 32767
    int j; // 4 bytes. An unsigned short integer. 0 to 65535
    j = 60000; // 60000 is too large for a short int, so it will be truncated to -5536
    i = j; // 2 bytes  
    cout << i << " " << j;

    return 0;
}