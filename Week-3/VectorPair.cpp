#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparator
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    // Distance from the orgin
    int d1 = p1.first * p1.first + p1.second * p1.second;
    int d2 = p2.first * p2.first + p2.second * p2.second;

    if (d1 == d2)
    {
        // Checking the X cordinate
        return p1.first < p2.first;
    }
    else
    {
        return d1 < d2;
    }
}

int main()
{
    // Vector pair
    vector<pair<int, int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    // Sort the pairs and find nearest
    sort(v.begin(), v.end(), compare);
    cout << endl;

    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}