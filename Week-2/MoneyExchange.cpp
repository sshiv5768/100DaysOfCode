#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{

    return a <= b;
}

int main()
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins) / sizeof(n);

    int money;
    cin >> money;

    while (money > 0)
    {
        int lb = lower_bound(coins, coins + n, money, compare) - coins - 1;
        int mon = coins[lb];
        cout << mon << ", ";
        money = money - mon;
    }

    return 0;
}