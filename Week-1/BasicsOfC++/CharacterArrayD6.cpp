#include <iostream>

using namespace std;

int main()
{
    // Integer array
    int arr[] = {1, 2, 3};
    cout << arr << endl;
    // Output: 0x61ff04 (Address of an array)

    // Character array
    char chr[] = {'a', 'b', 'c'};
    cout << chr;
    // Output: abc

    // Input in character array
    char chr1[] = {};
    cin >> chr1;

    cout << chr1 << endl;
    // Output: efg efg

    return 0;
}