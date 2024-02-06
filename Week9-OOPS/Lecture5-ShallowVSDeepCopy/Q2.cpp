#include <iostream>
using namespace std;
class abc
{
public:
    int x;
    int *y;

    // Heap memeory allocate
    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // Default dupm copy constructor : It does "SHALLOW COPY"
    abc(const abc &obj)
    {
        x = obj.x;
        y = obj.y;
    } 

    // OUR SMART "Deep copy" :- 
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = new int(*obj.y); // a ki value y ke naye location par dal di
    // }

    void print() const
    {
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x, y, *y);
    }

    ~abc()
    {
        delete y;
    }
};

int main()
{
    abc *a = new abc(1, 2);
    abc b = *a;
    delete a;
    b.print();

    return 0;
}