// Write fuction to add 2 number
#include <iostream>
using namespace std;
// Function declatration 
int add(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int a;
    cout << "Enter a :" << endl;
    cin >> a;
    int b;
    cout << "Enter b :" << endl;
    cin >> b;

    int sum = add(a, b);

    cout << "Addition result is : " << sum << endl;
}