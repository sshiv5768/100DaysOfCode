#include <iostream>
using namespace std;

int main()
{
    //Data Type Modifiers + Data types
    // long, short, signed, unsigned
    // Orignally int takes 4, float 4, double 8, char 1 and bool takes 1 byte.

    // long long will add 4 more bytes into int memory address.
    long long int x = 10;
    long double c = 123.332423232;
    cout << sizeof(x) << endl;
    cout << sizeof(c);
    return 0;
}