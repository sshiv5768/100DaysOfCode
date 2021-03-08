#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l1{1, 2, 3, 4, 5};
    list<string> l2{"Apple", "Banana"};

    l2.push_back("Mango");

    for (string i : l2)
    {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the list
    l2.reverse();
    for (string i : l2)
    {
        cout << i << " ";
    }

    cout << endl;
    // Inserting elements to the list
    l1.insert(l1.begin(), 1);
    for (int i : l1)
    {
        cout << i << " ";
    }

    return 0;
}