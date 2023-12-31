// Reverse String
#include <iostream>
#include <string.h>
using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0') // '\0' NULL
    {
        length++;
        i++;
    }
    return length;
}
void reverseCharArray(char name[])
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while (i <= j)
    // stop condition i Greater than j
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main()
{
    char name[100];
    cin >> name;

    cout << "Length is : " << getLength(name) << endl;

    // cout << "Length is : " << strlen(name) << endl;

    cout << " Initially : " << name << endl;

    reverseCharArray(name);

    cout << " Reverse : " << name << endl;
}