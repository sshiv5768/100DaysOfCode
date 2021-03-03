#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> i{1, 2, 3, 4, 5};

    // Push_back- O(1)
    i.push_back(10);
    i.push_back(12);

    // Pop_back- O(1)
    i.pop_back();

    // Insert - Insert element in the middle - O(N)
    i.insert(i.begin() + 2, 100);

    // Erase element from the middle
    i.erase(i.begin() + 2);
    i.erase(i.begin() + 2, i.begin() + 4);

    for (int x : i)
    {
        cout << x << endl;
    }

    return 0;
}