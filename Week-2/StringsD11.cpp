#include <iostream>
#include <string>

using namespace std;

int main()
{
    // String Init
    string s1 = "Hello, World!";
    string s2(s1);
    string s3;
    s3 = "Day-11 of #100DaysofCode";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    if (s3.empty())
    {
        cout << "S3 is empty!";
    }

    //Append characters
    s3.append(" This is");
    cout << s3 << endl;

    return 0;
}