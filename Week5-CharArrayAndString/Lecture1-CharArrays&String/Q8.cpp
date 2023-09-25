// What is string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // OR
    // getline(cin, str);
    cout << str;
    cout << "Length is :" << str.length() << endl;
    cout << "isEmpty; :" << str.empty() << endl;

    return 0;
}