#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialse the vector
    /*
    vector<int> a;
    vector<int> b(5, 12);
    vector<int> c{10, 11, 12, 123};
    vector<int> d(b.begin(), b.end());
    */
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
    cout << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;
    return 0;
}