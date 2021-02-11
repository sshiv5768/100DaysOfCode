#include <iostream>

using namespace std;

int main()
{
    // n: number of elements in array
    // key: element we want to find
    int n, key;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search: " << endl;
    cin >> key;

    // Linear search
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key Found at " << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element not found!";
    }

    return 0;
    /*
    Output:
    9
    11 22 33 44 55 66 77 88 99
    Enter the element you want to search: 
    34
    Element not found!
    */
}