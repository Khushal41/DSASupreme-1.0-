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

    ~Stack()
    {
        delete[] arr;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow, can't delete element" << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "There are no elements in the stack" << endl;
            return -1; // or handle the error differently based on your needs
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;
    cout << "Size of stack: " << s.getSize() << endl;

    return 0;
}
