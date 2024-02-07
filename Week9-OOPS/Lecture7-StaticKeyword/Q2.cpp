// #include <iostream>
// using namespace std;
// class abc
// {
// public:
//     static int x, y;

//     void print() const
//     {
//         // this :- It is poiter belong to perticular object
//         cout << x << " " << y << endl;
//     }
// };

// int abc::x;
// int abc::y;

// int main()
// {
//     abc obj1;
//     obj1.x = 1;
//     obj1.y = 2;
//     obj1.print(); // 1 2 print

//     abc obj2;
//     obj2.x = 10;
//     obj2.y = 20;
//     obj1.print(); // 10 20 print
//     obj2.print(); // 10 20 print

//     return 0;
// }

#include <iostream>
using namespace std;
class abc
{
public:
    int x, y;

    abc() : x(0), y(0) {}

    static void print()
    {
        printf("I am in static %s\n", __FUNCTION__);
    }
};

int main()
{
    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    abc::print();

    return 0;
}