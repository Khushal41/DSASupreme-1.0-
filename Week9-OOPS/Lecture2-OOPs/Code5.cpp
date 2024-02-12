// Inheritance Example :-
// 1 -> Multiple Inheritance :-
#include <iostream>
#include <string.h>
using namespace std;
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
// Class a & b inherit by calss c 
{
public:
    int math;
}; 
int main() 
{
    C obj;
    cout << obj.physics << " " << obj.chemistry << " " << obj.math << endl;

    return 0;
}
