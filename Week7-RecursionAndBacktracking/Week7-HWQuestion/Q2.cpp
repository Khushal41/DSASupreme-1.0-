// WAP to print reverse a string
#include <iostream>
#include <string>
using namespace std;
void reverse(string &s, int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }
    // 1 case solve
    swap(s[start], s[end]);
    // Baki recursion sambhallega
    reverse(s, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    reverse(s, 0, s.size() - 1);
    cout << s << endl;
    return 0;
}