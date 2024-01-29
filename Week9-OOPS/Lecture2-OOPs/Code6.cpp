#include <iostream>
// #include <string.h>
using namespace std;
// Inheritance Example :-
// 4 -> Hierachical Inheritance :-
// Parent Class :-
class Car
{
public:
    int age; 
    int weight;
    string name;
    void speedUp()
    {
        cout << "Speed Up" << endl;
    }
};
// Child Class :-
class Scorpio : public Car
{
};
class Fortuner : public Car
{
};

int main()
{
    Scorpio S11;
    S11.speedUp();

    Fortuner f11;
    f11.speedUp();

    return 0;
}
