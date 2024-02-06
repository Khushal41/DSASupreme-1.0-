// MACROSN Keyword
#include <iostream>
using namespace std;

#define PI 3.14

float circleArea(float r)
{
    return PI * r * r;
}
float circlePerimeter(float r)
{
    return 2 * PI * r;
}

int main()
{
    cout << circleArea(65.3) << endl;
    cout << circlePerimeter(34.2) << endl;
    return 0;
}