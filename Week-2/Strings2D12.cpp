#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1 = "Hello";

    // Return the length of String
    cout << s1.length() << endl;

    // Clear the string
    s1.clear();
    cout << s1.length() << endl;

    // Compare with other strings
    string s2 = "World";
    // Here it will return > 0 it s1 > s2
    // If s1 == s2 than return 0
    // If s1 < s2 than retutn <0
    cout << s1.compare(s2) << endl;

    // Print random character from s1
    cout << s1[3] << endl;

    return 0;
}