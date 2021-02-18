#include <iostream>

using namespace std;

int main()
{
    // 3x3 2D array: a[row][column]
    int a[3][3] = {0};

    // Diagonal matrix
    a[0][0] = 1;
    a[1][1] = 1;
    a[2][2] = 1;

    // Printing 2D array
    for (int row = 0; row <= 2; row++)
    {
        for (int col = 0; col <= 2; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
    /* Output
        1 0 0 
        0 1 0
        0 0 1
    */
}