#include <iostream>
using namespace std;
class abc
{
public:
    int x;
    int *y;

    // Heap memeory allocate
    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // Default dupm copy constructor : It does SHALLOW COPY
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

    // OUR SMART Deep copy
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = new int(*obj.y); // a ki value y ke naye location par dal di
    // }

    void print() const
    {
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x, y, *y);
    }

    ~abc() {
        delete y;
    }
};

int main()
{
    abc a(1, 3);
    cout << "Printing a\n";
    a.print();

    abc b = a; // b equal to a, Call hota he bydefault constructor
    cout << "Printing b\n";
    b.print();

    *b.y = 20; // b ka "y" equal to 20
    cout << "Printing b\n";
    b.print();

    cout << "Printing a\n";
    a.print(); // a ka "y" bhi equal to 20
    return 0;
}