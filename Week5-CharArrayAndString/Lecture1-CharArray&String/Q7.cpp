// Lower case to upper case
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
void covertIntoUpperCase(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}
int main()
{
    char arr[100] = "babbar";
    covertIntoUpperCase(arr); // fuction call
    cout << arr << endl;
}