#include <iostream>
// #include <string.h>
using namespace std;
// Inheritance Example :-
// 2 -> Multilevel Inheritance :-
// Parent Class :-
class Fruit
{
public:
    string name;
};
// Child Class :-
class Mango : public Fruit
{
public:
    int weight;
};
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
