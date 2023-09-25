// upper case to lower case
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
void covertIntoLowerCase(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'A' + 'a';
    }
}
int main()
{
    char arr[100] = "BABBAR";
    covertIntoLowerCase(arr);
    cout << arr << endl;
}