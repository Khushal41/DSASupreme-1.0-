#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // char name[100];
    // cin >> name;
    // cout << "Your name : " << name << endl;

    char name[100];
    cin.getline(name, 30);
    cout << "Your name : " << name << endl;
}