// WAP to find facorial
#include <iostream>
using namespace std;
int factorial(int n)
{
    // Base Case :- Ruk na kab he
    if (n == 1)
    {
        return 1;
    }
    // Recursive Relation
    int chotiProblemAns = factorial(n - 1);
    int badiProblemAns = n * chotiProblemAns;

    return badiProblemAns;
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