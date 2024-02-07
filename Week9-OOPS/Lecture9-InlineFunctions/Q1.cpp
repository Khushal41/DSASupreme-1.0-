#include <iostream>
using namespace std;
// Inline fuction call in c++
inline void numShow(int num)
{
    cout << num << endl;
}
int main()
{
    // Called function calling "OverHead" :-
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);
    numShow(10);

    // Inline fuction call in c++
    // cout << 10 << endl;
    // cout << 10 << endl;
    // cout << 10 << endl;
    // cout << 10 << endl;
    // cout << 10 << endl;
    return 0;
}