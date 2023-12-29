// WAP to find facorial
#include <iostream>
using namespace std; 
int factorial(int n)
{
    cout << "Function call for n : " << n << endl;
    int ans = n * factorial(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "Answer : " << ans << endl;

    return 0;
}