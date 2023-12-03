#include <iostream>
using namespace std;
void util(int *p)
{
    // p = p + 1; // Pass By Value -> change in copy
    *p = *p + 1; // Pass By Reference   
}
int main()
{
    int a = 5;

    int *p = &a;

    cout << "before" << endl;
    cout << a << endl; //5
    cout << p << endl; // add
    cout << *p << endl; // 5

    util(p); // Function 

    cout << endl << "after" << endl;
    cout << a << endl; // 5
    cout << p << endl; //  a value + 4 bit = ans
    cout << *p << endl; // garbage value [5]

    return 0;
}