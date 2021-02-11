#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // n: number of elements in array
    // key: element we want to find
    int n, key;
    cin >> n;

    int min_so_far = INT_MAX;
    int max_so_far = INT_MIN;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Smallest and Biggest
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] < min_so_far)
        {
            min_so_far = arr[i];
        }
        else if (arr[i] > max_so_far)
        {
            max_so_far = arr[i];
        }
    }

    cout << "Maximum number: " << max_so_far << endl;
    cout << "Minimum number: " << min_so_far << endl;

    return 0;
    /*
    5
    12 34 56 1 3
    Maximum number: 56
    Minimum number: 1
    */
}