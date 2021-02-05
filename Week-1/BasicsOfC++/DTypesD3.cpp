#include <iostream>

using namespace std;

int main()
{
    //Primitive Datatypes
    //int, float, bool, char, double

    int a = 23;
    float b = 10.23;
    bool t = true;
    char c = 'H';
    double d = 34.2343;

    //How much memory each datatype occupy!
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(t) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;

    /*
    Output:
    4
    4
    1
    1
    8
    */
    return 0;
}