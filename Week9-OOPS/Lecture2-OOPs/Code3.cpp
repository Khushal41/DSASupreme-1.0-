#include <iostream>
// #include <string.h>
using namespace std;
// Inheritance Example :-
// 1 -> Single Inheritance :-
// Parent Class :-
class Car
{
public:
    string ans;
    int weight;
    int age;

    void speedUp()
    {
        cout << "Speed Up" << endl;
    }
    void breakMaro()
    {
        cout << "Break Mardi" << endl;
    }
};

// Child Class :-
class Scorpio : public Car
{
    // Scorpio is a car 
    // Dog is a animal
    // Male is human 
    // Scorpio class inheriet car class
};
int main()
{
    Scorpio babbarWali;
    babbarWali.speedUp();

    return 0;
}
