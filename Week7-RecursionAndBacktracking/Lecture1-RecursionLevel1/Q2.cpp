// WAP to print counting reverse 
#include <iostream>
using namespace std;
void printCounting(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }
    // Proccing
    cout << n << endl;
    // Recursive relation
    printCounting(n - 1);
}
int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;

    printCounting(n);
    cout << endl;

    return 0;
}