#include <iostream>

using namespace std;

int main()
{
    int clief_end = 10;
    int x = 0;

    // While loop
    while (x != clief_end)
    {
        x = x + 1;
        if (x == clief_end)
        {
            cout << "I am stopping here, I am at the dead end." << endl;
        }
        else
        {
            cout << "I am at " << x << " position." << endl;
        }
    }

    // Do-while loop
    do
    {
        /* code */
        cout << "I am running" << endl;
        if (x == clief_end)
        {
            cout << "I am stil running, oh no!";
            break;
        }
    } while (x != clief_end);

    /*Output
    I am running
    I am stil running, oh no!
    */

    // For loop
    int y = 1;
    int n;
    cin >> n;

    for (int i = y; i < n; i++)
    {
        y = y + i;
        cout << y << endl;
    }

    /* Output: 3
    2
    4
    */

    return 0;
    /* Output: 
    I am at 1 position.
    I am at 2 position.
    I am at 3 position.
    I am at 4 position.
    I am at 5 position.
    I am at 6 position.
    I am at 7 position.
    I am at 8 position.
    I am at 9 position.
    I am stopping here, I am at the dead end.
    */
}