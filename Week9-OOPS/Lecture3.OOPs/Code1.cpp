// Polymorphism :-
// 2-> Runtime Polymorphisum :-
#include <iostream>
using namespace std;
// Parent Class :-
class Animal
{
public:
    // constrictor call
    Animal()
    {
        cout << "i am inside Animal constructor" << endl;
    }

    void speak()
    {
        cout << "Speaking " << endl;
    }
};

// Child Class :-
class Dog : public Animal
{
public:
    Dog()
    {
        cout << "i am inside Dog constructor" << endl;
    }

    // Function override
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    // Animal a;
    // a.speak(); // speaking

    // Dog a; // odject a
    // a.speak(); // barking

    // Dynamic Object Creation :-
    // Animal* a = new Animal();
    // a->speak(); // speaking [Speak Method Call]

    // Dog* a = new Dog();
    // a->speak(); // barking[Dog speack method call]

    // UpCasting :-
    // In upkastiting we write "Vertual" key word in parent function
    // Animal *a = new Dog();
    // a->speak(); // It depend on run yime

    // DownCasting :-
    // Dog *b = (Dog *)new Animal();
    // b->speak(); // barking

    // Animal* a = new Animal(); // -> call only animal constructor

    // Dog *a = new Dog(); // Fisrt call animal and then dog constructor

    // Animal *a = new Dog(); // Fisrt call animal and then dog constructor

    // Dog *a = (Dog *)new Animal(); // Animal constructor call

    // Dog a;

    return 0;
}