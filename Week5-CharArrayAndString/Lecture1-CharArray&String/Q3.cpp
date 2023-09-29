// WAP to find length of string

#include <iostream>
#include <string.h>
using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cin >> name;

    cout << "Length is : " << getLength(name) << endl;

    // strlen it is pre define function to find length
    cout << "Length is : " << strlen(name) << endl;

    return 0;
}