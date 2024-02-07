#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fun()
{
    string s = "codehelp";
    sort(s.begin(), s.end());
    for (auto i : s)
    {
        cout << i << endl;
    }
}
int main()
{
    vector<int> v = {3, 4, 1, 2};
    sort(v.begin(), v.end()); // Called Abstraction [Sorting method hide here ]
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}