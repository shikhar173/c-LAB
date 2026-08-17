#include <iostream>
using namespace std;
int main()
{
    float C;
    float F;
    cout << "Enter temp. in Celsius: ";
    cin >> C;
    
    F = 9 * C/5 + 32;
    cout << "\nTemp. in fahrenheit: " << F;

    return 0;
}