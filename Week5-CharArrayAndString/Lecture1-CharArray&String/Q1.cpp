#include <iostream>
using namespace std;
int main()
{
    // Take input char method

    // char name[100];
    // cout << "Enter your name : " << endl;
    // cin >> name;
    // cout << "Apka naam : " << name << " hai " << endl;

    // char ch[100];
    // ch[0] = 'a';
    // ch[1] = 'b';
    // cin >> ch[2];
    // cout << ch[0] << ch[1] << ch[2] << endl;

    char name[100];
    cin >> name;
    for (int i = 0; i < 7; i++)
    {
        cout << " Index " << i << " Value " << name[i] << endl;
    }
    // Cheak null value [string termination string show]
    int value = (int)name[6];
    cout << "Value is : " << value << endl;

    return 0;
}