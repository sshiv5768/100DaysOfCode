#include <iostream>
using namespace std;

int main()
{
    int f = 0;
    int c;

    // Formula: celcisus = (5/9) * (f - 32)
    while (f <= 300)
    {
        c = (5 * (f - 32)) / 9;
        cout << f << ' ' << c << endl;
        f = f + 20;
    }

    return 0;
    /* Output:
    0 -17
    20 -6
    40 4
    60 15
    80 26
    100 37
    120 48
    140 60
    160 71
    180 82
    200 93
    220 104
    240 115
    260 126
    280 137
    300 148
    */
}