#include <iostream>

using namespace std;

int main()
{
    int number, digit, sum = 0;
    cin >> number;

    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    cout << "The sum of digits is: " << sum;
    return 0;
}
