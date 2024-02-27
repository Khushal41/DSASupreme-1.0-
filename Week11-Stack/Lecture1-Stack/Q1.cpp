#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // Stack creation :-
    // stack<int> st;

    // // Insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // // Remove
    // st.pop();

    // // Cheak element on top
    // cout << "Element ont top is:" << st.top() << endl;

    // // Cheak size
    // cout << "Size of stack is:" << st.size() << endl;

    // // Cheak stack empty or not
    // if (st.empty())
    // {
    //     cout << "Stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "Stack is not empty" << endl;
    // }

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // return 0;
}