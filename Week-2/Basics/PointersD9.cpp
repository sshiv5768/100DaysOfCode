#include <iostream>

using namespace std;

int main()
{
    int a = 23;
    char ch = 'A';
    // Pointer for storing address of a
    int *aptr = &a;

    // Pointer for storing address of ch
    char *chptr = &ch;

    cout << aptr << endl;
    cout << chptr << endl;

    // Size of the pointer
    cout << sizeof(aptr) << endl;
    cout << sizeof(chptr) << endl;

    /* Output:
    0x61ff04
    A↨
    4
    4
    */

    return 0;
}