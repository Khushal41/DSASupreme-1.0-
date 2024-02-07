// Abstract Class :-
#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
class Bird // It become interface for outside world
{
public:
    // Called pure Vertual Function
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherit this class has to implement pure virtual function

};

class sparrow : public Bird
{
public:
    void eat()
    {
        std::cout << "Sparrow is eating\n";
    }
    void fly()
    {
        std::cout << "Sparrow is flying\n";
    }
};
 
class egale : public Bird
{
public:
    void eat()
    {
        std::cout << "Egale is eating\n";
    }
    void fly()
    {
        std::cout << "Egale is flying\n";
    }
};
#endif // BIRD_H