// WAP to find length of string

#include <iostream>
#include <string.h>
using namespace std;
// Finding lenggth using fuction
int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0') // '\0' that show null char
    {
        length++; // 0 1 2 3 4 5 6-> 6 null char
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cin >> name;

    // Finding lenggth using fuction
    // cout << "Length is : " << getLength(name) << endl;

    // Finding lenggth using pre define fuction
    // strlen -> it is pre define function to find length
    cout << "Length is : " << strlen(name) << endl;

    return 0;
}