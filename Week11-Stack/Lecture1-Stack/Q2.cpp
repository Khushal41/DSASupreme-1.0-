#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    // Function
    void push(int data)
    {
        if (size - top > 1)
        {
            // space avalible
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not avalible
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            // stack empty
            cout << "Stack underflow ,can't delete element" << endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
    }

    void getTop()
    {
        if (top == -1)
        {
            cout << "There is not element in stack" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    // Return number of valid element present in stack
    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack s(10);
    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << "Size of stack" << s.getSize() << endl;

    return 0;
}