#include <iostream>

using namespace std;

int BinarySearch(int a[], int n, int key)
{
    // Starting and ending point of array.
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the key you want to search: " << endl;
    cin >> key;
    cout << "Key found at " << BinarySearch(a, n, key);

    return 0;
}