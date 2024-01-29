// Polymorphisum :-
// 1 -> Function Overloading :-
#include <iostream>
using namespace std;
// Parent Class :-
class Maths
{
public:
    int sum(int a, int b)
    {
        cout << "I am calling First Signature" << endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout << "I am calling Second Signature" << endl;
        return a + b + c;
    }
    // Below code called Function Overloading
    int sum(int a, float b)
    {
        cout << "I am calling Third Signature" << endl;
        return a + b + 100;
    }
};
int main()
{
    Maths obj;
    cout << obj.sum(2, 1.9);
    return 0;
}
