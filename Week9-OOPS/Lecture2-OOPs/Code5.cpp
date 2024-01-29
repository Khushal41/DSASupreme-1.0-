#include <iostream>
#include <string.h>
using namespace std;
// Inheritance Example :-
// 1 -> Multiple Inheritance :-
// Parent Class :-
class A
{
public:
    int physics;
};
// child Class :-
class B
{
public:
    int chemistry;
};
class C : public A, public B
{
public:
    int maths;
}; 
int main() 
{
    C obj;
    cout << obj.physics << " " << obj.chemistry << " " obj.maths << endl;

    return 0;
}
