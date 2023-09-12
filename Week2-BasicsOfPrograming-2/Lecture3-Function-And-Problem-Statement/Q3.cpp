// Find max of 3 num

#include <iostream>
using namespace std;
int findMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter a , b and c : " << endl;
    cin >> a >> b >> c;

    int maximumNumber = findMax(a, b, c);
    cout << "Maximum num is : " << maximumNumber << endl;
}