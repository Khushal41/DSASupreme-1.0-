// Inheritance Example : -
// 2 -> Multilevel Inheritance :-

#include <iostream>
using namespace std;
// 1-> Parent Class :-
class Fruit
{
public:
    string name;
};

// 2-> Child Class :-
class Mango : public Fruit
{
public:
    int weight;
};

// 3-> Ground Child :-
class Alphanso : public Mango
{
public:
    int sugerLevel;
};

int main()
{
    Alphanso a;
    cout << a.name << " " << a.weight << " " << a.sugerLevel << endl;

    return 0;
}
