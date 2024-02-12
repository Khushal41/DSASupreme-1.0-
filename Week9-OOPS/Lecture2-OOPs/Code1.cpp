#include <iostream>
using namespace std;
// Encapsulation Example :-
class Animal
{
private:
    // Data :-
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }
    // To acces private data :- get & set
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