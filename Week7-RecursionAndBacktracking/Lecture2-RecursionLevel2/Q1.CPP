// WAP to find climb stairs
#include <iostream>
using namespace std;
int climbStairs(int n)
{
    // Base Case :- Ruk na kab he
    if (n == 0 || n == 1)
        return 1;
    // Recursive Relation
    return climbStairs(n - 1) + climbStairs(n - 2);
}
int main() 
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;

    int ans = climbStairs(n);
    cout << "Answer : " << ans << endl;

    return 0;
}