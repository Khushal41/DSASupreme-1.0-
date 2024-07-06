// Max Heap
#include <iostream>
#include <queue>
using namespace std;

int main()
{
        // max-heap
        priority_queue<int> pq;
        pq.push(3);
        pq.push(6);
        pq.push(9);
        pq.push(4);
        pq.push(8);

        cout << "top element: " << pq.top() << endl; // 9
        pq.pop();
        cout << "top element: " << pq.top() << endl; // 8
        pq.pop();
        cout << "top element: " << pq.top() << endl; // 6
        pq.pop();
        cout << "top element: " << pq.top() << endl; // 4
        pq.pop();
        cout << "top element: " << pq.top() << endl; // 3
        pq.pop();
        cout << "Size: " << pq.size() << endl; // 0
        if (pq.empty())
        {
                cout << "Max heap is empty" << endl;
        }
        else
        {
                cout << "Max heap is not empty" << endl;
        }
        return 0;
}