// Finding all the zeros from the factorial number

/* Constraints
    0<= n <= 10^9
    n is factorial number
*/
#include <iostream>

using namespace std;

// Function to find zeros from the given factorial.
int findZeros(int n) // Function declaration
{
    int ans = 0;
    for (int D = 0; n / D >= 1; D = D * 5)
    {
        ans += n / D;
    }
    return ans;
}

int main()
{
    long long int n;
    cin >> n;
    cout << findZeros(n) << endl; // Calling the function
    return 0;

    /* 
    Output:
    10
    2
    */
}