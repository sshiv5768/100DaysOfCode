#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // Assigning maximum and minimum
    int min_so_far = INT_MAX;
    int max_so_far = INT_MIN;

    int no;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        if (no < min_so_far)
        {
            min_so_far = no;
        }
        else if (no > max_so_far)
        {
            max_so_far = no;
        }
    }
    cout << max_so_far << " is maximum number." << endl;
    cout << min_so_far << " is minimum number." << endl;
    return 0;

    /* Output:
        5
        10 30 40 56 20
        56 is maximum number.
        10 is minimum number.
    */
}