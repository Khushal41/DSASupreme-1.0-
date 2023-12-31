#include <iostream>
#include <vector>
using namespace std;
// Pass By value
// bool checkKey(string str, int i, int n, char key)
// {
//     // base case
//     if (i >= n)
//     {
//         // key not found
//         return false;
//     }
//     // 1 case solve krdo
//     if (str[i] == key)
//     {
//         return true;
//     }

//     // baaki recursion sambhal lega
//     return(str, i + 1, n, key);
// }

// Pass By reference 
void checkKey(string &str, int i, int &n, char &key, int &count)
{
    // base case
    if (i >= n)
    {
        // key not found
        return;
    }
    // 1 case solve krdo
    if (str[i] == key)
    {
        /// store in vector
        // ans.push_back(i);
        count++;
    }

    // baaki recursion sambhal lega
    checkKey(str, i + 1, n, key, count);
}

int main()
{
    string str = "lovebabbar";
    int n = str.length();

    char key = 'l';

    int i = 0;
    // vector<int> ans;
    int count = 0;

    // checkKey(str, i, n, key);
    checkKey(str, i, n, key, count); 
    cout << count << endl;
    // cout << "printing ans" << endl;
    // for(auto val: ans) {
    //         cout << val << " " ;
    // }
    // cout << endl;

    return 0;
} 