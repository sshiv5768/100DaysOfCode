#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ar[] = {10, 20, 30, 40, 50, 60};
    int arr[] = {1, 2, 3};
    int n = sizeof(ar) / sizeof(int);
    int nr = sizeof(arr) / sizeof(int);

    // Rotating arrays
    rotate(ar, ar + 2, ar + n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << ", ";
    }

    cout << endl;
    // Next permutation
    // It gives us next bigger element by re-arranging array
    next_permutation(arr, arr + nr);
    next_permutation(arr, arr + nr);
    // For each loop
    for (int x : arr)
    {
        cout << x << ", ";
    }
    return 0;
}