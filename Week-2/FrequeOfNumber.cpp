#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {10, 20, 30, 30, 50, 60, 70, 70, 100};
    int n = sizeof(a) / sizeof(n);
    int key;
    cin >> key;

    // Returns the index of lower bound
    auto lb = lower_bound(a, a + n, key);
    cout << "Lower bound is: " << (lb - a) << endl;

    // Returns the index of upper bound
    auto ub = upper_bound(a, a + n, key);
    cout << "Upper bound is: " << (ub - a) << endl;

    // Returns the frequency of key element
    cout << "Frequency of " << key << " is: " << (ub - lb);

    return 0;
}