#include <iostream>
using namespace std;
// Inheritance Example :-
// Code called Inisde animal class  :-
class Animal
{
public:
    int age;
    // int weight;

    // public:
    //     void eat()
    //     {
    //         cout << "Eating" << endl;
    //     }
};
// Mode of inheritance
// Code called Inside Dog Class :
class Dog : private Animal
{
public:
    void print()
    {
        cout << this->age;
    }
};

int main()
{
    // Below code called Inside And Outside Animal class :-
    Dog d1;
    // d1.eat(); // class Dog : public Animal

    // cout << d1.age; // access outside [public member]

    // d1.print(); // acsess inside [private memeber]

    return 0;
}
