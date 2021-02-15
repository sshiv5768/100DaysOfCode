#include <iostream>

using namespace std;

// Passing the value by reference variable
void update(int *aptr)
{
    *aptr = *aptr + 1;
    cout << "Inside the function: " << *aptr << endl;
}
int main()
{
    int a = 10;
    update(&a);
    cout << "Inside the main: " << a;
    return 0;
}
