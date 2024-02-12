// Polymorphisum :-
// 2 -> Operator Overloading :-
#include <iostream>
using namespace std;
// Parent Class :-
class Parameter
{
public:
    int val;
    // Function call for "+" addition
    //  a[current-ohj]+[fuction call]b[Input paramter pass] below line
    void operator+(Parameter obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value2 * value1) << endl;
    }
};

int main()
{
    Parameter obj1, obj2; // object
    obj1.val = 7;
    obj2.val = 2;
    // This should be print the different between them
    obj1 + obj2;

    return 0;
}
