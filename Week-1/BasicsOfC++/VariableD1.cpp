#include <iostream>

using namespace std;
int main()
{
    // Simple Interest
    // Variable Declaration
    int p = 10;
    int r = 15;
    int t = 1;

    float si = p * r * t / 100.00;
    cout << "Simple interest is: " << si << endl;
    // Output: Simple interest is: 1.5

    // Variable by user input
    int a;

    // User input
    cin >> a;
    cout << "Value of a is: " << a;
    // Output: Value of a is: 12
    return 0;
}