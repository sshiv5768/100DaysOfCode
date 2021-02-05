#include <iostream>

using namespace std;

int main()
{
    // Variable Declaration
    int n, sum;

    // User input
    cin >> n;

    // Sum of N natural numbers
    sum = n * (n + 1) / 2;
    cout << "Sum of " << n << " numbers is: " << sum;
    return 0;

    /* 
    Output: 
    3
    Sum of 3 numbers is: 6
    */
}