#include <iostream>

using namespace std;

int main()
{
    int x = 20;
    int *xptr = &x;

    // Address of X
    cout << &x << endl;
    cout << xptr << endl;

    // Value of X using dereferencing
    cout << *xptr << endl;
    cout << *(&x) << endl;

    // Address of X using dereferencing
    cout << *(&xptr) << endl;
    cout << &(*xptr) << endl;

    return 0;
    /*
    Output:
    0x61ff0c
    0x61ff0c
    20
    20
    0x61ff0c
    0x61ff0c
    */
}