#include <iostream>
using namespace std;
class abc
{
public:
    int x, y;
    void print() const
    {
        // this :- It is poiter belong to perticular object
        cout << this->x << " " << this->y << endl;
    }
};
int main()
{
    abc obj1 = {1, 2};
    abc obj2 = {4, 5};
    obj1.print();
    obj2.print();

    return 0;
}