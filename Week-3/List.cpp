#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1{1, 2, 3, 4, 5};

    for (int i : l1)
    {
        cout << i << " ";
    }

    return 0;
}