#include <iostream>

using namespace std;

// Function for Selection Sort
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        // Updating min_index
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        // Swapping first number with Minimum number
        swap(a[i], a[min_index]);
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    SelectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
    /*
    Output:
    13 45 23 11 67
    11
    13
    23
    45
    67
    */
}