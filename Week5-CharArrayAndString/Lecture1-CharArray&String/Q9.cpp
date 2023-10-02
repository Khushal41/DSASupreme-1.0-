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
    cout << "isEmpty :" << str.empty() << endl;
    
    str.push_back('A');
    cout << str << endl;
    str.pop_back();

    // NOte:- string ke andar sustring nikalni hogi tab substr function use hoga 
    cout << str << endl;
    cout << str.substr(0, 6) << endl; //

    return 0;
}