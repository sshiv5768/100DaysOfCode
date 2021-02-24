#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {10, 20, 30, 30, 30, 50, 70};
    int n = sizeof(a) / sizeof(int);
    int key;
    cin >> key;

    // Returns true or false
    bool present = binary_search(a, a + n, key);

    if (present)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}