#include <iostream>
using namespace std;
class Box
{
    int width;
    // char
    // 2 :- constructor can made private
    Box(int _w) : width(_w){};

public:
    // 1:
    // Box(int _w) : width(_w){};

    int getWidth() const
    {
        return width;
    }

    void setWidth(int _val)
    {
        width = _val;
    }

    friend class BoxFactory;
};

class BoxFactory // How mush box is Initialize
{
    int count;

public:
    Box getBox(int _w)
    {
        ++count;
        return Box(_w);
    }
};
int main()
{
    BoxFactory bfact;
    Box b = bfact.getBox(5);
    cout << b.getWidth() << endl;

    // Box b(5);
    // cout << b.getWidth() << endl;
    return 0;
}