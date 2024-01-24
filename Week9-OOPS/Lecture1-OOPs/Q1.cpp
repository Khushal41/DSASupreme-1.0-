#include <iostream>
using namespace std;
class Animal
{
private:
    int weight;

public:
    // state or properties
    int age;
    string name; //[type];

    // Default Constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "Constructor call " << endl;
    }

    // Parameterised Constructor
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

    // // Copy Constructor
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
};
int main()
{
    // Object creation

    // Static
    // Animal ramesh;
    // ramesh.age = 13;
    // ramesh.name = "Lion";
    // cout << "Age of Ramesh is " << ramesh.age << endl;
    // cout << "Name of Ramesh is " << ramesh.name << endl;

    // ramesh.eat();
    // ramesh.sleep();

    // // Private memeber ko access kar na  setter and getter
    // ramesh.setWeight(101);
    // cout << "Weight" << ramesh.getWeight() << endl;

    // // Dynamic Memeory
    // Animal *suresh = new Animal;

    // // Addess
    // (*suresh).age = 14;
    // (*suresh).name = "Lion";

    // // Alternate way - Dynamic memory
    // suresh->age = 16;
    // suresh->name = "Elvish";

    // suresh->eat();
    // suresh->sleep();

    // constructor call :-
    // Animal a();
    // Animal *b = new Animal();

    // Parameterised Constructor :-
    // Animal a(11);
    // Animal *b = new Animal(110);

    // Animal a(11);
    // Animal *b = new Animal(110, 120,"Babber");

    // // Copy Constructor
    // Animal c = a;

    Animal a;
    a.age = 20;
    a.setWeight(10);
    a.name = "babber";

    Animal b = a;
    cout << "a -> ";
    a.print();
    cout << "b -> ";
    b.print();

    a.name[0] = 's';
    cout << "a -> ";
    a.print();

    cout << "b -> ";
    b.print();

    return 0;
}