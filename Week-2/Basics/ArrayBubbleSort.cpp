#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
    // Iterations
    for (int i = 0; i <= n - 1; i++)
    {
        // Swaping each number in an iteration
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    int a[1000];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    BubbleSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " , ";
    }

    return 0;
    /* Output
    6
    13 5 16 78 45 90
    5, 13, 16, 45, 78, 90,
    */
}