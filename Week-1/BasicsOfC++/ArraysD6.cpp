#include <iostream>

using namespace std;

int main()
{
    // Numbers in array
    int n;
    cin >> n;
    // Init array
    int a[n];

    // Input all numbers in an array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Print all numbers from an array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
    /*
    Output:
    5
    1 2 3 4 5 
    1 
    2
    3
    4
    5
    */
}