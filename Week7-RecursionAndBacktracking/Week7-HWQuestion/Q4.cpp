// Palindrome cheak RE
#include <iostream>
// #include <string>
using namespace std;
bool isPalindrome(string &s, int start, int end)
{
    // Base case
    if (start >= end)
        return true;

    // 1 case solve
    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}
int mainn()
{
    string s;
    cin >> s;
    cout << isPalindrome(s, 0, s.size() - 1) << endl;
}