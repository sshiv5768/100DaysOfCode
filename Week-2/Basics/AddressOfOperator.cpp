#include <iostream>

using namespace std;

int main()
{
    int a = 34;
    char ch = 'A';
    // Find the address of int a in memory.
    cout << "The address of a: " << &a << endl;

    // Find the address of char ch in memory.
    // IT dosen't work for character values.
    cout << "The address of ch: " << &ch << endl;

    // Explicit Typecasting char* to void*
    cout << "The address of ch: " << (void *)&ch << endl;
    return 0;
}