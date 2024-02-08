#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base ctor\n";
    }
    ~Base()
    {
        cout << "Base dtor\n";
    }
};

class Derived : public Base // parent
{
public:
    Derived()
    {
        cout << "Derived ctor\n";
    }
    ~Derived()
    {
        cout << "Derived dtor\n";
    }
};
int main()
{
    Base *b = new Derived();
    delete b;

    return 0;
}