#include <iostream>
// #include <string.h>
using namespace std;
// Inheritance Example :-
// Inisde animal class 
class Animal
{
    // private:
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
// Inside Dog Class 
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
    // Inside And Outside Animal class
    Dog d1;
    // d1.eat();
    // cout << d1.age; // access outside
    d1.print(); // acsess inside

    return 0;
}
