#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Creation queue :-
    queue<int> q;
    // Data insert :-
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(30);

    // size :-
    cout << "Size of queue :- " << q.size() << endl;
    // removal :-
    q.pop();
    // size :-
    cout << "Size of queue :- " << q.size() << endl;
    if (q.empty())
    {
        cout << "q is empty" << endl;
    }
    else
    {
        cout << "q is not empty" << endl;
    }
    // Chea k front :-
    cout << "Front element is :- " << q.front() << endl;

    return 0;
}