#include <iostream>
using namespace std;
// Encapsulation Example :-
class Animal
{
private:
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
int main()
{
    cout << "Hello world";
    return 0;
}