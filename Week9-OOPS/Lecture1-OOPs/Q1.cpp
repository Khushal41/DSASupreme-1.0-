#include <iostream>
#include <string.h>
using namespace std;
// How to create class ?
class Animal
{
private:
    int weight;

public:
    // state or properties
    int age;
    string name; //[type];

    // Default Constructor :-
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "Constructor call " << endl;
    }

    // Parameterised Constructor:- We have input paramitarised constructor

    // Animal(int age)
    // {
    //     this->age = age;
    //     cout << "Parameterised constructor call " << endl;
    // }

    // Animal(int age, int weight, string name)
    // {
    //     this->age = age;
    //     this->weight = weight;
    //     this->weight = weight;
    //     cout << "Parameterised constructor 2 call " << endl;
    // }

    // Copy Constructor :-
    // Animal(Animal &obj)
    // {
    //     this->age = obj.age;
    //     this->weight = obj.weight;
    //     this->name = obj.name;
    //     cout << "I am inside copy contructor " << endl;
    // }

    // Behaviour / Function
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "Slipper" << endl;
    }

    // Private memeber ko access kar na  setter and getter
    int getWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->name << endl;
    }

    // Distructor :-
    ~Animal()
    {
        cout << "I am inside destructor" << endl;
    }
}; // Termination
int main()
{
    // Object creation :-

    // 1-> Static Memory Location :-
    // Animal ramesh;
    // ramesh.age = 13;
    // ramesh.name = "Lion";

    // Note :- Agar me kisi "object" ki "property" ko accsess karna chahata hu to me "Dot operator" ka use karunga
    // ex :-
    // cout << "Age of Ramesh is " << ramesh.age << endl;
    // cout << "Name of Ramesh is " << ramesh.name << endl;

    // Fuction call :-
    // ramesh.eat();
    // ramesh.sleep();

    // Note:- Private memeber ko access kar na  "setter" and "getter"
    //  ramesh.setWeight(101);
    //  cout << "Weight" << ramesh.getWeight() << endl;

    // Dynamic Memeory Allocation :-
    // Animal *suresh = new Animal;

    // // *Addess[actual object] ka age ,type
    // (*suresh).age = 14;
    // (*suresh).name = "Lion";

    // Alternate way - Dynamic memory
    // suresh->age = 16;
    // suresh->name = "Elvish";

    // Function call :-
    // suresh->eat();
    // suresh->sleep();

    // constructor call :-
    // Animal a();
    // Animal *b = new Animal();

    // Parameterised Constructor :- we have input paramerter
    // Animal a(11);
    // Animal *b = new Animal(110);

    // Animal a(11);
    // Animal *b = new Animal(110, 120,"Babber");

    // Copy Constructor :-
    // Animal c = a;

    // Animal a;
    // a.age = 20;
    // a.setWeight(10);
    // a.name = "babber";

    // Animal b = a;
    // cout << "a -> ";
    // a.print();
    // cout << "b -> ";
    // b.print();

    // a.name[0] = 's';
    // cout << "a -> ";
    // a.print();

    // cout << "b -> ";
    // b.print();

    // Distructor :-
    cout << "a object creation" << endl;
    Animal a;
    a.age = 5;

    cout << "b object creation" << endl;
    Animal *b = new Animal();
    b->age = 13;
    // For this we need to call maniually "Distructor" using "delete"
    delete b;

    return 0;
}