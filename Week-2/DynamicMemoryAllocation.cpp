#include <iostream>

using namespace std;

int main()
{

    // Static Allocation
    int a[100];
    cout << sizeof(a) << endl;

    // Dynamic Allocation
    int n;
    cin >> n;
    int *b = new int[n];
    cout << sizeof(b) << endl;

    // Freeup the space
    delete[] b;
    return 0;
}