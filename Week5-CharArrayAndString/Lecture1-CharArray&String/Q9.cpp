// What is string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string create 
    string str;

    // Input 
    // cin >> str;

    // OR

    // Input 
    getline(cin, str); // space read using getline fuction

    // output 
    cout << str;
// =============================================
    // cout << "Length is :" << str.length() << endl;
    // cout << "isEmpty :" << str.empty() << endl;
    
    // str.push_back('A');
    // cout << str << endl;
    // str.pop_back();
// ================================================
    // Note:- string ke andar sustring nikalni hogi tab substr function use hoga 
    // cout << str << endl;
    // cout << str.substr(0, 6) << endl; //

    return 0;
}