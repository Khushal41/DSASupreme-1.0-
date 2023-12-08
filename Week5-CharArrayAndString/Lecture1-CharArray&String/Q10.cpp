#include <iostream>
#include <string>
using namespace std;
bool compairString(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        int j = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[j])
            {
                return false;
            }
            j++;
        }
    }
    return true;
}
int main()
{
    string a = "Love";
    string b = "pove";

    compairString(arr);
    // cout << is_arr<< endl;

// ==============================================

    // string a = "Love";
    // string b = "love";
    // if (a.compare(b) == 0)
    // {
    //     cout << "a and b are exactlly same string" << endl;
    // }
    // else
    // {
    //     cout << "a and b are not same" << endl;
    // }

    return 0;
}