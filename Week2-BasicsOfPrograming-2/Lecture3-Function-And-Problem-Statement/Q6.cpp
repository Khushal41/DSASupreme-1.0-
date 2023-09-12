// WAP of sum of even number upto n
#include <iostream>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int getEvenSum(int n)
{
    cout << "inside getEveSum Fiunction" << endl;
    cout << "Vlaue of n is " << n << endl;

    int sum = 0;
    cout << "Initial value of sum is " << sum << endl;
    for (int i = 2; i <= n; i = i + 2)
    {
        cout << "for value of i: " << i << endl;
        sum = sum + i;
        cout << "sum now become: " << sum << endl;
    }
    cout << "returning sum = " << sum << endl;
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    cout << "Calling getEvenSum function " << endl;
    int ans = getEvenSum(n);
    cout << "Ebven sum is  " << ans << endl;

    return 0;
}