// WAP to find last occurance of string
// Method 1 :-
#include <iostream>
using namespace std;
void lastOccu(string &s, char x, int i, int &ans)
{
    // Base case
    if (i >= s.size())
    {
        return;
    }
    // 1 case solve
    if (s[i] == x)
    {
        ans = i;
    }
    // Recusion sambhal lega
    lastOccu(s, x, i + 1, ans);
}
int main()
{
    string s;
    cin >> s;
    char x;
    cin >> x;
    int ans = -1;
    // int i = 0;
    lastOccu(s, x, 0, ans);
    cout << ans << endl;
}

//  Method 2 ;- Right to Left
// #include <iostream>
// using namespace std;
// void lastOccuRTL(string &s, char x, int i, int &ans)
// {
//     // Base case
//     if (i < 0)
//     {
//         return;
//     }
//     // 1 case solve
//     if (s[i] == x)
//     {
//         ans = i;
//         return;
//     }
//     // Recusion sambhal lega
//     lastOccuRTL(s, x, i - 1, ans);
// }
// int main()
// {
//     string s;
//     cin >> s;
//     char x;
//     cin >> x;
//     int ans = -1;
//     // int i = 0;
//     lastOccuRTL(s, x, s.size() - 1, ans);
//     cout << ans << endl;
// }
