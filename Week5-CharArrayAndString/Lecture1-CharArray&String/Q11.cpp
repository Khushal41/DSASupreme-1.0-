#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string sentence = "Hello ji kasi ho ";
    // string target = "Hello";

    // // cout <<sentence.find(target);

    // if (sentence.find(target) == string::npos)
    // {
    //     cout << "Not Found " << endl;
    // }

    // string str = "This is my first string";
    // string word = "babber";
    // str.replace(0, 5, word);
    // cout << str << endl;

    string str = "abcdefghijk";
    str.erase(0, 4);
    cout << str;
    return 0;
}