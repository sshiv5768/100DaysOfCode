// Find function
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {12, 56, 78, 11, 34};
    int n;
    cin >> n;
    int key;
    cin >> key;

    auto it = find(a, a + n, key);
    int index = it - a;
    cout << key << " is at " << index;
    return 0;
}